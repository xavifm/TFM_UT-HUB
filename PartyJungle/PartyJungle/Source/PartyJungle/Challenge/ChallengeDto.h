#pragma once

#include "CoreMinimal.h"
#include "ChallengeDto.generated.h"

UCLASS()
class PARTYJUNGLE_API UChallengeDto : public UObject
{
	GENERATED_BODY()
	
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Challenge")
    int WinnerTeam;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Challenge")
    int BetPercentage;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Challenge")
    int CoinsGained;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Challenge")
    int CrownsGained;

    UChallengeDto()
        : WinnerTeam(0), BetPercentage(0), CoinsGained(0), CrownsGained(0)
    {}
    
    void Init(
        int _winnerTeam,
        int _betPercentage,
        int _inCoinsGained,
        int _inCrownsGained)
    {
        WinnerTeam = _winnerTeam;
        BetPercentage = _betPercentage;
        CoinsGained = _inCoinsGained;
        CrownsGained = _inCrownsGained;
    }
};
