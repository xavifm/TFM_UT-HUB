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
	UFUNCTION(BlueprintCallable)
	void RegisterUser(const FString& TitleId, const FString& Username, const FString& Password, const FString& Email, const FString& DisName, const FString& RequireBothUsernameAndEmail);
	UFUNCTION(BlueprintCallable)
	void LoginUser(const FString& TitleId, const FString& Email, const FString& Password);
	UFUNCTION(BlueprintCallable)
	void SendScoreToPlayFab(int32 Score);

	UFUNCTION()
	FString GetDisplayName();

	UFUNCTION()
	int GetDisplayScore();

private:
	void GetUserAccountInfo();
	void GetUserScoreFromPlayFab();

	FString SessionTicket = "";
	FString StoredTitleId = "";
	FString DisplayName = "";
	int DisplayScore = -1;
	bool LoggedIn;

};
