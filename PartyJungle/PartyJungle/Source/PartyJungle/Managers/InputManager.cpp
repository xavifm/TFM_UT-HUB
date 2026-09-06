#include "InputManager.h"

#include <PartyJungle/GameInstance/GameInstanceAux/GameData.h>
#include <PartyJungle/Controllers/PlayersControllers/PlayersControllerBase.h>
#include <PartyJungle/GameInstance/ManagerGameInstance.h>
#include <PartyJungle/Managers/StateManager.h>
#include <PartyJungle/Controllers/PlayersControllers/PlayerInputsControllers/PlayerInputsControllerBase.h>
#include <PartyJungle/GameStates/GameStateData.h>


void AInputManager::BeginPlay()
{
	Super::BeginPlay();
	
	m_InputBeginPlayed = true;
	CheckInputManagerLoaded();
}

void AInputManager::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	
	m_InputComponentReady = true;
	CheckInputManagerLoaded();
}

void AInputManager::CheckInputManagerLoaded()
{
	if (!m_InputManagerLoaded)
	{
		if (m_InputBeginPlayed && m_InputComponentReady)
		{
			auto GameManager { GetGameInstance<UManagerGameInstance>() };
			
			m_InputManagerLoaded = true;
			GameManager->GetEvent_GameManagerLoaded().AddUniqueDynamic(this, &AInputManager::OnGameManagerLoaded);
			GameManager->SetInputManager(this);
		}
	}
}

void AInputManager::ResetInputs()
{
	m_InputManagerLoaded = false;
	m_InputComponentReady = false;
	m_InputBeginPlayed = false;
	
	m_InputBindings.Reset();
	m_InputBindings = TMap<FString, FInputActionBinding*>();
	
	m_AxisBindings.Reset();
	m_AxisBindings = TMap<FString, FInputAxisBinding*>();
}

void AInputManager::ResetPossessions()
{
	for (auto PlayerId : m_PossessedPlayers)
	{
		APlayerController* PlayerController {UGameplayStatics::GetPlayerController(GetWorld(), PlayerId)};
		PlayerController->UnPossess();
		DisableInput(PlayerController);
	}
	
	m_PossessedPlayers.Empty();
}

void AInputManager::SetAllPlayersPossessed()
{
	ResetPossessions();
	
	auto GameData {GetGameInstance<UManagerGameInstance>()->GetGameDataManager()};
	for (int PlayerId {0}; PlayerId < GameData.GetPlayersInBoard(); ++PlayerId)
	{
		APlayerController* PlayerController {UGameplayStatics::GetPlayerController(GetWorld(), PlayerId)};
		
		if(PlayerController) 
		{
			PlayerController->bAutoManageActiveCameraTarget = false;
			PlayerController->UnPossess();
			PlayerController->Possess(this);
			EnableInput(PlayerController);
			
			m_PossessedPlayers.Add(PlayerId);
		}
	}
}


FEvent_PlayerInputKey* const AInputManager::GetPlayerKeyEvent(int a_PlayerId, EInputKeys a_InputKey, ETriggerEvents a_TriggerEvent)
{
	auto PlayersController {GetGameInstance<UManagerGameInstance>()->GetStateManager()->GetController<APlayersControllerBase>(EGameControllers::Players)};
	auto PlayerInputsController {PlayersController->GetPlayerById(a_PlayerId).GetInputsController()};
		
	return PlayerInputsController->GetInputKeyEvent(a_InputKey, a_TriggerEvent);
}

FEvent_PlayerInputAxis* const AInputManager::GetPlayerAxisEvent(int a_PlayerId, EInputAxes a_InputAxis)
{
	auto PlayersController {GetGameInstance<UManagerGameInstance>()->GetStateManager()->GetController<APlayersControllerBase>(EGameControllers::Players)};
	auto PlayerInputsController {PlayersController->GetPlayerById(a_PlayerId).GetInputsController()};
		
	return PlayerInputsController->GetInputAxisEvent(a_InputAxis);
}

FEvent_PlayerInputAxis* const AInputManager::GetPlayerAxisReleasedEvent(int a_PlayerId, EInputAxes a_InputAxis)
{
	auto PlayersController {GetGameInstance<UManagerGameInstance>()->GetStateManager()->GetController<APlayersControllerBase>(EGameControllers::Players)};
	auto PlayerInputsController {PlayersController->GetPlayerById(a_PlayerId).GetInputsController()};
	
	return PlayerInputsController->GetInputAxisReleasedEvent(a_InputAxis);
}


void AInputManager::OnGameManagerLoaded(UManagerGameInstance* const a_GameManager)
{
	GetGameInstance<UManagerGameInstance>()->GetEvent_GameManagerLoaded().RemoveDynamic(this, &AInputManager::OnGameManagerLoaded);
	SetAllPlayersPossessed();
}

TArray<int> AInputManager::GetAllPlayerIds()
{
	TArray<int> PlayerIds;

	auto GameData {GetGameInstance<UManagerGameInstance>()->GetGameDataManager()};
	PlayerIds.Reserve(GameData.GetPlayersInBoard());
	for (int PlayerId {0}; PlayerId < GameData.GetPlayersInBoard(); ++PlayerId)
	{
		PlayerIds.Add(PlayerId);
	}
	
	return PlayerIds;
}
