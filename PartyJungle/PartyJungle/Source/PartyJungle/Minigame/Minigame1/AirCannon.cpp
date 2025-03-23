#include "./AirCannon.h"
#include "TimerManager.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include <Kismet/GameplayStatics.h>

AAirCannon::AAirCannon()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AAirCannon::BeginPlay()
{
    Super::BeginPlay();

    FTimerHandle TickForceTimer;
    GetWorld()->GetTimerManager().SetTimer(
        TickForceTimer,
        this,
        &AAirCannon::CheckForMinigameEnd,
        TICK_UPDATE_TIME,
        true
    );

    APlayerController* PC = UGameplayStatics::GetPlayerController(GetWorld(), 0);
    if (PC)
    {
        UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PC->GetLocalPlayer());
        if (Subsystem)
        {
            if (!Subsystem->HasMappingContext(InputMappingContext))
            {
                Subsystem->AddMappingContext(InputMappingContext, 0);
            }
        }
    }

    ProjectileReference->SetActorHiddenInGame(true);
}


void AAirCannon::CheckForMinigameEnd()
{
    if(!CannonCharging && !CannonFinished && ProjectilePhysics && MinigameLogic)
    {
        if (ProjectilePhysics->GetPhysicsLinearVelocity().Z < 0)
        {
            CannonFinished = true;
            MinigameLogic->SetTeamReady(CannonTeam);
        }
    }
}

void AAirCannon::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);

    if (UEnhancedInputComponent* EnhancedInput = Cast<UEnhancedInputComponent>(PlayerInputComponent))
    {
        EnhancedInput->BindAction(KeyaAction, ETriggerEvent::Started, this, &AAirCannon::IncrementUpForce);
        EnhancedInput->bBlockInput = false;
    }
}

void AAirCannon::ResetProjectilePosition()
{
    FVector newPosition = GetActorLocation() + FVector(0, 0, BULLET_RESPAWN_OFFSET);
    ProjectileReference->SetActorRelativeLocation(newPosition);
}

void AAirCannon::IncrementUpForce()
{
    if (!CannonCharging || CannonFinished)
        return;

    UpForce++;
}


void AAirCannon::ShootCannon()
{
    MinigameLogic->SetTeamScore(CannonTeam, UpForce);

    if(UpForce <= 5)
        MinigameLogic->SetTeamReady(CannonTeam);

    if (ProjectileReference)
    {
        ProjectileReference->SetActorHiddenInGame(false);
        ProjectilePhysics = Cast<UPrimitiveComponent>(ProjectileReference->GetRootComponent());
        if (ProjectilePhysics)
        {
            ProjectilePhysics->SetSimulatePhysics(true);
            FVector LaunchForce = FVector(0.0f, 0.0f, UpForce * AIR_CANNON_MULIPLIER);
            ProjectilePhysics->AddImpulse(LaunchForce, NAME_None, true);
        }
    }
}

void AAirCannon::StartCannonCharge(float _time)
{
    if (!MinionReference)
        return;

    CannonCharging = true;

    PlayerController = UGameplayStatics::GetPlayerController(GetWorld(), static_cast<int32>(MinionReference->Team));
    if (PlayerController) 
    {
        PlayerController->bAutoManageActiveCameraTarget = false;
        PlayerController->Possess(this);
    }

    GetWorld()->GetTimerManager().SetTimerForNextTick([this, _time]() {
        FinishCannonCharge();
        });
}

void AAirCannon::FinishCannonCharge()
{
    CannonCharging = false;
    ShootCannon();
}


