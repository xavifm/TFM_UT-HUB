#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ReturnToPartyMapScene.generated.h"

UCLASS()
class PARTYJUNGLE_API AReturnToPartyMapScene : public AActor
{
	GENERATED_BODY()
	
public:
	AReturnToPartyMapScene();

protected:
	virtual void BeginPlay() override;

};
