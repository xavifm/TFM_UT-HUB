#include "WinnerSequence_GLController.h"

#include <PartyJungle/GameInstance/ManagerGameInstance.h>
#include <PartyJungle/Managers/SceneManager.h>


void AWinnerSequence_GLController::OnContextStart(void* a_Context)
{
	int* p_WinnerTeam {static_cast<int*>(a_Context)};
	
	ShowEndScreenSequence(*p_WinnerTeam);
	GetWorld()->GetTimerManager().SetTimer(m_TimerHandle, this, &AWinnerSequence_GLController::DelayedSceneSwitch, FINISH_WINNER_SCENE_DELAY, false);
	
	delete p_WinnerTeam;
}

void AWinnerSequence_GLController::OnExit_Implementation()
{
	Super::OnExit_Implementation();
	
	GetWorld()->GetTimerManager().ClearTimer(m_TimerHandle);
}

void AWinnerSequence_GLController::DelayedSceneSwitch()
{
	GetGameInstance<UManagerGameInstance>()->GetSceneManager()->ChangeScene("MainLoop");
}