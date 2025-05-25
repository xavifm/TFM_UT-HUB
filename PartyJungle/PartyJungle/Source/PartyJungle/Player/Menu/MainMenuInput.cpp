#include "./MainMenuInput.h"
#include <Kismet/GameplayStatics.h>

AMainMenuInput::AMainMenuInput()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AMainMenuInput::BeginPlay()
{
	Super::BeginPlay();

    UGameplayStatics::CreatePlayer(GetWorld(), 1, true);

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
                    break;
                }
            }
        }
    }
}

void AMainMenuInput::HandleUpDownInput(const FInputActionValue& _value)
{
    int direction = _value.GetMagnitude();

    HandleVerticalAxis(direction);
}

void AMainMenuInput::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);

    if (UEnhancedInputComponent* EnhancedInput = Cast<UEnhancedInputComponent>(PlayerInputComponent))
    {
        EnhancedInput->BindAction(AxisxAction, ETriggerEvent::Started, this, &AMainMenuInput::HandleLeftRightInput);
        EnhancedInput->BindAction(AxisyAction, ETriggerEvent::Started, this, &AMainMenuInput::HandleUpDownInput);
        EnhancedInput->BindAction(KeyaAction, ETriggerEvent::Started, this, &AMainMenuInput::HandleConfirmInput);
        EnhancedInput->BindAction(KeybAction, ETriggerEvent::Started, this, &AMainMenuInput::HandleBackInput);
        EnhancedInput->BindAction(KeyStartAction, ETriggerEvent::Started, this, &AMainMenuInput::HandleStartInput);
        EnhancedInput->bBlockInput = false;
    }
}

