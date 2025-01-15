#include "Minion.h"
#include "../../Map/Square.h"

AMinion::AMinion()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AMinion::SetMinionsMovements(int _movements)
{
	if (_movements <= 0)
		return;

	Movements = _movements;
	CurrentSquare = GetNextSquare();
	MoveToSquare(CurrentSquare);
}

void AMinion::MoveToSquare(ASquare* TargetSquare)
{
	if (TargetSquare == nullptr) return;

	StartPosition = GetActorLocation();
	TargetPosition = TargetSquare->GetActorLocation();

	CurrentLerpTime = 0.0f;
	isMoving = true;
}

ASquare* AMinion::GetNextSquare()
{
	ASquare* squareQuery = nullptr;

	if (CurrentSquare) 
		squareQuery = CurrentSquare->GetNextSquare();

	return squareQuery;
}

void AMinion::BeginPlay()
{
	Super::BeginPlay();
	
}

void AMinion::HandleMovement(float _deltaTime) 
{
    if (isMoving)
    {
        CurrentLerpTime += _deltaTime;

        float LerpAlpha = FMath::Clamp(CurrentLerpTime / TotalLerpTime, 0.0f, MAX_TIME_MOVEMENT);

        FVector NewPosition = FMath::Lerp(StartPosition, TargetPosition, LerpAlpha);
		NewPosition.Z = GetActorLocation().Z;

        SetActorLocation(NewPosition);

        if (LerpAlpha >= MAX_TIME_MOVEMENT) 
		{
            isMoving = false;

			if(Movements > 0) 
			{
				SetMinionsMovements(Movements - 1);
			}
		}
    }
}

void AMinion::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

	HandleMovement(DeltaTime);
}

