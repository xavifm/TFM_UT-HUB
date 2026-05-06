#include "./MapMenuCamera.h"
#include "Blueprint/UserWidget.h"
#include <EnhancedInputSubsystems.h>
#include <Kismet/GameplayStatics.h>
#include <PartyJungle/Map/SquareShop.h>
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

    if (Inventory)
    {
        for (int team = 0 ; team < MAX_TEAM_NUMBER ; team++)
            Inventory->InitializeInventory(team);
    }
    
    MinigameWheel->InitializeUI(MapUI);
    MinigameWheel->SwitchUiVisibility(false);

    SwitchMainScene();
    SwitchRankingScoreList(false);
    
    WorldSceneManager->StartMapPointCinematic(START_INTRO_CAM_POSITION, 2);
    
    if (MapUI)
    {
        MapUI->SwitchLegendVisibility(false);
    }
}

void AMapMenuCamera::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    if (StartGameIntro)
    {
        if (!FullMapView)
        {
            if (MapUI)
            {
                MapUI->SwitchScoresVisibility(false);
                MapUI->SwitchLegendVisibility(false);
                Dice->HideDice();
            }
            
            FullMapView = true;
            SwitchToFullMapView(FullMapView, START_INTRO_CAM_POSITION);   
        }
        
        FVector CurrentLocation = WorldSceneManager->FullMapCamera->GetAttachParentActor()->GetActorLocation();
        FVector TargetLocation = FVector(-800, 300,0);

        FVector MoveDirection = (TargetLocation - CurrentLocation).GetSafeNormal();
        
        auto SnapAxis = [](float Value)
        {
            if (Value > 0.1f) return 0.17f;
            if (Value < -0.1f) return -0.17f;
            return 0.f;
        };
        
        float dirY = SnapAxis(MoveDirection.Y);
        float dirX = SnapAxis(MoveDirection.X);
        
        float duration = 10.f;
        Elapsed += DeltaTime;
        float t = Elapsed / duration;
        float startZoom = 3150;
        float finalZoom = 2800;
        
        CurrentZoom = startZoom + (finalZoom - startZoom) * t;
        
        MoveFullMapCamera(dirY, dirX, CurrentZoom);
        
        if (dirY == 0.f && dirX == 0.f)
        {
            MapUI->SwitchScoresVisibility(false);
            MapUI->SwitchLegendVisibility(false);
            SwitchKingsPosition(true);
            
            MoveFullMapCamera(0, 0, CurrentZoom);
            SetDiceToKingLocation(0, 1);
            
            StartGameDices = true;
            StartGameIntro = false;
        }
    }
    
    if (FullMapView && !StartGameIntro && !StartGameDices)
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

                if(!BuyCrownsUI && !StoreCrownsUI && !DuelUI && !DuelPopup && !SquareShopReference) 
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

        if (!StartGameDices)
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
        EnhancedInput->BindAction(KeyF1Action, ETriggerEvent::Triggered, this, &AMapMenuCamera::HandleCheatKey);
        EnhancedInput->bBlockInput = false;
    }
}

void AMapMenuCamera::HandleCheatKey(const FInputActionValue& _value)
{
    //Start Minigame
    RoundsSystem->EndRoundMinigameAvailable = false;
    InitializeRouletteWithMinigames(EMinigameType::TEAM_MINIGAME, ETeamsMode::ANY);
    MinigameWheel->SwitchUiVisibility(true);
    MinigameWheel->SpinWheel(ENDROUND_MINIGAME_START_TIME - 2);
    GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &AMapMenuCamera::DelayedSceneSwitch, ENDROUND_MINIGAME_START_TIME, false);
}

void AMapMenuCamera::HandleLeftJoystickInputX(const FInputActionValue& _value)
{
    float stickInputX = _value.Get<float>();
    
    if (StartGameIntro || StartGameDices)
        return;

    if (stickInputX < 0.3f && stickInputX > -0.3f)
        return;
    
    if (FullMapView)
        FullMapCameraVelocity = FVector2D(stickInputX, FullMapCameraVelocity.Y);
}

