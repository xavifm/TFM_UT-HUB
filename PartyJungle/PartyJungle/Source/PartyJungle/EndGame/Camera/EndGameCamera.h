#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include <EnhancedInputComponent.h>
#include <EnhancedInputSubsystems.h>
#include "EndGameCamera.generated.h"

UCLASS()
class PARTYJUNGLE_API AEndGameCamera : public APawn
{
	GENERATED_BODY()

public:
	AEndGameCamera();

protected:
	virtual void BeginPlay() override;

public:
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION()
	void HandleLeftRightInput(const FInputActionValue& _value);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SwitchScoreDirection(int _direction);

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Input")
	UInputMappingContext* InputMappingContext;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Input")
	UInputAction* AxisxAction;
};
