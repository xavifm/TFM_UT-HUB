#include "./MinigameLogic.h"

AMinigameLogic::AMinigameLogic()
{
	PrimaryActorTick.bCanEverTick = false;

}

void AMinigameLogic::BeginPlay()
{
	Super::BeginPlay();
	StartMinigame(StartTime);
	
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

