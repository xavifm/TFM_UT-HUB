#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlayFabAPI.generated.h"

UCLASS()
class PARTYJUNGLE_API APlayFabAPI : public AActor
{
	GENERATED_BODY()
	
public:
	APlayFabAPI();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
	UUserWidget* FabUI;

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void RegisterUser(const FString& TitleId, const FString& Username, const FString& Password, const FString& Email, const FString& DisplayName, const FString& RequireBothUsernameAndEmail);
	void LoginUser(const FString& TitleId, const FString& Email, const FString& Password);
	void GetUserAccountInfo(const FString& InSessionTicket, const FString& TitleId);
	void SendScoreToPlayFab(int32 Score, FString TitleId);

private:
	FString SessionTicket;
	FString StoredTitleId;

};
