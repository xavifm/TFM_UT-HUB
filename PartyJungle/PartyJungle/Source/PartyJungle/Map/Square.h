#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <PartyJungle/Player/Minion/Minion.h>
#include <PartyJungle/Map/MapDatabase.h>
#include "Square.generated.h"

class AMapMenuCamera;

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

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "SquareProperties")
	bool IsChallengeEnabled;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "SquareProperties")
	bool IsBlockedByWall;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
	USceneComponent* Center;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Minions List")
	TArray<AMinion*> MinionsList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera Connection")
	AMapMenuCamera* Camera;

	ASquare();

	UFUNCTION()
	ASquare* GetNextNode(int _pathIndex = 0);

	UFUNCTION()
	bool CheckIfSquareIsBlocked(AMinion* _minion);

	UFUNCTION()
	bool SwitchDuelSquare(bool _toggle);

	UFUNCTION()
	void OpenChooseMenu();
	UFUNCTION()
	void CloseChooseMenu(int _pathIndex);
	UFUNCTION()
	void AddMinion(AMinion* _minion);
	UFUNCTION()
	void RemoveMinion(AMinion* _minion);

	UFUNCTION()
	ASquare* GetNextSquare();

	virtual bool ExecuteEvent(AMinion* _minion);

	UFUNCTION()
	void ResetSquare();

	TMap<int, TArray<AMinion*>> GetDisposableMinions();
	TMap<int, TArray<AMinion*>> DisposableMinionsList;

	UFUNCTION()
	void SwitchBlockedSquareMode(int _team, bool _blocked);
	void ResetWallFromSquare(int _team);

protected:
	virtual void BeginPlay() override;
	bool EventExecuted;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SquareNodesProperties")
	TArray<ASquare*> ConnectedNodes;

	UPROPERTY()
	int TeamBlockingSquare = -1;

public:	
	virtual void Tick(float DeltaTime) override;

};
