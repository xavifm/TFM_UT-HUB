#pragma once

#include <PartyJungle/Player/Minion/Minion.h>

#include "AirCannon.generated.h"

enum class EInputKeys : uint8;
enum class ETriggerEvents : uint8;
class AGameLoopControllerBase;


/**
 * Actor used to control the Air Cannons for the 'AirCannon' Minigame.
 */
UCLASS()
class PARTYJUNGLE_API AAirCannon : public APawn
{
    GENERATED_BODY()

public:
    /**
     * Constructor.
     */
    AAirCannon();

    /**
     * Resets the Air Cannon.
     */
    UFUNCTION(BlueprintCallable)
    void ResetAirCannon();

    /**
     * Increments the shoot force of the Air Cannon.
     */
    UFUNCTION(BlueprintCallable)
    void IncrementUpForce();

    /**
     * Sets the tickle strength for the Air Cannon.
     * @param a_Force Selected tickle strength for the Air Cannon.
     */
    UFUNCTION(BlueprintImplementableEvent)
    void SetTickleStrengthCannon(float a_Force);

    /**
     * Calculates the current shoot strength of the Air Cannon.
     * @return Current shoot strength.
     */
    UFUNCTION()
    float CalculateCurrentPushStrength();

    /**
     * Shoots the Air Cannon.
     */
    UFUNCTION()
    void ShootCannon();

    /**
     * Starts the Air Cannon charge.
     * @param a_Time Time needed for the Air Cannon to charge.
     */
    UFUNCTION()
    void StartCannonCharge(float a_Time);

    /**
     * Finishes the Air Cannon charge.
     */
    UFUNCTION()
    void FinishCannonCharge();

    /**
     * Method triggered when the right button is pressed. It increases the shooting force of the Air Cannon.
     * @param a_InputKey Id of the pressed Input Key.
     * @param a_InputEvent Id of the actioned Trigger Event.
     * @param a_PlayerId Id of the Player that activated the Input Event.
     */
    UFUNCTION()
    void OnButtonRight_Pressed(EInputKeys a_InputKey, ETriggerEvents a_InputEvent, int a_PlayerId);
    
protected:
    /**
     * Overridable native event for when play begins for this actor.
     */
    virtual void BeginPlay() override;
    
    /** 
     * Function called every frame on this Actor. Override this function to implement custom logic to be executed every frame.
     * @param a_DeltaTime Game time elapsed during last frame modified by the time dilation
     */
    virtual void Tick(float a_DeltaTime) override;
    

public:
    UPROPERTY()
    int m_TeamId {-1}; //!< Air Cannon's Team Id.

    UPROPERTY()
    AGameLoopControllerBase* m_GameLoopCtr {nullptr}; //!< Pointer to the Air Cannon's GameLoop Controller.

    UPROPERTY(EditAnywhere)
    AAudioManager* m_AudioManager {nullptr}; //!< Pointer to the AudioManager.

    UPROPERTY()
    APlayerController* m_PlayerController {nullptr}; //!< Pointer to the PlayerController.

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    AActor* m_ProjectileReference {nullptr}; //!< Pointer to the projectile to shoot.

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UPrimitiveComponent* m_ProjectilePhysics {nullptr}; //!< Pointer to the Projectile Physics component.

    UPROPERTY()
    bool m_CannonFinished {false}; //!< Indicates if the Cannon has finished.

    UPROPERTY()
    bool m_CannonCharging {false}; //!< Indicates if the Cannon is charging.

    UPROPERTY()
    int m_UpForce {0}; //!< Shooting force of the Cannon.

    UPROPERTY(BlueprintReadWrite)
    bool m_RamrodPressed {false}; //!< Indicates if the Ramrod is pressed.

    UPROPERTY(BlueprintReadWrite)
    bool m_IsCannonCharging {false}; //!< Indicates if the Cannon is charging.
    
private:
    const float AIR_CANNON_MULIPLIER {45}; //!< Air Cannon's force multiplier.
    const float TICK_UPDATE_TIME {0.1f}; //!< Minimum time for a Tick() update.
    const float BULLET_RESPAWN_OFFSET {150}; //!< Bullet's respawn offset.
    const float MAX_MINIGAME_HEIGHT {7960}; //!< Maximum Minigame's height.
    const float FORCE_CHECK_INTERVAL {1.0f}; //!< Interval between force checks.
    const int MAX_PUSHES_PER_INTERVAL {10}; //!< Maximum pushes per interval force check.
    const FString SHOOT_CANNON_SFX {"ShootCannonSFX"}; //!< Name of the SFX that sounds when the Air Cannon is shot.
    const FString CHARGE_CANNON_SFX {"ChargeCannonSFX"}; //!< Name of the SFX that sounds when the Air Cannon is charging.
    const FString CHARGE_FORCE_CANNON_SFX {"ChargeForceCannonSFX"}; //!< Name of the SFX that sounds when the Air Cannon is charged.

    FTimerHandle m_TimerHandle; //!< Timer used for the Air Cannon delays.

    UPROPERTY()
    TArray<float> m_PushTimestamps; //!< Timestamps for when the Air Cannon is charged.
    
};
