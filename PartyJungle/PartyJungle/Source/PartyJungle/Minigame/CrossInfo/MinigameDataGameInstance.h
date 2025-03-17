#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include <PartyJungle/Player/Minion/Minion.h>
#include "MinigameDataGameInstance.generated.h"

/**
 * 
 */

class AMapMenuCamera;

UCLASS()
class PARTYJUNGLE_API UMinigameDataGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	// Entry minigame info
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<int32> Teams;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TMap<int32, AMinion*> PlayingMinions;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	AMinion* Attacker;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	AMinion* Victim;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	AMapMenuCamera* MapMenuCamera;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool Challenge;

	// Exit minigame info
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<int32> WinnerTeams;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TMap<int32, AMinion*> WinnerMinions;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool Draw;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int32 ChallengeWinner;
};
