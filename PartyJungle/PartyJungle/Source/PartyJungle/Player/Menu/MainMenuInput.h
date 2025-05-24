#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <EnhancedInputSubsystems.h>
#include <EnhancedInputComponent.h>
#include "MainMenuInput.generated.h"

UCLASS()
class PARTYJUNGLE_API AMainMenuInput : public APawn
{
	GENERATED_BODY()
	
public:
	AMainMenuInput();

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Input")
	UInputAction* AxisxAction;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Input")
	UInputAction* AxisyAction;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Input")
	UInputAction* KeyaAction;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Input")
	UInputAction* KeybAction;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Input")
	UInputAction* KeyStartAction;

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Functions")
	void HandleLeftRightInput(const FInputActionValue& _value);

	UFUNCTION(Category = "Functions")
	void HandleUpDownInput(const FInputActionValue& _value);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Functions")
	void HandleVerticalAxis(int _direction);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Functions")
	void HandleConfirmInput();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Functions")
	void HandleBackInput();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Functions")
	void HandleStartInput();

	UFUNCTION(BlueprintCallable, Category = "Functions")
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Input")
	UInputMappingContext* InputMappingContext;

};
