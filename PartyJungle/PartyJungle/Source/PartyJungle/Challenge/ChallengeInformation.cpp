#include "./ChallengeInformation.h"

AChallengeInformation::AChallengeInformation()
{
	PrimaryActorTick.bCanEverTick = false;

}

void AChallengeInformation::SetUpDuelInfo(AMinion* _attacker, AMinion* _victim)
{
    Attacker = _attacker;
    Victim = _victim;
    DuelType = EDuelType::HALF_COINS;
}

void AChallengeInformation::SaveDuelToRegistry(int _winner, int _coins, int _crowns)
{
    if (ChallengeRegistry) 
    {
        int attackerTeam = static_cast<int>(Attacker->Team);
        int victimTeam = static_cast<int>(Victim->Team);
        int duel = static_cast<int>(DuelType);

        ChallengeRegistry->RegisterDuel(attackerTeam, victimTeam, _winner, duel, _coins, _crowns);
    }
}

EDuelType AChallengeInformation::GetDuelType()
{
    return DuelType;
}

EDuelType AChallengeInformation::SwitchDuelType(int _direction)
{
    int DuelTypeInt = static_cast<int>(DuelType);
    int EnumMin = static_cast<int>(EDuelType::HALF_COINS);
    int EnumMax = static_cast<int>(EDuelType::ALL_IN_VS_ST);

    DuelTypeInt += _direction;

    if (DuelTypeInt > EnumMax || DuelTypeInt < EnumMin)
        return DuelType;

    EDuelType duelType = static_cast<EDuelType>(DuelTypeInt);
    //int attackerCoins = Attacker->GetCoins();
    //int attackerCrowns = Attacker->GetCrowns();
    
    //int victimCoins = Victim->GetCoins();
    //int victimCrowns = Victim->GetCrowns();

    int minCoins = 0;

    //if (victimCrowns > 0)
        //duelType = EDuelType::ALL_IN_VS_ST;

    switch (duelType)
    {
        case EDuelType::HALF_COINS:      minCoins = MIN_HALF_BET;  break;
        case EDuelType::ALL_IN_COINS:    minCoins = MIN_FULL_BET; break;
        //case EDuelType::ALL_IN_VS_ST:    if (victimCrowns <= 0) return DuelType; minCoins = MIN_FULL_BET;
            //break;
    }

    //if (minCoins > 0 && (attackerCoins < minCoins || (victimCoins < minCoins && duelType != EDuelType::ALL_IN_VS_ST)))
        //return DuelType;

    DuelType = duelType;

    return DuelType;
}


int AChallengeInformation::GetBetCoinsQuantity(int _minion)
{
    if (!Attacker || !Victim) return 0;

    AMinion* targetMinion = (_minion == 0) ? Attacker : Victim;

    switch (DuelType)
    {
    case EDuelType::ALL_IN_COINS:
        return targetMinion->GetCoins();

    case EDuelType::HALF_COINS:
        return targetMinion->GetCoins() / 2;

    case EDuelType::ALL_IN_VS_ST:
        return (_minion == 0) ? Attacker->GetCoins() : 0;
    }

    return 0;
}

int AChallengeInformation::GetBetCrownsQuantity(int _minion)
{
    if (!Attacker || !Victim) return 0;

    AMinion* targetMinion = (_minion == 0) ? Attacker : Victim;

    switch (DuelType)
    {
    case EDuelType::ALL_IN_VS_ST:
        return (_minion == 0) ? 0 : 1;
    }

    return 0;
}

