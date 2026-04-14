#include "DuelBase_GameLoopController.h"

#include <PartyJungle/Controllers/PlayersControllers/PlayersControllerBase.h>
#include <PartyJungle/GameInstance/ManagerGameInstance.h>
#include <PartyJungle/Managers/DuelManager.h>
#include <PartyJungle/Managers/StateManager.h>
#include <PartyJungle/Map/Square.h>


void ADuelBase_GameLoopController::OnExit_Implementation()
{
	Super::OnExit_Implementation();
	
	auto DuelManager {GetGameInstance<UManagerGameInstance>()->GetDuelManager()};
	FinishDuel(m_WinnerTeam, DuelManager->GetDuelSquareIndex()); // Capy Nota: El DuelSquareIndex s'assignaria desde el estat previ (estat de selecció de duel) o directament desde el GameLoop principal.
}

void ADuelBase_GameLoopController::FinishGameLoop(int a_Winner)
{
	if (!m_GameLoopFinished)
	{
		m_GameLoopFinished = true;
		GetGameInstance<UManagerGameInstance>()->GetStateManager()->ChangeState(m_NextState, new int(a_Winner));
	}
}

void ADuelBase_GameLoopController::FinishDuel(int a_Winner, int a_DuelIndex)
{
	auto GameManager {GetGameInstance<UManagerGameInstance>()};
	auto DuelManager {GameManager->GetDuelManager()};
	
	if (DuelManager->IsForcedDuel())
	{
		DuelManager->FinishForcedDuel();
	}
	else
	{
		EDuelType DuelType {GetDuelType(a_DuelIndex)};
		bool FullPot {DuelType == EDuelType::ALL_IN_COINS || DuelType == EDuelType::ALL_IN_VS_ST};
	
		auto PlayersCtr {GameManager->GetStateManager()->GetController<APlayersControllerBase>(EGameControllers::Players)};
		TArray<AMinion*> minionsList = DuelManager->m_SquaresWithDuelsInRound[a_DuelIndex]->MinionsList;
	
		// ToDo Capy: Double-Check if this is correct.
		PlayersCtr->SetMinionById(0);
		//CurrentMinion = minionsList[0];
		//
    
		for (auto Minion : minionsList)
		{
			int minionTeam = static_cast<int>(Minion->Team);
        
			if (static_cast<int>(Minion->Team) == a_Winner)
			{
				int Pot = DuelManager->GetSavedPot();
            
				if (!FullPot)
					Pot /= 2;
            
				Minion->UpdateCoins(Pot, true);
				// ToDo Capy: Poner cuando se implemente el UIController
				//MapUI->UpdateCoins(minionTeam, Pot);

				break;
			}
		}
	}

	CloseDuelMenu(true);
}

void ADuelBase_GameLoopController::CloseDuelMenu(bool a_EndTurn)
{
	// ToDo Capy: Change when UI Controller is ready
	
	/*SwitchChallengeUI(false);

	MapUI->SwitchRouletteVisibility(2, false);
	MapUI->SwitchRouletteVisibility(3, false);
	MapUI->SwitchRouletteVisibility(4, false);*/

	if (a_EndTurn)
	{
		GetGameInstance<UManagerGameInstance>()->GetDuelManager()->ResetDuels();
		//SwitchChallengeMenuUI(false, TArray<AMinion*>());
		//GetWorld()->GetTimerManager().SetTimer(m_TimerHandle, this, &ADuelBase_GameLoopController::ChangeSceneTransition, TIME_BEFORE_FINISH_DUEL, false);
	}
}

EDuelType ADuelBase_GameLoopController::GetDuelType(int a_DuelIndex)
{
	EDuelType DuelType;
	
	auto DuelManager {GetGameInstance<UManagerGameInstance>()->GetDuelManager()};
	if (DuelManager->IsForcedDuel())
	{
		DuelType = DuelManager->GetDuelType();
		UE_LOG(LogTemp, Log, TEXT("Forced duel: %d"), static_cast<int32>(DuelType));
	}
	else
	{
		auto PotsInfo = DuelManager->ParsePotsInfo(a_DuelIndex);
		DuelType = PotsInfo[DuelManager->GetRouletteResult()].second.second;
		UE_LOG(LogTemp, Log, TEXT("Roulette duel: %d"), static_cast<int32>(DuelType));
	}
	
	return DuelType;
}

void ADuelBase_GameLoopController::StartForcedDuel(EDuelType a_DuelType, int a_TeamsToCreate, int a_DuelSquareIdx)
{
	// Teams creation.
	m_PlayingTeams.Empty();
	for (int TeamId {0}; TeamId < a_TeamsToCreate; ++TeamId)
	{
		m_PlayingTeams.Add(TeamId);
	}
	
	// Duel preparation.
	GetGameInstance<UManagerGameInstance>()->GetDuelManager()->StartForcedDuel(a_DuelType, a_DuelSquareIdx);
}
