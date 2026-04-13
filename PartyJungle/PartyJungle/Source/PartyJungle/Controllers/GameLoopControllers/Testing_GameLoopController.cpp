#include "Testing_GameLoopController.h"

#include <PartyJungle/Controllers/CameraControllers/CameraControllerBase.h>
#include <PartyJungle/Controllers/CameraControllers/CameraModeControllers/CameraModeControllerBase.h>
#include <PartyJungle/Controllers/PlayersControllers/PlayersControllerBase.h>
#include <PartyJungle/Controllers/PlayersControllers/PlayerInputsControllers/PlayerInputsControllerBase.h>
#include <PartyJungle/GameInstance/ManagerGameInstance.h>
#include <PartyJungle/GameStates/GameStateData.h>
#include <PartyJungle/Managers/InputManager.h>
#include <PartyJungle/Managers/SceneManager.h>
#include <PartyJungle/Managers/StateManager.h>


void ATesting_GameLoopController::OnStart_Implementation()
{
	Super::OnStart_Implementation();
	
	auto PlayerCtr {GetGameInstance<UManagerGameInstance>()->GetStateManager()->GetController<APlayersControllerBase>(EGameControllers::Players)};
	PlayerCtr->SetAllPlayersInputsEnabled(true);
	for (int PlayerId {0}; PlayerId < PlayerCtr->GetPlayersAmount(); ++PlayerId)
	{
		auto PlayerInputsCtr {PlayerCtr->GetPlayerById(PlayerId).GetInputsController()};
		PlayerInputsCtr->GetInputKeyEvent(EInputKeys::Trigger1_Left, ETriggerEvents::Pressed)->AddUniqueDynamic(this, &ATesting_GameLoopController::OnTrigger1_Left);
		PlayerInputsCtr->GetInputKeyEvent(EInputKeys::Trigger2_Right, ETriggerEvents::Pressed)->AddUniqueDynamic(this, &ATesting_GameLoopController::OnTrigger2_Right);
		PlayerInputsCtr->GetInputKeyEvent(EInputKeys::Trigger1_Right, ETriggerEvents::Pressed)->AddUniqueDynamic(this, &ATesting_GameLoopController::OnTrigger1_Right);
	}
}

void ATesting_GameLoopController::OnExit_Implementation()
{
	Super::OnExit_Implementation();
	
	auto PlayerCtr {GetGameInstance<UManagerGameInstance>()->GetStateManager()->GetController<APlayersControllerBase>(EGameControllers::Players)};
	PlayerCtr->SetAllPlayersInputsEnabled(true);
	for (int PlayerId {0}; PlayerId < PlayerCtr->GetPlayersAmount(); ++PlayerId)
	{
		auto PlayerInputsCtr {PlayerCtr->GetPlayerById(PlayerId).GetInputsController()};
		PlayerInputsCtr->GetInputKeyEvent(EInputKeys::Trigger1_Left, ETriggerEvents::Pressed)->RemoveDynamic(this, &ATesting_GameLoopController::OnTrigger1_Left);
		PlayerInputsCtr->GetInputKeyEvent(EInputKeys::Trigger2_Right, ETriggerEvents::Pressed)->RemoveDynamic(this, &ATesting_GameLoopController::OnTrigger2_Right);
		PlayerInputsCtr->GetInputKeyEvent(EInputKeys::Trigger1_Right, ETriggerEvents::Pressed)->RemoveDynamic(this, &ATesting_GameLoopController::OnTrigger1_Right);
	}
}

void ATesting_GameLoopController::OnTrigger1_Left(EInputKeys a_InputKey, ETriggerEvents a_InputEvent, int a_PlayerId)
{
	auto CameraCtr {GetGameInstance<UManagerGameInstance>()->GetStateManager()->GetController<ACameraControllerBase>(EGameControllers::Camera)};
	if (CameraCtr->GetCameraMode() == ECameraModes::FullView)
	{
		CameraCtr->SetCameraMode(ECameraModes::Focused);
	}
	else if (CameraCtr->GetCameraMode() == ECameraModes::Focused)
	{
		CameraCtr->SetCameraMode(ECameraModes::FullView);
	}
}

void ATesting_GameLoopController::OnTrigger2_Right(EInputKeys a_InputKey, ETriggerEvents a_InputEvent, int a_PlayerId)
{
	auto StateManager {GetGameInstance<UManagerGameInstance>()->GetStateManager()};
	if (StateManager->GetGameStateId() == StateManager->GetDefaultGameStateId())
	{
		GetGameInstance<UManagerGameInstance>()->GetSceneManager()->ChangeScene("AirCannon");
	}
}

void ATesting_GameLoopController::OnTrigger1_Right(EInputKeys a_InputKey, ETriggerEvents a_TriggerEvent, int a_PlayerId)
{
	auto PlayersCtr {GetGameInstance<UManagerGameInstance>()->GetStateManager()->GetController<APlayersControllerBase>(EGameControllers::Players)};
	PlayersCtr->NextPlayer();
}
