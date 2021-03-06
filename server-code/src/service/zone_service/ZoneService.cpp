#include "ZoneService.h"

#include <functional>

#include "AchievementType.h"
#include "Actor.h"
#include "ActorManager.h"
#include "BulletType.h"
#include "DataCount.h"
#include "EventManager.h"
#include "GMManager.h"
#include "GameEventDef.h"
#include "IService.h"
#include "IStatus.h"
#include "ItemAddition.h"
#include "ItemFormula.h"
#include "ItemType.h"
#include "ItemUpgrade.h"
#include "LoadingThread.h"
#include "MapManager.h"
#include "MemoryHelp.h"
#include "MessagePort.h"
#include "MessageRoute.h"
#include "MonitorMgr.h"
#include "Monster.h"
#include "MonsterType.h"
#include "MysqlConnection.h"
#include "NetMSGProcess.h"
#include "NetSocket.h"
#include "NetworkMessage.h"
#include "NpcType.h"
#include "PetType.h"
#include "Phase.h"
#include "Player.h"
#include "Scene.h"
#include "SceneManager.h"
#include "ScriptManager.h"
#include "SettingMap.h"
#include "SkillType.h"
#include "SuitEquip.h"
#include "SystemVars.h"
#include "TaskType.h"
#include "TeamInfoManager.h"
#include "UserAttr.h"
#include "globaldb.h"
#include "MsgZoneProcess.h"
#include "msg/ts_cmd.pb.h"
#include "msg/zone_service.pb.h"
#include "server_msg/server_side.pb.h"


static thread_local CZoneService* tls_pService = nullptr;
CZoneService*                     ZoneService()
{
    return tls_pService;
}

void SetZoneServicePtr(CZoneService* pZone)
{
    tls_pService = pZone;
}

extern "C" __attribute__((visibility("default"))) IService* ServiceCreate(uint16_t idWorld, uint16_t idService)
{
    return CZoneService::CreateNew(ServerPort{idWorld, idService});
}

//////////////////////////////////////////////////////////////////////////
CZoneService::CZoneService() {}

CZoneService::~CZoneService() {}

void CZoneService::Release()
{

    Destory();
    delete this;
}

void CZoneService::Destory()
{
    __ENTER_FUNCTION

    tls_pService = this;
    scope_guards scope_exit;
    scope_exit += []() {
        tls_pService = nullptr;
    };

    StopLogicThread();
    if(m_pLoadingThread)
        m_pLoadingThread->Destory();
    m_pLoadingThread.reset();
    if(GetSceneManager())
        GetSceneManager()->Destory();
    m_pSceneManager.reset();
    if(GetActorManager())
        GetActorManager()->Destory();
    m_pActorManager.reset();

    for(auto& [k, refQueue]: m_MessagePoolBySocket)
    {
        for(auto& msg: refQueue)
        {
            SAFE_DELETE(msg);
        }
    }
    m_MessagePoolBySocket.clear();
    DestoryServiceCommon();
    LOGMESSAGE("{} Close", GetServiceName());

    __LEAVE_FUNCTION
}

