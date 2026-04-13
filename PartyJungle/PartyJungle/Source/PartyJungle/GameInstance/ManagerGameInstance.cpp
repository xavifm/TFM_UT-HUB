#include "ManagerGameInstance.h"


void UManagerGameInstance::Init()
{
	Super::Init();
	
	m_GameDataManager.ResetData();
}

void UManagerGameInstance::OnWorldChanged(UWorld* OldWorld, UWorld* NewWorld)
{
	Super::OnWorldChanged(OldWorld, NewWorld);
	
	Reset();
}

void UManagerGameInstance::Shutdown()
{
	Super::Shutdown();
}

void UManagerGameInstance::SetStateManager(AStateManager* const a_StateManager)
{
	m_StateManager = a_StateManager;
	
	CheckGameManagerLoaded();
}

void UManagerGameInstance::SetInputManager(AInputManager* const a_InputManager)
{
	m_InputManager = a_InputManager;
	
	CheckGameManagerLoaded();
}

void UManagerGameInstance::SetDuelManager(ADuelManager* const a_DuelManager)
{
	m_DuelManager = a_DuelManager;
	
	CheckGameManagerLoaded();
}

void UManagerGameInstance::SetSceneManager(ASceneManager* const a_SceneManager)
{
	m_SceneManager = a_SceneManager;
	
	CheckGameManagerLoaded();
}

void UManagerGameInstance::CheckGameManagerLoaded()
{
	const bool AllManagersReady {m_StateManager && m_InputManager && m_DuelManager && m_SceneManager};
	if (!m_GameManagerReady && AllManagersReady)
	{
		m_GameManagerReady = true;
		m_EventGameManagerLoaded.Broadcast(this);
	}
}

void UManagerGameInstance::Reset()
{
	m_StateManager = nullptr;
	m_InputManager = nullptr;
	m_DuelManager = nullptr;
	m_SceneManager = nullptr;
	
	m_EventGameManagerLoaded.Clear();
	m_GameManagerReady = false;
}
