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
	if (!GameInstance || !GameInstance->Challenge)
		return;

	int attackerTeam = static_cast<int>(GameInstance->Attacker->Team);
	int victimTeam = static_cast<int>(GameInstance->Victim->Team);

	TeamsReady.Add(attackerTeam, false);
	TeamsReady.Add(victimTeam, false);

	TeamMinigameScores.Add(attackerTeam, 0);
	TeamMinigameScores.Add(victimTeam, 0);
}

void AMinigameLogic::ResetMinigameScene()
{
	TeamsReady.Empty();
	TeamMinigameScores.Empty();
	MinigameFinished = false;
}

void AMinigameLogic::StartMinigame(int _startTime)
{

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


int AMinigameLogic::CalculateWinner()
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


void AMinigameLogic::ShowWinnerScene(int _endMinigameTime, int _winner)
{

}

void AMinigameLogic::FinishMinigame(int _winner)
{
	if (MinigameFinished)
		return;

	MinigameFinished = true;

	AMapMenuCamera* mapMenuCamera = GameInstance->MapMenuCamera;

	mapMenuCamera->SwitchMainScene();

	if(GameInstance->Challenge) 
	{
		int attackerTeam = static_cast<int>(GameInstance->Attacker->Team);
		int victimTeam = static_cast<int>(GameInstance->Victim->Team);

		int winnerTeam = (_winner == attackerTeam) ? 0 : 1;

		mapMenuCamera->FinishDuel(winnerTeam);
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


