// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TeamsGenerator.generated.h"

class AMinion;

UCLASS()
class PARTYJUNGLE_API ATeamsGenerator : public AActor
{
	GENERATED_BODY()
	
public:	
	TMap<int, TArray<AMinion*>> GetTwoVsTwoTeam(TArray<AMinion*> _playingMinions);
	TMap<int, TArray<AMinion*>> GetOneVsThreeTeam(TArray<AMinion*> _playingMinions);
	void ShuffleMinions(TArray<AMinion*>& _minions, FRandomStream& _stream);
};
