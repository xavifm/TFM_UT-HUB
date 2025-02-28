#pragma once

#include "CoreMinimal.h"
#include "ScoreDto.generated.h"

USTRUCT(BlueprintType)
struct PARTYJUNGLE_API FScoreDto
{
    GENERATED_BODY()

public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int Team;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int GlobalPosition;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int TotalCoins;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int StoredCrowns;

    FScoreDto()
        : Team(0), GlobalPosition(0), TotalCoins(0), StoredCrowns(0) {}

    FScoreDto(int InTeam, int InGlobalPosition, int InTotalCoins, int InStoredCrowns)
        : Team(InTeam), GlobalPosition(InGlobalPosition), TotalCoins(InTotalCoins), StoredCrowns(InStoredCrowns) {}
};
