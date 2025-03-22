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
	
	UFUNCTION(BlueprintImplementableEvent, Category = "Cannon Functions")
	void SetCameraTarget(AActor* _reference);
};
