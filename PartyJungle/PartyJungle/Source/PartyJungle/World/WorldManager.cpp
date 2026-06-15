#include "./WorldManager.h"
#include "WorldManager.h"

#include <Kismet/GameplayStatics.h>
#include <PartyJungle/Map/SquareStar.h>
#include <PartyJungle/Minigame/CrossInfo/MinigameLogic.h>


AWorldManager::AWorldManager()
{
	PrimaryActorTick.bCanEverTick = false;
}

void AWorldManager::InitializeCameras() 
{
	if (IsInitialized || !MapCameraActor || !FullMapCameraActor)
		return;

	TArray<UCameraComponent*> mapCameraComponents;
	TArray<UCameraComponent*> fullMapCameraComponents;

	MapCameraActor->GetComponents<UCameraComponent>(mapCameraComponents);
	MapCamera = mapCameraComponents[0];

	FullMapCameraActor->GetComponents<UCameraComponent>(fullMapCameraComponents);
	FullMapCamera = fullMapCameraComponents[0];

	IsInitialized = true;
}

UCameraComponent* AWorldManager::GetMinigameCamera(AMinigameLogic* _minigame)
{
	AActor* camera = _minigame->Camera;
		
	TArray<UCameraComponent*> minigameCameraComponents;
	camera->GetComponents<UCameraComponent>(minigameCameraComponents);
	UCameraComponent* foundCamera = minigameCameraComponents[0]; // AQUI PETA

	return foundCamera;
}

void AWorldManager::UnloadEntireWorld()
{
	InitializeCameras();

	/*for (int i = 0; i < WorldDB->GetMinigamesQuantity(); i++)
	{
		TArray<AActor*> ActorsToUnload = WorldDB->GetLevelByIndex(i);

		for (AActor* Actor : ActorsToUnload)
		{
			if (Actor)
			{
				Actor->SetActorHiddenInGame(true);
				Actor->SetActorEnableCollision(false);
				Actor->SetActorTickEnabled(false);
			}
		}

		if (MapCamera)
			MapCamera->Deactivate();

		if (FullMapCamera)
			FullMapCamera->Deactivate();
	}

	TArray<AMinigameLogic*> minigameList = WorldDB->GetAllMinigames();
	
	for (auto minigame : minigameList)
	{
		UCameraComponent* camera = GetMinigameCamera(minigame);
		
		if (camera)
			camera->Deactivate();
	}*/
}

void AWorldManager::LoadPortion(bool _isMap, FText _name)
{
	/*TArray<AActor*> actorsToLoad;
	AMinigameLogic* minigame = nullptr;
	
	APlayerController* PC = UGameplayStatics::GetPlayerController(GetWorld(), 0);
	
	if (!PC || !WorldDB)
		return;
	
	if (!_isMap)
	{
		minigame = WorldDB->GetMinigameByName(_name);
		if (minigame)
			actorsToLoad = minigame->MinigameActors;
	}
	else
		actorsToLoad = WorldDB->GetMapActors();
	
	for (AActor* actor : actorsToLoad)
	{
		if (actor)
		{
			actor->SetActorHiddenInGame(false);
			actor->SetActorEnableCollision(true);
			actor->SetActorTickEnabled(true);
		}
	}
	
	if (!_isMap && minigame)
	{
		minigame->BeginMinigame();
	}

	if (_isMap && MapCamera && FullMapCamera)
	{
		MapCamera->Activate();
		FullMapCamera->Activate();
		PC->SetViewTargetWithBlend(MapCamera->GetAttachParentActor(), 0.0f);
	}

	if (!_isMap)
	{
		UCameraComponent* cameraActor = GetMinigameCamera(minigame);
		if (cameraActor) 
		{
			cameraActor->Activate();
			PC->SetViewTargetWithBlend(cameraActor->GetOwner(), 0.0f);
		}	
	}*/
}

void AWorldManager::EnableStarAtRandomLocation(bool _pointWithCamera)
{
	if (MapCrowns.Num() > 0)
	{
		int32 RandomIndex = FMath::RandRange(0, MapCrowns.Num() - 1);

		while (RandomIndex == LastStarIndex)
		{
			RandomIndex = FMath::RandRange(0, MapCrowns.Num() - 1);
		}

		LastStarIndex = RandomIndex;
		MapCrowns[RandomIndex]->SwitchStar(true);

		if (_pointWithCamera)
			StartMapPointCinematic(MapCrowns[RandomIndex]->GetActorLocation(), POINT_CINEMATIC_TIME);
	}
}

void AWorldManager::DisableAllStars() 
{
	int loopIndex = 0;
	
	for (ASquareStar* Star : MapCrowns)
	{
		if (Star->IsEnabledStar())
			LastStarIndex = loopIndex;

		Star->SwitchStar(false);
		
		loopIndex++;
	}
}
