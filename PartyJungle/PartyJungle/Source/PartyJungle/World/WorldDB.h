#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PartyJungle/Minigame/CrossInfo/MinigameLogic.h"
#include "WorldDB.generated.h"


UCLASS()
class PARTYJUNGLE_API AWorldDB : public AActor
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "World_Segment")
	TArray<AActor*> BoardActors;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "World_Segment")
	TArray<AMinigameLogic*> Minigames;
	
public:
	UFUNCTION(BlueprintCallable)
	TArray<AActor*> GetLevelByIndex(int _index);
	
	UFUNCTION(BlueprintCallable)
	int GetMinigamesQuantity() { return Minigames.Num(); };

	UFUNCTION(BlueprintCallable)
	TArray<AMinigameLogic*> GetMinigamesOfType(EMinigameType _type, ETeamsMode _teams);
	
	UFUNCTION(BlueprintCallable)
	AMinigameLogic* GetRandomMinigameOfType(EMinigameType _type, ETeamsMode _teams);
	AMinigameLogic* GetMinigameByName(FText _name);

	UFUNCTION(BlueprintCallable)
	TArray<AMinigameLogic*> GetAllMinigames();
	
	UFUNCTION(BlueprintCallable)
	TArray<AActor*> GetMapActors();
};