bool CZoneService::Init(const ServerPort& nServerPort)
{
    __ENTER_FUNCTION

    //各种初始化
    tls_pService = this;
    scope_guards scope_exit;
    scope_exit += []() {
        tls_pService = nullptr;
    };
    CServiceCommon::Init(nServerPort);
    auto oldNdc = BaseCode::SetNdc(GetServiceName());
    scope_exit += [oldNdc]() {
        BaseCode::SetNdc(oldNdc);
    };

    m_MessagePoolBySocket.reserve(GUESS_MAX_PLAYER_COUNT);
    m_tLastDisplayTime.Startup(20);
    auto pGlobalDB = ConnectGlobalDB();
    CHECKF(pGlobalDB.get());
    if(IsSharedZone() == false)
    {
        _ConnectGameDB(GetWorldID(), pGlobalDB.get());
    }

    //配置读取
    DEFINE_CONFIG_LOAD(CStatusTypeSet);
    DEFINE_CONFIG_LOAD(CUserAttrSet);
    DEFINE_CONFIG_LOAD(CDataCountLimitSet);
    DEFINE_CONFIG_LOAD(CSkillTypeSet);
    DEFINE_CONFIG_LOAD(CMonsterTypeSet);
    DEFINE_CONFIG_LOAD(CBulletTypeSet);
    DEFINE_CONFIG_LOAD(CItemTypeSet);
    DEFINE_CONFIG_LOAD(CItemAdditionSet);
    DEFINE_CONFIG_LOAD(CItemFormulaDataSet);
    DEFINE_CONFIG_LOAD(CItemUpgradeDataSet);
    DEFINE_CONFIG_LOAD(CSuitEquipSet);
    DEFINE_CONFIG_LOAD(CTaskTypeSet);
    DEFINE_CONFIG_LOAD(CAchievementTypeSet);
    DEFINE_CONFIG_LOAD(CNpcTypeSet);

    m_pMapManager.reset(CMapManager::CreateNew(GetZoneID()));
    CHECKF(m_pMapManager.get());
    m_pActorManager.reset(CActorManager::CreateNew());
    CHECKF(m_pActorManager.get());
    m_pTeamInfoManager.reset(CTeamInfoManager::CreateNew());
    CHECKF(m_pTeamInfoManager.get());
    m_pGMManager.reset(CGMManager::CreateNew(pGlobalDB.get()));
    CHECKF(m_pGMManager.get());

    //脚本加载
    extern void export_to_lua(lua_State*, void*);
    m_pScriptManager.reset(
        CLUAScriptManager::CreateNew(std::string("ZoneScript") + std::to_string(GetZoneID()),
                                     &export_to_lua,
                                     (void*)this,
                                     "res/script/zone_service"));

    //必须要晚于MapManger和ActorManager
    m_pSceneManager.reset(CSceneManager::CreateNew(GetZoneID()));
    CHECKF(m_pSceneManager.get());

    ZoneMessageHandlerRegister();

    if(IsSharedZone() == false)
    {
        //共享型Zone是没有自己的数据的

        m_pSystemVarSet.reset(CSystemVarSet::CreateNew());
        CHECKF(m_pSystemVarSet.get());
    }

    m_pLoadingThread.reset(CLoadingThread::CreateNew(this));
    CHECKF(m_pLoadingThread.get());

    uint32_t FrameCount    = 20;
    uint32_t FrameInterval = 1000 / FrameCount;
    if(CreateService(FrameInterval) == false)
        return false;

    if(IsSharedZone())
    {
        // share_zone store globaldb
        m_pGlobalDB.reset(pGlobalDB.release());
    }

    return true;
    __LEAVE_FUNCTION
    return false;
}

void CZoneService::OnProcessMessage(CNetworkMessage* pNetworkMsg)
{
    __ENTER_FUNCTION

    //如果是玩家的消息
    if(pNetworkMsg->GetCmd() >= CLIENT_MSG_ID_BEGIN && pNetworkMsg->GetCmd() <= CLIENT_MSG_ID_END)
    {
        //玩家的消息，先丢到玩家身上去，等待后续处理
        PushMsgToMessagePool(pNetworkMsg->GetFrom(), pNetworkMsg);
    }
    else
    {
        //服务器间的消息，现在就可以处理了
        if(m_pNetMsgProcess->Process(pNetworkMsg) == false)
        {
            LOGERROR("CMD {} from {} to {} forward {} didn't have ProcessHandler", 
                pNetworkMsg->GetCmd(),
                pNetworkMsg->GetFrom(),
                pNetworkMsg->GetTo(),
                pNetworkMsg->GetForward());
            return;
        }
    }

    __LEAVE_FUNCTION
}

void CZoneService::CreateSocketMessagePool(const VirtualSocket& vs)
{
    m_MessagePoolBySocket[vs].clear();
}

void CZoneService::DelSocketMessagePool(const VirtualSocket& vs)
{
    m_MessagePoolBySocket.erase(vs);
}

