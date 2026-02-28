#include "./Minigame3Logic.h"


AMinigame3Logic::AMinigame3Logic()
{
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;
}

void AMinigame3Logic::StartMinigame(int _startTime)
{
	Super::StartMinigame(_startTime);
	
	SetupPlayersInfo();
	SwitchBallMovement(false);
	
	MinigameTime = BASE_MINIGAME_TIME;
	
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, [this, _startTime]() {
		StartMinigamePlay();
	}, _startTime, false);
}

void AMinigame3Logic::ShowWinnerScene(int _endMinigameTime, TArray<int32> _winners)
{
	Super::ShowWinnerScene(_endMinigameTime, _winners);
}

void AMinigame3Logic::FinishMinigame(TArray<int32> _winners)
{
	Super::FinishMinigame(_winners);
}

void AMinigame3Logic::ResetMinigameScene()
{
	ScoreTeamOne = 0;
	ScoreTeamTwo = 0;
	SwitchScore(1, 0);
	SwitchScore(2, 0);
	
	for (auto pallete : TeamOne)
	{
		pallete->ResetCharacterPosition();
		pallete->CharacterTeam = -1;
	}
	
	for (auto pallete2 : TeamTwo)
	{
		pallete2->ResetCharacterPosition();
		pallete2->CharacterTeam = -1;	
	}
	
	Super::ResetMinigameScene();
}

void AMinigame3Logic::SumScore(int _team)
{
	switch (_team)
	{
		case 1:
			ScoreTeamTwo++;
			SwitchScore(2, ScoreTeamTwo);
			break;
		case 2:
			ScoreTeamOne++;
			SwitchScore(1, ScoreTeamOne);
			break;
	}
}

void AMinigame3Logic::SetupPlayersInfo()
{
	int index = 0;
	for (auto minion : *PlayingMinionsTeamMinigame.Find(0))
	{
		//team 1
		if (IsValid(TeamOne[index]))
		{
			TeamOne[index]->CharacterTeam = static_cast<int>(minion->Team);	
			index++;
		}
	}
		
	index = 0;
	for (auto minion : *PlayingMinionsTeamMinigame.Find(1))
	{
		//team 2
		if (IsValid(TeamTwo[index]))
		{
			TeamTwo[index]->CharacterTeam = static_cast<int>(minion->Team);	
			index++;
		}
	}
}

void AMinigame3Logic::SetTeamScores()
{
	int winnerTeam = ScoreTeamOne > ScoreTeamTwo ? 0 : 1;
	int loserTeam = ScoreTeamOne > ScoreTeamTwo ? 1 : 0;
	if (ScoreTeamOne == ScoreTeamTwo)
	{
		winnerTeam = -1;
		return;
	}

	TArray<AMinion*> minions = PlayingMinionsTeamMinigame[winnerTeam];

	for (auto minion : minions)
	{
		int32 minionTeam = static_cast<int32>(minion->Team);
		SetTeamScore(minionTeam, 100);
	}
	
	minions = PlayingMinionsTeamMinigame[loserTeam];
	
	for (auto minion : minions)
	{
		int32 minionTeam = static_cast<int32>(minion->Team);
		SetTeamScore(minionTeam, -100);
	}
}

void AMinigame3Logic::StartMinigamePlay()
{
	GetWorld()->GetTimerManager().ClearTimer(TimerHandle);

	MinigameRunning = true;
	
	for (int32 i = 0; i < TeamOne.Num(); i++)
	{
		if (TeamOne[i])
			TeamOne[i]->PossessMovement();
	}
	
	for (int32 i = 0; i < TeamTwo.Num(); i++)
	{
		if (TeamTwo[i])
			TeamTwo[i]->PossessMovement();
	}
	
	ResetBallPosition();
	ResetBallVelocity();
}

void AMinigame3Logic::StopMinigame()
{
	for (int32 i = 0; i < TeamOne.Num(); i++)
	{
		if (TeamOne[i])
			SetTeamReady(TeamOne[i]->CharacterTeam);
	}
	
	for (int32 i = 0; i < TeamTwo.Num(); i++)
	{
		if (TeamTwo[i])
			SetTeamReady(TeamTwo[i]->CharacterTeam);
	}
	
	SwitchBallMovement(false);
	MinigameTime = BASE_MINIGAME_TIME;
	MinigameRunning = false;
}

void AMinigame3Logic::Tick(float DeltaTime)
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