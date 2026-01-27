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
#include "PartyJungle/Rounds/RoundsManager.h"
#include "PartyJungle/Player/Inventory/Inventory.h"
#include "Camera/CameraComponent.h"
#include <PartyJungle/World/WorldManager.h>

#include "PartyJungle/Minigame/CrossInfo/MinigameLogic.h"
#include "MapMenuCamera.generated.h"

class ASquareShop;

UCLASS()
class PARTYJUNGLE_API AMapMenuCamera : public APawn
{
	GENERATED_BODY()

public:
	AMapMenuCamera();

protected:
	virtual void BeginPlay() override;

	void Tick(float DeltaTime);
	void SimpleRestoreTurn();

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
	UInputAction* KeywiAction;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Input")
	UInputAction* KeyEscAction;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Input")
	UInputAction* LeftJoystickActionX;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Input")
	UInputAction* LeftJoystickActionY;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Input")
	UInputMappingContext* InputMappingContext;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera Parameters")
	float CameraSpeed = 5;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Minion On Camera")
	AMinion* CurrentMinion;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Square Shop Reference")
	ASquareShop* SquareShopReference;
	
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

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory System")
	AInventory* Inventory;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rounds System")
	ARoundsManager* RoundsSystem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Challenge System")
	AChallengeInformation* ChallengeInformation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Map Manager")
	AWorldManager* WorldSceneManager;

	UFUNCTION(BlueprintCallable, Category = "Scene Toggle")
	void SwitchMainScene(bool _isMap = true, EMinigameType _type = EMinigameType::DUEL, ETeamsMode _teams = ETeamsMode::NOTEAM);
	void SwitchUIController();

	UFUNCTION(BlueprintCallable, Category = "Functions")
	void SwitchController();

	UFUNCTION(BlueprintCallable, Category = "Functions")
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable, Category = "Functions")
	void HandleLeftJoystickInputX(const FInputActionValue& _value);

	UFUNCTION(BlueprintCallable, Category = "Functions")
	void HandleLeftJoystickInputY(const FInputActionValue& _value);
	
	UFUNCTION(BlueprintCallable, Category = "Functions")
	void HandleLeftRightInput(const FInputActionValue& _value);

	UFUNCTION(BlueprintCallable, Category = "Functions")
	void HandleConfirmInput();

	UFUNCTION(BlueprintCallable, Category = "Functions")
	void FollowMinionMovement();

	UFUNCTION()
	void CloseDuelMenu(bool _endTurn);

	UFUNCTION()
	void SpinWheelEndSequence();

	UFUNCTION()
	void DelayedSceneSwitch();

	UFUNCTION(BlueprintCallable, Category = "Functions")
	void HandleYInput();

	UFUNCTION(BlueprintCallable, Category = "Functions")
	void HandleEscInput();

	UFUNCTION(BlueprintCallable, Category = "Functions")
	void SwitchFullMapVision();

	UFUNCTION(BlueprintCallable, Category = "Functions")
	void StartMinigame(bool _duel, int _minigame, TArray<AMinion*> _minionsPlaying);

	UFUNCTION(BlueprintCallable, Category = "Functions")
	void StopMinionForDuel();
	void KickYourTeamDiscardableMinions();
	void StartSelectionByTeam();

	UFUNCTION()
	void SwitchMinionToSelectForDuel(int _team, int _direction);

	UFUNCTION()
	void ConfirmMinionToDuel();

	UFUNCTION(BlueprintCallable, Category = "Functions")
	void HandleBackInput();
	void FinishDuelTransition();

	UFUNCTION(BlueprintCallable, Category = "Functions")
	void CloseChallengeMenu(bool _duel = false);

	UFUNCTION(BlueprintCallable, Category = "Functions")
	void SwitchInventory();

	UFUNCTION(BlueprintCallable, Category = "Functions")
	void SwitchItemThrowPlayerSelector(bool _enabled);

	UFUNCTION(BlueprintCallable, Category = "Functions")
	void OpenChallengeMenu();

	UFUNCTION(BlueprintCallable, Category = "Functions")
	void RefreshChallengeInfo(int _direction, int _team);

	UFUNCTION(BlueprintCallable, Category = "Functions")
	void FinishDuel(int _winner, int _duelIndex);
	
	UFUNCTION(BlueprintCallable, Category = "Functions")
	void FinishMinigame(TArray<int32> _winners, int _money);

	UFUNCTION(BlueprintCallable, Category = "Functions")
	void SwitchStoreCrownsUI(bool _visibility);

	UFUNCTION(BlueprintCallable, Category = "Functions")
	void SwitchCrownsShop(bool _visibility);

	UFUNCTION(BlueprintCallable, Category = "Functions")
	void SwitchChallengeUI(bool _visibility);

	UFUNCTION(BlueprintCallable, Category = "Functions")
	void SwitchChallengeMenuUI(bool _visibility, TArray<AMinion*> _minions);

	UFUNCTION(BlueprintCallable, Category = "Functions")
	void SwitchMenuWidget(bool _enabled);

	UFUNCTION(BlueprintImplementableEvent, Category = "Functions")
	void SwitchToFullMapView(bool _enabled, FVector _position);

	UFUNCTION(BlueprintImplementableEvent, Category = "Functions")
	void MoveFullMapCamera(float _xPos, float _yPos);
	
	UFUNCTION(BlueprintCallable, Category = "Functions")
	void SwitchPathMenu(bool _enabled, TArray<ASquareOptional*> _paths);

	UFUNCTION(BlueprintCallable, Category = "Functions")
	void SwitchCameraTeam(int _direction);
	void MoveCameraToCurrentTeam();
	
	UFUNCTION(BlueprintCallable, Category = "Functions")
	void SwitchRankingScoreList(bool _visibility);

	UFUNCTION(BlueprintCallable, Category = "Functions")
	void ResetMapItems();
	void ResetSlowedDice();

	UFUNCTION(BlueprintCallable, Category = "Functions")
	void FocusNextMinion(int _direction);

	UFUNCTION(BlueprintCallable, Category = "Functions")
	void RollTheDice();

	UFUNCTION(BlueprintCallable, Category = "Functions")
	void ExecuteMinionMovement(bool _diceItem = false);

	UFUNCTION(BlueprintCallable, Category = "Functions")
	void ChangeSelectedPath(int _direction);

	UFUNCTION(BlueprintCallable, Category = "Functions")
	void ConfirmPathSelection();

	UFUNCTION(BlueprintCallable, Category = "Functions")
	void StoreCrowns(int _quantity);

	UFUNCTION(BlueprintCallable, Category = "Functions")
	void BuyCrowns(int _quantity);

	UFUNCTION()
	UPlayerMapUI* GetMapUI();

	UPROPERTY()
	int ChosenDuelIndex = 0;

	UPROPERTY()
	int MAX_TEAM_NUMBER = 4;

	UPROPERTY()
	int TeamWithDiceSlowed = -1;

	UPROPERTY()
	bool ItemExecuted = false;

	FTimerHandle TimerHandle;
	
