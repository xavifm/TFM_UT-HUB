#include "AirCannon_GLController.h"

#include <PartyJungle/Controllers/CameraControllers/CameraControllerBase.h>
#include <PartyJungle/GameInstance/ManagerGameInstance.h>
#include <PartyJungle/Managers/StateManager.h>
#include <PartyJungle/Minigame/Minigame1/AirCannon.h>
#include <PartyJungle/Controllers/PlayersControllers/PlayersControllerBase.h>
#include <PartyJungle/Managers/DuelManager.h>


void AAirCannon_GLController::OnStart_Implementation()
{
	Super::OnStart_Implementation();
	
	m_CameraCtr = GetGameInstance<UManagerGameInstance>()->GetStateManager()->GetController<ACameraControllerBase>(EGameControllers::Camera);
	if (m_CameraCtr == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("Camera Controller not found."));
	}
	
	SetupAirCannonsInfo();

	GetWorld()->GetTimerManager().SetTimer(m_CannonsTimer, [this, StartTime {m_StartTime}]() {
		StartCannonsCharge(StartTime);
	}, m_StartTime, false);
}

void AAirCannon_GLController::SetupAirCannonsInfo()
{
	// ToDo Capy: Remove when teams workflows work normally
	StartForcedDuel(EDuelType::ALL_IN_COINS, 4, 1);
	
	if (m_PlayingTeams.Num() == 0)
		return;

	auto PlayersCtr {GetGameInstance<UManagerGameInstance>()->GetStateManager()->GetController<APlayersControllerBase>(EGameControllers::Players)};
	PlayersCtr->SetAllPlayersInputsEnabled(false);
	
	for (auto TeamId : m_PlayingTeams)
	{
		auto PlayersInTeam {PlayersCtr->GetPlayersByTeamId(TeamId)};
		for (auto PlayerId : PlayersInTeam)
		{
			PlayersCtr->SetPlayerInputsEnabled(PlayerId, true);
		}
		
		for (size_t i {0}; i < m_AirCannons.Num(); i++)
		{
			if (i == TeamId)
			{
				m_AirCannons[i]->m_TeamId = TeamId;
				m_AirCannons[i]->m_GameLoopCtr = this;
				
				AActor* ProjectileReference {m_AirCannons[i]->m_ProjectileReference};
				if (ProjectileReference) 
				{
					ProjectileReference->SetActorTickEnabled(true);
					ProjectileReference->SetActorHiddenInGame(true);
				}
				
				break;
			}
		}
	}
}

void AAirCannon_GLController::ResetGameLoop() 
{
	Super::ResetGameLoop();

	if (m_CameraCtr)
	{
		m_CameraCtr->SetCameraTarget(m_OriginalCameraTarget);
	}

	for (int i {0}; i < m_AirCannons.Num(); i++)
	{
		m_AirCannons[i]->ResetAirCannon();
	}
}

void AAirCannon_GLController::FinishGameLoop(int a_Winner)
{
	if (!m_GameLoopFinished)
	{
		m_CameraCtr->SetCameraTarget(nullptr);
	
		Super::FinishGameLoop(a_Winner);
	}
}

void AAirCannon_GLController::SetTeamScore(int a_Team, int a_Score)
{
	Super::SetTeamScore(a_Team, a_Score);
	
	SetCameraTarget();
}

void AAirCannon_GLController::StartCannonsCharge(float a_Time)
{
	GetWorld()->GetTimerManager().ClearTimer(m_CannonsTimer);
	
	for (int32 i {0}; i < m_AirCannons.Num(); i++)
	{
		if (m_AirCannons[i])
			m_AirCannons[i]->StartCannonCharge(a_Time);
	}
}

void AAirCannon_GLController::SetCameraTarget()
{
	int HighestTeam {-1};
	int HighestScore {TNumericLimits<int>::Min()};

	for (const auto [Score, Team] : m_GameScores)
	{
		if (Score > HighestScore)
		{
			HighestScore = Score;
			HighestTeam = Team;
		}
	}

	if (HighestTeam == -1) return;

	for (AAirCannon* Cannon : m_AirCannons)
	{
		if (Cannon && Cannon->m_TeamId == HighestTeam && Cannon->m_ProjectileReference)
		{
			m_CameraCtr->SetCameraTarget(Cannon->m_ProjectileReference);
			break;
		}
	}
}
