#include "PlayerData.h"

#include "PlayerInputs.h"
#include "PartyJungle/Controllers/PlayersControllerBase.h"


void FPlayerData::Init(APlayersControllerBase* const a_PlayersController, int a_PlayerId)
{
	m_PlayerId = a_PlayerId;
	
	UWorld* World = a_PlayersController->GetWorld();
	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = a_PlayersController;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	m_PlayerInputsController = World->SpawnActor<APlayerInputsControllerBase>(m_PlayerInputsControllerBP->GeneratedClass, a_PlayersController->GetActorLocation(), a_PlayersController->GetActorRotation(), SpawnParams);
	m_PlayerInputsController->SetPlayerData(this);
}
