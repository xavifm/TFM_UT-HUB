#include "./MinigameLogic.h"
#include <PartyJungle/Player/Map/MapMenuCamera.h>

AMinigameLogic::AMinigameLogic()
{
	PrimaryActorTick.bCanEverTick = false;

}

void AMinigameLogic::BeginMinigame()
{
	GameInstance = Cast<UMinigameDataGameInstance>(GetGameInstance());

	if(GameInstance) 
	{
		ResetMinigameScene();
		InitializeMinigameInfoForDuel();
		StartMinigame(StartTime);
	}
}

void AMinigameLogic::InitializeMinigameInfoForDuel()
{
	if (!MapMenuCamera)
		return;
	
	TArray<AMinion*> minionList = MapMenuCamera->ChallengeInformation->SquaresWithDuelsInRound[0]->MinionsList;
	PlayingMinions.Empty();
	
	for (AMinion* minion : minionList)
		PlayingMinions.Add(static_cast<int>(minion->Team), minion);
	
	for (auto Player : PlayingMinions)
	{
		TeamsReady.Add(Player.Key, false);
		TeamMinigameScores.Add(Player.Key, 0);
	}
}

void AMinigameLogic::ResetMinigameScene()
{
	TeamsReady.Empty();
	TeamMinigameScores.Empty();
	MinigameFinished = false;
}

void AMinigameLogic::StartMinigame(int _startTime)
{
	ShowStartScreenSequence();
}

bool AMinigameLogic::CheckIfTheMinigameHasFinished()
{
	bool query = true;

	for (const TPair<int, bool>& Elem : TeamsReady)
	{
		if (!Elem.Value)
			query = false;
	}

	return query;
}


TArray<int32> AMinigameLogic::CalculateWinner()
{
	TArray<int32> WinningTeams;
	int MaxScore = TNumericLimits<int>::Min();

	switch (MinigameType)
	{
		case EMinigameType::DUEL:
		{
			int duelWinner = CaculateDuelWinner();	
			WinningTeams.Add(duelWinner);
			break;		
		}
		case EMinigameType::TEAM_MINIGAME:
		{
			TArray<int32> minigameWinners = CalculateTeamMinigameWinners();	
			WinningTeams = 	minigameWinners;
			break;	
		}
	}
	
	return WinningTeams;
}

TArray<int32> AMinigameLogic::CalculateTeamMinigameWinners()
{
	TArray<int32> WinnersTeams;
	
	for (const TPair<int, int>& Elem : TeamMinigameScores)
	{
		if (Elem.Value > 0)
		{
			WinnersTeams.Add(Elem.Key);
		}
	}
	
	return WinnersTeams;
}

int AMinigameLogic::CaculateDuelWinner()
{
	int WinningTeamIndex = -1;
	int MaxScore = TNumericLimits<int>::Min();
	
	for (const TPair<int, int>& Elem : TeamMinigameScores)
	{
		if (Elem.Value > MaxScore)
		{
			MaxScore = Elem.Value;
			WinningTeamIndex = Elem.Key;
		}
	}

	return WinningTeamIndex;
}

void AMinigameLogic::ShowWinnerScene(int _endMinigameTime, TArray<int32> _winners)
{
	Winners = _winners;
	ShowEndScreenSequence(_winners[0]);
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &AMinigameLogic::DelayedSceneSwitch, _endMinigameTime, false);
}

void AMinigameLogic::FinishMinigame(TArray<int32> _winners)
{
	if (MinigameFinished)
		return;

	MinigameFinished = true;
	ShowWinnerScene(SWITCH_SCENE_TIMER, _winners);
}

void AMinigameLogic::DelayedSceneSwitch()
{
	GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
	ResetMinigameScene();

	if (MapMenuCamera)
	{
		MapMenuCamera->SwitchMainScene();
		switch (MinigameType)
		{
			case EMinigameType::DUEL:
				MapMenuCamera->FinishDuel(Winners[0], MapMenuCamera->ChosenDuelIndex);
				break;
			case EMinigameType::TEAM_MINIGAME:
				
				break;
		}
	}
}


void AMinigameLogic::SetTeamScore(int _team, int _score)
{
	if (!TeamsReady.Contains(_team) || !TeamMinigameScores.Contains(_team))
		return;

	TeamMinigameScores[_team] = _score;
}

void AMinigameLogic::SetTeamReady(int _team)
{
	if (!TeamsReady.Contains(_team) || !TeamMinigameScores.Contains(_team))
		return;

	TeamsReady[_team] = true;

	if (CheckIfTheMinigameHasFinished())
		FinishMinigame(CalculateWinner());
}


