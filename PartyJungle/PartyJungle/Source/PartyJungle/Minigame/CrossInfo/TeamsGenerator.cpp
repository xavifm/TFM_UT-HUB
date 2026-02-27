#include "./TeamsGenerator.h"
#include "../../Player/Minion/Minion.h"

TMap<int, TArray<AMinion*>> ATeamsGenerator::GetTwoVsTwoTeam(TArray<AMinion*> _playingMinions)
{
	TMap<int, TArray<AMinion*>> Result;
	Result.Add(0, TArray<AMinion*>{});
	Result.Add(1, TArray<AMinion*>{});
	
	TArray<AMinion*> shuffledMinions;
	shuffledMinions.Reserve(_playingMinions.Num());
	for (AMinion* minion : _playingMinions)
	{
		if (minion) shuffledMinions.Add(minion);
	}

	if (shuffledMinions.Num() == 0)
	{
		return Result;
	}
	
	FRandomStream stream(FMath::Rand());
	ShuffleMinions(shuffledMinions, stream);

	if (shuffledMinions.Num() == 1)
	{
		Result[0].Add(shuffledMinions[0]);
		return Result;
	}

	Result[0].Add(shuffledMinions[0]);
	Result[1].Add(shuffledMinions[1]);

	for (int32 i = 2; i < shuffledMinions.Num(); ++i)
	{
		const int TeamId = (i % 2);
		Result[TeamId].Add(shuffledMinions[i]);
	}

	return Result;
}

TMap<int, TArray<AMinion*>> ATeamsGenerator::GetOneVsThreeTeam(TArray<AMinion*> _playingMinions)
{
	TMap<int, TArray<AMinion*>> Result;
	Result.Add(0, TArray<AMinion*>{});
	Result.Add(1, TArray<AMinion*>{});
	
	TArray<AMinion*> shuffledMinions;
	shuffledMinions.Reserve(_playingMinions.Num());
	for (AMinion* minion : _playingMinions)
	{
		if (minion) shuffledMinions.Add(minion);
	}

	if (shuffledMinions.Num() == 0)
	{
		return Result;
	}
	
	FRandomStream stream(FMath::Rand());
	ShuffleMinions(shuffledMinions, stream);
	
	Result[0].Add(shuffledMinions[0]);
	for (int32 i = 1; i < shuffledMinions.Num(); ++i)
	{
		Result[1].Add(shuffledMinions[i]);
	}

	return Result;
}

void ATeamsGenerator::ShuffleMinions(TArray<AMinion*>& _minions, FRandomStream& _stream)
{
	for (int32 i = _minions.Num() - 1; i > 0; --i)
	{
		const int32 j = _stream.RandRange(0, i);
		_minions.Swap(i, j);
	}
}
