#include "SceneManager.h"

#include <PartyJungle/GameInstance/ManagerGameInstance.h>
#include <PartyJungle/Managers/StateManager.h>


ASceneManager::ASceneManager()
{
	PrimaryActorTick.bCanEverTick = false;
}

void ASceneManager::BeginPlay()
{
	Super::BeginPlay();
	
	auto GameManager {GetGameInstance<UManagerGameInstance>()};
	GameManager->SetSceneManager(this);
	
	if (GameManager->IsGameManagerReady())
	{
		m_StateManager = GameManager->GetStateManager();
	}
	else
	{
		GameManager->GetEvent_GameManagerLoaded().AddUniqueDynamic(this, &ASceneManager::OnGameManagerLoaded);
	}
}

void ASceneManager::ChangeScene(const FString& a_TargetState)
{
	if (!m_IsSceneChanging)
	{
		m_IsSceneChanging = true;
	
		m_PreviousState = GetGameInstance<UManagerGameInstance>()->GetStateManager()->GetGameStateId();
		m_TargetState = a_TargetState;
	
		UE_LOG(LogTemp, Log, TEXT("Changing Scene with State '%s' for Scene with State '%s'"), *m_PreviousState, *m_TargetState);
		GetGameInstance<UManagerGameInstance>()->GetStateManager()->ChangeState(SCENE_TRANSITION_STATE);
		StartChangingSceneCinematic(m_PreviousState, m_TargetState);
		GetWorld()->GetTimerManager().SetTimer(m_ChangeSceneTimer, this, &ASceneManager::ChangeToTargetState, m_ExitSceneDelay, false);
	}
}

void ASceneManager::SetExitSceneDelay(float a_ExitSceneDelay)
{
	m_ExitSceneDelay = a_ExitSceneDelay;
}

void ASceneManager::SetEnterSceneDelay(float a_EnterSceneDelay)
{
	m_EnterSceneDelay = a_EnterSceneDelay;
}

FEvent_SceneChanged* const ASceneManager::GetEvent_SceneChanged()
{
	return &m_EventSceneChanged;
}

void ASceneManager::OnGameManagerLoaded(UManagerGameInstance* const a_GameManager)
{
	auto GameManager {GetGameInstance<UManagerGameInstance>()};
	GameManager->GetEvent_GameManagerLoaded().RemoveDynamic(this, &ASceneManager::OnGameManagerLoaded);
	
	m_StateManager = GameManager->GetStateManager();
}

void ASceneManager::ChangeToTargetState()
{
	GetWorld()->GetTimerManager().ClearTimer(m_ChangeSceneTimer);
	
	EndChangingSceneCinematic(m_PreviousState, m_TargetState);
	GetWorld()->GetTimerManager().SetTimer(m_ChangeSceneTimer, this, &ASceneManager::OnFinishChangingScenes, m_EnterSceneDelay, false);
}

void ASceneManager::OnFinishChangingScenes()
{
	GetWorld()->GetTimerManager().ClearTimer(m_ChangeSceneTimer);
	m_IsSceneChanging = false;
	
	GetGameInstance<UManagerGameInstance>()->GetStateManager()->ChangeState(m_TargetState);
	
	UE_LOG(LogTemp, Log, TEXT("Changed to Scene with State '%s' successfully"), *m_TargetState);
	m_EventSceneChanged.Broadcast(m_PreviousState, m_TargetState);
	
	m_PreviousState = "";
	m_TargetState = "";
}
