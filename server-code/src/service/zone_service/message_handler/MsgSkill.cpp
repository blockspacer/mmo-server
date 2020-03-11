#include <regex>

#include "MsgPlayerProcess.h"
#include "msg/ts_cmd.pb.h"
#include "msg/zone_service.pb.h"
#include "Player.h"
#include "ZoneService.h"

DEFINE_MSG_PROCESS(CS_CASTSKILL)
{
	__ENTER_FUNCTION
	if(pPlayer->GetCurrentScene() == nullptr)
		return;

	if(pPlayer->GetCurrentScene()->GetMapID() != msg.mapid())
		return;

	if(pPlayer->GetCurrentScene()->GetMap()->HasMapFlag(MAPFLAG_DISABLE_ATTACK) == false)
		return;

	pPlayer->GetSkillManager()->CastSkill(msg.target_id(), msg.skill_id(), Vector2(msg.x(), msg.y()));

	__LEAVE_FUNCTION
}

DEFINE_MSG_PROCESS(CS_SKILL_BREAK)
{
	__ENTER_FUNCTION
	if(pPlayer->GetCurrentScene() == nullptr)
		return;
	if(pPlayer->GetCurrentScene()->GetMapID() != msg.mapid())
		return;

	if(pPlayer->GetCurrentScene()->GetMap()->HasMapFlag(MAPFLAG_DISABLE_ATTACK) == false)
		return;

	pPlayer->GetSkillFSM().BreakIntone();
	pPlayer->GetSkillFSM().BreakLaunch();

	__LEAVE_FUNCTION
}