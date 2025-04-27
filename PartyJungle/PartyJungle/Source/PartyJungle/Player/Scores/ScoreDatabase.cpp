#include "./ScoreDatabase.h"
#include <PartyJungle/Minigame/CrossInfo/MinigameDataGameInstance.h>

AScoreDatabase::AScoreDatabase()
{
	PrimaryActorTick.bCanEverTick = true;

}

TArray<UScoreDto*> AScoreDatabase::GetScoresArray() const
{
	return Scores;
}

void AScoreDatabase::AddTransactionToRegistry(int Team, int Coins, int Crowns)
{
	UTransactionDto* registry = NewObject<UTransactionDto>();

	if (!registry)
		return;

	registry->Team = Team;
	registry->Coins = Coins;
	registry->Crowns = Crowns;

	TransactionsRegistry.Add(registry);
}

void AScoreDatabase::SendTransactionsAndScoresToInstance()
{
	UMinigameDataGameInstance* GameInstance = Cast<UMinigameDataGameInstance>(GetGameInstance());

	if (GameInstance)
	{
		GameInstance->Scores = Scores;
		GameInstance->TransactionsRegistry = TransactionsRegistry;
	}
}

UScoreDto* AScoreDatabase::GetScore(int PlayerID) const
{
	for (UScoreDto* Score : Scores)
	{
		if (Score && Score->Team == PlayerID)
			return Score;
	}

	return nullptr;
}

void AScoreDatabase::UpdateGlobalPositions()
{
}

void AScoreDatabase::UpdateTotalCoins(int PlayerID, int Quantity)
{
	Scores[PlayerID]->TotalCoins += Quantity;
	Scores[PlayerID]->TotalCoins = FMath::Clamp(Scores[PlayerID]->TotalCoins, 0, MAX_PLAYER_COINS);
}

void AScoreDatabase::UpdateCrowns(int PlayerID, int Quantity)
{
	Scores[PlayerID]->StoredCrowns += Quantity;
	Scores[PlayerID]->StoredCrowns = FMath::Clamp(Scores[PlayerID]->StoredCrowns, 0, MAX_PLAYER_CROWNS);
}

void AScoreDatabase::BeginPlay()
{
	Super::BeginPlay();
	InitializeScores();
	
}

void AScoreDatabase::InitializeScores()
{
	UMinigameDataGameInstance* GameInstance = Cast<UMinigameDataGameInstance>(GetGameInstance());

	if (!GameInstance)
		return;

	for (int team = 0; team < MAX_TEAMS_NUMBER; team++)
	{
		UScoreDto* newScore = NewObject<UScoreDto>(GameInstance);

		if (newScore)
		{
			newScore->Team = team;
			Scores.Add(newScore);
		}
	}
}
