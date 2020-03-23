#ifndef DYNANPC_H
#define DYNANPC_H

#include "Npc.h"

export_lua class CDynaNpc : public CNpc
{
protected:
    CDynaNpc();

public:
    virtual ~CDynaNpc();

    CREATE_NEW_IMPL(CDynaNpc);
    bool Init(uint32_t idType);
};
#endif /* DYNANPC_H */
