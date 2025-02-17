#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include <PartyJungle/Map/MapDatabase.h>
#include <EnhancedInputComponent.h>
#include "InputMappingContext.h"
#include "InputAction.h"
#include <PartyJungle/Dice/Dice.h>
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
	UInputAction* FocusAnotherMinionAction;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Input")
	UInputAction* RollTheDiceAction;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Input")
	UInputMappingContext* InputMappingContext;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera Parameters")
	float CameraSpeed = 5;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Minion On Camera")
	AMinion* CurrentMinion;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera Navigation")
	AMapDatabase* MapDb;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera Navigation")
	int CurrentMinionPos;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera Navigation")
	int CurrentMinionTeam;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dice System")
	ADice* Dice;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void ShowMenuWidget();

	UFUNCTION(BlueprintCallable, Category = "Camera Navigation")
	void SwitchCameraTeam(int _direction);

	UFUNCTION(BlueprintCallable, Category = "Camera Navigation")
	void FocusNextMinion(const FInputActionValue& _value);

	void RollTheDice();


private:
	const int MAX_MINION_NUMBER = 4;
	const int MAX_TEAM_NUMBER = 4;
	const float DICE_HEIGHT_OFFSET = 140;

	void UpdateDicePosition();
	bool InputEnabled = true;
};
