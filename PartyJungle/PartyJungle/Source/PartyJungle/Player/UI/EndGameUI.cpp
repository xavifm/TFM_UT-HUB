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
}

void UEndGameUI::StartTransactionRegistry()
{
    if (!ScoresCalculator)
        return;
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
