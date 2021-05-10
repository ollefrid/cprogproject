#include "Engine.h"

Engine* Engine::s_Instance = nullptr;

bool Engine::Init()
{
	m_IsRunning = true;
}

bool Engine::Clean()
{
	return false;
}

bool Engine::Quit()
{
	return false;
}

void Engine::Update()
{
}

void Engine::Render()
{
}

void Engine::Events()
{
}
