#pragma once

#include "CoreMinimal.h"
#include "./Square.h"
#include "SquareOptional.generated.h"

class AMapMenuCamera;

UCLASS()
class PARTYJUNGLE_API ASquareOptional : public ASquare
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintImplementableEvent, Category = "Arrow Functions")
	void EnableArrow();

	UFUNCTION(BlueprintImplementableEvent, Category = "Arrow Functions")
	void DisableArrow();

	UFUNCTION(BlueprintImplementableEvent, Category = "Arrow Functions")
	void EnableArrowAnimation();

	UFUNCTION(BlueprintImplementableEvent, Category = "Arrow Functions")
	void DisableArrowAnimation();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera Connection")
	AMapMenuCamera* Camera;

};
