#include "./MapMenuCamera.h"
#include "Blueprint/UserWidget.h"
#include <EnhancedInputSubsystems.h>
#include <Kismet/GameplayStatics.h>
#include "EngineUtils.h"
#include <PartyJungle/Minigame/CrossInfo/MinigameDataGameInstance.h>
#include <PartyJungle/Map/SquareKeepCrowns.h>

AMapMenuCamera::AMapMenuCamera()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AMapMenuCamera::BeginPlay()
{
	Super::BeginPlay();

    SwitchMenuWidget(true);
    SwitchToFullMapView(false, CurrentMinion->GetActorLocation());
    UpdateDicePosition();
    Dice->ShowDice();

    if(WorldSceneManager) 
    {
        WorldSceneManager->DisableAllStars();
        WorldSceneManager->EnableStarAtRandomLocation();
    }

    UGameplayStatics::CreatePlayer(GetWorld(), 1, true);
    UGameplayStatics::CreatePlayer(GetWorld(), 2, true);
    UGameplayStatics::CreatePlayer(GetWorld(), 3, true);

    UWorld* World = GetWorld();
    if (World)
    {
        UGameInstance* GameInstance = World->GetGameInstance();
        UMinigameDataGameInstance* DataGameInstance = Cast<UMinigameDataGameInstance>(GameInstance);

        if (GameInstance)
        {
            MAX_TEAM_NUMBER = DataGameInstance->PlayersInBoard;
            RoundsSystem->MaxRounds = DataGameInstance->RoundsInBoard;
        }

        if (WorldSceneManager)
        {
            WorldSceneManager->DisableAllStars();
            WorldSceneManager->EnableStarAtRandomLocation();
        }


        if (GameInstance)
        {
            const TArray<ULocalPlayer*>& LocalPlayers = GameInstance->GetLocalPlayers();
            for (ULocalPlayer* LocalPlayer : LocalPlayers)
            {
                if (LocalPlayer)
                {
                    UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(LocalPlayer);
                    if (Subsystem)
                        Subsystem->AddMappingContext(InputMappingContext, 0);
                }
            }
        }
    }

    SwitchMainScene();
}

void AMapMenuCamera::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    if (FullMapView)
    {
        MoveFullMapCamera(FullMapCameraVelocity.X, FullMapCameraVelocity.Y);
        FullMapCameraVelocity = FVector2D(0,0);
    }

    if (CurrentMinion)
    {
        FVector CameraLocation = GetActorLocation();
        FVector MinionLocation = CurrentMinion->GetActorLocation();

        FVector TargetLocation = MinionLocation;
        TargetLocation.X = MinionLocation.X - 450;

        if(!CurrentMinion->isMoving) 
            SavedCameraHeight = MinionLocation.Z + CAMERA_HEIGHT_OFFSET;
        
        TargetLocation.Z = SavedCameraHeight;

        FVector NewLocation = FMath::VInterpTo(CameraLocation, TargetLocation, DeltaTime, 5.0f);
        SetActorLocation(NewLocation);

        if (!InputEnabled && !RollingDice && CurrentMinion->GetMinionsMovements() <= 0)
        {
            if(!TimedActionExecuted) 
            {
                MapUI->SwitchLegendVisibility(false);

                if(!BuyCrownsUI && !StoreCrownsUI && !DuelUI && !DuelPopup) 
                {
                    UpdateMinionEconomy(CurrentMinion->CurrentSquare->Money);
                    if (!ItemExecuted)
                    {
                        GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &AMapMenuCamera::RestoreTurnLogicWithAnimation, TIME_BEFORE_RESTORING_ROUND, false);
                        TimedActionExecuted = true;
                    }
                    else
                        SimpleRestoreTurn();
                }
            }
        }

        UpdateDicePosition(false);
    }
}

void AMapMenuCamera::SimpleRestoreTurn()
{
    InputEnabled = true;
    ItemExecuted = false;
    RollingDice = false;
    StartPlayerTurn();
}

void AMapMenuCamera::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

    if (UEnhancedInputComponent* EnhancedInput = Cast<UEnhancedInputComponent>(PlayerInputComponent))
    {
        EnhancedInput->BindAction(AxisxAction, ETriggerEvent::Started, this, &AMapMenuCamera::HandleLeftRightInput);
        EnhancedInput->BindAction(KeyaAction, ETriggerEvent::Started, this, &AMapMenuCamera::HandleConfirmInput);
        EnhancedInput->BindAction(KeybAction, ETriggerEvent::Started, this, &AMapMenuCamera::HandleBackInput);
        EnhancedInput->BindAction(KeywiAction, ETriggerEvent::Started, this, &AMapMenuCamera::HandleYInput);
        EnhancedInput->BindAction(KeyEscAction, ETriggerEvent::Started, this, &AMapMenuCamera::HandleEscInput);
        EnhancedInput->BindAction(LeftJoystickActionX, ETriggerEvent::Triggered, this, &AMapMenuCamera::HandleLeftJoystickInputX);
        EnhancedInput->BindAction(LeftJoystickActionY, ETriggerEvent::Triggered, this, &AMapMenuCamera::HandleLeftJoystickInputY);
        EnhancedInput->bBlockInput = false;
    }
}

