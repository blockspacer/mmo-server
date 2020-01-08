#pragma once

#include <deque>
#include <vector>
#include <functional>
#include "NetworkService.h"
#include "NetSocket.h"
#include "EventEntry.h"
class RobotClientManager;
class CNetSocket;

class RobotClient: public CNetEventHandler
{
public:
	RobotClient(RobotClientManager* pManager);
	~RobotClient();

	static void initInLua(struct lua_State* L);

public:
	virtual void OnConnected(CNetSocket* pSocket);
	virtual void OnConnectFailed(CNetSocket*);
	virtual void OnDisconnected(CNetSocket*);
	virtual void OnAccepted(CNetSocket*);
	virtual void OnRecvData(CNetSocket*, byte* pBuffer, size_t len);
	virtual void OnProcessMessage(CNetworkMessage*);
	virtual void OnRecvTimeout(CNetSocket*);

	void AddEventCallBack(uint32_t nWaitMs, const std::string& func_name, bool bPersist);
	bool IsConnectServer();
	void DisconnectServer();
public:
	uint32_t GetClientID() const { return m_idClient; }
	void SetClientID(uint32_t val) { m_idClient = val; }

	void SendProtobufToServer(uint16_t cmd, google::protobuf::Message* pMsg);
private:
	void SendToServer(byte* buf, size_t len);
	void SendToServer(CNetworkMessage& msg);
private:
	RobotClientManager* m_pManager;
	CNetSocket* m_pServerSocket;
	uint32_t m_idClient;
	CEventEntryPtr m_Event;
};