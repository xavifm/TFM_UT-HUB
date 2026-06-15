#include "./AirCannon.h"

#include <PartyJungle/Controllers/GameLoopControllers/GameLoopControllerBase.h>
#include <PartyJungle/Controllers/PlayersControllers/PlayersControllerBase.h>
#include <PartyJungle/Controllers/PlayersControllers/PlayerInputsControllers/PlayerInputsControllerBase.h>
#include <PartyJungle/Controllers/PlayersControllers/ControllerAuxs/PlayerData.h>
#include <PartyJungle/GameInstance/ManagerGameInstance.h>
#include <PartyJungle/Managers/InputManager.h>
#include <PartyJungle/Managers/StateManager.h>

#include <TimerManager.h>


AAirCannon::AAirCannon()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AAirCannon::BeginPlay()
{
    Super::BeginPlay();

    if(m_ProjectileReference)
        m_ProjectileReference->SetActorHiddenInGame(true);
}

void AAirCannon::Tick(float a_DeltaTime)
{
    Super::Tick(a_DeltaTime);

    float PushStrengh {CalculateCurrentPushStrength()};
    SetTickleStrengthCannon(PushStrengh);

    if (!m_CannonCharging && !m_CannonFinished && m_ProjectilePhysics && m_GameLoopCtr)
    {
        if(m_ProjectileReference->GetActorLocation().Z >= MAX_MINIGAME_HEIGHT) 
        {
            FVector DownVector {FVector(0, 0, -20)};
            m_ProjectilePhysics->SetPhysicsLinearVelocity(DownVector);
            m_GameLoopCtr->SetTeamScore(m_TeamId, -10);
        }

        if (m_ProjectilePhysics->GetPhysicsLinearVelocity().Z < 0)
        {
            m_CannonFinished = true;
            m_GameLoopCtr->SetTeamReady(m_TeamId);
        }
    }
}

void AAirCannon::ResetAirCannon()
{
    m_CannonFinished = false;
    m_CannonCharging = false;
    m_UpForce = 0;
    
    FVector NewPosition {GetActorLocation() + FVector(0, 0, BULLET_RESPAWN_OFFSET)};
    m_ProjectileReference->SetActorLocation(NewPosition);

    m_ProjectileReference->SetActorTickEnabled(false);

    UPrimitiveComponent* RootComp {Cast<UPrimitiveComponent>(m_ProjectileReference->GetRootComponent())};
    if (!RootComp) return;

    RootComp->SetSimulatePhysics(false);
    RootComp->SetAllPhysicsLinearVelocity(FVector::ZeroVector);
    RootComp->SetAllPhysicsAngularVelocityInDegrees(FVector::ZeroVector);
}

void AAirCannon::IncrementUpForce()
{
    if (!m_CannonCharging || m_CannonFinished)
        return;

    m_UpForce++;
    m_PushTimestamps.Add(GetWorld()->GetTimeSeconds());

    m_RamrodPressed = true;


    if (m_AudioManager)
        m_AudioManager->PlaySFX(CHARGE_FORCE_CANNON_SFX, 0.5f, true, m_TeamId);
}


float AAirCannon::CalculateCurrentPushStrength()
{
    float CurrentTime {static_cast<float>(GetWorld()->GetTimeSeconds())};
    float Interval {FORCE_CHECK_INTERVAL};

    m_PushTimestamps.RemoveAll([CurrentTime, Interval](float Time) {
        return CurrentTime - Time > Interval;
        });

    float Strength {FMath::Clamp((float)m_PushTimestamps.Num() / (float)MAX_PUSHES_PER_INTERVAL, 0.0f, 1.0f)};

    return Strength;
}


void AAirCannon::ShootCannon()
{
    m_GameLoopCtr->SetTeamScore(m_TeamId, m_UpForce);

    if (m_UpForce <= 5)
    {
        m_GameLoopCtr->SetTeamReady(m_TeamId);
    }
    else if (m_AudioManager)
        m_AudioManager->PlaySFX(SHOOT_CANNON_SFX, 0.3f, true);

    if (m_ProjectileReference)
    {
        m_ProjectileReference->SetActorHiddenInGame(false);
        m_ProjectilePhysics = Cast<UPrimitiveComponent>(m_ProjectileReference->GetRootComponent());
        if (m_ProjectilePhysics)
        {
            m_ProjectilePhysics->SetSimulatePhysics(true);
            FVector LaunchForce {FVector(0.0f, 0.0f, m_UpForce * AIR_CANNON_MULIPLIER)};
            m_ProjectilePhysics->AddImpulse(LaunchForce, NAME_None, true);
        }
    }
}

void AAirCannon::StartCannonCharge(float a_Time)
{
    m_CannonCharging = m_IsCannonCharging = true;
    m_CannonFinished = false;

    if(m_AudioManager)
        m_AudioManager->PlaySFX(CHARGE_CANNON_SFX, 0.5f, true);

    auto PlayersCtr {GetGameInstance<UManagerGameInstance>()->GetStateManager()->GetController<APlayersControllerBase>(EGameControllers::Players)};
    auto PlayersInTeam {PlayersCtr->GetPlayersByTeamId(m_TeamId)};
    for (auto PlayerId : PlayersInTeam)
    {
        PlayersCtr->GetPlayerById(PlayerId).GetInputsController()->GetInputKeyEvent(EInputKeys::Button_Right, ETriggerEvents::Pressed)->AddUniqueDynamic(this, &AAirCannon::OnButtonRight_Pressed);
    }

    GetWorld()->GetTimerManager().SetTimer(m_TimerHandle, [this, a_Time]() {
        FinishCannonCharge();
    }, a_Time, false);
}

void AAirCannon::FinishCannonCharge()
{
    GetWorld()->GetTimerManager().ClearTimer(m_TimerHandle);
    m_CannonCharging = false;

    ShootCannon();
}

void AAirCannon::OnButtonRight_Pressed(EInputKeys a_InputKey, ETriggerEvents a_InputEvent, int a_PlayerId)
{
    IncrementUpForce();
}
