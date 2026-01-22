#include "./WorldManager.h"
#include <Kismet/GameplayStatics.h>
#include <PartyJungle/Map/SquareStar.h>
#include <PartyJungle/Minigame/CrossInfo/MinigameLogic.h>

AWorldManager::AWorldManager()
{
	PrimaryActorTick.bCanEverTick = false;
}

TArray<AActor*> AWorldManager::GetLevelByIndex(int _index)
{
	if (_index == -1)
		return BoardActors;
	
	return Minigames[_index]->MinigameActors;
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

	AsssignCameraActors(Minigames);

	IsInitialized = true;
}

void AWorldManager::AsssignCameraActors(TArray<AMinigameLogic*> _minigames)
{
	for (AMinigameLogic* minigame : _minigames)
	{
		AActor* camera = minigame->Camera;
		
		TArray<UCameraComponent*> minigameCameraComponents;
		camera->GetComponents<UCameraComponent>(minigameCameraComponents);
		UCameraComponent* foundCamera = minigameCameraComponents[0];

		if (foundCamera)
			CameraActors.Add(foundCamera);
	}
}

UCameraComponent* AWorldManager::GetMinigameCameraByIndex(int _index)
{
	if (CameraActors.IsValidIndex(_index))
		return CameraActors[_index];

	return nullptr;
}

void AWorldManager::UnloadEntireWorld()
{
	InitializeCameras();

	for (int i = 0; i < Minigames.Num(); i++)
	{
		TArray<AActor*> ActorsToUnload = GetLevelByIndex(i);

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

		UCameraComponent* cameraActor = GetMinigameCameraByIndex(i);
		if (cameraActor)
			cameraActor->Deactivate();
	}
}

void AWorldManager::LoadPortion(int _index)
{
	TArray<AActor*> ActorsToLoad = GetLevelByIndex(_index);
	APlayerController* PC = UGameplayStatics::GetPlayerController(GetWorld(), 0);

	if (!PC)
		return;

	for (AActor* Actor : ActorsToLoad)
	{
		if (Actor)
		{
			Actor->SetActorHiddenInGame(false);
			Actor->SetActorEnableCollision(true);
			Actor->SetActorTickEnabled(true);
		}
	}
	
	if (_index != -1)
	{
		AMinigameLogic* Minigame = Minigames[_index];	
		if (Minigame)
			Minigame->BeginMinigame();
	}

	if (_index == -1 && MapCamera && FullMapCamera)
	{
		MapCamera->Activate();
		FullMapCamera->Activate();
		PC->SetViewTargetWithBlend(MapCamera->GetAttachParentActor(), 0.0f);
	}

	UCameraComponent* cameraActor = GetMinigameCameraByIndex(_index);
	if (cameraActor) 
	{
		cameraActor->Activate();
		PC->SetViewTargetWithBlend(cameraActor->GetOwner(), 0.0f);
	}
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
