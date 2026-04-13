#include "PlayersControllerBase.h"

#include <PartyJungle/Player/Minion/Minion.h>
#include <PartyJungle/Controllers/PlayersControllers/PlayerInputsControllers/PlayerInputsControllerBase.h>


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
	// ToDo Capy: Revisar perquè no funciona el SetPossessions(...). De moment es pot fer amb BindInput de jugadors concrets.
	//auto InputManager {GetGameInstance<UManagerGameInstance>()->GetInputManager()};
	//InputManager->SetAllPlayersPossessed();
	
	for (auto PlayerData : m_Players)
	{
		PlayerData.GetInputsController()->OnStart();
	}
	
	SetInputsEnabled(true);
	SetEventsEnabled(true);
}

void APlayersControllerBase::OnExit_Implementation()
{
	for (auto PlayerData : m_Players)
	{
		PlayerData.GetInputsController()->OnExit();
	}
	
	SetInputsEnabled(false);
	SetEventsEnabled(false);
	
	m_CurrentPlayerId = 0;
	m_CurrentMinionId = 0;
}

void APlayersControllerBase::SetPlayerById(int a_PlayerId)
{
	if (a_PlayerId < 0 || a_PlayerId >= m_Players.Num())
	{
		UE_LOG(LogTemp, Error, TEXT("Invalid player id: %d"), a_PlayerId);
	}
	else
	{
		int OldPlayerId {m_CurrentPlayerId};
		m_CurrentPlayerId = a_PlayerId;
		
		m_EventPlayerChanged.Broadcast(OldPlayerId, m_CurrentPlayerId);
		
		SetMinionById(0);
	}
}

void APlayersControllerBase::NextPlayer()
{
	int OldPlayerId {m_CurrentPlayerId};
	m_CurrentMinionId = 0;
	++m_CurrentPlayerId;
	if (m_CurrentPlayerId >= m_Players.Num())
	{
		m_CurrentPlayerId = 0;
	}
	
	m_EventPlayerChanged.Broadcast(OldPlayerId, m_CurrentPlayerId);
}

void APlayersControllerBase::SetMinionById(int a_MinionId)
{
	if (a_MinionId < 0 || a_MinionId >= GetCurrentPlayer().m_Minions.Num())
	{
		UE_LOG(LogTemp, Error, TEXT("Invalid minion id: %d"), a_MinionId);
	}
	else
	{
		int OldMinionId {m_CurrentMinionId};
		m_CurrentMinionId = a_MinionId;
		
		m_EventMinionChanged.Broadcast(m_CurrentPlayerId, OldMinionId, m_CurrentMinionId);
	}
}

void APlayersControllerBase::NextMinion()
{
	int OldMinionId {m_CurrentMinionId};
	++m_CurrentMinionId;
	if (m_CurrentMinionId >= GetCurrentPlayer().m_Minions.Num())
	{
		m_CurrentMinionId = 0;
	}
	
	m_EventMinionChanged.Broadcast(m_CurrentPlayerId, OldMinionId, m_CurrentMinionId);
}

void APlayersControllerBase::PreviousMinion()
{
	int OldMinionId {m_CurrentMinionId};
	--m_CurrentMinionId;
	if (m_CurrentMinionId < 0)
	{
		m_CurrentMinionId = GetCurrentPlayer().m_Minions.Num() - 1;
	}
	
	m_EventMinionChanged.Broadcast(m_CurrentPlayerId, OldMinionId, m_CurrentMinionId);
}

int APlayersControllerBase::GetCurrentPlayerId() const
{
	return m_CurrentPlayerId;
}

FPlayerData& APlayersControllerBase::GetCurrentPlayer()
{
	return m_Players[m_CurrentPlayerId];
}

int APlayersControllerBase::GetCurrentMinionId() const
{
	return m_CurrentMinionId;
}

AMinion* const APlayersControllerBase::GetCurrentMinion()
{
	return GetCurrentPlayer().m_Minions[m_CurrentMinionId];
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

TArray<int> APlayersControllerBase::GetPlayersByTeamId(int a_TeamId)
{
	TArray<int> TeamPlayers;
	for (FPlayerData& PlayerData : m_Players)
	{
		if (PlayerData.GetTeamId() == a_TeamId)
		{
			TeamPlayers.Add(PlayerData.GetPlayerId());
		}
	}
	
	return TeamPlayers;
}

void APlayersControllerBase::SetPlayerInputsEnabled(int a_PlayerId, bool a_Enabled)
{
	m_Players[a_PlayerId].GetInputsController()->SetInputsEnabled(a_Enabled);
}

void APlayersControllerBase::SetAllPlayersInputsEnabled(bool a_Enabled)
{
	for (auto PlayerData : m_Players)
	{
		PlayerData.GetInputsController()->SetInputsEnabled(a_Enabled);
	}
}

bool APlayersControllerBase::AssignPlayerToTeam(const int a_PlayerId, const int a_TeamId)
{
	const bool IsValidPlayerAndTeam {a_PlayerId >= 0 && a_PlayerId < GetPlayersAmount() && a_TeamId >= 0 && a_TeamId < GetPlayersAmount()};
	if (IsValidPlayerAndTeam)
	{
		GetPlayerById(a_PlayerId).SetTeamId(a_TeamId);
	}
	
	return IsValidPlayerAndTeam;
}
