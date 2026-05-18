#include "./ScoresCalculator.h"
#include <PartyJungle/Minigame/CrossInfo/MinigameDataGameInstance.h>

AScoresCalculator::AScoresCalculator()
{
	PrimaryActorTick.bCanEverTick = false;
}

void AScoresCalculator::BeginPlay()
{
	InitializeInfo();
}

void AScoresCalculator::InitializeInfo()
{
	UMinigameDataGameInstance* GameInstance = Cast<UMinigameDataGameInstance>(GetGameInstance());

	if (GameInstance)
	{
		Scores = GameInstance->Scores;
		TransactionsRegistry = GameInstance->TransactionsRegistry;
		ChallengesRegistry = GameInstance->ChallengesRegistry;
	    MinigamesRegistry = GameInstance->MinigamesRegistry;
	}
}

void AScoresCalculator::AddCrownToTeam(int _team) 
{
    if (_team == -1 || Scores.Num() <= 0)
        return;

    for (auto& Elem : Scores)
    {
        if (Elem && Elem->Team == _team) 
        {
            Elem->StoredCrowns++;
            break;
        }
    }
}

int AScoresCalculator::GetBestDuelingTeam()
{
    if (ChallengesRegistry.Num() <= 0)
        return -1;

    TMap<int, int> TeamWins;

    for (UChallengeDto* Challenge : ChallengesRegistry)
    {
        if (Challenge)
            TeamWins.FindOrAdd(Challenge->WinnerTeam)++;
    }

    int BestTeam = -1;
    int MaxWins = -1;
    for (auto& Elem : TeamWins)
    {
        if (Elem.Value > MaxWins)
        {
            MaxWins = Elem.Value;
            BestTeam = Elem.Key;
        }
    }

    AddCrownToTeam(BestTeam);

    return BestTeam;
}

int AScoresCalculator::GetBestMinigameTeam()
{
    if (MinigamesRegistry.Num() <= 0)
        return -1;

    TMap<int, int> TeamWins;

    for (UMinigameDto* Minigame : MinigamesRegistry)
    {
        if (Minigame)
        {
            for (auto TeamWin : Minigame->WinnerTeam)
            {
                TeamWins.FindOrAdd(TeamWin)++;
            }
        }
    }

    int BestTeam = -1;
    int MaxWins = -1;
    for (auto& Elem : TeamWins)
    {
        if (Elem.Value > MaxWins)
        {
            MaxWins = Elem.Value;
            BestTeam = Elem.Key;
        }
    }

    AddCrownToTeam(BestTeam);

    return BestTeam;
}

int AScoresCalculator::GetTeamWithHigherCoins()
{
    if (Scores.Num() <= 0)
        return -1;

    int BestTeam = -1;
    int MaxCoins = -1;

    for (auto& Elem : Scores)
    {
        if (Elem && Elem->TotalCoins > MaxCoins)
        {
            MaxCoins = Elem->TotalCoins;
            BestTeam = Elem->Team;
        }
    }

    AddCrownToTeam(BestTeam);

    return BestTeam;
}


int AScoresCalculator::CompensationCrown()
{
    if (ChallengesRegistry.Num() <= 0 || TransactionsRegistry.Num() <= 0 || Scores.Num() <= 0)
        return -1;

    int MinCrowns = INT32_MAX;
    int TeamWithLeastCrowns = -1;

    for (auto& Elem : Scores)
    {
        if (Elem->StoredCrowns < MinCrowns)
        {
            MinCrowns = Elem->StoredCrowns;
            TeamWithLeastCrowns = Elem->Team;
        }
    }

    AddCrownToTeam(TeamWithLeastCrowns);

    return TeamWithLeastCrowns;
}

int AScoresCalculator::GetWinnerTeam()
{
    if (Scores.Num() <= 0)
        return -1;

    int WinnerTeam = -1;
    int MaxCrowns = -1;
    int MaxCoins = -1;

    for (auto& Elem : Scores)
    {
        if (Elem->StoredCrowns > MaxCrowns ||
            (Elem->StoredCrowns == MaxCrowns && Elem->TotalCoins > MaxCoins))
        {
            MaxCrowns = Elem->StoredCrowns;
            MaxCoins = Elem->TotalCoins;
            WinnerTeam = Elem->Team;
        }
    }

    return WinnerTeam;
}
