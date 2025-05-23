#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BoardMenu.generated.h"

UCLASS()
class PARTYJUNGLE_API ABoardMenu : public AActor
{
	GENERATED_BODY()
	
public:
	ABoardMenu();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

};
