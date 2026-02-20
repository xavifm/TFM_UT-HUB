#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include <EnhancedInputComponent.h>
#include <EnhancedInputSubsystems.h>
#include <Kismet/GameplayStatics.h>
#include "PlayerPalette.generated.h"

UCLASS()
class PARTYJUNGLE_API APlayerPalette : public APawn
{
	GENERATED_BODY()

public:
	APlayerPalette();
	
	UPROPERTY()
	int CharacterTeam;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Input")
	UInputMappingContext* InputMappingContext;

	UPROPERTY()
	APlayerController* PlayerController;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UPrimitiveComponent* CharacterPhysics;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UInputAction* KeyDirAction;

protected:
	virtual void BeginPlay() override;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int MinZ = 0;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int MaxZ = 0;

public:	
	virtual void Tick(float DeltaTime) override;
	
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	UFUNCTION()
	void MovePallette(const FInputActionValue& _value);
	
	UFUNCTION()
	void PossessMovement();

private:
	const float CHARACTER_VELOCITY = 50;
	FVector InitialPosition;
};
