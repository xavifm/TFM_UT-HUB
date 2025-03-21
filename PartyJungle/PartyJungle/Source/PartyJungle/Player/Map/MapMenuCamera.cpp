#include "./MapMenuCamera.h"
#include "Blueprint/UserWidget.h"
#include <EnhancedInputSubsystems.h>
#include <Kismet/GameplayStatics.h>
#include "EngineUtils.h"
#include <PartyJungle/Minigame/CrossInfo/MinigameDataGameInstance.h>

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

    SwitchMainScene();
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
        EnhancedInput->BindAction(KeybAction, ETriggerEvent::Started, this, &AMapMenuCamera::HandleBackInput);
        EnhancedInput->bBlockInput = false;
    }
}

void AMapMenuCamera::HandleLeftRightInput(const FInputActionValue& _value)
{
    int direction = _value.GetMagnitude();

    if (DuelUI)
    {
        RefreshChallengeInfo(direction);
        return;
    }

    if (SelectingPath)
        ChangeSelectedPath(direction);
    else
        FocusNextMinion(direction);
}

void AMapMenuCamera::HandleConfirmInput()
{
    SwitchMainScene();

    if (DuelUI)
    {
        //int winner = (std::rand() % 2) + 1;
        //FinishDuel(winner);
        StartMinigame(true, 0, TArray<AMinion*>());

        return;
    }

    if (SelectingPath)
        ConfirmPathSelection();
    else
        RollTheDice();
}

void AMapMenuCamera::StartMinigame(bool _duel, int _minigame, TArray<AMinion*> _minionsPlaying) 
{
    UMinigameDataGameInstance* GameInstance = Cast<UMinigameDataGameInstance>(GetGameInstance());

    if (GameInstance)
    {
        GameInstance->Teams = { 0, 1, 2, 3 };
        GameInstance->MapMenuCamera = this;

        if (_minionsPlaying.Num() > 0)
        {
            for (AMinion* _minion : _minionsPlaying)
            {
                if (_minion) 
                {
                    int32 teamId = static_cast<int32>(_minion->Team);
                    GameInstance->PlayingMinions.Add(teamId, _minion);
                }
            }
        }


        if(_duel) 
        {
            GameInstance->Attacker = ChallengeInformation->Attacker;
            GameInstance->Victim = ChallengeInformation->Victim;
            GameInstance->Challenge = true;       
        }
    }
    
    SwitchMainScene(_minigame);
}

void AMapMenuCamera::SwitchMainScene(int _sceneIndex)
{
    if (!WorldSceneManager)
        return;

    bool isMinigameActive = (_sceneIndex >= 0);

    WorldSceneManager->UnloadEntireWorld();
    WorldSceneManager->LoadPortion(_sceneIndex);

    SwitchMenuWidget(!isMinigameActive);
}

void AMapMenuCamera::HandleBackInput() 
{
    if (DuelUI)
        CloseChallengeMenu();
}

void AMapMenuCamera::CloseChallengeMenu() 
{
    SwitchChallengeUI(false);

    int currentMinionMovements = CurrentMinion->GetMinionsMovements();

    CurrentMinion->SetMinionsMovements(currentMinionMovements);

    if (currentMinionMovements <= 0)
        RestoreTurnLogic();
}

void AMapMenuCamera::OpenChallengeMenu(AMinion* _challenger, AMinion* _victim) 
{
    SwitchChallengeUI(true);

    if(ChallengeInformation) 
    {
        ChallengeInformation->SetUpDuelInfo(_challenger, _victim);
        RefreshChallengeInfo(0);
    }
}

void AMapMenuCamera::RefreshChallengeInfo(int _direction) 
{
    if (!ChallengeInformation)
        return;

    ChallengeInformation->SwitchDuelType(_direction);

    int attackerCoins = ChallengeInformation->GetBetCoinsQuantity(0);
    int victimCoins = ChallengeInformation->GetBetCoinsQuantity(1);

    int attackerCrowns = ChallengeInformation->GetBetCrownsQuantity(0);
    int victimCrowns = ChallengeInformation->GetBetCrownsQuantity(1);

    MapUI->UpdateDuelScreenInfo(attackerCoins, victimCoins, attackerCrowns, victimCrowns, ChallengeInformation->GetDuelType());

}

void AMapMenuCamera::FinishDuel(int _winner)
{
    int winnerIndex = (_winner == 1) ? 0 : 1;
    int loserIndex = (_winner == 1) ? 1 : 0;

    int winnerCoins = ChallengeInformation->GetBetCoinsQuantity(loserIndex);
    int loserCoins = -winnerCoins;

    int winnerCrowns = ChallengeInformation->GetBetCrownsQuantity(loserIndex);
    int loserCrowns = -winnerCrowns;

    auto* Winner = (_winner == 1) ? ChallengeInformation->Attacker : ChallengeInformation->Victim;
    auto* Loser = (_winner == 1) ? ChallengeInformation->Victim : ChallengeInformation->Attacker;

    Winner->UpdateCoins(winnerCoins);
    Loser->UpdateCoins(loserCoins);

    Winner->UpdateCrowns(winnerCrowns);
    Loser->UpdateCrowns(loserCrowns);

    MapUI->UpdateCoins(static_cast<int>(Winner->Team), winnerCoins);
    MapUI->UpdateCrowns(static_cast<int>(Winner->Team), winnerCrowns);

    MapUI->UpdateCoins(static_cast<int>(Loser->Team), loserCoins);
    MapUI->UpdateCrowns(static_cast<int>(Loser->Team), loserCrowns);

    SwitchChallengeUI(false);

    FTimerHandle timerHandle;
    GetWorld()->GetTimerManager().SetTimer(timerHandle, this, &AMapMenuCamera::CloseChallengeMenu, TIME_BEFORE_FINISH_DUEL, false);
}




void AMapMenuCamera::SwitchChallengeUI(bool _visibility) 
{
    DuelUI = _visibility;
    MapUI->SwitchChallengeVisibility(_visibility);

    if (_visibility) 
    {
        Dice->HideDice();
        MapUI->SwitchLegendVisibility(false);
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

            MapUI = (UPlayerMapUI*) MenuWidget;
            MapUI->SwitchTurnUI(CurrentMinionTeam);
            MapUI->SwitchChallengeVisibility(false);

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
    if (DuelUI)
        return;

    SwitchCameraTeam(1);
    MapUI->SwitchLegendVisibility(true);
    Dice->ShowDice();
    InputEnabled = true;
    TimedActionExecuted = false;
}

