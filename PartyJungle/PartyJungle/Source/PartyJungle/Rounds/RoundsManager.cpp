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

TArray<bool> ARoundsManager::HandleEndRound(bool _minigame)
{
	TArray<bool> minigamesResult;
	bool duelsQuery = false;
	bool minigameQuery = false;
	
	if (_minigame) 
	{
		duelsQuery = CheckForDuelMinigame();
		minigameQuery = CheckForEndRoundMinigame();
		
		minigamesResult.Add(duelsQuery);
		minigamesResult.Add(minigameQuery);
		
		if (duelsQuery || minigameQuery)
			return minigamesResult;
	}

	if (GetRoundsLeft() > 0)
		StartNextRound();
	else 
	{
		GameFinished = true;
		GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &ARoundsManager::FinishGame, 1, false);
	}

	return minigamesResult;
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

		if (AudioManager)
			AudioManager->PlaySFX(LAST_ROUNDS_SFX, LAST_ROUNDS_SFX_VOLUME);
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

bool ARoundsManager::CheckForDuelMinigame()
{
	bool minigameQuery = false;
	
	if (!MapUI || !ChallengeInfo)
		return minigameQuery;

	if (ChallengeInfo->SquaresWithDuelsInRound.Num() > 0)
		minigameQuery = true;

	return minigameQuery;
}

bool ARoundsManager::CheckForEndRoundMinigame()
{
	return EndRoundMinigameAvailable;
}

void ARoundsManager::AssignMapUI(UPlayerMapUI* _mapUI)
{
	MapUI = _mapUI;
}

