/////////////////////////////////////////
// Class Scene

#if !defined(STAGE_SCENE_H)
#define STAGE_SCENE_H

#include <map>
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


//////////////////////////////////////////////////////////////////////////
// SceneManager Class

class SceneManager
{
public:
    SceneManager();
    ~SceneManager();

    Scene* GetCurrent();
    void SwtichTo();        // Swtich to a scene
    void Update();          // Update all scenes managed by the manager
    void Render();          // Render all scenes managed
    void Add(Scene *scene);             // Add scene to manager
    void Remove(Scene *scene);          // Remove scene from manager
    Scene* Find(const char* name);          // Search for a scene by name

protected:
    Scene *m_Current;   // currently active scene
    Scene *m_Next;      // Next Scene that is being activated
    std::map<int, Scene*> m_Scenes; //Scene list

private:
};

extern SceneManager* g_pSceneManager;

#endif