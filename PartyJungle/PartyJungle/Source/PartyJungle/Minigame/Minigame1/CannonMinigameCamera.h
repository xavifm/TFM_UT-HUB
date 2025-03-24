#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "CannonMinigameCamera.generated.h"

UCLASS()
class PARTYJUNGLE_API ACannonMinigameCamera : public APawn
{
	GENERATED_BODY()

public:
	ACannonMinigameCamera();
	
	UFUNCTION(BlueprintImplementableEvent, Category = "Camera Functions")
	void SetCameraTarget(AActor* _reference);

	UFUNCTION(BlueprintImplementableEvent, Category = "Camera Functions")
	void ResetCameraPosition();
};
