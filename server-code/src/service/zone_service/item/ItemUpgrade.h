#pragma once

#include "BaseCode.h"
#include "Cfg_ItemUpgrade.pb.h"
#include "T_GameDataMap.h"




//////////////////////////////////////////////////////////////////////
class CItemUpgradeData
{
	CItemUpgradeData()
	{

	}
public:
	virtual ~CItemUpgradeData()
	{

	}
	using PB_T=Cfg_ItemUpgrade;
	CREATE_NEW_IMPL(CItemUpgradeData);
	bool Init(const Cfg_ItemUpgrade_Row& row)
	{
		m_Data = row;
		return true;
	}
	static uint32_t getIDFromPBRow(const Cfg_Item_Row& row)
	{
		return row.id();
	}

public:
	uint32_t GetID() const { return m_Data.id(); }
	uint32_t GetSort() const { return m_Data.sort(); }
	uint32_t GetMainType() const{return m_Data.main_itemtype(); }
	uint32_t GetLevReq() const{return m_Data.lev_req(); } 
	uint32_t GetSuccRate() const{return m_Data.succ_rate(); } 
	uint32_t GetRumor() const {return m_Data.rumor();}
	decltype(auto) GetReqData()const { return m_Data.req_data_list(); }	// 需要材料itemtypeid
	



public:
	Cfg_ItemUpgrade_Row m_Data;
};

typedef CGameDataMap<CItemUpgradeData>	CItemUpgradeDataSet;
