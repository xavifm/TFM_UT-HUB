#include "./RoundsManager.h"
#include <Kismet/GameplayStatics.h>

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

	if (GetRoundsLeft() > 0)
		StartNextRound();
	else 
	{
		GameFinished = true;
		GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &ARoundsManager::FinishGame, 1, false);
	}
}

void ARoundsManager::StartNextRound()
{
	if (!MapUI)
		return;

	CurrentRound++;

	int RoundShown = GetRoundsLeft();
	FString FeedbackText;

	if(RoundShown <= MIN_ROUNDS_ANNOUNCED)
	{
		FeedbackText = FString::Printf(TEXT("%d turns left"), RoundShown);

		if(RoundShown == 0)
			FeedbackText = FString::Printf(TEXT("Last Round!"));

		MapUI->ShowTextInScreen(FeedbackText, -1);
	}
}

int ARoundsManager::GetRoundsLeft()
{
	return MaxRounds - CurrentRound;
}

void ARoundsManager::FinishGame()
{
	GetWorld()->GetTimerManager().ClearTimer(TimerHandle);

	if (!MapUI || !ScoresDB || !ChallengeDB)
		return;

	ScoresDB->SendTransactionsAndScoresToInstance();
	ChallengeDB->SendRegistryToInstance();

	UGameplayStatics::OpenLevel(this, FName(END_GAME_SCENE_NAME));
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

