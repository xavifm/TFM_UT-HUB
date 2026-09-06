#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <Camera/CameraActor.h>
#include "./WorldDB.h"
#include "Camera/CameraComponent.h"

#include "WorldManager.generated.h"

class ASquareStar;

UCLASS()
class PARTYJUNGLE_API AWorldManager : public AActor
{
	GENERATED_BODY()

public:
	/**
	 * Constructor.
	 */
	AWorldManager();
	
	/**
	 * Destructor.
	 */
	~AWorldManager() = default;
	
	UFUNCTION(BlueprintCallable, Category = "World_Functions")
	void InitializeCameras();

	UFUNCTION(BlueprintCallable, Category = "World_Functions")
	UCameraComponent* GetMinigameCamera(AMinigameLogic* _minigame);

	UFUNCTION(BlueprintCallable, Category = "World_Functions")
	void UnloadEntireWorld();
	
	UFUNCTION(BlueprintCallable, Category = "World_Functions")
	void LoadPortion(bool _isMap, FText _name);

	UFUNCTION(BlueprintCallable, Category = "World_Functions")
	void EnableStarAtRandomLocation(bool _pointWithCamera = false);

	UFUNCTION(BlueprintCallable, Category = "World_Functions")
	void DisableAllStars();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Functions")
	void StartMapPointCinematic(FVector _position, float _time);
	
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "World_Segment")
	TArray<AActor*> BoardActors;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "World_Database")
	AWorldDB* WorldDB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "World_Cameras")
	UCameraComponent* MapCamera;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "World_Cameras")
	UCameraComponent* FullMapCamera;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "World_Cameras")
	AActor* MapCameraActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "World_Cameras")
	AActor* FullMapCameraActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "World_Cameras")
	TArray<UCameraComponent*> CameraActors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "World_Crowns")
	TArray<ASquareStar*> MapCrowns;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "World_Cameras")
	UCameraComponent* BookCamera;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "World_Cameras")
	AActor* BookCameraActor;

private:
	bool IsInitialized = false;
	int LastStarIndex = -1;
	const float POINT_CINEMATIC_TIME = 2.5f;
};
