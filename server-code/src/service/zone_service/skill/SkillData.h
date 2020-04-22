#ifndef SKILLDATA_H
#define SKILLDATA_H


#include "BaseCode.h"
#include "DBRecord.h"
#include "gamedb.h"
class CActor;

//每一条技能记录
export_lua class CSkillData : public NoncopyableT<CSkillData>
{
    CSkillData();
    bool Init(CActor* pOwner, uint32_t idSkillSort, uint32_t nLev);
    bool Init(CActor* pOwner, CDBRecordPtr&& pRow);
public:
    CreateNewImpl(CSkillData);
public:
   
    ~CSkillData();

public:
    


    export_lua uint32_t GetSkillSort() const { return m_pData->Field(TBLD_SKILL::SKILLTYPE); }
    export_lua uint32_t GetSkillLev() const { return m_pData->Field(TBLD_SKILL::LEV); }
    export_lua void     SetSkillLev(uint32_t nLev, bool bUpdate = true);
    export_lua void     Update();

private:
    CDBRecordPtr m_pData;
};


#endif /* SKILLDATA_H */