void AMapMenuCamera::HandleLeftJoystickInputX(const FInputActionValue& _value)
{
    float stickInputX = _value.Get<float>();

    if (stickInputX < 0.3f && stickInputX > -0.3f)
        return;
    
    if (FullMapView)
        FullMapCameraVelocity = FVector2D(stickInputX, FullMapCameraVelocity.Y);
}

void AMapMenuCamera::HandleLeftJoystickInputY(const FInputActionValue& _value)
{
    float stickInputY = _value.Get<float>();
    
    if (stickInputY < 0.3f && stickInputY > -0.3f)
        return;
    
    if (FullMapView)
        FullMapCameraVelocity = FVector2D(FullMapCameraVelocity.X, stickInputY);
}

void AMapMenuCamera::HandleLeftRightInput(const FInputActionValue& _value)
{
    int direction = _value.GetMagnitude();

    if (DiceRollIndex > 0)
        return;

    if (InventoryEnabled && !SelectMinionToUseItem)
    {
        Inventory->SwitchSelectedInventoryItem(direction);
        return;
    }

    if (SelectingMinion)
    {
        SwitchMinionToSelectForDuel(MinionTeamChallengeIndex, direction);
        return;
    }

    if (IsMinigameActive)
        return;

    if (StartTurnUI)
    {
        StartPlayerTurn();
        return;
    }

    if (DuelUI)
    {
        RefreshChallengeInfo(direction, CurrentMinionTeam);
        return;
    }

    if (SelectingPath)
        ChangeSelectedPath(direction);
    else
        FocusNextMinion(direction);

    Inventory->SetInventoryPosition(CurrentMinion);
}

void AMapMenuCamera::HandleConfirmInput()
{
    if (IsMinigameActive || FullMapView)
        return;

    if (InventoryEnabled && !SelectMinionToUseItem)
    {
        if (Inventory->UseItemFromUI(CurrentMinion, true))
            SwitchInventory();
        
        if (Inventory->CheckIfIsEmptySpace(CurrentMinionTeam))
            return;
        
        SelectMinionToUseItem = true;
        Inventory->SwitchSelectedItemVisibility(SelectMinionToUseItem);
        return;
    }

    if (InventoryEnabled && SelectMinionToUseItem)
    {
        if (CurrentMinion->CurrentSquare->CheckIfSquareIsBlocked(CurrentMinion) || CurrentMinion->CurrentSquare->IsChallengeEnabled)
            return;
        
        SelectMinionToUseItem = false;
        Inventory->SwitchSelectedItemVisibility(SelectMinionToUseItem);
        SwitchInventory();
        Inventory->UseItemFromUI(CurrentMinion);
        return;
    }

    if (InventoryEnabled)
        return;

    if (SelectingMinion)
    {
        ConfirmMinionToDuel();
        return;
    }

    if (StartTurnUI) 
    {
        StartPlayerTurn();
        return;
    }

    if (DuelUI)
    {
        int LastTeam = CurrentMinionTeam;
        ChallengeInformation->SafeDuelChoice();
        SwitchUIController();

        if (LastTeam == CurrentMinionTeam)
        {
            int rouletteSize = ChallengeInformation->SquaresWithDuelsInRound[ChosenDuelIndex]->MinionsList.Num();
            MapUI->InitializePotRoulette(ChallengeInformation->SquaresWithDuelsInRound[ChosenDuelIndex]->MinionsList.Num() /* GUARRO */ ,ChallengeInformation->ParsePotsInfo(ChosenDuelIndex));
            RouletteResult = MapUI->SpinWheel(rouletteSize) - 1;
            UE_LOG(LogTemp, Warning, TEXT("Wheel Value: %d"), RouletteResult);
            DuelUI = false;

            GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &AMapMenuCamera::SpinWheelEndSequence, ROULETTE_SPIN_TIME, false);
            
        }
        //StartMinigame(true, 0, TArray<AMinion*>());
        return;
    }

    if (DuelPopup)
    {
        StopMinionForDuel();
        return;
    }
    
    if (BuyCrownsUI)
    {
        BuyCrowns(1);
        return;
    }

    if(StoreCrownsUI) 
    {
        StoreCrowns(1);
        return;
    }

    if (SelectingPath)
        ConfirmPathSelection();
    else if(!ChooseMinionToMove)
        RollTheDice();
    else if (!CurrentMinion->CurrentSquare->IsBlockedByWall)
        ExecuteMinionMovement();
}

