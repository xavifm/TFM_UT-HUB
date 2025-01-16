// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include <PartyJungle/Map/MapDatabase.h>
#include "MapMenuCamera.generated.h"

UCLASS()
class PARTYJUNGLE_API AMapMenuCamera : public APawn
{
	GENERATED_BODY()

public:
	AMapMenuCamera();

protected:
	virtual void BeginPlay() override;

public:	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
	TSubclassOf<UUserWidget> MenuWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Minion On Camera")
	AMinion* CurrentMinion;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera Navigation")
	AMapDatabase* MapDb;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera Navigation")
	int CurrentMinionPos;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera Navigation")
	int CurrentMinionTeam;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void ShowMenuWidget();

	UFUNCTION(BlueprintCallable, Category = "Camera Navigation")
	void SwitchCameraTeam(int _direction);

	UFUNCTION(BlueprintCallable, Category = "Camera Navigation")
	void FocusNextMinion(int _direction);

private:
	const int MAX_MINION_NUMBER = 4;
	const int MAX_TEAM_NUMBER = 4;
};
