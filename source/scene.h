/////////////////////////////////////////
// Class Scene

#if !defined(STAGE_SCENE_H)
#define STAGE_SCENE_H

#include <list>
#include "Iw2dSceneGraph.h"

using namespace Iw2DSceneGraph;
using namespace Iw2DSceneGraphCore;

// Forward Declare class SceneManager
class SceneManager;

class Scene : public CNode
{
public:
    Scene();
    virtual ~Scene();
    virtual void Init();
    virtual void Update();
    virtual void Render();

    bool IsActive() const;
    void SetActive(bool active);
    void SetName(const char *name);
    unsigned int GerNameHash() const;
    void SetManager(SceneManager *manager);
    void SetInputActive(bool Active);

protected:
    unsigned int m_NameHash;
    bool m_IsActive;
    bool m_IsInputActive;
    SceneManager *m_Manager;


private:



};

#endif