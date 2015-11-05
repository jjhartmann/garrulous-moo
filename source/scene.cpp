
#include "scene.h"

using namespace std;


//////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////
// SCENE CLASS

Scene::Scene()
{
}

Scene::~Scene()
{
}

void Scene::SetName(const char *name)
{
    m_NameHash = IwHashString(name);
}

unsigned int Scene::GerNameHash() const
{
    return m_NameHash;
}

void Scene::SetManager(SceneManager * manager)
{
    m_Manager = manager;
}

void Scene::SetInputActive(bool active)
{
    m_IsInputActive = active;
}


void Scene::Init()
{
}

void Scene::Update()
{
}

void Scene::Render()
{
}

bool Scene::IsActive() const
{
    return m_IsActive;
}

void Scene::SetActive(bool active)
{
    m_IsActive = active;
}




//////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////
// SCENE MANGER CLASS


SceneManager::SceneManager() :
    m_Current(nullptr),
    m_Next(nullptr)
{
}

SceneManager::~SceneManager()
{
    for (map<int, Scene*>::iterator it = m_Scenes.begin(); it != m_Scenes.end(); ++it)
    {
        delete it->second;
    }
}

Scene * SceneManager::GetCurrent()
{
    return nullptr;
}

void SceneManager::SwtichTo()
{
}

void SceneManager::Update()
{
}

void SceneManager::Render()
{
}

void SceneManager::Add(Scene *scene)
{
    m_Scenes.insert(pair <int, Scene* >(scene->GerNameHash(), scene));
    scene->SetManager(this);
}

void SceneManager::Remove(Scene *scene)
{
    m_Scenes.erase(scene->GerNameHash());
}

Scene * SceneManager::Find(const char * name)
{
    return m_Scenes[IwHashString(name)];
}
