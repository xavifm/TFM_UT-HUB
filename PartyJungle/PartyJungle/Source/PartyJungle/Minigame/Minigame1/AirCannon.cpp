#include "./AirCannon.h"
#include "TimerManager.h"

AAirCannon::AAirCannon()
{
	PrimaryActorTick.bCanEverTick = false;

}

void AAirCannon::BeginPlay()
{
    if (APlayerController* PC = Cast<APlayerController>(GetController()))
    {
        if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PC->GetLocalPlayer()))
        {
            Subsystem->AddMappingContext(InputMappingContext, 0);
        }
    }
}

void AAirCannon::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);

    if (UEnhancedInputComponent* EnhancedInput = Cast<UEnhancedInputComponent>(PlayerInputComponent))
    {
        EnhancedInput->BindAction(KeyaAction, ETriggerEvent::Started, this, &AAirCannon::IncrementUpForce);
    }
}

void AAirCannon::IncrementUpForce()
{
    if (!CannonCharging || CannonFinished)
        return;

    UpForce++;
}


void AAirCannon::ShootCannon()
{
    if (ProjectileReference)
    {
        UPrimitiveComponent* ProjectilePhysics = Cast<UPrimitiveComponent>(ProjectileReference->GetRootComponent());
        if (ProjectilePhysics)
        {
            ProjectilePhysics->SetSimulatePhysics(true);
            FVector LaunchForce = FVector(0.0f, 0.0f, UpForce * 20.0f);
            ProjectilePhysics->AddImpulse(LaunchForce, NAME_None, true);
        }
    }
}

void AAirCannon::StartCannonCharge(float _time)
{
    CannonCharging = true;

    FTimerHandle timerHandle;

    GetWorld()->GetTimerManager().SetTimer(
        timerHandle,
        this,
        &AAirCannon::FinishCannonCharge,
        _time,
        false
    );
}

void AAirCannon::FinishCannonCharge()
{
    CannonCharging = false;
    ShootCannon();
}


