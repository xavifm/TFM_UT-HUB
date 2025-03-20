#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <Camera/CameraActor.h>
#include "Camera/CameraComponent.h"
#include "WorldManager.generated.h"

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
	TArray<UCameraComponent*> Cameras;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "World_Cameras")
	TArray<ACameraActor*> CameraActors;

	UFUNCTION(BlueprintCallable, Category = "World_Functions")
	void AsssignCameraActors(TArray<AActor*> _actors);

	UFUNCTION(BlueprintCallable, Category = "World_Functions")
	TArray<AActor*> GetLevelByIndex(int _index);

	UFUNCTION(BlueprintCallable, Category = "World_Functions")
	UCameraComponent* GetCameraByIndex(int _index);

	UFUNCTION(BlueprintCallable, Category = "World_Functions")
	ACameraActor* GetMinigameCameraByIndex(int _index);

	UFUNCTION(BlueprintCallable, Category = "World_Functions")
	void UnloadEntireWorld();

	UFUNCTION(BlueprintCallable, Category = "World_Functions")
	void LoadPortion(int _index);
};
