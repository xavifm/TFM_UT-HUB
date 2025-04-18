#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/AudioComponent.h"
#include "Containers/Map.h"
#include "Sound/SoundBase.h"   
#include "AudioManager.generated.h"

USTRUCT(BlueprintType)
struct FTrack
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audio")
	FString TrackName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audio")
	USoundBase* SoundTrack;

	FTrack() : TrackName(""), SoundTrack(nullptr) {}
};

UCLASS()
class PARTYJUNGLE_API AAudioManager : public AActor
{
	GENERATED_BODY()
	
public:	
	AAudioManager();

	UFUNCTION(BlueprintCallable, Category = "Audio")
	void PlaySong(const FString& Sound);

	UFUNCTION(BlueprintCallable, Category = "Audio")
	void PlaySFX(const FString& Sound);

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audio")
	TMap<FString, FTrack> Tracks;

private:
	UFUNCTION(BlueprintCallable, Category = "Audio")
	FTrack GetAudioTrack(const FString& TrackName);

	UPROPERTY(VisibleAnywhere, Category = "Audio")
	UAudioComponent* MusicPlayer;

	UPROPERTY(VisibleAnywhere, Category = "Audio")
	UAudioComponent* SFXPlayer;
};
