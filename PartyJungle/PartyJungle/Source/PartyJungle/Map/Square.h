#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <PartyJungle/Player/Minion/Minion.h>
#include "Square.generated.h"

UENUM(BlueprintType)
enum class ESquareType : uint8
{
	NORMAL UMETA(DisplayName = "Normal"),
	TRAP UMETA(DisplayName = "Trap"),
	SAFE_ZONE UMETA(DisplayName = "Safe Zone")
};

UCLASS()
class PARTYJUNGLE_API ASquare : public AActor
{
	GENERATED_BODY()
	
public:	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SquareProperties")
	int Money;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
	USceneComponent* Center;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Minions List")
	TArray<AMinion*> MinionsList;

	ASquare();

	ASquare* GetNextNode(int _pathIndex = 0);

	void OpenChooseMenu();
	void CloseChooseMenu(int _pathIndex);
	void AddMinion(AMinion* _minion);
	void RemoveMinion(AMinion* _minion);

	ASquare* GetNextSquare();

	//virtual void ExecuteEvent(AMinion* _minion);

	void ResetSquare();

protected:
	virtual void BeginPlay() override;
	bool EventExecuted;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SquareNodesProperties")
	TArray<ASquare*> ConnectedNodes;

public:	
	virtual void Tick(float DeltaTime) override;

};
