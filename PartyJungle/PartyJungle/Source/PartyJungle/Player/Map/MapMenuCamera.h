#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include <PartyJungle/Map/MapDatabase.h>
#include <EnhancedInputComponent.h>
#include "InputMappingContext.h"
#include "InputAction.h"
#include <PartyJungle/Dice/Dice.h>
#include <PartyJungle/Map/SquareOptional.h>
#include <PartyJungle/Player/UI/PlayerMapUI.h>
#include <PartyJungle/Challenge/ChallengeInformation.h>
#include "Camera/CameraComponent.h"
#include <PartyJungle/World/WorldManager.h>

#include "MapMenuCamera.generated.h"

UCLASS()
class PARTYJUNGLE_API AMapMenuCamera : public APawn
{
	GENERATED_BODY()

public:
	AMapMenuCamera();

protected:
	virtual void BeginPlay() override;

	void Tick(float DeltaTime);

public:	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
	TSubclassOf<UUserWidget> MenuWidgetClass;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Input")
	UInputAction* AxisxAction;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Input")
	UInputAction* KeyaAction;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Input")
	UInputAction* KeybAction;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Input")
	UInputMappingContext* InputMappingContext;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera Parameters")
	float CameraSpeed = 5;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Minion On Camera")
	AMinion* CurrentMinion;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera Navigation")
	AMapDatabase* MapDb;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Score Reference")
	AScoreDatabase* ScoreDb;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera Navigation")
	int CurrentMinionPos;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera Navigation")
	int CurrentMinionTeam;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dice System")
	ADice* Dice;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Challenge System")
	AChallengeInformation* ChallengeInformation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Map Manager")
	AWorldManager* WorldSceneManager;

	UFUNCTION(BlueprintCallable, Category = "Scene Toggle")
	void SwitchMainScene(int _minigameIndex = -1);

	UFUNCTION(BlueprintCallable, Category = "Functions")
	void SwitchController();

	UFUNCTION(BlueprintCallable, Category = "Functions")
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable, Category = "Functions")
	void HandleLeftRightInput(const FInputActionValue& _value);

	UFUNCTION(BlueprintCallable, Category = "Functions")
	void HandleConfirmInput();

	UFUNCTION(BlueprintCallable, Category = "Functions")
	void StartMinigame(bool _duel, int _minigame, TArray<AMinion*> _minionsPlaying);

	UFUNCTION(BlueprintCallable, Category = "Functions")
	void HandleBackInput();

	UFUNCTION(BlueprintCallable, Category = "Functions")
	void CloseChallengeMenu();

	UFUNCTION(BlueprintCallable, Category = "Functions")
	void OpenChallengeMenu(AMinion* _challenger, AMinion* _victim);

	UFUNCTION(BlueprintCallable, Category = "Functions")
	void RefreshChallengeInfo(int _direction);

	UFUNCTION(BlueprintCallable, Category = "Functions")
	void FinishDuel(int _winner);

	UFUNCTION(BlueprintCallable, Category = "Functions")
	void SwitchChallengeUI(bool _visibility);

	UFUNCTION(BlueprintCallable, Category = "Functions")
	void SwitchMenuWidget(bool _enabled);

	UFUNCTION(BlueprintCallable, Category = "Functions")
	void SwitchPathMenu(bool _enabled, TArray<ASquareOptional*> _paths);

	UFUNCTION(BlueprintCallable, Category = "Functions")
	void SwitchCameraTeam(int _direction);

	UFUNCTION(BlueprintCallable, Category = "Functions")
	void FocusNextMinion(int _direction);

	UFUNCTION(BlueprintCallable, Category = "Functions")
	void RollTheDice();

	UFUNCTION(BlueprintCallable, Category = "Functions")
	void ChangeSelectedPath(int _direction);

	UFUNCTION(BlueprintCallable, Category = "Functions")
	void ConfirmPathSelection();


private:
	const int MAX_MINION_NUMBER = 3;
	const int MAX_TEAM_NUMBER = 2;
	const float DICE_HEIGHT_OFFSET = 140;
	const float TIME_BEFORE_RESTORING_ROUND = 2;
	const float TIME_BEFORE_FINISH_DUEL = 2;

	UFUNCTION(BlueprintCallable, Category = "Functions")
	void UpdateDicePosition(bool _resizeDice = true);

	UFUNCTION(BlueprintCallable, Category = "Functions")
	void UpdateMinionEconomy(int _coins = 0, int _crowns = 0);

	UFUNCTION(BlueprintCallable, Category = "Functions")
	void RestoreTurnLogic();

	bool InputEnabled = true;
	bool RollingDice = false;
	bool SelectingPath = false;
	bool DuelUI = false;
	bool TimedActionExecuted = false;

	int SelectedPathIndex = 0;

	UPROPERTY()
	TArray<ASquareOptional*> AvailablePaths;
	
	UPROPERTY()
	UPlayerMapUI* MapUI;

	UPROPERTY()
	UUserWidget* MenuWidget;
};
