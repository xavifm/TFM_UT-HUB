#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <PartyJungle/Dice/Dice.h>
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

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dice References")
	ADice* DiceReference;

	UFUNCTION(BlueprintCallable, Category = "Minion Actions")
	void SetMinionsMovements(int _movements, bool _continuation = false);

	UFUNCTION(BlueprintCallable, Category = "Minion Actions")
	int GetMinionsMovements();

	UFUNCTION(BlueprintCallable, Category = "Minion Actions")
	void MoveToSquare(ASquare* TargetSquare);

	FVector CalculateSeparationOffset(TArray<AMinion*> MinionsInSquare, int32 NumMinions, float SeparationDistance) const;

	UFUNCTION(BlueprintCallable, Category = "Minion Actions")
	int UpdateCoins(int _quantity);

	UFUNCTION(BlueprintCallable, Category = "Minion Actions")
	void UpdateCrowns(int _quantity);

	UFUNCTION(BlueprintCallable, Category = "Minion Inventory")
	int GetCoins();

	UFUNCTION(BlueprintCallable, Category = "Minion Inventory")
	int GetCrowns();

	UFUNCTION(BlueprintCallable, Category = "Minion Actions")
	ASquare* GetNextSquare();

	UFUNCTION(BlueprintImplementableEvent, Category = "Minion Feedback")
	void ShowMinionCoinsFeedback(int _quantity);

	UFUNCTION(BlueprintImplementableEvent, Category = "Minion Feedback")
	void ShowMinionCrownsFeedback(int _quantity);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Minion Properties")
	float TotalLerpTime = 0.5f;

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Minion Properties", meta = (AllowPrivateAccess = "true"))
	int32 Movements;

public:	
	virtual void Tick(float DeltaTime) override;

private:
	void HandleMovement(float _deltaTime);

	AMinion* SearchMinionToChallenge();

	bool isMoving = false;
	float CurrentLerpTime = 0.0f;

	int Coins;
	int Crowns;

	FVector StartPosition;
	FVector TargetPosition;

	const float MAX_TIME_MOVEMENT = 1.0f;
	const float MINION_SEPARATION_DISTANCE = 50.0f;
	const float VERTICAL_OFFSET_DISTANCE = 50;
	const int MAX_MINION_COINS = 50;
	const int MAX_MINION_CROWNS = 5;
	const int MINIMUM_BET_REQUIREMENT = 5;
};