void AMapMenuCamera::HandleLeftJoystickInputY(const FInputActionValue& _value)
{
    float stickInputY = _value.Get<float>();
    
    if (StartGameIntro || StartGameDices)
        return;
    
    if (stickInputY < 0.3f && stickInputY > -0.3f)
        return;
    
    if (FullMapView)
        FullMapCameraVelocity = FVector2D(FullMapCameraVelocity.X, stickInputY);
}

void AMapMenuCamera::HandleLeftRightInput(const FInputActionValue& _value)
{
    int direction = _value.GetMagnitude();
    
    if (StartGameIntro || StartGameDices)
        return;
    
    if (ScoreRankingEnabled)
        return;

    if (SquareShopReference)
        SquareShopReference->SwitchShopItem(direction);

    if (DiceRollIndex > 0)
        return;

    if (ThrowItemPlayerMenu)
    {
        int player = Inventory->SwitchItemThrowPlayer(direction, MAX_TEAM_NUMBER);
        MapUI->SwitchItemThrowPlayer(player);
        return;
    }

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
    if (MinigameInfo)
    {
        SwitchMainScene(false, SavedMinigameName);
        MinigameInfo = false;
        return;
    }
    
    if (StartGameIntro || StartGameDices)
    {
        if (StartGameIntro) return;
        //llògica minijoc dau per torns
        RollTheDice();
        
        return;
    }
    
    if (ScoreRankingEnabled)
    {
        SwitchRankingScoreList(false);
        return;
    }
    
    if (IsMinigameActive || FullMapView || SpinningWheel)
        return;

    if (SquareShopReference)
    {
        AItem* currentItem = SquareShopReference->GetCurrentShopItem();
        
        const FTransform SpawnTM = currentItem->GetActorTransform();
        FActorSpawnParameters Params;
        Params.Owner = this;
        Params.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
        Params.Template = currentItem;
        
        AItem* itemCopy = GetWorld()->SpawnActor<AItem>(currentItem->GetClass(), SpawnTM, Params);

        if (currentItem->Price <= CurrentMinion->GetCoins())
        {
            bool itemAddedQuery = Inventory->AddItem(CurrentMinionTeam, itemCopy);
            
            if (itemAddedQuery)
            {
                UpdateMinionEconomy(-currentItem->Price);
                SquareShopReference->SwitchShop();
                SquareShopReference = nullptr;

                GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &AMapMenuCamera::FollowMinionMovement, TIME_BEFORE_RESTORING_ROUND, false);   
            }
        }
    }
    
    if (ThrowItemPlayerMenu)
    {
        int player = Inventory->SwitchItemThrowPlayer(0, MAX_TEAM_NUMBER);
        AMinion* minion = MapDb->GetMinion(player, 0);
        Inventory->UseItemFromUI(minion, false, CurrentMinionTeam);
        SwitchItemThrowPlayerSelector(false);
        SwitchInventory();
        return;   
    }

    if (InventoryEnabled && !SelectMinionToUseItem)
    {
        if (Inventory->UseItemFromUI(CurrentMinion, true))
            SwitchInventory();
        
        if (Inventory->CheckIfIsEmptySpace(CurrentMinionTeam))
            return;

        if (Inventory->GetItemUseModeFromUI(CurrentMinionTeam) == EUseMode::THROW)
        {
            SwitchItemThrowPlayerSelector(true);
            int player = Inventory->SwitchItemThrowPlayer(0, MAX_TEAM_NUMBER, true);
            MapUI->SwitchItemThrowPlayer(player);
            return;
        }
        
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
            MapUI->InitializePotRoulette(ChallengeInformation->SquaresWithDuelsInRound[ChosenDuelIndex]->MinionsList, ChallengeInformation->ParsePotsInfo(ChosenDuelIndex), ChallengeInformation);
            RouletteResult = MapUI->SpinWheel(rouletteSize) - 1;
            UE_LOG(LogTemp, Warning, TEXT("Wheel Value: %d"), RouletteResult);
            DuelUI = false;
            SpinningWheel = true;

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
        StoreEconomy(CurrentMinion->GetCrowns(), CurrentMinion->GetCoins());
        return;
    }

    if (SelectingPath)
        ConfirmPathSelection();
    else if(!ChooseMinionToMove)
        RollTheDice();
    else if (!CurrentMinion->CurrentSquare->IsBlockedByWall)
        ExecuteMinionMovement();
}

