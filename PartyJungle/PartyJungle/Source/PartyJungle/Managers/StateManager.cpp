#include "StateManager.h"

#include <PartyJungle/GameStates/GameStateData.h>
#include <PartyJungle/Controllers/ControllerBase.h>
#include <PartyJungle/GameInstance/ManagerGameInstance.h>


AStateManager::AStateManager() : AActor()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AStateManager::BeginPlay()
{
	Super::BeginPlay();
	
	GetGameInstance<UManagerGameInstance>()->SetStateManager(this);
}

void AStateManager::Tick(float a_DeltaTime)
{
	Super::Tick(a_DeltaTime);
	
	if (IsValidGameState(m_CurrentState))
	{
		m_CurrentState->GetController(EGameControllers::Players)->OnUpdateState(a_DeltaTime);
		m_CurrentState->GetController(EGameControllers::Camera)->OnUpdateState(a_DeltaTime);
		m_CurrentState->GetController(EGameControllers::UI)->OnUpdateState(a_DeltaTime);
		m_CurrentState->GetController(EGameControllers::GameLoop)->OnUpdateState(a_DeltaTime);
	}
}

bool AStateManager::ChangeState(const FString& a_TargetState)
{
	const bool HasValidState {IsValidGameState(m_CurrentState)};
	const bool CanExitState {!HasValidState || (HasValidState && m_CurrentState->CanExitState())};
	const bool CanChangeState {CanExitState && m_GameStates.Contains(a_TargetState) && m_GameStates[a_TargetState]->CanEnterState()};
	
	if (CanChangeState)
	{
		auto TargetGameState {m_GameStates[a_TargetState]};
		ExitCurrentControllers(TargetGameState);
		
		auto PreviousGameState {m_CurrentState};
		m_CurrentState = TargetGameState;
		StartCurrentControllers(PreviousGameState, nullptr);
		
		UE_LOG(LogTemp, Log, TEXT("GameState '%s' entered successfully."), *m_CurrentState->GetGameStateId());
		m_EventStateChanged.Broadcast(PreviousGameState, m_CurrentState);
	}
	
	return CanChangeState;
}

bool AStateManager::ChangeState(const FString& a_TargetState, void* a_Context)
{
	const bool HasValidState {IsValidGameState(m_CurrentState)};
	const bool CanExitState {!HasValidState || (HasValidState && m_CurrentState->CanExitState())};
	const bool CanChangeState {CanExitState && m_GameStates.Contains(a_TargetState) && m_GameStates[a_TargetState]->CanEnterState()};
	
	if (CanChangeState)
	{
		auto TargetGameState {m_GameStates[a_TargetState]};
		ExitCurrentControllers(TargetGameState);
		
		auto PreviousGameState {m_CurrentState};
		m_CurrentState = TargetGameState;
		StartCurrentControllers(PreviousGameState, a_Context);
		
		UE_LOG(LogTemp, Log, TEXT("GameState '%s' entered successfully."), *m_CurrentState->GetGameStateId());
		m_EventStateChanged.Broadcast(PreviousGameState, m_CurrentState);
	}
	
	return CanChangeState;
}

bool AStateManager::AddState(const FString& a_State, AGameStateData* const a_StateData)
{
	const bool CanCreateState {IsValidGameState(a_StateData) && (m_GameStates.IsEmpty() || !m_GameStates.Contains(a_State))};
	if (CanCreateState)
	{
		m_GameStates.Add(a_State, a_StateData);
	}
	
	return CanCreateState;
}

void AStateManager::ResetStates()
{
	m_GameStates.Reset();
	m_GameStates = TMap<FString, AGameStateData*>();
	if (m_CurrentState != nullptr)
	{
		m_CurrentState->Reset();
	}
}

const FString& AStateManager::GetGameStateId()
{
	return m_CurrentState->GetGameStateId();
}

void AStateManager::StartCurrentControllers(AGameStateData* a_PreviousGameState, void* a_Context)
{
	StartController(a_PreviousGameState, EGameControllers::Players, a_Context);
	StartController(a_PreviousGameState, EGameControllers::Camera, a_Context);
	StartController(a_PreviousGameState, EGameControllers::UI, a_Context);
	StartController(a_PreviousGameState, EGameControllers::GameLoop, a_Context);
}

void AStateManager::ExitCurrentControllers(AGameStateData* a_NextGameState)
{
	if (m_CurrentState && m_CurrentState->GetName() != "None")
	{
		ExitController(a_NextGameState, EGameControllers::GameLoop);
		ExitController(a_NextGameState, EGameControllers::Camera);
		ExitController(a_NextGameState, EGameControllers::UI);
		ExitController(a_NextGameState, EGameControllers::Players);
	}
}

void AStateManager::StartController(AGameStateData* const a_PreviousGameState, EGameControllers a_ControllerId, void* a_Context)
{
	auto TargetController {m_CurrentState->GetController(a_ControllerId)};
	const bool StartController {TargetController && (!IsValidGameState(a_PreviousGameState) || TargetController->ReinitIfMatches() 
		|| (!TargetController->ReinitIfMatches() && TargetController != a_PreviousGameState->GetController(a_ControllerId)))};
	
	if (StartController)
	{
		TargetController->OnContextStart(a_Context);
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
	return a_GameState && a_GameState->GetName() != "None" && a_GameState->GetGameStateId() != "";
}