private:
	const int MAX_MINION_NUMBER = 3;
	const float RESTORE_TURN_TRANSITION_TIME = 0.75f;
	const float DICE_HEIGHT_OFFSET = 140;
	const float TIME_BEFORE_RESTORING_ROUND = 2;
	const float TIME_BEFORE_FINISH_DUEL = 2;
	const float CROWN_MAX_OFFSET = 253.969262f;
	const float CROWN_MIN_OFFSET = 130;
	const int CROWN_PRICE = 20;
	const int CAMERA_HEIGHT_OFFSET = 600;
	const int MAX_MOVEMENTS_PER_TURN = 2;
	const int ROULETTE_SPIN_TIME = 5;
	const int ENDROUND_MINIGAME_START_TIME = 5;
	const int MAX_DICES = 2;
	const FString MAIN_MENU_SCENE = "MainMenu";

	UFUNCTION(BlueprintCallable, Category = "Functions")
	void UpdateDicePosition(bool _resizeDice = true);

	UFUNCTION(BlueprintCallable, Category = "Functions")
	void RestoreTurnLogicWithAnimation();

	UFUNCTION(BlueprintCallable, Category = "Functions")
	void StartFadeTransition(float _time);

	UFUNCTION(BlueprintCallable, Category = "Functions")
	void FinishFadeTransition();

	UFUNCTION(BlueprintCallable, Category = "Functions")
	void UpdateMinionEconomy(int _coins = 0);

	UFUNCTION(BlueprintCallable, Category = "Functions")
	void UpdateMinionEconomyWithReference(AMinion* _minion, int _coins);

	UFUNCTION(BlueprintCallable, Category = "Functions")
	void StartPlayerTurn();

	UFUNCTION(BlueprintCallable, Category = "Functions")
	void RestoreTurnLogic();

	bool InputEnabled = true;
	bool RollingDice = false;
	bool ChooseMinionToMove = false;
	bool SelectingPath = false;
	bool DuelUI = false;
	bool DuelPopup = false;
	bool StartTurnUI = false;
	bool BuyCrownsUI = false;
	bool StoreCrownsUI = false;
	bool TimedActionExecuted = false;
	bool IsMinigameActive = false;
	bool LoadingMap = false;
	bool FullMapView = false;
	bool SelectingMinion = false;
	bool InventoryEnabled = false;
	bool SelectMinionToUseItem = false;
	bool ThrowItemPlayerMenu = false;
	bool SameTurnEnabled = false;
	bool ScoreRankingEnabled = false;

	int SelectedPathIndex = 0;
	int SelectedMinionChallengeIndex = 0;
	int MinionTeamChallengeIndex = 0;
	int SavedCameraHeight = 770;
	int RouletteResult = 0;
	
	EMinigameType MinigameType;
	ETeamsMode TeamsMode;

	UPROPERTY()
	int DiceRollIndex;

	UPROPERTY()
	int TurnMovementIndex;

	UPROPERTY()
	int SavedDiceMovements;

	UPROPERTY()
	FVector2D FullMapCameraVelocity;
	
	UPROPERTY()
	TArray<ASquareOptional*> AvailablePaths;
	
	UPROPERTY()
	UPlayerMapUI* MapUI;

	UPROPERTY()
	UUserWidget* MenuWidget;
};
