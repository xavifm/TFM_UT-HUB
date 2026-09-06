#include "DuelManager.h"

#include "PartyJungle/GameInstance/ManagerGameInstance.h"
#include "PartyJungle/Map/Square.h"


ADuelManager::ADuelManager()
{
	PrimaryActorTick.bCanEverTick = false;
}

void ADuelManager::BeginPlay()
{
    Super::BeginPlay();
    
    GetGameInstance<UManagerGameInstance>()->SetDuelManager(this);
}

void ADuelManager::SetUpDuelInfo(TArray<AMinion*> a_Minions)
{
    m_Minions = a_Minions;
    m_DuelType = EDuelType::HALF_COINS;
}

void ADuelManager::SafeDuelChoice()
{
    m_SavedDuelTypes.Add(m_DuelType);
}

int ADuelManager::GetBetControllerMenuIndex(int a_Team, int a_DuelSquareIndex) const
{
    int TeamQuery = -1;
    
    for (AMinion* Minion : m_SquaresWithDuelsInRound[a_DuelSquareIndex]->MinionsList)
    {
        if (Minion && static_cast<int>(Minion->Team) == a_Team)
        {
            TeamQuery = a_Team;
            break;
        }
    }

    return TeamQuery;
}

void ADuelManager::SaveDuelToRegistry(int a_Winner, int a_Coins, int a_Crowns)
{
    RegisterDuel(a_Winner, static_cast<int>(m_DuelType), a_Coins, a_Crowns);
}

EDuelType ADuelManager::GetDuelType()
{
    return m_DuelType;
}

EDuelType ADuelManager::SwitchDuelType(int a_Direction, int a_Team)
{
    int DuelTypeInt = static_cast<int>(m_DuelType);
    int EnumMin = static_cast<int>(EDuelType::HALF_COINS);
    int EnumMax = static_cast<int>(EDuelType::RESIGN);

    DuelTypeInt += a_Direction;

    if (!m_Minions[a_Team] || DuelTypeInt > EnumMax || DuelTypeInt < EnumMin)
        return m_DuelType;

    EDuelType DuelType = static_cast<EDuelType>(DuelTypeInt);
    int MinionCoins = m_Minions[a_Team]->GetCoins();
    int MinionCrowns = m_Minions[a_Team]->GetCrowns();

    int MinCoins = 0;

    if (MinionCrowns > 0)
        DuelType = EDuelType::ALL_IN_VS_ST;

    switch (DuelType)
    {
        case EDuelType::HALF_COINS:
            MinCoins = MIN_HALF_BET;
        break;
        
        case EDuelType::ALL_IN_COINS:
            MinCoins = MIN_FULL_BET; 
        break;
        
        case EDuelType::ALL_IN_VS_ST:    
            if (!IsAnyCrownInDuel(0))
            {
                if (a_Direction > 0) { DuelType = EDuelType::RESIGN; MinCoins = 0; }
                else if (a_Direction < 0) { DuelType = EDuelType::ALL_IN_COINS; MinCoins = MIN_FULL_BET; }
            } 
            else
            {
                MinCoins = MIN_FULL_BET;
            }
        
        case EDuelType::RESIGN:
            MinCoins = 0;
        break;
        
        default:
            UE_LOG(LogTemp, Error, TEXT("Unknown Duel Type"));
        break;
    }

    if (MinCoins > 0 && (MinionCoins < MinCoins || (MinionCoins < MinCoins && DuelType != EDuelType::ALL_IN_VS_ST)))
        return m_DuelType;

    m_DuelType = DuelType;

    return m_DuelType;
}


int ADuelManager::GetBetCoinsQuantity(int a_Team)
{
    if (!m_Minions[a_Team]) return 0;

    switch (m_DuelType)
    {
    case EDuelType::ALL_IN_COINS:
        return m_Minions[a_Team]->GetCoins();

    case EDuelType::HALF_COINS:
        return m_Minions[a_Team]->GetCoins() / 2;

    case EDuelType::ALL_IN_VS_ST:
        return m_Minions[a_Team]->GetCoins();
    }

    return 0;
}