void AMapMenuCamera::FollowMinionMovement()
{
    GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
    int currentMinionMovements = CurrentMinion->GetMinionsMovements() - 1;
    CurrentMinion->SetMinionsMovements(currentMinionMovements); 
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
    int rouletteDuel = potsInfo[RouletteResult].second.second;
    UE_LOG(LogTemp, Log, TEXT("Roulette duel: %d"), static_cast<int32>(rouletteDuel));

    if (rouletteDuel == 0)
    {
        CloseDuelMenu(true);
        return;
    }

    CloseDuelMenu(false);

    TArray<AMinion*> minions = ChallengeInformation->SquaresWithDuelsInRound[ChosenDuelIndex]->MinionsList;
    ChallengeInformation->UpdateCurrentPot(minions, rouletteDuel);

    for (AMinion* minion : minions)
    {
        int team = static_cast<int>(minion->Team);
        int bet = (minion->GetCoins() * rouletteDuel) / 100;
        int crowns = ChallengeInformation->GetSavedPotStars();
        
        minion->UpdateCoins(-bet);
        minion->UpdateCrowns(-crowns);
        MapUI->UpdateCoins(team, -bet);
        MapUI->UpdateCrowns(team, -crowns);
    }
    
    InitializeRouletteWithMinigames(EMinigameType::DUEL, ETeamsMode::NOTEAM);
    
    MinigameWheel->SwitchUiVisibility(true);
    int randomTime = rand() % (ENDROUND_MINIGAME_START_TIME - 2) + 1;
    MinigameWheel->SpinWheel(randomTime);
    
    GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &AMapMenuCamera::DelayedSceneSwitch, (ROULETTE_SPIN_TIME + ENDROUND_MINIGAME_START_TIME - 2), false);
}

void AMapMenuCamera::DelayedSceneSwitch()
{
    GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
    SavedMinigameName = MinigamesList[MinigameWheel->GetSpinValue()]->GameTitle;
    MinigameWheel->SwitchUiVisibility(false);
    SpinningWheel = false;
    
    //minigameBook
    if (MinigameBookInfo)
        MinigameBookInfo->SetMinigameInfo(SavedMinigameName);
    
    MinigameInfo = true;
    SwitchMainScene(false, FText::FromString("Book"));
}

