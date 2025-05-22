#pragma once

#include "CoreMinimal.h"
#include "./Square.h"
#include <PartyJungle/Player/Map/MapMenuCamera.h>
#include "SquareKeepCrowns.generated.h"

/**
 * 
 */
UCLASS()
class PARTYJUNGLE_API ASquareKeepCrowns : public ASquare
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SquareProperties")
	int Team;

	virtual bool ExecuteEvent(AMinion* _minion) override;

	UFUNCTION(BlueprintImplementableEvent, Category = "Arrow Functions")
	void EnableArrow();

	UFUNCTION(BlueprintImplementableEvent, Category = "Arrow Functions")
	void DisableArrow();

	UFUNCTION(BlueprintImplementableEvent, Category = "Arrow Functions")
	void EnableArrowAnimation();

	UFUNCTION(BlueprintImplementableEvent, Category = "Arrow Functions")
	void DisableArrowAnimation();
};
