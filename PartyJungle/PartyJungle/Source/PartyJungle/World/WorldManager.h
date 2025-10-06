#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <Camera/CameraActor.h>
#include "Camera/CameraComponent.h"
#include "WorldManager.generated.h"

class ASquareStar;

UCLASS()
class PARTYJUNGLE_API AWorldManager : public AActor
{
	GENERATED_BODY()

public:
	AWorldManager();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "World_Segment")
	TArray<AActor*> BoardActors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "World_Segment")
	TArray<AActor*> Minigame0Actors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "World_Cameras")
	TArray<AActor*> MinigameCameras;

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

	UFUNCTION(BlueprintCallable, Category = "World_Functions")
	void InitializeCameras();

	UFUNCTION(BlueprintCallable, Category = "World_Functions")
	void AsssignCameraActors(TArray<AActor*> _actors);

	UFUNCTION(BlueprintCallable, Category = "World_Functions")
	TArray<AActor*> GetLevelByIndex(int _index);

	UFUNCTION(BlueprintCallable, Category = "World_Functions")
	UCameraComponent* GetMinigameCameraByIndex(int _index);

	UFUNCTION(BlueprintCallable, Category = "World_Functions")
	void UnloadEntireWorld();

	UFUNCTION(BlueprintCallable, Category = "World_Functions")
	void LoadPortion(int _index);

	UFUNCTION(BlueprintCallable, Category = "World_Functions")
	void EnableStarAtRandomLocation();

	UFUNCTION(BlueprintCallable, Category = "World_Functions")
	void DisableAllStars();

private:
	bool IsInitialized = false;
	int LastStarIndex = -1;
};