void AMapMenuCamera::CloseDuelMenu(bool _endTurn)
{
    SwitchChallengeUI(false);

    MapUI->SwitchRouletteVisibility(2, false);
    MapUI->SwitchRouletteVisibility(3, false);
    MapUI->SwitchRouletteVisibility(4, false);

    if (_endTurn)
    {
        ChallengeInformation->ResetDuels();
        SwitchChallengeMenuUI(false, TArray<AMinion*>());
        GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &AMapMenuCamera::FinishDuelTransition, TIME_BEFORE_FINISH_DUEL, false);
    }
}

void AMapMenuCamera::SpinWheelEndSequence()
{
    GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
    auto potsInfo = ChallengeInformation->ParsePotsInfo(ChosenDuelIndex);
    EDuelType rouletteDuel = potsInfo[RouletteResult].second.second;
    UE_LOG(LogTemp, Log, TEXT("Roulette duel: %d"), static_cast<int32>(rouletteDuel));

    if (rouletteDuel == EDuelType::RESIGN)
    {
        CloseDuelMenu(true);
        return;
    }

    CloseDuelMenu(false);
        
    for (AMinion* minion : ChallengeInformation->SquaresWithDuelsInRound[ChosenDuelIndex]->MinionsList)
    {
        int team = static_cast<int>(minion->Team);
            
        int bet = (rouletteDuel == EDuelType::ALL_IN_COINS ||
                    rouletteDuel == EDuelType::ALL_IN_VS_ST)
                    ? minion->GetCoins()
                    : minion->GetCoins() / 2;

        bet = rouletteDuel == EDuelType::RESIGN ? 0 : bet;

        minion->UpdateCoins(-bet);
        MapUI->UpdateCoins(team, -bet);
    }

    SavedSceneValue = 0;
    GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &AMapMenuCamera::DelayedSceneSwitch, ROULETTE_SPIN_TIME, false);
}

void AMapMenuCamera::DelayedSceneSwitch()
{
    GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
    
    SwitchMainScene(SavedSceneValue);
}

void AMapMenuCamera::HandleYInput() 
{
    if ((!InputEnabled && !SelectingPath) || StartTurnUI || IsMinigameActive || DuelPopup || DuelUI || BuyCrownsUI || StoreCrownsUI)
        return;

    SwitchFullMapVision();
}

void AMapMenuCamera::HandleEscInput() 
{
    UGameplayStatics::OpenLevel(this, FName(MAIN_MENU_SCENE));
}

void AMapMenuCamera::SwitchFullMapVision() 
{
    FullMapView = !FullMapView;

    if(MapUI)
        MapUI->SwitchLegendVisibility(!FullMapView);
    
    SwitchMenuWidget(!FullMapView);
    SwitchToFullMapView(FullMapView, CurrentMinion->GetActorLocation());
}

void AMapMenuCamera::StopMinionForDuel()
{
	bool SelectMinionToChallenge = !CurrentMinion->CurrentSquare->SwitchDuelSquare(true);

	if(SelectMinionToChallenge)
	{
	    KickYourTeamDiscardableMinions();
	    MapUI->SwitchMinionDuelSelectionMenu(true);
	    
	    StartSelectionByTeam();
	    SwitchMinionToSelectForDuel(MinionTeamChallengeIndex, 0);
	    return;
	}

    if (!ChallengeInformation->SquaresWithDuelsInRound.Contains(CurrentMinion->CurrentSquare))
        ChallengeInformation->SquaresWithDuelsInRound.Add(CurrentMinion->CurrentSquare);
    
    CloseChallengeMenu(true);
}

void AMapMenuCamera::KickYourTeamDiscardableMinions()
{
    if (!CurrentMinion->CurrentSquare->DisposableMinionsList.Contains(CurrentMinionTeam)) return;
    
    TArray<AMinion*> minionsFromYourTeam = CurrentMinion->CurrentSquare->DisposableMinionsList[CurrentMinionTeam];

    for (AMinion* minion : minionsFromYourTeam)
    {
        if (minion != CurrentMinion)
        {
            minion->SetMinionsMovements(1, false, true);
            CurrentMinion->CurrentSquare->DisposableMinionsList[CurrentMinionTeam].Remove(minion);
        }
    }
}

