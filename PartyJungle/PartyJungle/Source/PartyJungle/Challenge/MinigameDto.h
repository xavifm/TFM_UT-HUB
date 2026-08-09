#pragma once

#include "CoreMinimal.h"
#include "MinigameDto.generated.h"

UCLASS()
class PARTYJUNGLE_API UMinigameDto : public UObject
{
	GENERATED_BODY()
	
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Challenge")
	TArray<int> WinnerTeam;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Challenge")
	int CoinsReward;
    
	void Init(
		TArray<int> _winnerTeam,
		int _coinsReward)
	{
		WinnerTeam = _winnerTeam;
		CoinsReward = _coinsReward;
	}
};
