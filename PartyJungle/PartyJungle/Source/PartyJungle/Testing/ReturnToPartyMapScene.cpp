#include "./ReturnToPartyMapScene.h"
#include <PartyJungle/Minigame/CrossInfo/MinigameDataGameInstance.h>
#include <PartyJungle/Player/Map/MapMenuCamera.h>

AReturnToPartyMapScene::AReturnToPartyMapScene()
{
	PrimaryActorTick.bCanEverTick = false;

}

void AReturnToPartyMapScene::BeginPlay()
{
    Super::BeginPlay();

    //UMinigameDataGameInstance* GameInstance = Cast<UMinigameDataGameInstance>(GetGameInstance());
    //if (GameInstance)
    //{
        //if (MapMenuCamera)
        //{
            //FTimerHandle TimerHandle;
            //GetWorld()->GetTimerManager().SetTimer(TimerHandle, [GameInstance]() {
                //GameInstance->MapMenuCamera->SwitchMainScene(true);
                //}, 10.0f, false);
        //}
        //else
            //UE_LOG(LogTemp, Warning, TEXT("MapMenuCamera is nullptr"));
    //}
    //else
    //{
        //UE_LOG(LogTemp, Warning, TEXT("GameInstance null"));
    //}
}
