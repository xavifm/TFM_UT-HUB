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
	DiceReference->ShowDiceFeedbackNumber(Movements);
	CurrentSquare->RemoveMinion(this);
	CurrentSquare = GetNextSquare();
	CurrentSquare->AddMinion(this);
	MoveToSquare(CurrentSquare);
}

int AMinion::GetMinionsMovements()
{
	return Movements;
}

void AMinion::MoveToSquare(ASquare* TargetSquare)
{
	if (TargetSquare == nullptr) return;

	StartPosition = GetActorLocation();
	TargetPosition = TargetSquare->GetActorLocation();

	const TArray<AMinion*>& MinionsInSquare = CurrentSquare->MinionsList;
	int32 NumMinions = MinionsInSquare.Num();

	FVector Offset = CalculateSeparationOffset(MinionsInSquare, NumMinions, MINION_SEPARATION_DISTANCE);

	TargetPosition += Offset;

	CurrentLerpTime = 0.0f;
	isMoving = true;
}

FVector AMinion::CalculateSeparationOffset(TArray<AMinion*> MinionsInSquare, int32 NumMinions, float SeparationDistance) const
{
	FVector Offset = FVector::ZeroVector;

	if (NumMinions > 1)
	{
		int32 MinionIndex = MinionsInSquare.Find(const_cast<AMinion*>(this));
		if (MinionIndex == INDEX_NONE) MinionIndex = NumMinions - 1;

		float AngleStep = 360.0f / NumMinions;
		float Angle = AngleStep * MinionIndex;

		Offset.X = FMath::Cos(FMath::DegreesToRadians(Angle)) * SeparationDistance;
		Offset.Y = FMath::Sin(FMath::DegreesToRadians(Angle)) * SeparationDistance;
	}


	return Offset;
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

			if(Movements == 1) 
			{
				DiceReference->HideDice();
				CurrentSquare;
				Movements = 0;
			}

			if (Movements > 0)
				SetMinionsMovements(Movements - 1);
		}
    }
}

void AMinion::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

	HandleMovement(DeltaTime);
}

