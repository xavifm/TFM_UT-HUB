#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include <EnhancedInputComponent.h>
#include <EnhancedInputSubsystems.h>
#include <Kismet/GameplayStatics.h>
#include "Components/StaticMeshComponent.h"
#include "Components/ArrowComponent.h"
#include "CocoCannon.generated.h"

UCLASS()
class PARTYJUNGLE_API ACocoCannon : public APawn
{
	GENERATED_BODY()

public:
	ACocoCannon();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	UPROPERTY(EditAnywhere)
	int CharacterTeam;
	
	UFUNCTION()
	void ShootCannon();
	
	UFUNCTION()
	void PossessMovement();
	void WalkTo(const FInputActionValue& _value);

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AActor* ProjectileReference;

	UPROPERTY()
	APlayerController* PlayerController;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Input")
	UInputAction* KeyaAction;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	UInputAction* KeyDirAction;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Components")
	UStaticMeshComponent* CannonMesh;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Components")
	UArrowComponent* ShootPivot;
	
	const float CHARACTER_VELOCITY = 5;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UPrimitiveComponent* CharacterPhysics;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int MinX = 0;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int MaxX = 0;

private:
	float TimerShoot = 0.0f; 
	float ImpulseStrength = 2500.0f;
	
	const float BASE_SHOOT_TIMER = 0.2f;
};