void CZoneService::PushMsgToMessagePool(const VirtualSocket& vs, CNetworkMessage* pMsg)
{
    __ENTER_FUNCTION

    auto itFind = m_MessagePoolBySocket.find(vs);
    if(itFind == m_MessagePoolBySocket.end())
        return;

    auto& refList = itFind->second;

    CNetworkMessage* pStoreMsg = new CNetworkMessage(*pMsg);
    pStoreMsg->CopyBuffer();
    refList.push_back(pStoreMsg);

    constexpr int32_t MAX_USER_HOLD_MESSAGE = 500;
    if(refList.size() > MAX_USER_HOLD_MESSAGE)
    {
        // logerror
        LOGERROR("Player:{} Hold Too Many Message", vs);
        // kick user

        ServerMSG::SocketClose kick_msg;
        kick_msg.set_vs(vs);
        SendPortMsg(vs.GetServerPort(), kick_msg);
    }

    __LEAVE_FUNCTION
}

std::deque<CNetworkMessage*>& CZoneService::GetMessagePoolRef(const VirtualSocket& vs)
{
    return m_MessagePoolBySocket[vs];
}

bool CZoneService::PopMsgFromMessagePool(const VirtualSocket& vs, CNetworkMessage*& pMsg)
{
    __ENTER_FUNCTION
    auto itFind = m_MessagePoolBySocket.find(vs);
    if(itFind == m_MessagePoolBySocket.end())
        return false;

    auto& refList = itFind->second;
    if(refList.empty())
        return false;

    pMsg = refList.front();
    refList.pop_front();
    return true;
    __LEAVE_FUNCTION
    return false;
}

bool CZoneService::SendMsgToWorld(uint16_t idWorld, uint16_t nCmd, const google::protobuf::Message& msg) const
{
    auto server_port = ServerPort(idWorld, WORLD_SERVICE_ID);
    if(GetMessageRoute()->IsConnected(server_port) == true)
    {
        CNetworkMessage _msg(nCmd, msg, GetServerVirtualSocket(), ServerPort(idWorld, WORLD_SERVICE_ID), 0);
        return SendPortMsg(_msg);
    }
    else
    {
        //通过Route转发
        return TransmiteMsgFromWorldToOther(idWorld, WORLD_SERVICE_ID, nCmd, msg);
    }
}

bool CZoneService::TransmiteMsgFromWorldToOther(uint16_t                         idWorld,
                                                uint16_t                         idService,
                                                uint16_t                         nCmd,
                                                const google::protobuf::Message& msg) const
{
    if(IsSharedZone() == false)
    {
        CNetworkMessage _msg(nCmd,
                             msg,
                             GetServerVirtualSocket(),
                             ServerPort(GetWorldID(), WORLD_SERVICE_ID),
                             ServerPort(idWorld, idService));
        return SendPortMsg(_msg);
    }
    else
    {
        CNetworkMessage _msg(nCmd,
                             msg,
                             GetServerVirtualSocket(),
                             ServerPort(idWorld, WORLD_SERVICE_ID),
                             ServerPort(idWorld, idService));
        return SendPortMsg(_msg);
    }
}

bool CZoneService::BroadcastToZone(uint16_t nCmd, const google::protobuf::Message& msg) const
{
    __ENTER_FUNCTION

    for(uint32_t i = MIN_ZONE_SERVICE_ID; i <= MAX_ZONE_SERVICE_ID; i++)
    {
        if(i == GetServiceID())
            continue;

        CNetworkMessage _msg(nCmd, msg, GetServerVirtualSocket(), VirtualSocket(ServerPort(GetWorldID(), i), 0));
        SendPortMsg(_msg);
    }
    return true;
    __LEAVE_FUNCTION
    return false;
}

bool CZoneService::BroadcastToAllPlayer(const google::protobuf::Message& msg) const
{
    return BroadcastToAllPlayer(to_sc_cmd(msg), msg);
}

bool CZoneService::BroadcastToAllPlayer(uint16_t nCmd, const google::protobuf::Message& msg) const
{
    __ENTER_FUNCTION
    CNetworkMessage _msg(nCmd, msg, GetServerVirtualSocket(), 0);

    if(IsSharedZone() == false)
    {
        for(uint32_t i = MIN_SOCKET_SERVICE_ID; i <= MAX_SOCKET_SERVICE_ID; i++)
        {
            _msg.SetTo(VirtualSocket(ServerPort(GetWorldID(), i), 0));
            SendBroadcastMsg(_msg);
        }
    }
    else
    {
        //需要遍历所有的玩家
        auto func_callback = [](auto pair_val) -> OBJID {
            auto pPlayer = pair_val.second;
            if(pPlayer)
                return pPlayer->GetID();
            return 0;
        };
        auto func = std::bind(&CActorManager::ForeachPlayer, GetActorManager(), std::move(func_callback));

        auto setSocketMap = ZoneService()->IDList2VSMap(func, 0);
        ZoneService()->SendMsgTo(setSocketMap, nCmd, msg);
    }

    return true;
    __LEAVE_FUNCTION
    return false;
}

