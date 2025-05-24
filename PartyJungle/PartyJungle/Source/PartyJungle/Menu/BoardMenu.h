#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BoardMenu.generated.h"

UCLASS()
class PARTYJUNGLE_API ABoardMenu : public AActor
{
	GENERATED_BODY()
	
public:
	ABoardMenu();

	UFUNCTION(BlueprintCallable)
	void SwitchMenuPosition(int _direction);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void PerformMenuAction(int CurrentBoardPosition);

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void SwitchBoardVisibleOption(int _position);

private:
	UPROPERTY();
	int CurrentMenuPosition = 0;

	const int MAX_MENU_POSITIONS = 3;

};