void AMapMenuCamera::StartSelectionByTeam()
{
    SelectingMinion = true;
    TMap<int, TArray<AMinion*>> minionList= CurrentMinion->CurrentSquare->DisposableMinionsList;
    bool queryFound = false;

    for (TPair<int, TArray<AMinion*>> Element : minionList)
    {
        if (queryFound)
            break;
        
        for (AMinion* MinionList : Element.Value)
        {
            MinionTeamChallengeIndex = Element.Key;
            SelectedMinionChallengeIndex = 0;
            queryFound = true;
            
            break;
        }
    }
}

void AMapMenuCamera::SwitchMinionToSelectForDuel(int _team, int _direction)
{
    TMap<int, TArray<AMinion*>> minionList = CurrentMinion->CurrentSquare->DisposableMinionsList;

    if (!minionList.Contains(_team)) return;

    TArray<AMinion*>& teamMinions = minionList[_team];

    AMinion* oldMinion = teamMinions[SelectedMinionChallengeIndex];
    oldMinion->SwitchSelectArrowVisibility(false);

    if (teamMinions.Num() == 0) return;
    
    int numMinions = teamMinions.Num();
    SelectedMinionChallengeIndex = (SelectedMinionChallengeIndex + _direction + numMinions) % numMinions;

    AMinion* newMinion = teamMinions[SelectedMinionChallengeIndex];
    newMinion->SwitchSelectArrowVisibility(true);
}

void AMapMenuCamera::ConfirmMinionToDuel()
{
    TMap<int, TArray<AMinion*>> minionList = CurrentMinion->CurrentSquare->DisposableMinionsList;

    if (!minionList.Contains(MinionTeamChallengeIndex)) return;

    TArray<AMinion*>& teamMinions = minionList[MinionTeamChallengeIndex];

    teamMinions[SelectedMinionChallengeIndex]->SwitchSelectArrowVisibility(false);

    for (AMinion* minion : teamMinions)
    {
        if (teamMinions[SelectedMinionChallengeIndex] != minion)
        {
            minion->SetMinionsMovements(1, false, true);
            CurrentMinion->CurrentSquare->DisposableMinionsList[MinionTeamChallengeIndex].Remove(minion);
        }
    }

    SelectingMinion = false;
    StopMinionForDuel();
}

void AMapMenuCamera::StartMinigame(bool _duel, int _minigame, TArray<AMinion*> _minionsPlaying) 
{
    //UMinigameDataGameInstance* GameInstance = Cast<UMinigameDataGameInstance>(GetGameInstance());

    //if (GameInstance)
    //{
      //  GameInstance->Teams = { 0, 1, 2, 3 };
      //  GameInstance->MapMenuCamera = this;

        //if (_minionsPlaying.Num() > 0)
        //{
          //  for (AMinion* _minion : _minionsPlaying)
          //  {
          //      if (_minion) 
          //      {
          //          int32 teamId = static_cast<int32>(_minion->Team);
          //          GameInstance->PlayingMinions.Add(teamId, _minion);
          //      }
          //  }
        // }

        //if(_duel) 
        //{
            //GameInstance->Attacker = ChallengeInformation->Attacker;
            //GameInstance->Victim = ChallengeInformation->Victim;
            //GameInstance->Challenge = true;       
        //}
    //}
    
    SwitchMainScene(_minigame);
}

void AMapMenuCamera::SwitchMainScene(int _sceneIndex)
{
    if (!WorldSceneManager)
        return;

    IsMinigameActive = (_sceneIndex >= 0);

    //Dirty code!
    if(DuelUI && IsMinigameActive)
    {
        LoadingMap = true;
        StartFadeTransition(0.1f);
        GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &AMapMenuCamera::FinishFadeTransition, RESTORE_TURN_TRANSITION_TIME, false);  
    }

    WorldSceneManager->UnloadEntireWorld();
    WorldSceneManager->LoadPortion(_sceneIndex);


    if (!IsMinigameActive)
        SwitchController();

    SwitchMenuWidget(!IsMinigameActive);
}

void AMapMenuCamera::SwitchUIController()
{
    for (int _index = 0; _index < MAX_TEAM_NUMBER; _index++)
    {
        int controllerIndexQuery = ChallengeInformation->GetCurrentBetControllerMenuIndex(_index, MAX_TEAM_NUMBER, ChosenDuelIndex);

        if (controllerIndexQuery != -1 && controllerIndexQuery > CurrentMinionTeam)
        {
            CurrentMinionTeam = controllerIndexQuery;
            break;
        }
    }

    MapUI->SwitchDuelTurnUI(CurrentMinionTeam);
    SwitchController();
}

