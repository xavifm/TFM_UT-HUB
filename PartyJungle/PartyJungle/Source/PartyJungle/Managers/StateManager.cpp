#include "StateManager.h"

#include "../GameStates/GameStateData.h"
#include "Kismet/GameplayStatics.h"
#include "PartyJungle/GameInstance/ManagerGameInstance.h"
#include "../Controllers/ControllerBase.h"

Event AStateManager::m_EventStateChanged;


AStateManager::AStateManager() : AActor()
{
	PrimaryActorTick.bCanEverTick = false;
}

void AStateManager::BeginPlay()
{
	Super::BeginPlay();
	
	GetGameInstance<UManagerGameInstance>()->SetStateManager(this);
}

bool AStateManager::ChangeState(EGameStates a_TargetState)
{
	uint8 TargetStateKey {static_cast<uint8>(a_TargetState)};
	const bool HasValidState {IsValidGameState(m_CurrentState)};
	const bool CanExitState {!HasValidState || (HasValidState && m_CurrentState->CanExitState())};
	const bool CanChangeState {CanExitState && m_GameStates.Contains(TargetStateKey) && m_GameStates[TargetStateKey]->CanEnterState()};
	
	if (CanChangeState)
	{
		auto TargetGameState {m_GameStates[TargetStateKey]};
		ExitCurrentControllers(TargetGameState);
		
		auto PreviousGameState {m_CurrentState};
		m_CurrentState = TargetGameState;
		StartCurrentControllers(PreviousGameState);
		
		m_EventStateChanged.Broadcast();
	}
	
	return CanChangeState;
}

bool AStateManager::AddState(EGameStates a_State, AGameStateData* const a_StateData)
{
	uint8 StateKey {static_cast<uint8>(a_State)};
	const bool CanCreateState {IsValidGameState(a_StateData) && (m_GameStates.IsEmpty() || !m_GameStates.Contains(StateKey))};
	if (CanCreateState)
	{
		m_GameStates.Add(StateKey, a_StateData);
	}
	
	return CanCreateState;
}

void AStateManager::ResetStates()
{
	m_GameStates.Reset();
	m_GameStates = TMap<uint8, AGameStateData*>();
	if (m_CurrentState != nullptr)
	{
		m_CurrentState->Reset();
	}
}

void AStateManager::StartCurrentControllers(AGameStateData* a_PreviousGameState)
{
	//StartController(a_GameState, EGameControllers::Input); // Input Controller should always start the first. 
	
	StartController(a_PreviousGameState, EGameControllers::Players);
	StartController(a_PreviousGameState, EGameControllers::Camera);
	StartController(a_PreviousGameState, EGameControllers::UI);
}

void AStateManager::ExitCurrentControllers(AGameStateData* a_NextGameState)
{
	if (m_CurrentState && m_CurrentState->GetName() != "None")
	{
		ExitController(a_NextGameState, EGameControllers::Camera);
		ExitController(a_NextGameState, EGameControllers::UI);
		ExitController(a_NextGameState, EGameControllers::Players);
		
		//ExitController(a_NextGameState, EGameControllers::Input); // Input Controller should always exit the last.
	}
}

void AStateManager::StartController(AGameStateData* const a_PreviousGameState, EGameControllers a_ControllerId)
{
	auto TargetController {m_CurrentState->GetController(a_ControllerId)};
	const bool StartController {TargetController && (!IsValidGameState(a_PreviousGameState) || TargetController->ReinitIfMatches() 
		|| (!TargetController->ReinitIfMatches() && TargetController != a_PreviousGameState->GetController(a_ControllerId)))};
	
	if (StartController)
	{
		TargetController->OnStart();
	}
}

void AStateManager::ExitController(AGameStateData* const a_NextGameState, EGameControllers a_ControllerId)
{
	auto CurrentController {m_CurrentState->GetController(a_ControllerId)};
	const bool ExitController {(!CurrentController->ReinitIfMatches() && CurrentController != a_NextGameState->GetController(a_ControllerId))
		|| CurrentController->ReinitIfMatches()};
	
	if (ExitController)
	{
		CurrentController->OnExit();
	}
}

bool AStateManager::IsValidGameState(AGameStateData* const a_GameState)
{
	return a_GameState && a_GameState->GetName() != "None" && a_GameState->GetGameStateId() != EGameStates::None;
}

