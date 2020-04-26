#ifndef AISCENEMANAGR_H
#define AISCENEMANAGR_H

#include <unordered_map>

#include "BaseCode.h"
#include "MapManager.h"

class CAIScene;
class CAIPhase;

class CAISceneManager : public NoncopyableT<CAISceneManager>
{
    CAISceneManager();
    bool Init(uint32_t idZone);

public:
    CreateNewImpl(CAISceneManager);

public:
    ~CAISceneManager();

    void Destory();

    CAIScene* CreateScene(const SceneID& idScene);
    void      DestoryDynaScene(const SceneID& idScene);

    CAIScene* QueryScene(const SceneID& idScene);
    CAIPhase* QueryPhase(const SceneID& idScene);
    void      OnTimer();

protected:
private:
    std::unordered_map<uint16_t, CAIScene*> m_mapScene;
    size_t                                  m_nStaticScene;
};
#endif /* AISCENEMANAGR_H */