void AMapMenuCamera::SwitchController() 
{
    APlayerController* PlayerController = UGameplayStatics::GetPlayerController(GetWorld(), CurrentMinionTeam);
    APlayerController* PlayerController0 = UGameplayStatics::GetPlayerController(GetWorld(), 0);

    if(PlayerController) 
    {
        PlayerController->bAutoManageActiveCameraTarget = false;
        PlayerController->UnPossess();
        PlayerController->Possess(this);
        EnableInput(PlayerController);
    }

    if(PlayerController0)
        PlayerController0->SetViewTargetWithBlend(WorldSceneManager->MapCameraActor, 0.f);
}

void AMapMenuCamera::HandleBackInput() 
{
    if (IsMinigameActive || DiceRollIndex > 0)
        return;

    if (StartTurnUI)
    {
        StartPlayerTurn();
        return;
    }

    if (BuyCrownsUI)
    {
        SwitchCrownsShop(false);
        return;
    }

    if (StoreCrownsUI)
    {
        SwitchStoreCrownsUI(false);
        return;
    }

    if (DuelPopup)
	{
        CloseChallengeMenu();
		return;
	}

    if (InventoryEnabled && SelectMinionToUseItem)
    {
        SelectMinionToUseItem = false;
        Inventory->SwitchSelectedItemVisibility(SelectMinionToUseItem);
        return;
    }

    if (!FullMapView && !SelectingMinion && !SelectingPath && !StartTurnUI && !ChooseMinionToMove && InputEnabled)
    {
        SwitchInventory();
        return;
    }
}

void AMapMenuCamera::FinishDuelTransition()
{
    GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
    RestoreTurnLogic();
}

void AMapMenuCamera::CloseChallengeMenu(bool _duel)
{
    GetWorld()->GetTimerManager().ClearTimer(TimerHandle);

	int currentMinionMovements = CurrentMinion->GetMinionsMovements() - 1;
	if(_duel)
		currentMinionMovements = 0;

    CurrentMinion->SetMinionsMovements(currentMinionMovements);

    SwitchChallengeUI(false);
    SwitchChallengeMenuUI(false, TArray<AMinion*>());
    
    if(currentMinionMovements <= 0)
        GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &AMapMenuCamera::RestoreTurnLogicWithAnimation, TIME_BEFORE_RESTORING_ROUND, false);
}

void AMapMenuCamera::SwitchInventory()
{
    InventoryEnabled = !InventoryEnabled;

    Dice->ShowDice();

    if (InventoryEnabled)
    {
        Dice->HideDice();
        Inventory->SetInventoryPosition(CurrentMinion);
        Inventory->InitializeInventory(CurrentMinionTeam);
    }
    
    Inventory->SwitchInventoryVisibility(InventoryEnabled);
}

void AMapMenuCamera::OpenChallengeMenu() 
{
    SwitchChallengeUI(true);
}

void AMapMenuCamera::RefreshChallengeInfo(int _direction, int _team) 
{
    if (!ChallengeInformation)
        return;

    ChallengeInformation->SwitchDuelType(_direction, _team);

    int Coins = ChallengeInformation->GetBetCoinsQuantity(_team);
    int Crowns = ChallengeInformation->GetBetCrownsQuantity(_team);

    MapUI->UpdateDuelScreenInfo(Coins, Crowns, ChallengeInformation->GetDuelType(), _team);
}

void AMapMenuCamera::FinishDuel(int _winner, int _duelIndex)
{
    auto potsInfo = ChallengeInformation->ParsePotsInfo(_duelIndex);
    EDuelType duelType = potsInfo[RouletteResult].second.second;
    UE_LOG(LogTemp, Log, TEXT("Roulette duel: %d"), static_cast<int32>(duelType));
    
    bool fullPot = (duelType == EDuelType::ALL_IN_COINS || duelType == EDuelType::ALL_IN_VS_ST) ? true : false;
    TArray<AMinion*> minionsList = ChallengeInformation->SquaresWithDuelsInRound[_duelIndex]->MinionsList;
    CurrentMinion = minionsList[0];
    
    for (auto Minion : minionsList)
    {
        int minionTeam = static_cast<int>(Minion->Team);
        
        if (static_cast<int>(Minion->Team) == _winner)
        {
            int pot = ChallengeInformation->GetSavedPot();
            
            if (!fullPot)
                pot /= 2;
            
            Minion->UpdateCoins(pot, true);
            MapUI->UpdateCoins(minionTeam, pot);

            break;
        }
    }

    CloseDuelMenu(true);
}

