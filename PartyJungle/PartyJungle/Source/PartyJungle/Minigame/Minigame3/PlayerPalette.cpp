#include "./PlayerPalette.h"

APlayerPalette::APlayerPalette()
{
	PrimaryActorTick.bCanEverTick = true;

}

void APlayerPalette::BeginPlay()
{
	Super::BeginPlay();
	
	InitialPosition = GetActorLocation();
	
	CharacterPhysics = Cast<UPrimitiveComponent>(this->GetRootComponent());

	APlayerController* PC = UGameplayStatics::GetPlayerController(GetWorld(), 0);
	if (PC)
	{
		UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PC->GetLocalPlayer());
		if (Subsystem)
		{
			if (!Subsystem->HasMappingContext(InputMappingContext))
			{
				Subsystem->AddMappingContext(InputMappingContext, 0);
			}
		}
	}
}

void APlayerPalette::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APlayerPalette::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent* EnhancedInput = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		EnhancedInput->BindAction(KeyDirAction, ETriggerEvent::Triggered, this, &APlayerPalette::MovePallette);
		EnhancedInput->bBlockInput = false;
	}
}

void APlayerPalette::MovePallette(const FInputActionValue& _value)
{
	float stickInputX = _value.Get<float>();
	FVector newVector = FVector(0.0f, 0.0f, stickInputX * CHARACTER_VELOCITY);

	if (stickInputX < 0.3f && stickInputX > -0.3f)
		return;
	
	FVector finalPosition = CharacterPhysics->GetActorPositionForRenderer() + newVector;
	finalPosition.Z = FMath::Clamp(finalPosition.Z, MinZ, MaxZ);
    
	if (CharacterPhysics)
		CharacterPhysics->SetAllPhysicsPosition(finalPosition);
}

void APlayerPalette::ResetCharacterPosition()
{
	SetActorLocation(InitialPosition);
}

void APlayerPalette::PossessMovement()
{
	PlayerController = UGameplayStatics::GetPlayerController(GetWorld(), CharacterTeam);
	
	if (CharacterTeam == -1)
	{
		SetActorHiddenInGame(true);
		SetActorLocation(FVector(0,0,0));
	}
	
	if (PlayerController) 
	{
		PlayerController->bAutoManageActiveCameraTarget = false;
		PlayerController->Possess(this);
	}
}
