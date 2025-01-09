#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Minion.generated.h"

UENUM(BlueprintType)
enum class ETeam : uint8
{
	TEAM_ONE UMETA(DisplayName = "Team One"),
	TEAM_TWO UMETA(DisplayName = "Team Two"),
	TEAM_THREE UMETA(DisplayName = "Team Three"),
	TEAM_FOUR UMETA(DisplayName = "Team Four")
};

UCLASS()
class PARTYJUNGLE_API AMinion : public AActor
{
	GENERATED_BODY()
	
public:	
	AMinion();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Minion Properties")
	ETeam Team;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Minion Properties")
	ASquare* CurrentSquare;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Minion Properties")
	//UMinionInventory* Inventory;

	UFUNCTION(BlueprintCallable, Category = "Minion Actions")
	void SetMinionsMovements(int _movements);

	UFUNCTION(BlueprintCallable, Category = "Minion Actions")
	void MoveToSquare(ASquare* TargetSquare);

	UFUNCTION(BlueprintCallable, Category = "Minion Actions")
	ASquare* GetNextSquare();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Minion Properties")
	float TotalLerpTime = 2.0f;

protected:
	virtual void BeginPlay() override;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Minion Properties", meta = (AllowPrivateAccess = "true"))
	int32 Movements;

public:	
	virtual void Tick(float DeltaTime) override;

private:
	void HandleMovement(float _deltaTime);

	bool isMoving = false;
	float CurrentLerpTime = 0.0f;

	FVector StartPosition;
	FVector TargetPosition;

	const float MAX_TIME_MOVEMENT = 1.0f;

};