void AMapMenuCamera::SwitchStoreCrownsUI(bool _visibility)
{
    StoreCrownsUI = _visibility;
    MapUI->SwitchCrownSavePlaceVisibility(_visibility);

    if (_visibility)
        MapUI->SwitchLegendVisibility(false);
    else
        GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &AMapMenuCamera::RestoreTurnLogicWithAnimation, TIME_BEFORE_RESTORING_ROUND, false);
}

void AMapMenuCamera::SwitchCrownsShop(bool _visibility)
{
    BuyCrownsUI = _visibility;
    MapUI->SwitchCrownStoreVisibility(_visibility);

    if(_visibility)
        MapUI->SwitchLegendVisibility(false);
    else
        GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &AMapMenuCamera::RestoreTurnLogicWithAnimation, TIME_BEFORE_RESTORING_ROUND, false);
}

void AMapMenuCamera::SwitchChallengeUI(bool _visibility) 
{
    DuelPopup = _visibility;
    MapUI->SwitchChallengePopupVisibility(_visibility);

    if (_visibility) 
    {
        Dice->HideDice();
        MapUI->SwitchLegendVisibility(false);
    }
}

void AMapMenuCamera::SwitchChallengeMenuUI(bool _visibility, TArray<AMinion*> _challengers) 
{
    DuelUI = _visibility;
    MapUI->SwitchChallengeVisibility(_visibility);
    MapUI->SwitchDuelTurnUI(CurrentMinionTeam);

    if (_visibility) 
    {
        Dice->HideDice();
        MapUI->SwitchLegendVisibility(false);

        if(ChallengeInformation && _challengers.Num() > 0) 
        {
            ChallengeInformation->SetUpDuelInfo(_challengers);
            MapUI->SetupUIPots(ChallengeInformation->GetPotQuantity(false, ChosenDuelIndex), ChallengeInformation->GetPotQuantity(true, ChosenDuelIndex));

            for (int team = 0; team < MAX_TEAM_NUMBER; team++)
                MapUI->SwitchChallengePlayerUIVisibility(team, false);
                
            for (AMinion* minion : _challengers)
            {
                RefreshChallengeInfo(0, static_cast<int>(minion->Team));
                MapUI->SwitchChallengePlayerUIVisibility(static_cast<int>(minion->Team), _visibility);   
            }
        }
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

            if (ScoreDb)
                MapUI->ScoresDb = ScoreDb;

            if(RoundsSystem)
                RoundsSystem->AssignMapUI(MapUI);
        }
        
        if (MenuWidget)
        {
            MapUI->SwitchTurnUI(CurrentMinionTeam);
            MapUI->SwitchChallengeVisibility(false);
            MapUI->SwitchCrownStoreVisibility(false);
            MapUI->SwitchCrownSavePlaceVisibility(false);
            MapUI->SwitchScoresVisibility(_enabled);
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
    //int oldMinionTeam = CurrentMinionTeam;
    CurrentMinionTeam += _direction;

    if(_direction != 0)
    {
        if (CurrentMinionTeam >= MAX_TEAM_NUMBER)
            CurrentMinionTeam = 0;
        else if (CurrentMinionTeam <= 0)
            CurrentMinionTeam = MAX_TEAM_NUMBER - 1;

        if (CurrentMinionTeam == 0 && RoundsSystem)
        {
            bool minigameDetected = RoundsSystem->HandleEndRound(true);

            if (minigameDetected)
            {
                ChosenDuelIndex = FMath::RandRange(0, ChallengeInformation->SquaresWithDuelsInRound.Num() -1);  //random duel
                CurrentMinion = ChallengeInformation->SquaresWithDuelsInRound[ChosenDuelIndex]->MinionsList[0];
                if (ChallengeInformation && ChallengeInformation->SquaresWithDuelsInRound.Num() > 0)
                SwitchChallengeMenuUI(true, ChallengeInformation->SquaresWithDuelsInRound[ChosenDuelIndex]->MinionsList);
                return;
            }
        }
        if (MapUI &&
            ((RoundsSystem->GetRoundsLeft() > RoundsSystem->MIN_ROUNDS_ANNOUNCED)
            || (RoundsSystem->GetRoundsLeft() <= RoundsSystem->MIN_ROUNDS_ANNOUNCED && CurrentMinionTeam != 0)))
        {
            FString Message = FString::Printf(TEXT("Player %d!"), static_cast<int32>(CurrentMinionTeam + 1));
            MapUI->ShowTextInScreen(Message, -1);
        }

        CurrentMinion->MoveCrownVerticalAxis(CROWN_MIN_OFFSET);
        CurrentMinion->SetMinionAnimation(EMinionState::IDLE);
        CurrentMinion = MapDb->GetMinion(CurrentMinionTeam, 0);

        //Reset Items
        ResetMapItems();
        
        MapUI->SwitchTurnUI(CurrentMinionTeam);

        FVector MinionLocation = CurrentMinion->GetActorLocation();
        MinionLocation.X = MinionLocation.X - 450;
        MinionLocation.Z = GetActorLocation().Z;

        CurrentMinion->SetMinionAnimation(EMinionState::WALK);

        SetActorLocation(MinionLocation);
    }
    else
    {
        FString Message = FString::Printf(TEXT("Second Move!"));
        MapUI->ShowTextInScreen(Message, -1);
    }

    StartTurnUI = true;
    UpdateDicePosition();
}

void AMapMenuCamera::ResetMapItems()
{
    TArray<AMinion*> minions = MapDb->GetMinions(CurrentMinionTeam);

    for (AMinion* minion : minions)
    {
        minion->CurrentSquare->ResetWallFromSquare(CurrentMinionTeam);
    }
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

    CurrentMinion->MoveCrownVerticalAxis(CROWN_MIN_OFFSET);
    CurrentMinion->SetMinionAnimation(EMinionState::IDLE);

    CurrentMinion = MapDb->GetMinion(CurrentMinionTeam, CurrentMinionPos);
    CurrentMinion->SetMinionAnimation(EMinionState::WALK);

    UpdateDicePosition();
}

void AMapMenuCamera::ConfirmPathSelection()
{
    if (!SelectingPath || !AvailablePaths.IsValidIndex(SelectedPathIndex))
        return;

    ASquareOptional* SelectedPath = AvailablePaths[SelectedPathIndex];

    if (SelectedPath->MirrorSquare)
        SelectedPath = SelectedPath->MirrorReference;

    if (SelectedPath)
        CurrentMinion->CurrentSquare = SelectedPath;

    CurrentMinion->SetMinionsMovements(CurrentMinion->GetMinionsMovements(), true);

    SwitchPathMenu(false, {});
}

void AMapMenuCamera::StoreCrowns(int _quantity)
{
    if (!CurrentMinion || !WorldSceneManager)
        return;

    CurrentMinion->UpdateCrowns(-_quantity);
    MapUI->UpdateCrowns(CurrentMinionTeam, _quantity);
    
    WorldSceneManager->EnableStarAtRandomLocation();
    SwitchStoreCrownsUI(false);
}

void AMapMenuCamera::BuyCrowns(int _quantity)
{
    if (!CurrentMinion || CurrentMinion->GetCoins() < (CROWN_PRICE * _quantity))
        return;

    CurrentMinion->UpdateCoins(-CROWN_PRICE, false);
    CurrentMinion->UpdateCrowns(_quantity);
    WorldSceneManager->DisableAllStars();

    SwitchCrownsShop(false);
}

UPlayerMapUI* AMapMenuCamera::GetMapUI()
{
    return MapUI;
}


void AMapMenuCamera::RollTheDice()
{
    if (!InputEnabled || ChooseMinionToMove)
        return;
    
    if (Dice && CurrentMinion)
    {
        SavedDiceMovements += Dice->RollTheDice();
        Dice->ShowDiceFeedbackNumber(SavedDiceMovements);
        DiceRollIndex++;
    }

    if (DiceRollIndex >= MAX_DICES)
    {
        Dice->DiceValue = SavedDiceMovements;
        Dice->HideDice();
        Dice->ShowDiceFeedbackNumber(Dice->DiceValue);
        SavedDiceMovements = 0;
        DiceRollIndex = 0;
        ChooseMinionToMove = true;
        RollingDice = true;   
    }
}

void AMapMenuCamera::ExecuteMinionMovement(bool _diceItem)
{
    if((!_diceItem && CurrentMinion->AlreadyMoved) || CurrentMinion->CurrentSquare->IsChallengeEnabled)
        return;

    CurrentMinion->DiceReference = Dice;

    if (!_diceItem)
        CurrentMinion->AlreadyMoved = true;
    
    CurrentMinion->SetMinionsMovements(Dice->DiceValue);
    
    Dice->DiceValue = 0;
    SavedDiceMovements = 0;
    DiceRollIndex = 0;
    
    RollingDice = false;
    ChooseMinionToMove = false;
    InputEnabled = false;

    if (!_diceItem)
        TurnMovementIndex++;
}

void AMapMenuCamera::ChangeSelectedPath(int _direction)
{
    if (!SelectingPath || AvailablePaths.Num() == 0)
        return;

    if (AvailablePaths[SelectedPathIndex])
    {
        ASquareOptional* AuxPath = AvailablePaths[SelectedPathIndex];
        AuxPath->DisableArrowAnimation();

        SelectedPathIndex += _direction;
        if (SelectedPathIndex >= AvailablePaths.Num()) SelectedPathIndex = 0;
        if (SelectedPathIndex < 0) SelectedPathIndex = AvailablePaths.Num() - 1;

        ASquareOptional* NewSelectedPath = AvailablePaths[SelectedPathIndex];
        NewSelectedPath->EnableArrowAnimation();
    }
}

void AMapMenuCamera::UpdateDicePosition(bool _resizeDice)
{
    if (CurrentMinion)
    {
        FVector NewDicePosition = CurrentMinion->GetActorLocation();
        NewDicePosition.Z += DICE_HEIGHT_OFFSET;

        Dice->SwitchDicePosition(NewDicePosition, _resizeDice);
        CurrentMinion->MoveCrownVerticalAxis(CROWN_MAX_OFFSET);
    }
}

void AMapMenuCamera::RestoreTurnLogicWithAnimation()
{
    GetWorld()->GetTimerManager().ClearTimer(TimerHandle);

    int currentMinionMovements = CurrentMinion->GetMinionsMovements() - 1;
    CurrentMinion->SetMinionsMovements(currentMinionMovements);

    if (currentMinionMovements > 0)
        return;

    bool checkForAvailableMovements = false;
    for (auto minion : MapDb->GetMinions(CurrentMinionTeam))
    {
        if (!minion->AlreadyMoved && !minion->CurrentSquare->IsChallengeEnabled)
            checkForAvailableMovements = true;
    }

    if(TurnMovementIndex >= MAX_MOVEMENTS_PER_TURN || !checkForAvailableMovements)
    {
        StartFadeTransition(RESTORE_TURN_TRANSITION_TIME);
        GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &AMapMenuCamera::FinishFadeTransition, RESTORE_TURN_TRANSITION_TIME, false);
    }
    else
    {
        InputEnabled = true;
        TimedActionExecuted = false;

        SwitchCameraTeam(0);
    }
}

