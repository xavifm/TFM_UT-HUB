#include "PlayerMapUI.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"
#include "./PlayerMapUI.h"

void UPlayerMapUI::UpdateCoins(int Team, int Quantity)
{
	if (Quantity == 0)
		return;

	if (ScoresDb) 
	{
		ScoresDb->UpdateTotalCoins(Team, Quantity);
		ScoresDb->AddTransactionToRegistry(Team, Quantity, 0);
		UpdateUIScore(ScoresDb);
	}
}

void UPlayerMapUI::UpdateCrowns(int Team, int Quantity)
{
	if (Quantity == 0)
		return;

	if (ScoresDb)
	{
		ScoresDb->UpdateCrowns(Team, Quantity);
		ScoresDb->AddTransactionToRegistry(Team, 0, Quantity);
		UpdateUIScore(ScoresDb);
	}
}
