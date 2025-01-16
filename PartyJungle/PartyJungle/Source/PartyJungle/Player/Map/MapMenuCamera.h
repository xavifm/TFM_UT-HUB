// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
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

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void ShowMenuWidget();

};
