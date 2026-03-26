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
		ScoresDb->UpdateGlobalPositions();
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
		ScoresDb->UpdateGlobalPositions();
	}
}

int UPlayerMapUI::SpinWheel(int WheelSize)
{
	SpinWheelEvent(WheelSize);
	return WheelValue;
}

void UPlayerMapUI::InitializePotRoulette(int RouletteSize, TArray<std::pair<int, std::pair<int, int>>> PotElements)
{
	SavedPotElements = PotElements;
	
	for (auto Element : SavedPotElements)
	{
		int position = Element.first;
		int player = Element.second.first;
		FString option = "ERROR!";
		option = FString::FromInt(Element.second.second);

		InitializeRouletteElement(RouletteSize, position, player, option);
	}


	for (int index = 0 ; index < MAX_LOCAL_PLAYERS; index++)
		SwitchChallengePlayerUIVisibility(index, false);
	
	SwitchRouletteVisibility(RouletteSize, true);
}
