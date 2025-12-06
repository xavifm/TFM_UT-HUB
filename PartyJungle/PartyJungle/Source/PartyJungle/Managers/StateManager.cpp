#include "StateManager.h"

#include "../GameStates/GameStateData.h"

Event UStateManager::m_EventStateChanged;

bool UStateManager::ChangeState(GameStates a_TargetState)
{
	const bool CanChangeState {m_GameStates.contains(a_TargetState) && m_CurrentState->CanExitState() && m_GameStates.at(a_TargetState)->CanEnterState()};
	if (CanChangeState)
	{
		ExitControllers();
	
		m_CurrentState = m_GameStates.at(a_TargetState);
		StartControllers();
	
		m_EventStateChanged.Broadcast();
	}
	
	return CanChangeState;
}

bool UStateManager::AddState(GameStates a_State, AGameStateData* const a_StateData)
{
	const bool CanCreateState {!m_GameStates.contains(a_State)};
	if (CanCreateState)
	{
		m_GameStates.emplace(a_State, a_StateData);
	}
	
	return CanCreateState;
}

void UStateManager::StartControllers()
{
	m_CurrentState->GetMapController()->Start();
	m_CurrentState->GetCameraController()->Start();
	m_CurrentState->GetCharactersController()->Start();
	m_CurrentState->GetUIController()->Start();
}

void UStateManager::ExitControllers()
{
	if (m_CurrentState)
	{
		m_CurrentState->GetMapController()->Exit();
		m_CurrentState->GetCameraController()->Exit();
		m_CurrentState->GetCharactersController()->Exit();
		m_CurrentState->GetUIController()->Exit();
	}
}