void AMapMenuCamera::HandleYInput() 
{
    if ((!InputEnabled && !SelectingPath) || StartGameIntro || StartGameDices || StartTurnUI || IsMinigameActive || DuelPopup || DuelUI || BuyCrownsUI || StoreCrownsUI || SquareShopReference)
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

void AMapMenuCamera::SwitchMainScene(bool _isMap, FText _name)
{
    if (!WorldSceneManager)
        return;

    IsMinigameActive = !_isMap;
    
    if(DuelUI && IsMinigameActive)
    {
        LoadingMap = true;
        StartFadeTransition(0.1f);
        GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &AMapMenuCamera::FinishFadeTransition, RESTORE_TURN_TRANSITION_TIME, false);
    }
    
    MapUI->SwitchMinigameUIVisibility(IsMinigameActive);
    WorldSceneManager->UnloadEntireWorld();
    WorldSceneManager->LoadPortion(_isMap, _name);


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
    APlayerController* PlayerController = UGameplayStatics::GetPlayerController(GetWorld(), /*CurrentMinionTeam*/ 0);
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
    if (StartGameIntro || StartGameDices)
        return;
    
    if (ScoreRankingEnabled)
    {
        SwitchRankingScoreList(false);
        return;
    }
    
    if (IsMinigameActive || DiceRollIndex > 0)
        return;

    if (SquareShopReference)
    {
        SquareShopReference->SwitchShop();
        SquareShopReference = nullptr;

        FollowMinionMovement();
    }

    if (ThrowItemPlayerMenu)
    {
        SwitchItemThrowPlayerSelector(false);
        return;
    }

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
    if (ThrowItemPlayerMenu)
        return;
    
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

void AMapMenuCamera::SwitchItemThrowPlayerSelector(bool _enabled)
{
    ThrowItemPlayerMenu = _enabled;
    MapUI->SwitchItemThrowSelectorVisibility(_enabled);
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

    TArray<AMinion*> minions = ChallengeInformation->SquaresWithDuelsInRound[ChosenDuelIndex]->MinionsList;
    ChallengeInformation->UpdateCurrentPot(minions, ChallengeInformation->GetDuelType());
    int pot = ChallengeInformation->GetSavedPot();
    
    MapUI->UpdateDuelScreenInfo(Coins, Crowns, ChallengeInformation->GetDuelType() / 100, _team, pot);
}

void AMapMenuCamera::FinishDuel(int _winner, int _duelIndex)
{
    auto potsInfo = ChallengeInformation->ParsePotsInfo(_duelIndex);
    int duelPercentage = potsInfo[RouletteResult].second.second;
    UE_LOG(LogTemp, Log, TEXT("Roulette duel percentage: %d"), static_cast<int32>(duelPercentage));
    
    TArray<AMinion*> minionsList = ChallengeInformation->SquaresWithDuelsInRound[_duelIndex]->MinionsList;
    CurrentMinion = minionsList[0];
    
    for (auto Minion : minionsList)
    {
        int minionTeam = static_cast<int>(Minion->Team);
        
        if (static_cast<int>(Minion->Team) == _winner)
        {
            int pot = ChallengeInformation->GetSavedPot();
            int crowns = ChallengeInformation->GetSavedPotStars();
            Minion->UpdateCoins(pot, true);
            Minion->UpdateCrowns(crowns);
            MapUI->UpdateCoins(minionTeam, pot);
            MapUI->UpdateCrowns(minionTeam, crowns);

            break;
        }
    }

    CloseDuelMenu(true);
}

void AMapMenuCamera::FinishMinigame(TArray<int32> _winners, int _money)
{
    int dividedMoney = _money / 3;
    
    for (auto team : _winners)
    {
        TArray<AMinion*> teamMinions = MapDb->GetMinions(team);
        
        for (auto minion : teamMinions)
        {
            UpdateMinionEconomyWithReference(minion, dividedMoney);
        }
    }
    
    SwitchRankingScoreList(true);
    SameTurnEnabled = true;
    GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &AMapMenuCamera::FinishDuelTransition, TIME_BEFORE_FINISH_DUEL, false);
}