void AMapMenuCamera::StartFadeTransition(float _time) 
{
    if (APlayerController* PC = GetWorld()->GetFirstPlayerController())
    {
        if (PC->PlayerCameraManager)
        {
            PC->PlayerCameraManager->StartCameraFade(0.0f, 1.0f, _time, FLinearColor::Black, false, true);
        }
    }
}

void AMapMenuCamera::FinishFadeTransition()
{
    GetWorld()->GetTimerManager().ClearTimer(TimerHandle);

    if(!LoadingMap)
        RestoreTurnLogic();

    LoadingMap = false;

    if (RoundsSystem && RoundsSystem->GameFinished)
        return;

    if (APlayerController* PC = GetWorld()->GetFirstPlayerController())
    {
        if (PC->PlayerCameraManager)
        {
            PC->PlayerCameraManager->StartCameraFade(1.0f, 0.0f, RESTORE_TURN_TRANSITION_TIME, FLinearColor::Black, false, true);
        }
    }
}

void AMapMenuCamera::UpdateMinionEconomy(int _coins) 
{
    if (_coins == 0)
        return;

    int currentCoins = CurrentMinion->GetCoins();
    int updatedCoins = CurrentMinion->UpdateCoins(_coins);

    if(currentCoins != updatedCoins)
        MapUI->UpdateCoins(CurrentMinionTeam, updatedCoins);
}

void AMapMenuCamera::UpdateMinionEconomyWithReference(AMinion* _minion, int _coins)
{
    if (_coins == 0)
        return;

    int currentCoins = _minion->GetCoins();
    int updatedCoins = _minion->UpdateCoins(_coins);

    if (currentCoins != updatedCoins)
        MapUI->UpdateCoins(static_cast<int32>(_minion->Team), updatedCoins);
}

void AMapMenuCamera::StartPlayerTurn()
{
    if (!MapUI || !Dice)
        return;

    MapUI->HideInScreenText();
    MapUI->SwitchLegendVisibility(true);
    Dice->ShowDice();

    StartTurnUI = false;
}

void AMapMenuCamera::RestoreTurnLogic()
{
    GetWorld()->GetTimerManager().ClearTimer(TimerHandle);

    if (DuelUI || DuelPopup)
        return;

    TurnMovementIndex = 0;
    TArray<AMinion*> minions = MapDb->GetMinions(CurrentMinionTeam);

    for (AMinion* minion : minions)
    {
        if (minion)
            minion->AlreadyMoved = false;
    }
  
    SwitchCameraTeam(1);
    SwitchController();

    InputEnabled = true;
    TimedActionExecuted = false;
}

