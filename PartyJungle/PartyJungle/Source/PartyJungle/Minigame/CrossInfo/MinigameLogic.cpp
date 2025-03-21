#include "./MinigameLogic.h"

AMinigameLogic::AMinigameLogic()
{
	PrimaryActorTick.bCanEverTick = false;

}

void AMinigameLogic::BeginMinigame()
{
	GameInstance = Cast<UMinigameDataGameInstance>(GetGameInstance());

	if(GameInstance) 
	{
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

void AMinigameLogic::StartMinigame(int _startTime)
{

}

bool AMinigameLogic::CheckIfTheMinigameHasFinished()
{
	return true;
}

int AMinigameLogic::CalculateWinner(bool _isChallenge)
{
	return 0;
}

void AMinigameLogic::ShowWinnerScene(int _endMinigameTime, int _winner)
{

}

void AMinigameLogic::FinishMinigame(int _winner, bool _draw)
{

}

void AMinigameLogic::SetTeamReady(int _team)
{
}