void AMapMenuCamera::SwitchStoreCrownsUI(bool _visibility)
{
    StoreCrownsUI = _visibility;
    MapUI->SwitchCrownSavePlaceVisibility(_visibility);
    MapUI->SetSaveEnconomyText(CurrentMinion->GetCrowns(), CurrentMinion->GetCoins());

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
            MapUI->SetupUIPots(ChallengeInformation->GetPotQuantity(10, ChosenDuelIndex), ChallengeInformation->GetPotQuantity(100, ChosenDuelIndex));

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
    if (PlayerTurnsOrder.Num() <= 0)
        return;
    
    MinionTeamIndex += _direction;

    if(_direction != 0)
    {
        if (MinionTeamIndex >= MAX_TEAM_NUMBER)
            MinionTeamIndex = 0;
        else if (MinionTeamIndex <= 0)
            MinionTeamIndex = MAX_TEAM_NUMBER - 1;
        
        CurrentMinionTeam = PlayerTurnsOrder[MinionTeamIndex];

        if (MinionTeamIndex == 0 && RoundsSystem)
        {
            TArray<bool> minigamesDetected = RoundsSystem->HandleEndRound(true);

            if (minigamesDetected[0])
            {
                ChosenDuelIndex = FMath::RandRange(0, ChallengeInformation->SquaresWithDuelsInRound.Num() -1);  //random duel
                CurrentMinion = ChallengeInformation->SquaresWithDuelsInRound[ChosenDuelIndex]->MinionsList[0];
                if (ChallengeInformation && ChallengeInformation->SquaresWithDuelsInRound.Num() > 0)
                SwitchChallengeMenuUI(true, ChallengeInformation->SquaresWithDuelsInRound[ChosenDuelIndex]->MinionsList);
                return;
            }
            if (minigamesDetected[1])
            {
                //Minigame
                RoundsSystem->EndRoundMinigameAvailable = false;
                InitializeRouletteWithMinigames(EMinigameType::TEAM_MINIGAME, ETeamsMode::ANY);
                MinigameWheel->SwitchUiVisibility(true);
                MinigameWheel->SpinWheel(ENDROUND_MINIGAME_START_TIME - 2);
                GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &AMapMenuCamera::DelayedSceneSwitch, ENDROUND_MINIGAME_START_TIME, false);
                return;
            }
        }
        if (MapUI &&
            ((RoundsSystem->GetRoundsLeft() > RoundsSystem->MIN_ROUNDS_ANNOUNCED)
            || (RoundsSystem->GetRoundsLeft() <= RoundsSystem->MIN_ROUNDS_ANNOUNCED && MinionTeamIndex != 0)))
        {
            FString Message = FString::Printf(TEXT("Player %d!"), static_cast<int32>(CurrentMinionTeam + 1));
            MapUI->ShowTextInScreen(Message, -1);
        }
        
        MoveCameraToCurrentTeam();
    }
    else
    {
        FString Message;
        
        if (TurnMovementIndex > 0)
            Message = FString::Printf(TEXT("Second Move!"));
        else
            Message = FString::Printf(TEXT("Player %d!"), static_cast<int32>(CurrentMinionTeam + 1));
        
        MapUI->ShowTextInScreen(Message, -1); 
        
        if (SameTurnEnabled)
            MoveCameraToCurrentTeam();
    }
    
    StartTurnUI = true;
    UpdateDicePosition();
}

void AMapMenuCamera::MoveCameraToCurrentTeam()
{
    CurrentMinion->MoveCrownVerticalAxis(CROWN_MIN_OFFSET);
    CurrentMinion->SetMinionAnimation(EMinionState::IDLE);
    CurrentMinion = MapDb->GetMinion(CurrentMinionTeam, 0);

    //Reset Items
    ResetMapItems();
        
    MapUI->SwitchTurnUI(CurrentMinionTeam);
    RoundsSystem->EndRoundMinigameAvailable = true;

    FVector MinionLocation = CurrentMinion->GetActorLocation();
    MinionLocation.X = MinionLocation.X - 450;
    MinionLocation.Z = GetActorLocation().Z;

    CurrentMinion->SetMinionAnimation(EMinionState::WALK);

    SetActorLocation(MinionLocation);
}

void AMapMenuCamera::SwitchRankingScoreList(bool _visibility)
{
    ScoreRankingEnabled = _visibility;
    ScoreDb->UpdateGlobalPositions();
    MapUI->SwitchScoreListUI(_visibility);
    
    if (!_visibility || !ScoreDb)
        return;
    
    TArray<UScoreDto*> scores = ScoreDb->GetScoresArray();

    for (int index = MAX_TEAM_NUMBER; index < 4; ++index)
        MapUI->SetScore(index, -1, 0, -1);
    
    if (scores.Num() > 0)
    {
        for (auto score : scores)
        {
            MapUI->SetScore(score->GlobalPosition, score->Team, score->TotalCoins, score->StoredCrowns);
        }
    }
}

void AMapMenuCamera::ResetMapItems()
{
    TArray<AMinion*> minions = MapDb->GetMinions(CurrentMinionTeam);
    
    ResetSlowedDice();

    for (AMinion* minion : minions)
    {
        minion->CurrentSquare->ResetWallFromSquare(CurrentMinionTeam);
    }
}

