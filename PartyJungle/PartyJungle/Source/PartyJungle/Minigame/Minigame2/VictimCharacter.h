#pragma once

#include "CoreMinimal.h"
#include "InputActionValue.h"
#include "GameFramework/Pawn.h"
#include <EnhancedInputComponent.h>
#include <EnhancedInputSubsystems.h>
#include <Kismet/GameplayStatics.h>
#include "VictimCharacter.generated.h"

UCLASS()
class PARTYJUNGLE_API AVictimCharacter : public APawn
{
	GENERATED_BODY()

public:
	AVictimCharacter();

protected:
	UFUNCTION()
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	void WalkTo(const FInputActionValue& _value);
	
	UFUNCTION()
	void PossessMovement();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int CharacterTeam = -1;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int MinX = 0;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int MaxX = 0;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UPrimitiveComponent* CharacterPhysics;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Input")
	UInputMappingContext* InputMappingContext;

	UPROPERTY()
	APlayerController* PlayerController;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UInputAction* KeyDirAction;
	
	UFUNCTION()
	void ResetCharacterPosition();
	
	const float CHARACTER_VELOCITY = 5;
	
private:
	FVector InitialPosition;

};
