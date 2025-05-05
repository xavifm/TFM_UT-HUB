#include "./EndGameCamera.h"

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
        EnhancedInput->bBlockInput = false;
    }
}

void AEndGameCamera::HandleLeftRightInput(const FInputActionValue& _value) 
{
    int direction = _value.GetMagnitude();

    SwitchScoreDirection(direction);
}

