#include "./WorldManager.h"
#include <Kismet/GameplayStatics.h>
#include <PartyJungle/Minigame/CrossInfo/MinigameLogic.h>

AWorldManager::AWorldManager()
{
	PrimaryActorTick.bCanEverTick = false;
}

TArray<AActor*> AWorldManager::GetLevelByIndex(int _index)
{
	switch (_index)
	{
	case -1:
		return BoardActors;
	case 0:
		return Minigame0Actors;
	default:
		return TArray<AActor*>();
	}
}

void AWorldManager::InitializeCameras() 
{
	if (IsInitialized || !MapCameraActor)
		return;

	TArray<UCameraComponent*> cameraComponents;

	MapCameraActor->GetComponents<UCameraComponent>(cameraComponents);
	MapCamera = cameraComponents[0];

	TArray<AActor*> foundCameras;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACameraActor::StaticClass(), foundCameras);
	AsssignCameraActors(foundCameras);

	IsInitialized = true;
}

void AWorldManager::AsssignCameraActors(TArray<AActor*> _actors)
{
	for (AActor* Actor : _actors)
	{
		ACameraActor* CameraActor = Cast<ACameraActor>(Actor);
		if (CameraActor)
		{
			CameraActors.Add(CameraActor);
		}
	}
}

ACameraActor* AWorldManager::GetMinigameCameraByIndex(int _index)
{
	if (CameraActors.IsValidIndex(_index))
	{
		return CameraActors[_index];
	}

	return nullptr;
}

void AWorldManager::UnloadEntireWorld()
{
	InitializeCameras();

	for (int i = 0; i < 10; i++)
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

		ACameraActor* cameraActor = GetMinigameCameraByIndex(i);
		if (cameraActor)
			cameraActor->GetCameraComponent()->Deactivate();
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

			AMinigameLogic* Minigame = Cast<AMinigameLogic>(Actor);

			if (Minigame)
				Minigame->BeginMinigame();
		}

	}

	if (_index == -1 && MapCamera)
	{
		MapCamera->Activate();
		PC->SetViewTargetWithBlend(MapCamera->GetAttachParentActor(), 0.0f);
	}

	ACameraActor* cameraActor = GetMinigameCameraByIndex(_index);
	if (cameraActor) 
	{
		cameraActor->GetCameraComponent()->Activate();
		PC->SetViewTargetWithBlend(cameraActor, 0.0f);
	}
}

void AWorldManager::EnableStarAtRandomLocation()
{

}
