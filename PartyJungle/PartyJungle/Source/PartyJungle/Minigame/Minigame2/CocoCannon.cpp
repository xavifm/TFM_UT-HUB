#include "CocoCannon.h"

ACocoCannon::ACocoCannon()
{
	PrimaryActorTick.bCanEverTick = true;

	CannonMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CannonMesh"));
	SetRootComponent(CannonMesh);
	
	CannonMesh->SetSimulatePhysics(false);
	
	ShootPivot = CreateDefaultSubobject<UArrowComponent>(TEXT("ShootPivot"));
	ShootPivot->SetupAttachment(CannonMesh);
}

void ACocoCannon::BeginPlay()
{
	Super::BeginPlay();
	CharacterPhysics = Cast<UPrimitiveComponent>(this->GetRootComponent());
}

void ACocoCannon::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent* EnhancedInput = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		EnhancedInput->BindAction(KeyaAction, ETriggerEvent::Started, this, &ACocoCannon::ShootCannon);
		EnhancedInput->BindAction(KeyDirAction, ETriggerEvent::Triggered, this, &ACocoCannon::WalkTo);
		EnhancedInput->bBlockInput = false;
	}
}

void ACocoCannon::ShootCannon()
{
	if (!ProjectileReference || TimerShoot > 0) return;

	UWorld* World = GetWorld();
	if (!World) return;
	
	const FVector ShootDir = ShootPivot->GetForwardVector();
	
	const FVector SpawnLoc = GetActorLocation() + ShootDir * 120.0f;
	const FRotator SpawnRot = ShootDir.Rotation();

	FActorSpawnParameters Params;
	Params.Owner = this;
	Params.Instigator = GetInstigator();
	
	AActor* SpawnedProjectile = World->SpawnActor<AActor>(ProjectileReference->GetClass(), SpawnLoc, SpawnRot, Params);
	if (!SpawnedProjectile) return;
	
	UPrimitiveComponent* PhysComp = Cast<UPrimitiveComponent>(SpawnedProjectile->GetComponentByClass(UPrimitiveComponent::StaticClass()));
	if (!PhysComp) return;
	
	PhysComp->SetSimulatePhysics(true);
	
	PhysComp->AddImpulse(ShootDir * ImpulseStrength, NAME_None, true);
	
	TimerShoot = BASE_SHOOT_TIMER;
}


void ACocoCannon::PossessMovement()
{
	PlayerController = UGameplayStatics::GetPlayerController(GetWorld(), CharacterTeam);
	
	if (PlayerController) 
	{
		PlayerController->bAutoManageActiveCameraTarget = false;
		PlayerController->Possess(this);
	}
}

void ACocoCannon::WalkTo(const FInputActionValue& _value)
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

void ACocoCannon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if(TimerShoot > 0) TimerShoot -= DeltaTime;
}
