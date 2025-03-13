#include "./ChallengeInformation.h"

AChallengeInformation::AChallengeInformation()
{
	PrimaryActorTick.bCanEverTick = false;

}

void AChallengeInformation::SetUpDuelInfo(AMinion* _attacker, AMinion* _victim)
{
    Attacker = _attacker;
    Victim = _victim;
}

EDuelType AChallengeInformation::SwitchDuelType(int _direction)
{
    if (_direction == 0)
        return DuelType;

    int DuelTypeInt = static_cast<int>(DuelType);
    int EnumMin = static_cast<int>(EDuelType::ALL_IN_COINS);
    int EnumMax = static_cast<int>(EDuelType::ALL_IN_VS_ST);

    DuelTypeInt += _direction;

    if (DuelTypeInt > EnumMax)
        DuelTypeInt = EnumMin;
    else if (DuelTypeInt < EnumMin)
        DuelTypeInt = EnumMax;

    DuelType = static_cast<EDuelType>(DuelTypeInt);

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