void AMapMenuCamera::ResetSlowedDice()
{
    if (TeamWithDiceSlowed == -1)
        return;
    
    int turnToDisable = TeamWithDiceSlowed + 1;
    if (turnToDisable >= MAX_TEAM_NUMBER)
        turnToDisable = 0;

    if(CurrentMinionTeam == turnToDisable)
        TeamWithDiceSlowed = -1;
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

void AMapMenuCamera::StoreEconomy(int _crowns, int _money)
{
    if (!CurrentMinion || !WorldSceneManager)
        return;

    CurrentMinion->UpdateCrowns(-_crowns);
    CurrentMinion->UpdateCoins(-_money, false);
    
    WorldSceneManager->EnableStarAtRandomLocation(true);
    SwitchStoreCrownsUI(false);
}

void AMapMenuCamera::BuyCrowns(int _quantity)
{
    if (!CurrentMinion || CurrentMinion->GetCoins() < (CROWN_PRICE * _quantity))
        return;

    CurrentMinion->UpdateCoins(-CROWN_PRICE, false);
    CurrentMinion->UpdateCrowns(_quantity);
    MapUI->UpdateCrowns(CurrentMinionTeam, _quantity);
    
    WorldSceneManager->DisableAllStars();

    SwitchCrownsShop(false);
}

UPlayerMapUI* AMapMenuCamera::GetMapUI()
{
    return MapUI;
}

void AMapMenuCamera::InitializeRouletteWithMinigames(EMinigameType _minigameType, ETeamsMode _teamsMode)
{
    if (MinigameWheel)
    {
        MinigamesList = WorldSceneManager->WorldDB->GetMinigamesOfType(_minigameType, _teamsMode);
        TArray<FText> gameTitles;
        
        for (auto minigame : MinigamesList)
        {
            gameTitles.Add(minigame->GameTitle);
            
            if (MinigameBookInfo)
            {   
                MinigameBookInfo->MinigameInfoMap.Add(
                    minigame->GameTitle.ToString(),
                    minigame->GameDescription.ToString()
                );
            }
        }
        
        MinigameWheel->InitializeUiValues(gameTitles);
        MinigameWheel->SwitchUiVisibility(false);
    }
}

void AMapMenuCamera::RollTheDice()
{
    if (!InputEnabled || ChooseMinionToMove)
        return;
    
    if (Dice && CurrentMinion)
    {
        SavedDiceMovements += (TeamWithDiceSlowed != CurrentMinionTeam) ? Dice->RollTheDice() : Dice->RollTheDice(true);
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
        
        if (!StartGameDices)
        {
            RollingDice = true; 
            ChooseMinionToMove = true;
        }
        //dice start turns
        else if (CurrentMinionTeam < MAX_TEAM_NUMBER)
        {
            SetKingNumber(CurrentMinionTeam, Dice->DiceValue);
            PlayerDicesValues.Add(Dice->DiceValue);
            CurrentMinionTeam += 1;
            
            Dice->DiceValue = 0;
            SavedDiceMovements = 0;
            DiceRollIndex = 0;
            
            if (CurrentMinionTeam < MAX_TEAM_NUMBER)
                SetDiceToKingLocation(CurrentMinionTeam, 0);
            else
            {
                ChooseMinionToMove = true;
                Dice->HideDice();
                PlayerTurnsOrder = CalculateTurnsOrder(PlayerDicesValues);
                CurrentMinionTeam = PlayerTurnsOrder[0];
                CurrentMinion = MapDb->GetMinion(CurrentMinionTeam, 0);
                FinishGameIntroCinematic();
            }
        }
    }
}

TArray<int> AMapMenuCamera::CalculateTurnsOrder(TArray<int> _diceResults)
{
    TArray<int> Order;
    
    for (int i = 0; i < _diceResults.Num(); i++)
    {
        Order.Add(i);
    }
    
    Order.Sort([&_diceResults](const int& A, const int& B)
    {
        return _diceResults[A] > _diceResults[B];
    });

    return Order;
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

    if (DuelUI || DuelPopup || SquareShopReference)
        return;

    TurnMovementIndex = 0;
    TArray<AMinion*> minions = MapDb->GetMinions(CurrentMinionTeam);

    for (AMinion* minion : minions)
    {
        if (minion)
            minion->AlreadyMoved = false;
    }
    
    if (SameTurnEnabled)
    {
        SwitchCameraTeam(0);
        SameTurnEnabled = false;
    }
    else 
        SwitchCameraTeam(1);
    
    SwitchController();

    InputEnabled = true;
    TimedActionExecuted = false;
}

