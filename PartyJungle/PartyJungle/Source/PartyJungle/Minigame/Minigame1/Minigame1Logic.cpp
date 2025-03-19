#include "./Minigame1Logic.h"

AMinigame1Logic::AMinigame1Logic()
{
}

void AMinigame1Logic::SetupAirCannonsInfo()
{
	if(GameInstance->Challenge)
	{
		for (size_t i = 0; i < AirCannons.Num(); i++)
		{
			if (i == 0)
				AirCannons[i]->MinionReference = GameInstance->Attacker;
			if (i == 1)
				AirCannons[i]->MinionReference = GameInstance->Victim;

			if (AirCannons[i]->MinionReference)
				AirCannons[i]->CannonTeam = static_cast<int>(AirCannons[i]->MinionReference->Team);

			AirCannons[i]->MinigameLogic = this;
		}
	}
}

void AMinigame1Logic::StartMinigame(int _startTime)
{
	Super::StartMinigame(_startTime);

	SetupAirCannonsInfo();

	FTimerHandle TimerHandle;
	GetWorld()->GetTimerManager().SetTimer(
		TimerHandle,
		[this, _startTime]() { StartCannonsCharge(_startTime); },
		_startTime,
		false
	);
}



void AMinigame1Logic::StartCannonsCharge(float _time)
{
	for (int32 i = 0; i < AirCannons.Num(); i++)
	{
		if (AirCannons[i])
			AirCannons[i]->StartCannonCharge(_time);
	}
}
