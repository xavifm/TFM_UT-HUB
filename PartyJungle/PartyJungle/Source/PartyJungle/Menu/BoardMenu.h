#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BoardMenu.generated.h"

UCLASS()
class PARTYJUNGLE_API ABoardMenu : public AActor
{
	GENERATED_BODY()
	
public:
	ABoardMenu();

	UFUNCTION(BlueprintCallable)
	void SwitchMenuPosition(int _direction);

	UFUNCTION(BlueprintCallable)
	void SwitchPartyMenuPosition(int _direction);

	UFUNCTION(BlueprintCallable)
	void SwitchOptionsMenuPosition(int _direction);

	UFUNCTION(BlueprintCallable)
	void SwitchCreditsMenuPosition(int _direction);

	UFUNCTION(BlueprintCallable)
	void SwitchPartyValues(int _position);

	UFUNCTION(BlueprintCallable)
	void PerformPartyAction();

	UFUNCTION(BlueprintCallable)
	void PerformOptionsAction();

	UFUNCTION(BlueprintCallable)
	void PerformCreditsAction();

	UFUNCTION()
	void StartGame();
	
	UFUNCTION(BlueprintCallable)
	void StartGameCheat();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void PerformMenuAction(int CurrentBoardPosition);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void StartGameSequence();

	UFUNCTION(BlueprintCallable)
	int GetCurrentMenuPosition();

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void SwitchBoardVisibleOption(int _position);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void SwitchBoardPartyCurrentOption(int _position);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void SwitchMenuNumber(int _position, int _number);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void ExitPlayMenuMode();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void ExitOptionsMenuMode();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void ExitCreditsMenuMode();

	UPROPERTY(BlueprintReadWrite)
	bool PlayMenuMode = false;

	UPROPERTY(BlueprintReadWrite)
	bool OptionsMenuMode = false;

	UPROPERTY(BlueprintReadWrite)
	bool CreditsMenuMode = false;

private:
	UPROPERTY();
	int CurrentMenuPosition = 0;

	UPROPERTY();
	int CurrentPartyMenuPosition = 0;

	UPROPERTY();
	int CurrentOptionsMenuPosition = 0;

	UPROPERTY();
	int CurrentCreditsMenuPosition = 0;

	UPROPERTY()
	int PlayersQ = 4;

	UPROPERTY()
	int GameRounds = 10;

	const int MAX_MENU_POSITIONS = 3;
	const int MAX_PLAY_MENU_POSITIONS = 3;
	const int MAX_OPTIONS_MENU_POSITIONS = 3;
	const int MAX_CREDITS_MENU_POSITIONS = 0;
	const int MIN_PLAYERS = 2;
	const int MAX_PLAYERS = 4;
	const int MIN_ROUNDS = 5;
	const int MAX_ROUNDS = 10;

};
