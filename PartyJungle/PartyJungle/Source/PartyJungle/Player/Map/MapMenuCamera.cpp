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
    SwitchMenuWidget(true);

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

        if (!RollingDice && CurrentMinion->GetMinionsMovements() <= 0)
        {
            RestoreTurnLogic();
        }

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

void AMapMenuCamera::SwitchMenuWidget(bool _enabled)
{
    if (MenuWidgetClass)
    {
        if(!MenuWidget) 
        {
            MenuWidget = CreateWidget<UUserWidget>(GetWorld(), MenuWidgetClass);
            MenuWidget->AddToViewport();
        }
        
        if (MenuWidget)
        {
            if(_enabled)
                MenuWidget->SetVisibility(_enabled ? ESlateVisibility::Visible : ESlateVisibility::Collapsed);
            else if(!_enabled && MenuWidget->IsInViewport())
                MenuWidget->SetVisibility(_enabled ? ESlateVisibility::Hidden : ESlateVisibility::Collapsed);
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
    RollingDice = true;

    if (Dice && CurrentMinion)
    {
        int movements = Dice->RollTheDice();

        Dice->ShowDiceFeedbackNumber(movements);

        FTimerHandle TimerHandle;
        GetWorld()->GetTimerManager().SetTimer(TimerHandle, [this, movements]()
        {
            CurrentMinion->DiceReference = Dice;
            CurrentMinion->SetMinionsMovements(movements);
            RollingDice = false;
            SwitchMenuWidget(false);
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

void AMapMenuCamera::RestoreTurnLogic()
{
    SwitchMenuWidget(true);
    Dice->ShowDice();
    InputEnabled = true;
}

