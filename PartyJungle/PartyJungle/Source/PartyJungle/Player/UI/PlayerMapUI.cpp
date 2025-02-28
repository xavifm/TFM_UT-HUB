#include "PlayerMapUI.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"
#include "./PlayerMapUI.h"

void UPlayerMapUI::UpdateCoins(int Team, int Quantity)
{
	if (ScoresDb) 
	{
		ScoresDb->UpdateTotalCoins(Team, Quantity);
		UpdateUIScore(ScoresDb);
	}
}

void UPlayerMapUI::UpdateCrowns(int Team, int Quantity)
{
	if (ScoresDb)
	{
		ScoresDb->UpdateCrowns(Team, Quantity);
		UpdateUIScore(ScoresDb);
	}
}
