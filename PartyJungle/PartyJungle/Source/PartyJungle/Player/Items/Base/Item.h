#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Item.generated.h"

class AMinion;

UENUM(BlueprintType)
enum class EItemType : uint8
{
	DICE UMETA(DisplayName = "Dice"),
	MISC UMETA(DisplayName = "Miscellaneous")
};

UCLASS()
class PARTYJUNGLE_API AItem : public AActor
{
	GENERATED_BODY()
	
public:	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	EItemType ItemType;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UStaticMesh* ItemModel;

	AItem();
	
	virtual void Tick(float DeltaTime) override;
	
	UFUNCTION()
	virtual void ExecuteItem(AMinion* _minion);

	UFUNCTION()
	FString GetName();

	UFUNCTION()
	FString GetDescription();
	
protected:
	virtual void BeginPlay() override;

private:
	FString ItemName;
	FString ItemDescription;

};
