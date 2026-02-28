#include "./Minigame2Logic.h"

#include "VictimCharacter.h"

AMinigame2Logic::AMinigame2Logic()
{
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;
	SetActorTickEnabled(true); 
}

void AMinigame2Logic::StartMinigame(int _startTime)
{
	Super::StartMinigame(_startTime);
	
	SetupRunnersInfo();
	
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, [this, _startTime]() {
		StartMinigamePlay();
	}, _startTime, false);
}

void AMinigame2Logic::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	if (MinigameRunning)
	{
		if (MinigameTime > 0)
		{
			MinigameTime -= DeltaTime;
			
			if (MapMenuCamera)
				MapMenuCamera->GetMapUI()->SetMinigameVisibleTime(MinigameTime);
		}
		else
		{
			SetTeamScores();
			StopMinigame();
			FinishMinigame(CalculateWinner());
		}
	}
}

void AMinigame2Logic::CheckIfAllVictimsAreDeadToStopMinigame()
{
	TArray<AMinion*> minions = PlayingMinionsTeamMinigame[1];
	bool finished = true;
	
	for(auto minion : minions)
	{
		int minionTeam = static_cast<int>(minion->Team);
		if (TeamMinigameScores[minionTeam] >= 0)
		{
			finished = false;
		}
	}
	
	if (finished)
	{
		SetTeamScores();
		StopMinigame();
		FinishMinigame(CalculateWinner());
	}
}

void AMinigame2Logic::SetTeamScores()
{
	TArray<AMinion*> minions = PlayingMinionsTeamMinigame[1];
	int32 attackerMinionTeam = static_cast<int32>(PlayingMinionsTeamMinigame[0][0]->Team);
	SetTeamScore(attackerMinionTeam, 100);
	bool victimsWon = false;
	
	for(auto minion : minions)
	{
		int32 minionTeam = static_cast<int32>(minion->Team);
		if (TeamMinigameScores[minionTeam] >= 0)
		{
			SetTeamScore(attackerMinionTeam, -100);
			victimsWon = true;
			break;
		}
	}
	
	for(auto minion : minions)
	{
		int minionTeam = static_cast<int32>(minion->Team);
		
		if (victimsWon)
		{
			SetTeamScore(minionTeam, 100);
			SetTeamScore(attackerMinionTeam, -100);	
		}
	}

}

void AMinigame2Logic::StopMinigame()
{
	SetTeamReady(Attacker->CharacterTeam);
	
	for (int32 i = 0; i < Victims.Num(); i++)
	{
		if (Victims[i])
			SetTeamReady(Victims[i]->CharacterTeam);
	}
	
	MinigameTime = BASE_MINIGAME_TIME;
	MinigameRunning = false;
}

void AMinigame2Logic::StartMinigamePlay()
{
	GetWorld()->GetTimerManager().ClearTimer(TimerHandle);

	MinigameRunning = true;
	
	if (Attacker)
		Attacker->PossessMovement();
	
	for (int32 i = 0; i < Victims.Num(); i++)
	{
		if (Victims[i])
			Victims[i]->PossessMovement();
	}
}

void AMinigame2Logic::FinishMinigame(TArray<int32> _winners)
{
	Super::FinishMinigame(_winners);
}

void AMinigame2Logic::SetTeamScore(int _team, int _score)
{
	Super::SetTeamScore(_team, _score);
}

void AMinigame2Logic::ResetMinigameScene()
{
	Super::ResetMinigameScene();
}

void AMinigame2Logic::SetupRunnersInfo()
{
	for (auto teamMinions : PlayingMinionsTeamMinigame)
	{
		int index = 0;
		for (auto minion : teamMinions.Value)
		{
			if (teamMinions.Key == 0 && Attacker)
			{
				//killer
				Attacker->CharacterTeam = static_cast<int>(minion->Team);
			}
			else
			{
				//victims
				if (IsValid(Victims[index]))
				{
					Victims[index]->ResetCharacterPosition();
					Victims[index]->CharacterTeam = static_cast<int>(minion->Team);	
					index++;
				}
			}
		}
	}
}

