#include "./MapMenuCamera.h"
#include "Blueprint/UserWidget.h"
#include <EnhancedInputSubsystems.h>

AMapMenuCamera::AMapMenuCamera()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AMapMenuCamera::BeginPlay()
{
	Super::BeginPlay();
    ShowMenuWidget();

    UpdateDicePosition();

    Dice->ShowDice();
	
    if (APlayerController* PC = Cast<APlayerController>(GetController()))
    {
        if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PC->GetLocalPlayer()))
        {
            Subsystem->AddMappingContext(InputMappingContext, 0);
        }
    }

}

void AMapMenuCamera::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    if (CurrentMinion)
    {
        FVector CameraLocation = GetActorLocation();
        FVector MinionLocation = CurrentMinion->GetActorLocation();

        FVector TargetLocation = MinionLocation;
        TargetLocation.X = MinionLocation.X - 450;
        TargetLocation.Z = CameraLocation.Z;

        FVector NewLocation = FMath::VInterpTo(CameraLocation, TargetLocation, DeltaTime, 5.0f);
        SetActorLocation(NewLocation);

        UpdateDicePosition(false);
    }
}


void AMapMenuCamera::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

    if (UEnhancedInputComponent* EnhancedInput = Cast<UEnhancedInputComponent>(PlayerInputComponent))
    {
        EnhancedInput->BindAction(FocusAnotherMinionAction, ETriggerEvent::Started, this, &AMapMenuCamera::FocusNextMinion);
        EnhancedInput->BindAction(RollTheDiceAction, ETriggerEvent::Started, this, &AMapMenuCamera::RollTheDice);
    }
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

    UpdateDicePosition();
}

void AMapMenuCamera::FocusNextMinion(const FInputActionValue& _value)
{
    if (!InputEnabled)
        return;

    int direction = _value.GetMagnitude();

    CurrentMinionPos += direction;

    if (CurrentMinionPos >= MAX_MINION_NUMBER)
        CurrentMinionPos = 0;
    else if (CurrentMinionPos <= 0)
        CurrentMinionPos = MAX_MINION_NUMBER - 1;

    CurrentMinion = MapDb->GetMinion(CurrentMinionTeam, CurrentMinionPos);

    UpdateDicePosition();
}

void AMapMenuCamera::RollTheDice()
{
    if (!InputEnabled)
        return;

    InputEnabled = false;

    if (Dice && CurrentMinion)
    {
        int movements = Dice->RollTheDice();

        Dice->ShowDiceFeedbackNumber(movements);

        FTimerHandle TimerHandle;
        GetWorld()->GetTimerManager().SetTimer(TimerHandle, [this, movements]()
        {
            CurrentMinion->DiceReference = Dice;
            CurrentMinion->SetMinionsMovements(movements);
        }, Dice->DiceFeedbackTime, false);
    }
}


void AMapMenuCamera::UpdateDicePosition(bool _resizeDice)
{
    if (CurrentMinion)
    {
        FVector NewDicePosition = CurrentMinion->GetActorLocation();
        NewDicePosition.Z += DICE_HEIGHT_OFFSET;

        Dice->SwitchDicePosition(NewDicePosition, _resizeDice);
    }
}


