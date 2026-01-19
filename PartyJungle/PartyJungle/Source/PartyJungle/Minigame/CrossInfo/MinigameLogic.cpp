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
		
		switch(MinigameType)
		{
			case EMinigameType::DUEL:
				InitializeMinigameInfoForDuel();
			break;
			case EMinigameType::TEAM_MINIGAME:
				InitializeMinigameInfoForTeam();
			break;
		}
			
		StartMinigame(StartTime);
	}
}

void AMinigameLogic::InitializeMinigameInfoForTeam()
{
	TArray<AMinion*> minionList;
	
	for (int index = 0 ; index < MapMenuCamera->MAX_TEAM_NUMBER ; index++)
	{
		minionList.Add(MapMenuCamera->MapDb->GetMinion(index, 0));	
	}
	
	switch(TeamMode) 
	{
		case ETeamsMode::TWO_VS_TWO:
			PlayingMinionsTeamMinigame = TeamsGenerator->GetTwoVsTwoTeam(minionList);
		break;
		case ETeamsMode::ONE_VS_THREE:
			PlayingMinionsTeamMinigame = TeamsGenerator->GetOneVsThreeTeam(minionList);
		break;
	}
	
	StartMinigameScoresAndReadyInfo(minionList);
}

void AMinigameLogic::InitializeMinigameInfoForDuel()
{
	if (!MapMenuCamera)
		return;
	
	TArray<AMinion*> minionList = MapMenuCamera->ChallengeInformation->SquaresWithDuelsInRound[0]->MinionsList;
	PlayingMinionsDuel.Empty();
	
	for (AMinion* minion : minionList)
		PlayingMinionsDuel.Add(static_cast<int>(minion->Team), minion);
	
	StartMinigameScoresAndReadyInfo(minionList);
}

void AMinigameLogic::StartMinigameScoresAndReadyInfo(TArray<AMinion*> _minions)
{
	TMap<int, AMinion*> minionList;
	TeamsReady.Empty();
	TeamMinigameScores.Empty();
	
	for (AMinion* minion : _minions)
		minionList.Add(static_cast<int>(minion->Team), minion);
	
	for (auto Player : minionList)
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
			int32 duelWinner = CaculateDuelWinner();	
			WinningTeams.Add(duelWinner);
			break;		
		}
		case EMinigameType::TEAM_MINIGAME:
		{
			TArray<int32> minigameWinners = CalculateTeamMinigameWinners();	
			WinningTeams = minigameWinners;
			break;	
		}
	}
	
	return WinningTeams;
}

TArray<int32> AMinigameLogic::CalculateTeamMinigameWinners()
{
	TArray<int32> WinnersTeams;
	
	for (const TPair<int32, int32>& Elem : TeamMinigameScores)
	{
		if (Elem.Value > 0)
		{
			int32 key = Elem.Key;
			WinnersTeams.Add(key);
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

auto WinnersToText(const TArray<int32>& Winners)
{
	FString Result;

	for (int32 i = 0; i < Winners.Num(); ++i)
	{
		Result += FString::FromInt(Winners[i]);

		if (i < Winners.Num() - 1)
		{
			Result += TEXT(", ");
		}
	}

	return FText::FromString(Result);
}

void AMinigameLogic::ShowWinnerScene(int _endMinigameTime, TArray<int32> _winners)
{
	Winners = _winners;

	switch (MinigameType)
	{
		case EMinigameType::DUEL: 
		{
			ShowEndScreenSequence(_winners[0]);
			break;
		}
		case EMinigameType::TEAM_MINIGAME:
		{
			FText winnersText = WinnersToText(_winners);
			ShowTeamEndScreenSequence(winnersText);
			break;		
		}
}
	
	//ShowEndScreenSequence(_winners[0]); <- AQUÍ PETA
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
				MapMenuCamera->FinishMinigame(Winners, MinigameMoney);
				break;
		}
	}
}


void AMinigameLogic::SetTeamScore(int32 _team, int32 _score)
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
	{
		TArray<int32> winners = CalculateWinner();
		FinishMinigame(winners);
	}
}


