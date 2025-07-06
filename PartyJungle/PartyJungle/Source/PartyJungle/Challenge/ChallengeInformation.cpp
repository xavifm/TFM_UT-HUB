#include "./ChallengeInformation.h"

AChallengeInformation::AChallengeInformation()
{
	PrimaryActorTick.bCanEverTick = false;

}

void AChallengeInformation::SetUpDuelInfo(TArray<AMinion*> _minions)
{
    Minions = _minions;
    DuelType = EDuelType::HALF_COINS;
}

void AChallengeInformation::SaveDuelToRegistry(int _winner, int _coins, int _crowns)
{
    if (ChallengeRegistry) 
    {
        int attackerTeam = static_cast<int>(Minions[0]->Team);
        int duel = static_cast<int>(DuelType);

        ChallengeRegistry->RegisterDuel(attackerTeam, 0, _winner, duel, _coins, _crowns);
    }
}

EDuelType AChallengeInformation::GetDuelType()
{
    return DuelType;
}

EDuelType AChallengeInformation::SwitchDuelType(int _direction, int _team)
{
    int DuelTypeInt = static_cast<int>(DuelType);
    int EnumMin = static_cast<int>(EDuelType::HALF_COINS);
    int EnumMax = static_cast<int>(EDuelType::ALL_IN_VS_ST);

    DuelTypeInt += _direction;

    if (!Minions[_team] || DuelTypeInt > EnumMax || DuelTypeInt < EnumMin)
        return DuelType;

    EDuelType duelType = static_cast<EDuelType>(DuelTypeInt);
    int minionCoins = Minions[_team]->GetCoins();
    int minionCrowns = Minions[_team]->GetCrowns();

    int minCoins = 0;

    if (minionCrowns > 0)
        duelType = EDuelType::ALL_IN_VS_ST;

    switch (duelType)
    {
        case EDuelType::HALF_COINS:      minCoins = MIN_HALF_BET;  break;
        case EDuelType::ALL_IN_COINS:    minCoins = MIN_FULL_BET; break;
        case EDuelType::ALL_IN_VS_ST:    if (minionCrowns <= 0) return DuelType; minCoins = MIN_FULL_BET;
            break;
    }

    if (minCoins > 0 && (minionCoins < minCoins || (minionCoins < minCoins && duelType != EDuelType::ALL_IN_VS_ST)))
        return DuelType;

    DuelType = duelType;

    return DuelType;
}


int AChallengeInformation::GetBetCoinsQuantity(int _team)
{
    if (!Minions[_team]) return 0;

    switch (DuelType)
    {
    case EDuelType::ALL_IN_COINS:
        return Minions[_team]->GetCoins();

    case EDuelType::HALF_COINS:
        return Minions[_team]->GetCoins() / 2;

    case EDuelType::ALL_IN_VS_ST:
        return Minions[_team]->GetCoins();
    }

    return 0;
}

int AChallengeInformation::GetBetCrownsQuantity(int _team)
{
    if (!Minions[_team]) return 0;

    switch (DuelType)
    {
    case EDuelType::ALL_IN_VS_ST:
        return 1;
    }

    return 0;
}

