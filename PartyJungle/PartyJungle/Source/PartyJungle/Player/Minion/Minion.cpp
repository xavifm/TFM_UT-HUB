#include "Minion.h"
#include <PartyJungle/Player/Map/MapMenuCamera.h>
#include "../../Map/Square.h"

AMinion::AMinion()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AMinion::SetMinionsMovements(int _movements, bool _continuation)
{
	if (_movements <= 0)
		return;

	Movements = _movements;
	DiceReference->ShowDiceFeedbackNumber(Movements);

	if(!_continuation) 
	{
		if(IsValid(CurrentSquare))
			CurrentSquare->RemoveMinion(this);

		CurrentSquare = GetNextSquare();
		if(CurrentSquare)
			UE_LOG(LogTemp, Warning, TEXT("CurrentSquare: %s"), *CurrentSquare->GetName());
	}

	if(CurrentSquare) 
	{
		CurrentSquare->AddMinion(this);
		MoveToSquare(CurrentSquare);	
	}
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
	TargetPosition.Z += VERTICAL_OFFSET_DISTANCE;

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

int AMinion::UpdateCoins(int _quantity)
{
	int previousCoins = Coins;
	Coins += _quantity;
	Coins = FMath::Clamp(Coins, 0, MAX_MINION_COINS);

	ShowMinionCoinsFeedback(_quantity);

	return Coins - previousCoins;
}


void AMinion::UpdateCrowns(int _quantity)
{
	Crowns += _quantity;
	Crowns = FMath::Clamp(Crowns, 0, MAX_MINION_CROWNS);

	ShowMinionCrownsFeedback(_quantity);
}

int AMinion::GetCoins()
{
	return Coins;
}

int AMinion::GetCrowns()
{
	return Crowns;
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

	if(CurrentSquare)
		CurrentSquare->AddMinion(this);
}

void AMinion::HandleMovement(float _deltaTime) 
{
    if (isMoving)
    {
        CurrentLerpTime += _deltaTime;

        float LerpAlpha = FMath::Clamp(CurrentLerpTime / TotalLerpTime, 0.0f, MAX_TIME_MOVEMENT);
        FVector NewPosition = FMath::Lerp(StartPosition, TargetPosition, LerpAlpha);
		float Arc = 4.0f * JUMP_HEIGHT * LerpAlpha * (1.0f - LerpAlpha);

		NewPosition.Z += Arc;

        SetActorLocation(NewPosition);

        if (LerpAlpha >= MAX_TIME_MOVEMENT) 
		{
            isMoving = false;

			if(Movements == 1) 
			{
				DiceReference->HideDice();
				Movements = 0;
			}

			bool eventExecuted = CurrentSquare->ExecuteEvent(this);
			if (eventExecuted)
				return;

			AMinion* minionQuery = SearchMinionToChallenge();
			if (CurrentSquare && CurrentSquare->Camera && minionQuery)
			{
				CurrentSquare->Camera->OpenChallengeMenu(this, minionQuery);
				return;
			}

			if (Movements > 0)
				SetMinionsMovements(Movements - 1);
		}
    }
}

AMinion* AMinion::SearchMinionToChallenge()
{
	AMinion* minionQuery = nullptr;

	if (!CurrentSquare || CurrentSquare->MinionsList.Num() != 2 || GetCoins() < MINIMUM_BET_REQUIREMENT)
		return minionQuery;

	for (AMinion* Minion : CurrentSquare->MinionsList)
	{
		if (Minion && Minion->Team != Team)
		{
			if(Minion->GetCoins() >= MINIMUM_BET_REQUIREMENT) 
				minionQuery = Minion;
		}
	}

	return minionQuery;
}

void AMinion::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

	HandleMovement(DeltaTime);
}

