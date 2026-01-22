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
	BaseYaw = GetActorRotation().Yaw;
}

void ACocoCannon::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent* EnhancedInput = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		EnhancedInput->BindAction(KeyaAction, ETriggerEvent::Started, this, &ACocoCannon::ShootCannon);
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

void ACocoCannon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!MetronomeEnabled || BPM <= 0.0f) return;
	
	if(TimerShoot > 0) TimerShoot -= DeltaTime;

	Elapsed += DeltaTime;

	const float BeatHz = BPM / 60.0f;
	const float OscHz  = BeatHz / 2.0f;
	const float Phase = 2.0f * PI * OscHz * Elapsed;
	const float YawOffset = MaxYawDegrees * FMath::Sin(Phase);

	FRotator Rotation = GetActorRotation();
	Rotation.Pitch = BaseYaw + YawOffset;
	SetActorRotation(Rotation);
}
