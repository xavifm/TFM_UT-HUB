#include "./RoundsManager.h"

#include <Kismet/GameplayStatics.h>
#include <PartyJungle/Challenge/ChallengeInformation.h>


ARoundsManager::ARoundsManager()
{
	PrimaryActorTick.bCanEverTick = false;
}

void ARoundsManager::BeginPlay()
{
	Super::BeginPlay();
	m_CurrentRound = 1;
}

int ARoundsManager::GetCurrentRound()
{
	return m_CurrentRound;
}

TArray<bool> ARoundsManager::HandleEndRound(bool a_Minigame)
{
	TArray<bool> MinigamesResult;
	bool DuelsQuery = {false};
	bool MinigameQuery = {false};
	
	if (a_Minigame) 
	{
		DuelsQuery = CheckForDuelMinigame();
		MinigameQuery = CheckForEndRoundMinigame();
		
		MinigamesResult.Add(DuelsQuery);
		MinigamesResult.Add(MinigameQuery);
		
		if (DuelsQuery || MinigameQuery)
			return MinigamesResult;
	}

	if (GetRoundsLeft() > 0)
		StartNextRound();
	else 
	{
		m_GameFinished = true;
		GetWorld()->GetTimerManager().SetTimer(m_TimerHandle, this, &ARoundsManager::FinishGame, 1, false);
	}

	return MinigamesResult;
}

void ARoundsManager::StartNextRound()
{
	if (!m_MapUI)
		return;

	++m_CurrentRound;

	int RoundShown {GetRoundsLeft()};
	FString FeedbackText {""};

	if(RoundShown <= ROUNDS_REMAINING_FOR_ANNOUNCE)
	{
		FeedbackText = FString::Printf(TEXT("%d turns left"), RoundShown);

		if(RoundShown == 0)
			FeedbackText = FString::Printf(TEXT("Last Round!"));

		m_MapUI->ShowTextInScreen(FeedbackText, -1);

		if (m_AudioManager)
			m_AudioManager->PlaySFX(LAST_ROUNDS_SFX, LAST_ROUNDS_SFX_VOLUME);
	}
}

int ARoundsManager::GetRoundsLeft()
{
	return m_MaxRounds - m_CurrentRound;
}

void ARoundsManager::FinishGame()
{
	GetWorld()->GetTimerManager().ClearTimer(m_TimerHandle);

	if (!m_MapUI || !m_ScoresDB)
		return;

	m_ScoresDB->SendTransactionsAndScoresToInstance();

	UGameplayStatics::OpenLevel(this, FName(END_GAME_SCENE_NAME));
}

bool ARoundsManager::CheckForDuelMinigame()
{
	bool MinigameQuery {false};
	
	if (!m_MapUI || !m_ChallengeInfo)
		return MinigameQuery;

	if (m_ChallengeInfo->SquaresWithDuelsInRound.Num() > 0)
		MinigameQuery = true;

	return MinigameQuery;
}

bool ARoundsManager::CheckForEndRoundMinigame()
{
	return m_EndRoundMinigameAvailable;
}

void ARoundsManager::AssignMapUI(UPlayerMapUI* a_MapUI)
{
	m_MapUI = a_MapUI;
}

