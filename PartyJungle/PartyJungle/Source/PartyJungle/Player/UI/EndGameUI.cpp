#include "./EndGameUI.h"

TArray<UScoreDto*> UEndGameUI::GetPlayerScores()
{
    if (!ScoresCalculator)
        return TArray<UScoreDto*>();

    return ScoresCalculator->Scores;
}

TArray<UTransactionDto*> UEndGameUI::GetTransactionRegistry()
{
    if (!ScoresCalculator)
        return TArray<UTransactionDto*>();

    return ScoresCalculator->TransactionsRegistry;
}

TArray<UChallengeDto*> UEndGameUI::GetChallengesRegistry()
{
    if (!ScoresCalculator)
        return ScoresCalculator->ChallengesRegistry;

    return TArray<UChallengeDto*>();
}
