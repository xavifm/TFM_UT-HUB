#pragma once

#include "CoreMinimal.h"
#include "./Square.h"
#include <PartyJungle/Player/Map/MapMenuCamera.h>
#include "SquareStar.generated.h"

UCLASS()
class PARTYJUNGLE_API ASquareStar : public ASquare
{
	GENERATED_BODY()
	
public:
	virtual bool ExecuteEvent(AMinion* _minion) override;

	UFUNCTION()
	void SwitchStar(bool _enabled);

	UFUNCTION()
	bool IsEnabledStar();

protected:
	UFUNCTION(BlueprintImplementableEvent, Category = "Square Functions")
	void SwitchStarVisibility(bool _visibility);

private:
	UPROPERTY()
	bool ShopEnabled;

	const float MIN_BUY_COINS = 20;
};
