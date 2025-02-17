#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Dice.generated.h"

UCLASS()
class PARTYJUNGLE_API ADice : public AActor
{
	GENERATED_BODY()
	
public:	
	ADice();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintImplementableEvent, Category = "Dice Displacement")
	void SwitchDicePosition(FVector NewPosition, bool ResizeDice);

	UFUNCTION(BlueprintImplementableEvent, Category = "Dice Feedback")
	void ShowDiceFeedbackNumber(int Number);

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "Dice Feedback")
	float DiceFeedbackTime = 2;

	UFUNCTION(BlueprintImplementableEvent, Category = "Dice Visibility")
	void ShowDice();

	UFUNCTION(BlueprintImplementableEvent, Category = "Dice Visibility")
	void HideDice();

	UFUNCTION(BlueprintCallable, Category = "Dice Roll")
	int RollTheDice();


private:
	const int RANDOM_NUMBER_MIN = 1;
	const int RANDOM_NUMBER_MAX = 10;
};
