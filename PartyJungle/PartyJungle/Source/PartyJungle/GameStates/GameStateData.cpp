#include "GameStateData.h"

#include <PartyJungle/Managers/StateManager.h>
#include <PartyJungle/GameInstance/ManagerGameInstance.h>
#include <PartyJungle/Controllers/ControllerBase.h>
#include <PartyJungle/Controllers/GameLoopControllers/GameLoopControllerBase.h>
#include <PartyJungle/Controllers/CameraControllers/CameraControllerBase.h>
#include <PartyJungle/Controllers/PlayersControllers/PlayersControllerBase.h>
#include <PartyJungle/Controllers/UIControllers/UIControllerBase.h>


AGameStateData::AGameStateData() : 
	AActor()
{
	PrimaryActorTick.bCanEverTick = false;
}

bool AGameStateData::CanEnterControllers() const
{
	bool CanEnterControllers {true};
	for (auto [Id, GameController] : m_GameControllers)
	{
		if (GameController && !GameController->CanEnterController())
		{
			CanEnterControllers = false;
			break;
		}
	}
	
	return CanEnterControllers;
}

bool AGameStateData::CanExitControllers() const
{
	bool CanExitControllers {true};
	for (auto [Id, GameController] : m_GameControllers)
	{
		if (GameController && !GameController->CanExitController())
		{
			CanExitControllers = false;
			break;
		}
	}
	
	return CanExitControllers;
}

AControllerBase* const AGameStateData::GetController(EGameControllers a_ControllerId)
{
	return m_GameControllers[static_cast<uint8>(a_ControllerId)];
}

void AGameStateData::BeginState()
{
	for (auto [Id, GameController] : m_GameControllers)
	{
		if (GameController)
		{
			GameController->OnBeginState();
		}
	}
}

bool AGameStateData::CanEnterState_Implementation() const
{
	return CanEnterControllers();
}

bool AGameStateData::CanExitState_Implementation() const
{
	return CanExitControllers();
}

void AGameStateData::BeginPlay()
{
	Super::BeginPlay();
	
	InitState();
}

void AGameStateData::InitState()
{
	m_GameControllers.Add(static_cast<uint8>(EGameControllers::GameLoop), dynamic_cast<AControllerBase*>(m_GameLoopController));
	m_GameControllers.Add(static_cast<uint8>(EGameControllers::Camera), dynamic_cast<AControllerBase*>(m_CameraController));
	m_GameControllers.Add(static_cast<uint8>(EGameControllers::Players), dynamic_cast<AControllerBase*>(m_PlayersController));
	m_GameControllers.Add(static_cast<uint8>(EGameControllers::UI), dynamic_cast<AControllerBase*>(m_UIController));
	
	auto GameInstance {GetGameInstance<UManagerGameInstance>()};
	if (GameInstance->IsGameManagerReady())
	{
		AddToStateManager(GameInstance);
	}
	else
	{
		GameInstance->GetEvent_GameManagerLoaded().AddUniqueDynamic(this, &AGameStateData::AddToStateManager);
	}
}

void AGameStateData::AddToStateManager(UManagerGameInstance* const a_GameManager)
{
	const bool StateAdded {a_GameManager->GetStateManager()->AddState(m_GameStateId, this)};
	if (!StateAdded)
	{
		UE_LOG(LogTemp, Error, TEXT("Wasn't able to add game state '%s' successfully"), *m_GameStateId);
	}
	else
	{
		BeginState();
		
		if (a_GameManager->GetStateManager()->GetDefaultGameStateId() == m_GameStateId)
		{
			const bool StateChanged {a_GameManager->GetStateManager()->ChangeState(m_GameStateId)};
			if (!StateChanged)
			{
				UE_LOG(LogTemp, Error, TEXT("Wasn't able to set the default dame state '%s' successfully"), *m_GameStateId);
			}
		}
	}
}
