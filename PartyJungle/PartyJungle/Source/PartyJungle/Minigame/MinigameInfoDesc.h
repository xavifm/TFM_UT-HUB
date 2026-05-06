#pragma once

#include "CoreMinimal.h"
#include "MinigameInfoDesc.generated.h"

UCLASS()
class PARTYJUNGLE_API AMinigameInfoDesc : public AActor
{
	GENERATED_BODY()

public:
	AMinigameInfoDesc();
	
	UFUNCTION(BlueprintImplementableEvent)
	void SetMinigameInfo(const FText& _title);
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TMap<FString, FString> MinigameInfoMap;

};
