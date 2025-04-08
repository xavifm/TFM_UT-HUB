#include "RoundsManager.h"
#include "./RoundsManager.h"

ARoundsManager::ARoundsManager()
{
	PrimaryActorTick.bCanEverTick = false;

}

void ARoundsManager::BeginPlay()
{
	Super::BeginPlay();
	CurrentRound = 1;
}

int ARoundsManager::GetCurrentRound()
{
	return CurrentRound;
}

void ARoundsManager::HandleEndRound(bool _minigame)
{
	if (_minigame) 
	{
		StartEndRoundMinigame();
		return;
	}

	if (CurrentRound < MaxRounds)
		StartNextRound();
	else
		FinishGame();
}

void ARoundsManager::StartNextRound()
{
	if (!MapUI)
		return;

	CurrentRound++;
	MapUI->ShowRoundFeedback(CurrentRound);
}

void ARoundsManager::FinishGame()
{
	if (!MapUI)
		return;
}

void ARoundsManager::StartEndRoundMinigame()
{
	if (!MapUI)
		return;
}

void ARoundsManager::AssignMapUI(UPlayerMapUI* _mapUI)
{
	MapUI = _mapUI;
}

