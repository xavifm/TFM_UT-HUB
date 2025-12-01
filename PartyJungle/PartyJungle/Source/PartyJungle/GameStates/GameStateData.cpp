#include "GameStateData.h"

#include "PartyJungle/GameInstance/ManagerGameInstance.h"
#include "PartyJungle/Managers/StateManager.h"


AGameStateData::AGameStateData() : 
	AActor()
{
	PrimaryActorTick.bCanEverTick = false;
}

void AGameStateData::BeginPlay()
{
	Super::BeginPlay();
	
	InitState();
}

void AGameStateData::InitState()
{
	auto GameInstance {GetGameInstance<UManagerGameInstance>()};
	const bool StateAdded {GameInstance->GetStateManager()->AddState(m_GameStateId, this)};
	if (!StateAdded)
	{
		UE_LOG(LogTemp, Error, TEXT("Wasn't able to add game state '%s' successfully"), *UEnum::GetValueAsString(m_GameStateId));
	}
	else
	{
		if (UStateManager::GetDefaultGameState() == m_GameStateId)
		{
			const bool StateChanged {GameInstance->GetStateManager()->ChangeState(m_GameStateId)};
			if (!StateChanged)
			{
				UE_LOG(LogTemp, Error, TEXT("Wasn't able to set the default dame state '%s' successfully"), *UEnum::GetValueAsString(m_GameStateId));
			}
		}
	}
}
