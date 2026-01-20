#include "InputManager.h"

#include <string>

#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputMappingContext.h"
#include <PartyJungle/GameInstance/GameInstanceAux/GameData.h>
#include "Kismet/GameplayStatics.h"
#include "PartyJungle/Controllers/PlayersControllerBase.h"
#include <PartyJungle/GameInstance/ManagerGameInstance.h>
#include <PartyJungle/Managers/StateManager.h>
#include <PartyJungle/Controllers/ControllerAuxs/PlayerInputs.h>

#include "PartyJungle/GameStates/GameStateData.h"


void AInputManager::BeginPlay()
{
	Super::BeginPlay();
	
	CheckInputManagerLoaded();
}

void AInputManager::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	
	CheckInputManagerLoaded();
}

void AInputManager::CheckInputManagerLoaded()
{
	if (!m_InputManagerLoaded)
	{
		if (m_InputManagerReady)
		{
			m_InputManagerLoaded = true;
			GetGameInstance<UManagerGameInstance>()->SetInputManager(this);
		}
		else
		{
			m_InputManagerReady = true;
		}
	}
}

void AInputManager::ResetInputs()
{
	m_InputManagerLoaded = false;
	m_InputManagerReady = false;
	
	m_InputBindings.Reset();
	m_InputBindings = TMap<FString, FInputActionBinding*>();
	
	m_AxisBindings.Reset();
	m_AxisBindings = TMap<FString, FInputAxisBinding*>();
}

/*void AInputManager::SetAllPlayersPossessed()
{
	ResetPossessions();
	
	auto GameData {GetGameInstance<UManagerGameInstance>()->GetGameDataManager()};
	for (int PlayerId {0}; PlayerId < GameData.GetPlayersInBoard(); ++PlayerId)
	{
		/*TDelegate<void()> MyDelegate;
		TDelegate<void()>::TMethodPtr<UObject> StoredMethod;
		MyDelegate.BindUObject(this, StoredMethod);
		MyDelegate.TryGetBoundFunctionName();#1#
		
		
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

void AInputManager::SetPossessions(TArray<int> a_PlayerIds)
{
	ResetPossessions();
	
	for (auto PlayerId : a_PlayerIds)
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

void AInputManager::AddPossessions(TArray<int> a_PlayerIds)
{
	for (auto PlayerId : a_PlayerIds)
	{
		if (!m_PossessedPlayers.Contains(PlayerId))
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
}

void AInputManager::RemovePossessions(TArray<int> a_PlayerIds)
{
	for (auto PlayerId : a_PlayerIds)
	{
		if (m_PossessedPlayers.Contains(PlayerId))
		{
			APlayerController* PlayerController {UGameplayStatics::GetPlayerController(GetWorld(), PlayerId)};
	
			if(PlayerController) 
			{
				PlayerController->UnPossess();
				DisableInput(PlayerController);
				
				m_PossessedPlayers.Remove(PlayerId);
			}
		}
	}
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
}*/

FEvent_PlayerInputKey* const AInputManager::GetPlayerKeyEvent(int a_PlayerId, EInputKeys a_InputKey, ETriggerEvents a_TriggerEvent)
{
	auto PlayersController {GetGameInstance<UManagerGameInstance>()->GetStateManager()->GetController<APlayersControllerBase>(EGameControllers::Players)};
	auto PlayerInputsController {PlayersController->GetPlayerById(a_PlayerId).GetInputsController()};
		
	return PlayerInputsController->GetInputEvent(a_InputKey, a_TriggerEvent);
}

FEvent_PlayerInputAxis* const AInputManager::GetPlayerAxisEvent(int a_PlayerId, EInputAxes a_InputAxis)
{
	auto PlayersController {GetGameInstance<UManagerGameInstance>()->GetStateManager()->GetController<APlayersControllerBase>(EGameControllers::Players)};
	auto PlayerInputsController {PlayersController->GetPlayerById(a_PlayerId).GetInputsController()};
		
	return PlayerInputsController->GetInputEvent(a_InputAxis);
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


/*bool AInputManager::UpdateInputComponent(UManagerGameInstance* const a_GameInstance, AInputControllerBase* const a_InputController)
{
	if (m_InputReadyToInit)
	{
		ExitInputMappingContext(a_GameInstance);
	}
	
	m_InputController = a_InputController;
	
	EnterInputMappingContext(a_GameInstance);
	
	return m_InputController != nullptr;
}*/

/*bool AInputManager::UnbindInput(UObject* a_Object, const FName& a_FunctionName)
{
	auto BindKey {GetInputBindKey(a_Object, a_FunctionName)};
	auto HasBind {m_InputBindings.Contains(BindKey)};
	//auto BindKey = TPair<UObject*, FName>(a_Object, a_FunctionName);
	//auto BindKey = a_Object->GetFName().ToString() + a_FunctionName.ToString();
	
	if (HasBind)
	{
		GetInputComponent()->RemoveActionBinding(m_InputBindings[BindKey]->GetHandle());
		m_InputBindings.Remove(BindKey);
		
		
		/auto BindAction = m_InputBindings[BindKey];
		int32 CurrentBindIdx = m_InputBindings[BindKey];
		m_InputComponent->RemoveActionBinding(CurrentBindIdx);
		
		m_InputBindings.Remove(BindKey);
		for (auto& [Key, BindIdx] : m_InputBindings)
		{
			if (BindIdx > CurrentBindIdx)
			{
				--BindIdx;
			}
		}/
	}
	
	return HasBind;
}*/

