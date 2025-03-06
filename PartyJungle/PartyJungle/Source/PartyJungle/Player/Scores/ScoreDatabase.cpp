#include "./ScoreDatabase.h"

AScoreDatabase::AScoreDatabase()
{
	PrimaryActorTick.bCanEverTick = true;

}

TMap<int, UScoreDto*> AScoreDatabase::GetScoreList() const
{
	return Scores;
}

UScoreDto* AScoreDatabase::GetScore(int PlayerID) const
{
	return Scores[PlayerID];
}

void AScoreDatabase::UpdateGlobalPositions()
{
}

void AScoreDatabase::UpdateTotalCoins(int PlayerID, int Quantity)
{
	Scores[PlayerID]->TotalCoins += Quantity;
}

void AScoreDatabase::UpdateCrowns(int PlayerID, int Quantity)
{
	Scores[PlayerID]->StoredCrowns += Quantity;
}

void AScoreDatabase::BeginPlay()
{
	Super::BeginPlay();
	InitializeScores();
	
}

void AScoreDatabase::InitializeScores()
{
	for (int team = 0; team < MAX_TEAMS_NUMBER; team++)
	{
		Scores[team] = NewObject<UScoreDto>(this);
		Scores[team]->Team = team;
	}
}
