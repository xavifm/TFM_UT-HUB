#include "./WorldManager.h"
#include <Kismet/GameplayStatics.h>

AWorldManager::AWorldManager()
{
	PrimaryActorTick.bCanEverTick = false;
}

TArray<AActor*> AWorldManager::GetLevelByIndex(int32 Index)
{
	switch (Index)
	{
	case -1:
		return BoardActors;
	case 0:
		return Minigame0Actors;
	default:
		return TArray<AActor*>();
	}
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

UCameraComponent* AWorldManager::GetCameraByIndex(int _index)
{
	if (Cameras.IsValidIndex(_index))
	{
		return Cameras[_index];
	}

	return nullptr;
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

		UCameraComponent* cameraComponent = GetCameraByIndex(0);
		if (cameraComponent)
			cameraComponent->Deactivate();

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
		}
	}

	if(_index == -1) 
	{
		UCameraComponent* cameraComponent = GetCameraByIndex(0);
		if (cameraComponent) 
		{
			PC->SetViewTargetWithBlend(cameraComponent->GetAttachParentActor(), 1.0f);
			cameraComponent->Activate();
		}
	}

	ACameraActor* cameraActor = GetMinigameCameraByIndex(_index);
	if (cameraActor) 
	{
		cameraActor->GetCameraComponent()->Activate();
		PC->SetViewTargetWithBlend(cameraActor, 1.0f);
	}
}
