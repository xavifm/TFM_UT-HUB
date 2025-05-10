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

    if(ProjectileReference)
        ProjectileReference->SetActorHiddenInGame(true);
}


void AAirCannon::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    float pushStrengh = CalculateCurrentPushStrength();
    SetForceBarStrength(pushStrengh);
    SetTickleStrengthCannon(pushStrengh);
    SetForceBarStrength(pushStrengh);

    if (!CannonCharging && !CannonFinished && ProjectilePhysics && MinigameLogic)
    {
        if(ProjectileReference->GetActorLocation().Z >= MAX_MINIGAME_HEIGHT) 
        {
            FVector downVector = FVector(0, 0, -20);
            ProjectilePhysics->SetPhysicsLinearVelocity(downVector);
            MinigameLogic->SetTeamScore(CannonTeam, -10);
        }

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
    ProjectileReference->SetActorLocation(newPosition);

    ProjectileReference->SetActorTickEnabled(false);

    UPrimitiveComponent* rootComp = Cast<UPrimitiveComponent>(ProjectileReference->GetRootComponent());
    if (!rootComp) return;

    rootComp->SetSimulatePhysics(false);
    rootComp->SetAllPhysicsLinearVelocity(FVector::ZeroVector);
    rootComp->SetAllPhysicsAngularVelocityInDegrees(FVector::ZeroVector);
}

void AAirCannon::IncrementUpForce()
{
    if (!CannonCharging || CannonFinished)
        return;

    UpForce++;
    PushTimestamps.Add(GetWorld()->GetTimeSeconds());

    if (AudioManager)
        AudioManager->PlaySFX(CHARGE_FORCE_CANNON_SFX, 0.5f, true, CannonTeam);
}


float AAirCannon::CalculateCurrentPushStrength()
{
    float CurrentTime = GetWorld()->GetTimeSeconds();
    float Interval = FORCE_CHECK_INTERVAL;

    PushTimestamps.RemoveAll([CurrentTime, Interval](float Time) {
        return CurrentTime - Time > Interval;
        });

    float Strength = FMath::Clamp((float)PushTimestamps.Num() / (float)MAX_PUSHES_PER_INTERVAL, 0.0f, 1.0f);

    return Strength;
}


void AAirCannon::ShootCannon()
{
    MinigameLogic->SetTeamScore(CannonTeam, UpForce);

    if (UpForce <= 5)
    {
        MinigameLogic->SetTeamReady(CannonTeam);
        //AudioManager->PlaySFX("FumbleSFX", 0.3f, true);
    }
    else if (AudioManager)
        AudioManager->PlaySFX(SHOOT_CANNON_SFX, 0.3f, true);

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

    if(AudioManager)
        AudioManager->PlaySFX(CHARGE_CANNON_SFX, 0.5f, true);

    PlayerController = UGameplayStatics::GetPlayerController(GetWorld(), static_cast<int32>(MinionReference->Team));
    if (PlayerController) 
    {
        PlayerController->bAutoManageActiveCameraTarget = false;
        PlayerController->Possess(this);
    }

    GetWorld()->GetTimerManager().SetTimer(TimerHandle, [this, _time]() {
        FinishCannonCharge();
    }, _time, false);
}

void AAirCannon::FinishCannonCharge()
{
    GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
    CannonCharging = false;

    ShootCannon();
}


