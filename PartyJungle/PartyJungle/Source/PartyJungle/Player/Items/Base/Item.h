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

UENUM(BlueprintType)
enum class EUseMode : uint8
{
	SELECT UMETA(DisplayName = "Select Minion"),
	THROW UMETA(DisplayName = "Throw Mode"),
	INSTANT UMETA(DisplayName = "Instant Use")
};

UCLASS()
class PARTYJUNGLE_API AItem : public AActor
{
	GENERATED_BODY()
	
public:	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	EItemType ItemType;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	EUseMode UseMode;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UStaticMesh* ItemModel;

	AItem();
	
	virtual void Tick(float DeltaTime) override;
	
	UFUNCTION()
	virtual void ExecuteItem(AMinion* _minion);

	UFUNCTION(BlueprintCallable)
	FString GetName();

	UFUNCTION(BlueprintCallable)
	FString GetDescription();

	UFUNCTION(BlueprintCallable)
	int GetPrice();
	
	UPROPERTY(EditAnywhere)
	FString ItemName;
	UPROPERTY(EditAnywhere)
	FString ItemDescription;
	UPROPERTY(EditAnywhere)
	int Price;
	
protected:
	virtual void BeginPlay() override;

};
