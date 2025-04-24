#include "./ScoresCalculator.h"
#include <PartyJungle/Minigame/CrossInfo/MinigameDataGameInstance.h>

AScoresCalculator::AScoresCalculator()
{
	PrimaryActorTick.bCanEverTick = false;
}

void AScoresCalculator::BeginPlay()
{
	InitializeInfo();
}

void AScoresCalculator::InitializeInfo()
{
	UMinigameDataGameInstance* GameInstance = Cast<UMinigameDataGameInstance>(GetGameInstance());

	if (GameInstance)
	{
		Scores = GameInstance->Scores;
		TransactionsRegistry = GameInstance->TransactionsRegistry;
		ChallengesRegistry = GameInstance->ChallengesRegistry;
	}
}

int AScoresCalculator::GetBestDuelingTeam()
{
	return 0;
}

int AScoresCalculator::GetWorstDuelingTeam()
{
	return 0;
}

int AScoresCalculator::CompensationCrown()
{
	return 0;
}

int AScoresCalculator::GetWinnerTeam()
{
	return 0;
}
