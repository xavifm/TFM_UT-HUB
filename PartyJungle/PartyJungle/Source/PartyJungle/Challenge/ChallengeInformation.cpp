#include "./ChallengeInformation.h"

#include "PartyJungle/Map/Square.h"

AChallengeInformation::AChallengeInformation()
{
	PrimaryActorTick.bCanEverTick = false;

}

void AChallengeInformation::SetUpDuelInfo(TArray<AMinion*> _minions)
{
    Minions = _minions;
    DuelType = EDuelType::HALF_COINS;
}

void AChallengeInformation::SafeDuelChoice()
{
    SavedDuelTypes.Add(DuelPercentage);
    DuelPercentage = 0;
}

int AChallengeInformation::GetCurrentBetControllerMenuIndex(int _currentTeam, int _maxTeamNumber, int _duelSquareIndex) const
{
    int teamQuery = -1;
    
    for (AMinion* Minion : SquaresWithDuelsInRound[_duelSquareIndex]->MinionsList)
    {
        if (Minion && static_cast<int>(Minion->Team) == _currentTeam)
        {
            teamQuery = _currentTeam;
            break;
        }
    }

    return teamQuery;
}

float AChallengeInformation::GetDuelType()
{
    return DuelPercentage;
}

int AChallengeInformation::SwitchDuelType(int _direction, int _team)
{
    int NewDuelPercentage = DuelPercentage + (_direction * 10);
    NewDuelPercentage = FMath::Clamp(NewDuelPercentage, MIN_PERCENTAGE, MAX_PERCENTAGE);
    
    AMinion* Minion;

    for (auto minion : Minions)
    {
        if (static_cast<int>(minion->Team) == _team)
        {
            Minion = minion;
            break;
        }
    }
    
    if (!Minion)
        return DuelPercentage;
    
    int minionCoins = Minion->GetCoins();
    int minionCrowns = Minion->GetCrowns();
    int minCoins = 0;

    int range = (NewDuelPercentage > MAX_PERCENTAGE / 2) ? 2 : (NewDuelPercentage > 0 ? 1 : 0);
    if (NewDuelPercentage == 0)
        range = 0;

    switch (range) 
    {
        case 1:
            minCoins = MIN_HALF_BET;
            break;
        case 2:
            minCoins = MIN_FULL_BET;
            break;
        case 0:
            minCoins = 0;
    }

    if (minCoins > 0 && (minionCoins < minCoins || (minionCoins < minCoins && minionCrowns <= 0)))
        return DuelPercentage;

    DuelPercentage = NewDuelPercentage;

    return DuelPercentage;
}


int AChallengeInformation::GetBetCoinsQuantity(int _team)
{
    AMinion* Minion;
    
    for (auto minion : Minions)
    {
        if (static_cast<int>(minion->Team) == _team)
        {
            Minion = minion;
            break;
        }
    }
    
    if (!Minion) return 0;
    int coins = Minion->GetCoins();
    return (coins * DuelPercentage) / MAX_PERCENTAGE;
}

int AChallengeInformation::GetPotQuantity(int _percentage, int _duelSquareIndex)
{
    int potQuery = 0;

    for (AMinion* Minion : SquaresWithDuelsInRound[_duelSquareIndex]->MinionsList)
        potQuery += Minion->GetCoins();
    
    potQuery = (potQuery * _percentage) / MAX_PERCENTAGE;

    SavedPot = potQuery;
    return potQuery;
}

int AChallengeInformation::GetSavedPot()
{
    return SavedPot;
}

int AChallengeInformation::GetSavedPotStars()
{
    return SavedPotStars;
}

void AChallengeInformation::AddSavedPot(int _quantity, int _crowns)
{
    SavedPot += _quantity;
    SavedPotStars += _crowns;
}

void AChallengeInformation::ResetSavedPot()
{
    SavedPot = 0;
    SavedPotStars = 0;
}

void AChallengeInformation::UpdateCurrentPot(TArray<AMinion*> _minions, float _percentage)
{
    ResetSavedPot();
    for (AMinion* minion : _minions)
    {
        int bet = (minion->GetCoins() * _percentage) / 100;
        AddSavedPot(bet, minion->GetCrowns());
    }
}

int AChallengeInformation::GetCalculatedPot(TArray<AMinion*> _minions, float _percentage)
{
    int finalPot = 0;
    for (AMinion* minion : _minions)
    {
        int bet = (minion->GetCoins() * _percentage) / 100;
        finalPot += bet;
    }
    
    return finalPot;
}

int AChallengeInformation::GetBetCrownsQuantity(int _team)
{
    AMinion* Minion;
    
    for (auto minion : Minions)
    {
        if (static_cast<int>(minion->Team) == _team)
        {
            Minion = minion;
            break;
        }
    }
    
    if (!Minion) return 0;
    int Crowns = Minion->GetCrowns();
    
    return Crowns;
}

bool AChallengeInformation::CheckIfThereAreCrownsInDuel(int _duelSquareIndex)
{
    bool crownsQuery = false;
    
    for (AMinion* Minion : SquaresWithDuelsInRound[_duelSquareIndex]->MinionsList)
    {
        if (Minion->GetCrowns() > 0)
        {
            crownsQuery = true;
            break;
        }
    }

    return crownsQuery;
}

void AChallengeInformation::ResetDuels()
{
    for (auto Square : SquaresWithDuelsInRound)
        Square->SwitchDuelSquare(false);

    SquaresWithDuelsInRound.Reset();
    SavedDuelTypes.Reset();
}

TArray<std::pair<int, std::pair<int, int>>> AChallengeInformation::ParsePotsInfo(int _duelSquareIndex)
{
    TArray<std::pair<int, std::pair<int, int>>> ParsedInfo;

    if (!SquaresWithDuelsInRound.IsValidIndex(_duelSquareIndex))
        return ParsedInfo;
    
    ASquare* Square = SquaresWithDuelsInRound[_duelSquareIndex];
    if (!Square) return ParsedInfo;

    ParsedInfo.Reserve(Square->MinionsList.Num());
    int index = 0;

    for (AMinion* Minion : Square->MinionsList)
    {
        if (!Minion) continue;

        int PlayerTeam = static_cast<int>(Minion->Team);
        int Duel = SavedDuelTypes[index];

        ParsedInfo.Add(std::make_pair(index, std::make_pair(PlayerTeam, Duel)));

        index++;
    }

    return ParsedInfo;
}


