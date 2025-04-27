#pragma once

#include "CoreMinimal.h"
#include "ChallengeDto.generated.h"

UCLASS()
class PARTYJUNGLE_API UChallengeDto : public UObject
{
	GENERATED_BODY()
	
public:

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Challenge")
    int AttackerTeam;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Challenge")
    int VictimTeam;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Challenge")
    int WinnerTeam;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Challenge")
    int BetStyle;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Challenge")
    int CoinsGained;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Challenge")
    int CrownsGained;

    UChallengeDto()
        : AttackerTeam(0), VictimTeam(0), WinnerTeam(0), BetStyle(0), CoinsGained(0), CrownsGained(0)
    {}

    UChallengeDto(int InAttackerTeam, int InVictimTeam, int InWinnerTeam, int InBetStyle, int InCoinsGained, int InCrownsGained)
        : AttackerTeam(InAttackerTeam),
        VictimTeam(InVictimTeam),
        WinnerTeam(InWinnerTeam),
        BetStyle(InBetStyle),
        CoinsGained(InCoinsGained),
        CrownsGained(InCrownsGained)
    {}
};
