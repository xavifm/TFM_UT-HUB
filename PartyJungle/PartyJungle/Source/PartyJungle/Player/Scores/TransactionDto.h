#pragma once

#include "CoreMinimal.h"
#include "TransactionDto.generated.h"

UCLASS()
class PARTYJUNGLE_API UTransactionDto : public UObject
{
	GENERATED_BODY()

public:	
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Transaction")
    int Team;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Transaction")
    int Coins;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Transaction")
    int Crowns;

    UTransactionDto()
        : Team(0), Coins(0), Crowns(0)
    {}

    UTransactionDto(int InTeam, int InCoins, int InCrowns)
        : Team(InTeam), Coins(InCoins), Crowns(InCrowns) 
    {}
};
