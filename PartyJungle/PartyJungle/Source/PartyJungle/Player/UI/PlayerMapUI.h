#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "../Minion/Minion.h"
#include "PlayerMapUI.generated.h"

UCLASS()
class PARTYJUNGLE_API UPlayerMapUI : public UUserWidget
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, Category = "Click Logic")
	void RollAction(int _movements);

	UFUNCTION(BlueprintCallable, Category = "Minion Movement")
	void AssignMinionMovements(AMinion* _targetMinion, int _movements);

	void InitializeMinionList();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Minions List")
	TArray<AMinion*> MinionsList;
	
};
