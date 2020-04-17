#ifndef PHASE_H
#define PHASE_H

#include "MapVal.h"
#include "SceneBase.h"
#include "EventEntry.h"
#include "ZoneService.h"
#include "ScriptManager.h"

export_lua enum SceneState {
    SCENESTATE_NORMAL       = 0,
    SCENESTATE_WAIT_LOADING = 1,
    SCENESTATE_WAIT_DESTORY = 2,

};

export_lua struct CreateMonsterParam
{
    uint32_t      idMonsterType;
    uint32_t      idGen;
    uint64_t      idPhase;
    uint32_t      idCamp;
    OBJID         idOwner;
    CPos2D        pos;
    float         face;
};

class CScene;
class CNpc;
class CMonster;


export_lua class CPhase : public CSceneBase 
{
protected:
    CPhase();
public:
    CreateNewImpl(CPhase);
public:
    virtual ~CPhase();
    

public:
    bool            Init(CScene* pScene, const SceneID& idScene, uint64_t idPhase, PhaseData* pPhaseData);
    
    export_lua bool NeedDestory() const;
    export_lua bool CanDestory();

    export_lua void KickAllPlayer(const char* pszReason = "");
    export_lua void _KickPlayer(const char* pszReason, CPlayer* pPlayer);

    export_lua uint32_t     GetSceneState() const { return m_curSceneState; }
    export_lua void         SetSceneState(uint32_t val) { m_curSceneState = val; }
    export_lua virtual void AddDynaRegion(uint32_t nRegionType, const FloatRect& rect) override;
    export_lua virtual void ClearDynaRegion(uint32_t nRegionType) override;
    
    export_lua CMapValSet* GetMapValSet()const {return m_pMapValSet.get();};
    export_lua uint64_t GetPhaseID()const {return m_idPhase;}
    export_lua uint32_t GetPhaseIdx()const {return GetSceneID().GetPhaseIdx();}
public:
    export_lua bool SendSceneMessage(uint16_t cmd, const google::protobuf::Message& msg);

    

    //增加一个延时回调脚本
    export_lua void AddTimedCallback(uint32_t tIntervalMS, const std::string& func_name);
    export_lua void ClearAllCllback();

    template<typename RVal, typename... Args>
    RVal TryExecScript(uint32_t idxCallBackType, Args&&... args)
    {
        __ENTER_FUNCTION
        if(m_pMap->GetScriptID() == 0)
            return RVal();
        else
            return ScriptManager()->TryExecScript<RVal>(m_pMap->GetScriptID(),
                                                        idxCallBackType,
                                                        std::forward<Args>(args)...);
        __LEAVE_FUNCTION
        return RVal();
    }

public: 
    export_lua CNpc* CreateNpc(uint32_t idNpcType, const CPos2D& pos, float face);
    
    export_lua CMonster* CreateMonster(const CreateMonsterParam& param);
    export_lua bool      CreateMultiMonster(const CreateMonsterParam& param, uint32_t nNum, float range);

public:
    void AddOwnerID(OBJID idOwner);
    void SetOwnerID(const std::vector<OBJID>& setPlayerID);
    void ClearOwner(OBJID idOwner);
    bool IsOwner(OBJID idOwner) const;
    

    virtual bool IsStatic() const override { return m_idPhase < 0xFFFFFFFF; }
    virtual bool EnterMap(CSceneObject* pActor, float fPosX, float fPosY, float fFace) override;
    virtual void LeaveMap(CSceneObject* pActor, uint64_t idTargetScene = 0) override;
private:
    void ScheduleDelPhase(uint32_t wait_ms);
private:
    uint64_t        m_idPhase = 0;
    
    uint32_t        m_curSceneState;
    bool            m_bDelThis = false;

    CEventEntryQueue m_StatusEventList;
    std::unique_ptr<CMapValSet> m_pMapValSet;

    std::map<OBJID, bool> m_OwnerIDSet;
    CEventEntryPtr        m_DelEvent;
};

#endif /* PHASE_H */