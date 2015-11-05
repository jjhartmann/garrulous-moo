
#include "scene.h"
#include "input.h"
#include "IwGx.h"


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

void Scene::Update(float deltaTime /*= 0.0f*/, float alphaMul /*= 1.0f*/)
{
    if (!m_IsActive)
    {
        return;
    }

    CNode::Update(deltaTime, alphaMul);
}

void Scene::Render()
{
    CNode::Render();
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


void SceneManager::Update(float deltatime /*= 0.0f*/)
{
    for (pair<int, Scene*> it : m_Scenes)
    {
        it.second->Update(deltatime);
    }
}

void SceneManager::Render()
{
    for (pair<int, Scene*> it : m_Scenes)
    {
        it.second->Render();
    }
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


void SceneManager::SwtichTo(Scene *scene)
{
    m_Next = scene;
    if (m_Current == nullptr)
    {
        // Make the scene visible
        m_Current = m_Next;
        m_Current->SetActive(true);
        m_Current->m_IsVisible = true;
        m_Current->SetInputActive(true);
        m_Next = nullptr;

    }
    else
    {
        // Make new scene visible
        m_Next->SetActive(true);
        m_Next->SetInputActive(true);
        m_Next->m_IsVisible = true;

        // Hide old scene
        m_Current->SetInputActive(false);
        m_Current->SetActive(false);
        m_Current->m_IsVisible = false;

        m_Current = m_Next;
        m_Next = nullptr;
    }
}
