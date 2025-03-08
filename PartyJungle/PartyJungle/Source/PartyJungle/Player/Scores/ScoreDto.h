#pragma once

#include "CoreMinimal.h"
#include "ScoreDto.generated.h"

UCLASS(BlueprintType)
class PARTYJUNGLE_API UScoreDto : public UObject
{
    GENERATED_BODY()

public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Score")
    int Team;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Score")
    int GlobalPosition;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Score")
    int TotalCoins;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Score")
    int StoredCrowns;

    UScoreDto()
        : Team(0), GlobalPosition(0), TotalCoins(0), StoredCrowns(0) {}

    UScoreDto(int InTeam, int InGlobalPosition, int InTotalCoins, int InStoredCrowns)
        : Team(InTeam), GlobalPosition(InGlobalPosition), TotalCoins(InTotalCoins), StoredCrowns(InStoredCrowns) {}
};