int ADuelManager::GetPotQuantity(bool a_FullPot, int a_DuelSquareIndex)
{
    int PotQuery = 0;

    for (AMinion* Minion : m_SquaresWithDuelsInRound[a_DuelSquareIndex]->MinionsList)
        PotQuery += Minion->GetCoins();
    
    if (!a_FullPot) PotQuery /= 2;

    m_SavedPot = PotQuery;
    return PotQuery;
}

int ADuelManager::GetSavedPot()
{
    return m_SavedPot;
}

int ADuelManager::GetBetCrownsQuantity(int a_Team)
{
    if (!m_Minions[a_Team]) return 0;

    switch (m_DuelType)
    {
    case EDuelType::ALL_IN_VS_ST:
        return 1;
    }

    return 0;
}

bool ADuelManager::IsAnyCrownInDuel(int a_DuelSquareIndex)
{
    bool CrownsQuery = false;
    
    for (AMinion* Minion : m_SquaresWithDuelsInRound[a_DuelSquareIndex]->MinionsList)
    {
        if (Minion->GetCrowns() > 0)
        {
            CrownsQuery = true;
            break;
        }
    }

    return CrownsQuery;
}

void ADuelManager::ResetDuels()
{
    for (auto Square : m_SquaresWithDuelsInRound)
        Square->SwitchDuelSquare(false);

    m_SquaresWithDuelsInRound.Reset();
    m_SavedDuelTypes.Reset();
}

TArray<std::pair<int, std::pair<int, EDuelType>>> ADuelManager::ParsePotsInfo(int a_DuelSquareIndex)
{
    TArray<std::pair<int, std::pair<int, EDuelType>>> ParsedInfo;

    if (!m_SquaresWithDuelsInRound.IsValidIndex(a_DuelSquareIndex))
        return ParsedInfo;
    
    ASquare* Square = m_SquaresWithDuelsInRound[a_DuelSquareIndex];
    if (!Square) return ParsedInfo;

    ParsedInfo.Reserve(Square->MinionsList.Num());
    int DuelIndex = 0;

    for (AMinion* Minion : Square->MinionsList)
    {
        if (!Minion) continue;

        int PlayerTeam = static_cast<int>(Minion->Team);
        EDuelType Duel = m_SavedDuelTypes[DuelIndex];

        ParsedInfo.Add(std::make_pair(DuelIndex, std::make_pair(PlayerTeam, Duel)));

        ++DuelIndex;
    }

    return ParsedInfo;
}

void ADuelManager::StartForcedDuel(EDuelType a_DuelType, int a_DuelSquareIdx)
{
    if (!m_IsForcingDuel)
    {
        m_IsForcingDuel = true;
        
        m_DuelType = a_DuelType;
        SetDuelSquareIndex(a_DuelSquareIdx);
        SetRouletteResult(0);
    }
}

void ADuelManager::FinishForcedDuel()
{
    if (m_IsForcingDuel)
    {
        m_DuelType = EDuelType::ALL_IN_COINS;
        SetDuelSquareIndex(-1);
        SetRouletteResult(-1);
        
        m_IsForcingDuel = false;
    }
}

void ADuelManager::RegisterDuel(int32 a_Winner, int32 a_BetPercentage, int32 a_Coins, int32 a_Crowns)
{
    UChallengeDto* Registry = NewObject<UChallengeDto>();

    if (!Registry)
        return;

    Registry->WinnerTeam = a_Winner;
    Registry->BetPercentage = a_BetPercentage;
    Registry->CoinsGained = a_Coins;
    Registry->CrownsGained = a_Crowns;

    m_DuelsRegistry.Add(Registry);
}

void ADuelManager::SendRegistryToInstance()
{
    auto GameInstance {GetGameInstance<UManagerGameInstance>()};
    
    if (GameInstance)
    {
        GameInstance->GetGameDataManager().SetChallengesRegistry(m_DuelsRegistry);
    }
}

void ADuelManager::SetRouletteResult(const int a_RouletteResult)
{
    m_RouletteResult = a_RouletteResult;
}

void ADuelManager::SetDuelSquareIndex(const int a_DuelSquareIndex)
{
    m_DuelSquareIndex = a_DuelSquareIndex;
}
