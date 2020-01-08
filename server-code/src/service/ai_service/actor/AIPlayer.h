#pragma once
#include "AIActor.h"
#include "server_side.pb.h"

class CAIPlayer : public CAIActor
{
public:
	CAIPlayer();
	~CAIPlayer();
	CREATE_NEW_IMPL(CAIPlayer);
	bool Init(const ServerMSG::ActorCreate& msg);

	virtual ActorType GetActorType() const { return ActorType::ACT_PLAYER; }
	static  ActorType GetActorTypeStatic() { return ActorType::ACT_PLAYER; }

public:
	MEMORYHEAP_DECLARATION(s_heap);

private:
};