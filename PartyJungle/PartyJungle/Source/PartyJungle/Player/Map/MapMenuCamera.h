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

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void HandleLeftRightInput(const FInputActionValue& _value);

	void HandleConfirmInput();

	void SwitchMenuWidget(bool _enabled);

	void SwitchPathMenu(bool _enabled, TArray<ASquareOptional*> _paths);

	void SwitchCameraTeam(int _direction);
	void FocusNextMinion(int _direction);

	void RollTheDice();

	void ChangeSelectedPath(int _direction);
	void ConfirmPathSelection();


private:
	const int MAX_MINION_NUMBER = 3;
	const int MAX_TEAM_NUMBER = 2;
	const float DICE_HEIGHT_OFFSET = 140;

	void UpdateDicePosition(bool _resizeDice = true);
	void UpdateMinionEconomy(int _coins = 0, int _crowns = 0);
	void RestoreTurnLogic();
	bool InputEnabled = true;
	bool RollingDice = false;
	bool SelectingPath = false;

	int SelectedPathIndex = 0;
	TArray<ASquareOptional*> AvailablePaths;
	UPlayerMapUI* MapUI;

	UUserWidget* MenuWidget;
};
