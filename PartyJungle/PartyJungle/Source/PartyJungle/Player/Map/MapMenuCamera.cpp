#include "Blueprint/UserWidget.h"
#include "./MapMenuCamera.h"

AMapMenuCamera::AMapMenuCamera()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AMapMenuCamera::BeginPlay()
{
	Super::BeginPlay();
    ShowMenuWidget();
	
}

void AMapMenuCamera::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AMapMenuCamera::ShowMenuWidget()
{
    if (MenuWidgetClass)
    {
        UUserWidget* MenuWidget = CreateWidget<UUserWidget>(GetWorld(), MenuWidgetClass);
        if (MenuWidget)
        {
            MenuWidget->AddToViewport();
        }
    }
}

void AMapMenuCamera::SwitchCameraTeam(int _direction)
{
    CurrentMinionTeam += _direction;

    if (CurrentMinionTeam >= MAX_TEAM_NUMBER)
        CurrentMinionTeam = 0;
    else if (CurrentMinionTeam <= 0)
        CurrentMinionTeam = MAX_TEAM_NUMBER - 1;

    CurrentMinion = MapDb->GetMinion(CurrentMinionTeam, 0);
}

void AMapMenuCamera::FocusNextMinion(int _direction)
{
    CurrentMinionPos += _direction;

    if (CurrentMinionPos >= MAX_MINION_NUMBER)
        CurrentMinionPos = 0;
    else if (CurrentMinionPos <= 0)
        CurrentMinionPos = MAX_MINION_NUMBER - 1;

    CurrentMinion = MapDb->GetMinion(CurrentMinionTeam, CurrentMinionPos);
}


