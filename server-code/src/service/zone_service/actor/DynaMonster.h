#pragma once

#include "Monster.h"

export_lua class CDynaMonster : public CMonster
{
protected:
	CDynaMonster();
public:
	virtual ~CDynaMonster();

	CREATE_NEW_IMPL(CDynaMonster);
	bool Init();

};