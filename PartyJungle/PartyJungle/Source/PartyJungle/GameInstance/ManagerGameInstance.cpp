#include "ManagerGameInstance.h"

#include "../Managers/StateManager.h"
#include <PartyJungle/GameInstance/GameInstanceAux/GameData.h>
#include "../Managers/InputManager.h"
#include "Kismet/GameplayStatics.h"


UManagerGameInstance::UManagerGameInstance() :
	UGameInstance()
{
}

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

void UManagerGameInstance::CheckGameManagerLoaded()
{
	const bool AllManagersReady {m_StateManager && m_InputManager};
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
	
	m_EventGameManagerLoaded.Clear();
	m_GameManagerReady = false;
	
	
	//m_StateManager->ResetStates();  
	//m_InputManager->ResetInputs();
}
