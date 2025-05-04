#include "./EndGameUI.h"

void UEndGameUI::InitializeRegistry()
{
    StartScoreList();
    StartTransactionRegistry();
    StartChallengeList();
}

void UEndGameUI::StartScoreList()
{
    if (!ScoresCalculator)
        return;

    TArray<UScoreDto*> Scores = ScoresCalculator->Scores;

    for (UScoreDto* Score : Scores)
    {
        AddScoreToList(Score);
    }
}

void UEndGameUI::StartChallengeList()
{
    if (!ScoresCalculator)
        return;

    TArray<UChallengeDto*> Challenges = ScoresCalculator->ChallengesRegistry;

    for (UChallengeDto* Challenge : Challenges)
    {
        AddChallengeToList(Challenge);
    }
}
