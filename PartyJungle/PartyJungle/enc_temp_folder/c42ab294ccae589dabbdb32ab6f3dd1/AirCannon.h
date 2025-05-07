#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/Actor.h"
#include <PartyJungle/Player/Minion/Minion.h>
#include <EnhancedInputComponent.h>
#include <EnhancedInputSubsystems.h>
#include <PartyJungle/Minigame/CrossInfo/MinigameLogic.h>
#include "AirCannon.generated.h"

UCLASS()
class PARTYJUNGLE_API AAirCannon : public APawn
{
    GENERATED_BODY()

public:
    AAirCannon();


protected:
    virtual void BeginPlay() override;
    void Tick(float DeltaTime);

    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:
    UPROPERTY()
    int CannonTeam;

    UPROPERTY()
    AMinion* MinionReference;

    UPROPERTY()
    AMinigameLogic* MinigameLogic;

    UPROPERTY()
    APlayerController* PlayerController;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    AActor* ProjectileReference;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UPrimitiveComponent* ProjectilePhysics;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Input")
    UInputMappingContext* InputMappingContext;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Input")
    UInputAction* KeyaAction;

    UPROPERTY()
    bool CannonFinished;

    UPROPERTY()
    bool CannonCharging;

    UPROPERTY()
    int UpForce;

    UFUNCTION(BlueprintCallable)
    void ResetProjectilePosition();

    UFUNCTION(BlueprintCallable)
    void IncrementUpForce();

    UFUNCTION()
    void ShootCannon();

    UFUNCTION()
    void StartCannonCharge(float _time);

    UFUNCTION()
    void FinishCannonCharge();

private:
    const float AIR_CANNON_MULIPLIER = 150;
    const float TICK_UPDATE_TIME = 0.1f;
    const float BULLET_RESPAWN_OFFSET = 150;
    const float MAX_MINIGAME_HEIGHT = 7960;

    FTimerHandle TimerHandle;
};

