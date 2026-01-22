#include "./Minigame1Logic.h"

#include "PartyJungle/Player/Map/MapMenuCamera.h"

AMinigame1Logic::AMinigame1Logic()
{
}

void AMinigame1Logic::SetupAirCannonsInfo()
{
	if (PlayingMinionsDuel.Num() == 0)
		return;

	for (auto minion : PlayingMinionsDuel)
	{
		for (size_t i = 0; i < AirCannons.Num(); i++)
		{
			if (i == minion.Key)
			{
				AirCannons[i]->MinionReference = minion.Value;
				AirCannons[i]->MinigameLogic = this;
				
				AActor* projectileReference = AirCannons[i]->ProjectileReference;

				if (projectileReference) 
				{
					projectileReference->SetActorTickEnabled(true);
					projectileReference->SetActorHiddenInGame(true);
				}
				
				break;
			}
		}
	}
}

void AMinigame1Logic::ResetMinigameScene() 
{
	Super::ResetMinigameScene();

	if (MinigameCamera)
		MinigameCamera->ResetCameraPosition();

	for (int i = 0; i < AirCannons.Num(); i++)
	{
		AirCannons[i]->CannonFinished = false;
		AirCannons[i]->CannonCharging = false;
		AirCannons[i]->UpForce = 0;
		AirCannons[i]->ResetProjectilePosition();
	}
}

void AMinigame1Logic::StartMinigame(int _startTime)
{
	Super::StartMinigame(_startTime);

	SetupAirCannonsInfo();

	GetWorld()->GetTimerManager().SetTimer(TimerHandle, [this, _startTime]() {
		StartCannonsCharge(_startTime);
	}, _startTime, false);
}

void AMinigame1Logic::FinishMinigame(TArray<int32> _winners)
{
	Super::FinishMinigame(_winners);
	MinigameCamera->SetCameraTarget(nullptr);
}

void AMinigame1Logic::SetTeamScore(int _team, int _score)
{
	Super::SetTeamScore(_team, _score);
	SetCameraTarget();
}

void AMinigame1Logic::StartCannonsCharge(float _time)
{
	GetWorld()->GetTimerManager().ClearTimer(TimerHandle);

	for (int32 i = 0; i < AirCannons.Num(); i++)
	{
		if (AirCannons[i])
			AirCannons[i]->StartCannonCharge(_time);
	}
}

void AMinigame1Logic::SetCameraTarget()
{
	int HighestTeam = -1;
	int HighestScore = TNumericLimits<int>::Min();

	for (const auto& Elem : TeamMinigameScores)
	{
		if (Elem.Value > HighestScore)
		{
			HighestScore = Elem.Value;
			HighestTeam = Elem.Key;
		}
	}

	if (HighestTeam == -1 || !MinigameCamera) return;

	for (AAirCannon* Cannon : AirCannons)
	{
		if (Cannon && Cannon->CannonTeam == HighestTeam && Cannon->ProjectileReference)
		{
			MinigameCamera->SetCameraTarget(Cannon->ProjectileReference);
			break;
		}
	}
}
