#include "./EndGameCamera.h"
#include "Kismet/GameplayStatics.h"


AEndGameCamera::AEndGameCamera()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AEndGameCamera::BeginPlay()
{
	Super::BeginPlay();
	
    UWorld* World = GetWorld();
    if (World)
    {
        UGameInstance* GameInstance = World->GetGameInstance();
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
}

void AEndGameCamera::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);

    if (UEnhancedInputComponent* EnhancedInput = Cast<UEnhancedInputComponent>(PlayerInputComponent))
    {
        EnhancedInput->BindAction(AxisxAction, ETriggerEvent::Started, this, &AEndGameCamera::HandleLeftRightInput);
        EnhancedInput->BindAction(ConfirmInputAction, ETriggerEvent::Started, this, &AEndGameCamera::HandleConfirmInput);
        EnhancedInput->bBlockInput = false;
    }
}

void AEndGameCamera::HandleLeftRightInput(const FInputActionValue& _value) 
{
    int direction = _value.GetMagnitude();

    SwitchScoreDirection(direction);
}

void AEndGameCamera::HandleConfirmInput()
{
    if(SequenceFinished) 
        UGameplayStatics::OpenLevel(this, FName(MAIN_MENU_SCENE_NAME));
}

