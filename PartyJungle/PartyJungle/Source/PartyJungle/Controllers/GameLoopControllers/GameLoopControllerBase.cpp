#include "GameLoopControllerBase.h"

#include <PartyJungle/GameInstance/ManagerGameInstance.h>
#include <PartyJungle/Managers/DuelManager.h>
#include <PartyJungle/Managers/StateManager.h>
#include <PartyJungle/Map/Square.h>


void AGameLoopControllerBase::OnBeginState_Implementation()
{
	ResetGameLoop();
}

void AGameLoopControllerBase::OnStart_Implementation()
{
	ResetGameLoop();
	ShowStartScreenSequence();
}

void AGameLoopControllerBase::OnExit_Implementation()
{
	ResetGameLoop();
}

void AGameLoopControllerBase::UpdateDuelsData()
{
	auto DuelManager {GetGameInstance<UManagerGameInstance>()->GetDuelManager()};
	if (!DuelManager->m_SquaresWithDuelsInRound.IsEmpty())
	{
		TArray<AMinion*> MinionsInDuelSquare = DuelManager->m_SquaresWithDuelsInRound[0]->MinionsList;
		m_PlayingTeams.Empty();
	
		for (AMinion* Minion : MinionsInDuelSquare)
			m_PlayingTeams.Add(static_cast<int>(Minion->Team));
	
		for (auto TeamId : m_PlayingTeams)
		{
			m_TeamsReady.Add(TeamId, false);
			m_GameScores.Add(TeamId, 0);
		}
	}
}

void AGameLoopControllerBase::ResetGameLoop()
{
	m_TeamsReady.Empty();
	m_GameScores.Empty();
	m_GameLoopFinished = false;
}

void AGameLoopControllerBase::FinishGameLoop(int a_Winner)
{
	if (!m_GameLoopFinished)
	{
		m_GameLoopFinished = true;
		GetGameInstance<UManagerGameInstance>()->GetStateManager()->ChangeState(m_NextState);
	}
}

bool AGameLoopControllerBase::IsGameLoopFinished()
{
	bool IsGameLoopFinished = true;

	for (const TPair<int, bool>& Elem : m_TeamsReady)
	{
		if (!Elem.Value)
			IsGameLoopFinished = false;
	}

	return IsGameLoopFinished;
}


int AGameLoopControllerBase::CalculateWinner()
{
	int WinningTeamIndex = -1;
	
	auto DuelManager {GetGameInstance<UManagerGameInstance>()->GetDuelManager()};
	if (DuelManager->IsForcedDuel())
	{
		WinningTeamIndex = 0;
	}
	else
	{
		int MaxScore = TNumericLimits<int>::Min();

		for (const TPair<int, int>& Elem : m_GameScores)
		{
			if (Elem.Value > MaxScore)
			{
				MaxScore = Elem.Value;
				WinningTeamIndex = Elem.Key;
			}
		}
	}

	return WinningTeamIndex;
}

void AGameLoopControllerBase::SetTeamScore(int a_Team, int a_Score)
{
	if (!m_TeamsReady.Contains(a_Team) || !m_GameScores.Contains(a_Team))
		return;

	m_GameScores[a_Team] = a_Score;
}

void AGameLoopControllerBase::SetTeamReady(int a_Team)
{
	// ToDo Capy: Uncomment when completing minigame. Maybe this should go on the WinnerSequence State once the UI Controller is ready?
	/*if (!m_TeamsReady.Contains(a_Team) || !m_GameScores.Contains(a_Team))
		return;

	m_TeamsReady[a_Team] = true;*/
	

	if (IsGameLoopFinished())
		FinishGameLoop(CalculateWinner());
}