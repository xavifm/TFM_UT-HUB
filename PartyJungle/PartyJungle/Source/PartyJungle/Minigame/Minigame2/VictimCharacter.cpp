#include "./VictimCharacter.h"

AVictimCharacter::AVictimCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AVictimCharacter::BeginPlay()
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

void AVictimCharacter::ResetCharacterPosition()
{
	SetActorLocation(InitialPosition);
}

void AVictimCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AVictimCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent* EnhancedInput = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		EnhancedInput->BindAction(KeyDirAction, ETriggerEvent::Triggered, this, &AVictimCharacter::WalkTo);
		EnhancedInput->bBlockInput = false;
	}
}

void AVictimCharacter::WalkTo(const FInputActionValue& _value)
{
	float stickInputX = _value.Get<float>();
	FVector newVector = FVector(stickInputX * CHARACTER_VELOCITY, 0.0f, 0.0f);

	if (stickInputX < 0.3f && stickInputX > -0.3f)
		return;
	
	FVector finalPosition = CharacterPhysics->GetActorPositionForRenderer() + newVector;
	finalPosition.X = FMath::Clamp(finalPosition.X, MinX, MaxX);
    
	if (CharacterPhysics)
		CharacterPhysics->SetAllPhysicsPosition(finalPosition);
}

void AVictimCharacter::PossessMovement()
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