bool CZoneService::SendMsgToPlayer(const VirtualSocket& vs, const google::protobuf::Message& msg) const
{
    return SendMsgToPlayer(vs, to_sc_cmd(msg), msg);
}

bool CZoneService::SendMsgToPlayer(const VirtualSocket& vs, uint16_t nCmd, const google::protobuf::Message& msg) const
{
    CNetworkMessage _msg(nCmd, msg, GetServerVirtualSocket(), vs);
    return SendPortMsg(_msg);
}

bool CZoneService::SendServerMsgToAIService(const google::protobuf::Message& msg) const
{
    return SendMsgToAIService(to_server_msgid(msg), msg);
}

bool CZoneService::SendMsgToAIService(uint16_t nCmd, const google::protobuf::Message& msg) const
{
    CNetworkMessage _msg(nCmd, msg, GetServerVirtualSocket(), GetAIServerVirtualSocket());
    return SendPortMsg(_msg);
}

void CZoneService::_ID2VS(OBJID id, VirtualSocketMap_t& VSMap) const
{
    __ENTER_FUNCTION
    CActor* pActor = GetActorManager()->QueryActor(id);
    if(pActor && pActor->IsPlayer())
    {
        CPlayer* pPlayer = pActor->CastTo<CPlayer>();
        VSMap[pPlayer->GetSocket().GetServerPort()].push_back(pPlayer->GetSocket());
    }
    __LEAVE_FUNCTION
}

void CZoneService::ReleaseGameDB(uint16_t nWorldID)
{
    __ENTER_FUNCTION
    auto itFind = m_GameDBMap.find(nWorldID);
    if(itFind != m_GameDBMap.end())
    {
        m_GameDBMap.erase(itFind);
    }
    __LEAVE_FUNCTION
}

std::unique_ptr<CMysqlConnection> CZoneService::ConnectGlobalDB()
{
    const auto& settings        = GetMessageRoute()->GetSettingMap();
    const auto& settingGlobalDB = settings["GlobalMYSQL"][0];
    auto        pGlobalDB       = std::make_unique<CMysqlConnection>();
    if(pGlobalDB->Connect(settingGlobalDB.Query("host"),
                          settingGlobalDB.Query("user"),
                          settingGlobalDB.Query("passwd"),
                          settingGlobalDB.Query("dbname"),
                          settingGlobalDB.QueryULong("port")) == false)
    {
        return nullptr;
    }
    return pGlobalDB;
}

CMysqlConnection* CZoneService::_ConnectGameDB(uint16_t nWorldID, CMysqlConnection* pGlobalDB)
{
    __ENTER_FUNCTION
    CHECKF(pGlobalDB);
    //通过globaldb查询localdb
    auto result = pGlobalDB->QueryTLimit<TBLD_DBINFO, TBLD_DBINFO::WORLDID>(nWorldID, 1);
    if(result)
    {
        auto row = result->fetch_row(false);
        if(row)
        {
            std::string host   = row->Field(TBLD_DBINFO::DB_IP);
            uint16_t    port   = row->Field(TBLD_DBINFO::DB_PORT);
            std::string user   = row->Field(TBLD_DBINFO::DB_USER);
            std::string passwd = row->Field(TBLD_DBINFO::DB_PASSWD);
            std::string dbname = row->Field(TBLD_DBINFO::DB_NAME);

            auto pDB = std::make_unique<CMysqlConnection>();
            if(pDB->Connect(host, user, passwd, dbname, port) == false)
            {
                return nullptr;
            }
            m_GameDBMap[nWorldID].reset(pDB.release());
            return m_GameDBMap[nWorldID].get();
        }
    }
    __LEAVE_FUNCTION
    return nullptr;
}

