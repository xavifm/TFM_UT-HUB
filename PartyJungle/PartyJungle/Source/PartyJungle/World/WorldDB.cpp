#include "./WorldDB.h"

TArray<AActor*> AWorldDB::GetLevelByIndex(int _index)
{
	if (_index == -1)
		return BoardActors;
	
	return Minigames[_index]->MinigameActors;
}

TArray<AMinigameLogic*> AWorldDB::GetMinigamesOfType(EMinigameType _type, ETeamsMode _teams)
{
	TArray<AMinigameLogic*> result;

	for (AMinigameLogic* Minigame : Minigames)
	{
		if (!IsValid(Minigame))
		{
			continue;
		}

		if (Minigame->MinigameType == _type &&
			Minigame->TeamMode == _teams)
		{
			result.Add(Minigame);
		}
	}

	return result;
}

AMinigameLogic* AWorldDB::GetRandomMinigameOfType(EMinigameType _type, ETeamsMode _teams)
{
	TArray<AMinigameLogic*> filteredMinigames = GetMinigamesOfType(_type, _teams);

	if (filteredMinigames.Num() == 0)
	{
		return nullptr;
	}

	const int32 randomIndex = FMath::RandRange(0, filteredMinigames.Num() - 1);

	return filteredMinigames[randomIndex];
}

TArray<AMinigameLogic*> AWorldDB::GetAllMinigames()
{
	return Minigames;
}

TArray<AActor*> AWorldDB::GetMapActors()
{
	return BoardActors;
}

