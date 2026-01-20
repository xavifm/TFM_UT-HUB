#include "PlayersControllerBase.h"

#include <Kismet/GameplayStatics.h>
#include <PartyJungle/GameInstance/ManagerGameInstance.h>
#include <PartyJungle/GameInstance/GameInstanceAux/GameData.h>
#include <PartyJungle/Player/Minion/Minion.h>

#include "ControllerAuxs/PlayerInputs.h"
#include "PartyJungle/Managers/InputManager.h"
#include "PartyJungle/Map/SquareStar.h"


void APlayersControllerBase::OnBeginState_Implementation()
{
	for (int PlayerId {0}; PlayerId < m_Players.Num(); ++PlayerId)
	{
		m_Players[PlayerId].Init(this, PlayerId);
		m_Players[PlayerId].GetInputsController()->OnBeginState();
	}
}

void APlayersControllerBase::OnStart_Implementation()
{
	auto InputManager {GetGameInstance<UManagerGameInstance>()->GetInputManager()};
	// ToDo Capy: Revisar perquè no funciona el SetPossessions(...). De moment es pot fer amb BindInput de jugadors concrets.
	//InputManager->SetAllPlayersPossessed();
	
	for (auto PlayerData : m_Players)
	{
		PlayerData.GetInputsController()->OnStart();
	}
	
	auto Event_ButtonDownPressed {InputManager->GetPlayerKeyEvent(0, EInputKeys::Button_Down, ETriggerEvents::Pressed)};
	Event_ButtonDownPressed->AddUniqueDynamic(this, &APlayersControllerBase::HandleConfirmInput);
	InputManager->GetPlayerKeyEvent(1, EInputKeys::Button_Down, ETriggerEvents::Pressed)->AddUniqueDynamic(this, &APlayersControllerBase::HandleConfirmInput);
	//Event_ButtonDownPressed->RemoveDynamic(this, &APlayersControllerBase::HandleConfirmInput);
	
	InputManager->GetPlayerAxisEvent(0, EInputAxes::AxisX_Left)->AddUniqueDynamic(this, &APlayersControllerBase::HandleLeftJoystickInputX);
	InputManager->GetPlayerAxisEvent(1, EInputAxes::AxisX_Left)->AddUniqueDynamic(this, &APlayersControllerBase::HandleLeftJoystickInputX);
	//Event_LeftAxisX->RemoveDynamic(this, &APlayersControllerBase::HandleLeftJoystickInputX);
}

void APlayersControllerBase::OnExit_Implementation()
{
	for (auto PlayerData : m_Players)
	{
		PlayerData.GetInputsController()->OnExit();
	}
	
	m_CurrentPlayerId = 0;
	m_CurrentMinionId = 0;
}

void APlayersControllerBase::NextPlayer()
{
	m_CurrentMinionId = 0;
	++m_CurrentPlayerId;
	if (m_CurrentPlayerId >= m_Players.Num())
	{
		m_CurrentPlayerId = 0;
	}
	
	//m_EventPlayerChanged.Broadcast();
}

void APlayersControllerBase::NextMinion()
{
	int tmpMinionId = m_CurrentMinionId + 1;
	if (m_CurrentMinionId >= m_Players[m_CurrentMinionId].m_Minions.Num())
	{
		tmpMinionId = 0;
	}
	
	m_CurrentMinionId = tmpMinionId;
}

void APlayersControllerBase::PreviousMinion()
{
	int tmpMinionId = m_CurrentMinionId - 1;
	if (tmpMinionId < 0)
	{
		m_CurrentMinionId = m_Players[m_Players.Num() - 1].m_Minions.Num();
	}
	
	m_CurrentMinionId = tmpMinionId;
}

int APlayersControllerBase::GetCurrentPlayerId() const
{
	return m_CurrentPlayerId;
}

int APlayersControllerBase::GetCurrentMinionId() const
{
	return m_CurrentMinionId;
}

AMinion* const APlayersControllerBase::GetCurrentMinion() const
{
	return m_Players[m_CurrentPlayerId].m_Minions[m_CurrentMinionId];
}

AMinion* const APlayersControllerBase::GetMinionById(int a_MinionId, int a_PlayerId) const
{
	if (a_PlayerId < 0)
	{
		a_PlayerId = m_CurrentPlayerId;
	}
	
	return m_Players[a_PlayerId].m_Minions[a_MinionId];
}

FPlayerData& APlayersControllerBase::GetPlayerById(int a_PlayerId)
{
	return m_Players[a_PlayerId];
}

void APlayersControllerBase::HandleConfirmInput(EInputKeys a_InputKey, ETriggerEvents a_TriggerEvent, int a_PlayerId)
{
	UE_LOG(LogTemp, Log, TEXT("Confirm ^^^ input received. Played by player %i"), a_PlayerId);
}

void APlayersControllerBase::HandleLeftJoystickInputX(float a_AxisX, int a_PlayerId)
{
	UE_LOG(LogTemp, Log, TEXT("Joystick inputX received with value %f. Played by player %i"), a_AxisX, a_PlayerId);
}