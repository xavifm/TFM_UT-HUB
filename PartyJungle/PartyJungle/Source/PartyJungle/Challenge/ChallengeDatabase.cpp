#include "./ChallengeDatabase.h"

void AChallengeDatabase::RegisterDuel(int32 Attacker, int32 Victim, int32 Winner, int32 BetStyle, int32 Coins, int32 Crowns)
{
    UChallengeDto* registry = NewObject<UChallengeDto>();

    if (!registry)
        return;

    registry->AttackerTeam = Attacker;
    registry->VictimTeam = Victim;
    registry->WinnerTeam = Winner;
    registry->BetStyle = BetStyle;
    registry->CoinsGained = Coins;
    registry->CrownsGained = Crowns;

    ChallengesRegistry.Add(registry);
}

void AChallengeDatabase::SendRegistryToInstance()
{

}