CMysqlConnection* CZoneService::GetGameDB(uint16_t nWorldID)
{
    __ENTER_FUNCTION
    auto itFind = m_GameDBMap.find(nWorldID);
    if(itFind != m_GameDBMap.end())
    {
        return itFind->second.get();
    }
    else
    {
        if(m_pGlobalDB)
        {
            return _ConnectGameDB(nWorldID, m_pGlobalDB.get());
        }
        else
        {
            auto pGlobalDB = ConnectGlobalDB();
            return _ConnectGameDB(nWorldID, pGlobalDB.get());
        }
    }
    __LEAVE_FUNCTION
    return nullptr;
}

void CZoneService::OnLogicThreadProc()
{
    __ENTER_FUNCTION
    //处理消息
    TICK_EVAL(CServiceCommon::OnLogicThreadProc());

    //处理登陆
    TICK_EVAL(GetLoadingThread()->OnMainThreadExec());

    // lua step gc
    TICK_EVAL(m_pScriptManager->OnTimer(TimeGetMonotonic()));

    if(m_tLastDisplayTime.ToNextTime())
    {
        std::string buf = std::string("\n======================================================================") +
                          fmt::format(FMT_STRING("\nMessageProcess:{}"), GetMessageProcess()) +
                          fmt::format(FMT_STRING("\nEvent:{}\tActive:{}\tMem:{}"),
                                      EventManager()->GetEventCount(),
                                      EventManager()->GetRunningEventCount(),
                                      get_thread_memory_allocted()) +
                          fmt::format(FMT_STRING("\nUser:{}\tMonster:{}"),
                                      ActorManager()->GetUserCount(),
                                      ActorManager()->GetMonsterCount()) +
                          fmt::format(FMT_STRING("\nLoading:{}\tSaveing:{}\tReady:{}"),
                                      GetLoadingThread()->GetLoadingCount(),
                                      GetLoadingThread()->GetSaveingCount(),
                                      GetLoadingThread()->GetReadyCount()) +
                          fmt::format(FMT_STRING("\nScene:{}\tDynaScene:{}"),
                                      SceneManager()->GetSceneCount(),
                                      SceneManager()->GetDynaSceneCount());
        SceneManager()->ForEach([&buf](CScene* pScene) {
            size_t player_count = 0;
            size_t actor_count  = 0;
            size_t phase_count  = 0;
            pScene->ForEach([&phase_count, &player_count, &actor_count](const CPhase* pPhase) {
                phase_count++;
                player_count += pPhase->GetPlayerCount();
                actor_count += pPhase->GetActorCount();
            });

            buf += fmt::format("\nScene: {} - PhaseCount:{}-{}\tPlayer:{}\tActor:{}",
                               pScene->GetMapID(),
                               pScene->GetStaticPhaseCount(),
                               phase_count,
                               player_count,
                               actor_count);
        });

        //检查ai,world,socket1-5如果是源端socket的话,有多少缓冲区堆积
        auto check_func = [this, &buf](uint16_t idService) {
            auto pMessagePort = GetMessageRoute()->QueryMessagePort(ServerPort(GetWorldID(), idService), false);
            if(pMessagePort && pMessagePort->GetWriteBufferSize() > 0)
            {
                buf += fmt::format(FMT_STRING("\nMsgPort:{}-{}\tSendBuff:{}"),
                                   pMessagePort->GetServerPort().GetWorldID(),
                                   pMessagePort->GetServerPort().GetServiceID(),
                                   pMessagePort->GetWriteBufferSize());
            }
        };
        check_func(GetAIServiceID());
        if(IsSharedZone() == false)
        {
            check_func(WORLD_SERVICE_ID);
            for(int32_t i = MIN_SOCKET_SERVICE_ID; i <= MAX_SOCKET_SERVICE_ID; i++)
            {
                check_func(i);
            }
        }

        LOGMONITOR("{}", buf.c_str());
        m_pMonitorMgr->Print();
        SetMessageProcess(0);
    }

    __LEAVE_FUNCTION
}

void CZoneService::OnLogicThreadCreate()
{
    tls_pService = this;
    CServiceCommon::OnLogicThreadCreate();
}

void CZoneService::OnLogicThreadExit()
{
    CServiceCommon::OnLogicThreadExit();
}
