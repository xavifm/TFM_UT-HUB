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

        if (!InputEnabled && !RollingDice && CurrentMinion->GetMinionsMovements() <= 0)
        {
            if(!TimedActionExecuted) 
            {
                MapUI->SwitchLegendVisibility(false);
                UpdateMinionEconomy(CurrentMinion->CurrentSquare->Money);

                FTimerHandle timerHandle;
                GetWorld()->GetTimerManager().SetTimer(timerHandle, this, &AMapMenuCamera::RestoreTurnLogic, TIME_BEFORE_RESTORING_ROUND, false);     
                TimedActionExecuted = true;
            }
        }

        UpdateDicePosition(false);
    }
}

void AMapMenuCamera::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

    if (UEnhancedInputComponent* EnhancedInput = Cast<UEnhancedInputComponent>(PlayerInputComponent))
    {
        EnhancedInput->BindAction(AxisxAction, ETriggerEvent::Started, this, &AMapMenuCamera::HandleLeftRightInput);
        EnhancedInput->BindAction(KeyaAction, ETriggerEvent::Started, this, &AMapMenuCamera::HandleConfirmInput);
    }
}

void AMapMenuCamera::HandleLeftRightInput(const FInputActionValue& _value)
{
    int direction = _value.GetMagnitude();

    if (SelectingPath)
        ChangeSelectedPath(direction);
    else
        FocusNextMinion(direction);
}

void AMapMenuCamera::HandleConfirmInput()
{
    if (SelectingPath)
        ConfirmPathSelection();
    else
        RollTheDice();
}


void AMapMenuCamera::SwitchMenuWidget(bool _enabled)
{
    if (MenuWidgetClass)
    {
        if(!MenuWidget) 
        {
            MenuWidget = CreateWidget<UUserWidget>(GetWorld(), MenuWidgetClass);
            MenuWidget->AddToViewport();

            MapUI = (UPlayerMapUI*) MenuWidget;
            MapUI->SwitchTurnUI(CurrentMinionTeam);

            if (ScoreDb)
                MapUI->ScoresDb = ScoreDb;
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

void AMapMenuCamera::SwitchPathMenu(bool _enabled, TArray<ASquareOptional*> _paths)
{
    SelectingPath = _enabled;

    if (!_paths.IsEmpty())
        AvailablePaths = _paths;

    for (ASquareOptional* Path : AvailablePaths)
    {
        if (!Path) continue;

        if (_enabled)
            Path->EnableArrow();
        else
        {
            Path->DisableArrowAnimation();
            Path->DisableArrow();
        }
    }

    if (_enabled && !AvailablePaths.IsEmpty())
    {
        SelectedPathIndex = 0;
        ASquareOptional* SelectedPath = AvailablePaths[SelectedPathIndex];

        if (SelectedPath)
            SelectedPath->EnableArrowAnimation();
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
    MapUI->SwitchTurnUI(CurrentMinionTeam);

    UpdateDicePosition();
}

void AMapMenuCamera::FocusNextMinion(int _direction)
{
    if (!InputEnabled)
        return;

    CurrentMinionPos += _direction;

    if (CurrentMinionPos >= MAX_MINION_NUMBER)
        CurrentMinionPos = 0;
    else if (CurrentMinionPos <= 0)
        CurrentMinionPos = MAX_MINION_NUMBER - 1;

    CurrentMinion = MapDb->GetMinion(CurrentMinionTeam, CurrentMinionPos);

    UpdateDicePosition();
}

void AMapMenuCamera::ConfirmPathSelection()
{
    if (!SelectingPath || !AvailablePaths.IsValidIndex(SelectedPathIndex))
        return;

    ASquareOptional* SelectedPath = AvailablePaths[SelectedPathIndex];

    if (SelectedPath->MirrorSquare)
        SelectedPath = SelectedPath->MirrorReference;

    CurrentMinion->CurrentSquare = SelectedPath;
    CurrentMinion->SetMinionsMovements(CurrentMinion->GetMinionsMovements(), true);

    SwitchPathMenu(false, {});
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
        }, Dice->DiceFeedbackTime, false);
    }
}

void AMapMenuCamera::ChangeSelectedPath(int _direction)
{
    if (!SelectingPath || AvailablePaths.Num() == 0)
        return;

    if(AvailablePaths[SelectedPathIndex]) 
    {
        AvailablePaths[SelectedPathIndex]->DisableArrowAnimation();

        SelectedPathIndex += _direction;
        if (SelectedPathIndex >= AvailablePaths.Num()) SelectedPathIndex = 0;
        if (SelectedPathIndex < 0) SelectedPathIndex = AvailablePaths.Num() - 1;

        if (AvailablePaths[SelectedPathIndex]) 
            AvailablePaths[SelectedPathIndex]->EnableArrowAnimation();
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

void AMapMenuCamera::UpdateMinionEconomy(int _coins, int _crowns) 
{
    if (_coins == 0 && _crowns == 0)
        return;

    int updatedCoins = CurrentMinion->UpdateCoins(_coins);
    MapUI->UpdateCoins(CurrentMinionTeam, updatedCoins);
}

void AMapMenuCamera::RestoreTurnLogic()
{
    SwitchCameraTeam(1);
    MapUI->SwitchLegendVisibility(true);
    Dice->ShowDice();
    InputEnabled = true;
    TimedActionExecuted = false;
}

