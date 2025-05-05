#include "./EndGameUI.h"

void UEndGameUI::InitializeRegistry()
{
    StartScoreList();
    StartChallengeList();
}

void UEndGameUI::StartScoreList()
{
    if (!ScoresCalculator)
        return;

    TArray<UScoreDto*> Scores = ScoresCalculator->Scores;
    int winnerTeam = ScoresCalculator->GetWinnerTeam();

    for (UScoreDto* Score : Scores)
    {
        bool winner = Score->Team == winnerTeam;
        AddScoreToList(Score, winner);
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
