#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/Actor.h"
#include <PartyJungle/Minigame/CrossInfo/MinigameLogic.h>
#include <PartyJungle/Player/Minion/Minion.h>
#include <EnhancedInputComponent.h>
#include "AirCannon.generated.h"

UCLASS()
class PARTYJUNGLE_API AAirCannon : public APawn
{
    GENERATED_BODY()

public:
    AAirCannon();

protected:
    virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;

public:
    UPROPERTY()
    int CannonTeam;

    UPROPERTY()
    AMinion* MinionReference;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    AActor* ProjectileReference;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Input")
    UInputAction* KeyaAction;

    UPROPERTY()
    bool CannonFinished;

    UPROPERTY()
    bool CannonCharging;

    UPROPERTY()
    int UpForce;

    UFUNCTION()
    void IncrementUpForce();

    UFUNCTION()
    void ShootCannon();

    UFUNCTION()
    void StartCannonCharge(float _time);

    UFUNCTION()
    void FinishCannonCharge();
};

