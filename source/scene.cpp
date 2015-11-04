
#include "scene.h"


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
