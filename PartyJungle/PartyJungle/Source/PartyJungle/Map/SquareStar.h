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
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SquareProperties")
	AMapMenuCamera* MapMenuCameraRef;

	virtual bool ExecuteEvent(AMinion* _minion) override;

	UFUNCTION()
	void SwitchStar(bool _enabled);

private:
	UPROPERTY()
	bool ShopEnabled;
};
