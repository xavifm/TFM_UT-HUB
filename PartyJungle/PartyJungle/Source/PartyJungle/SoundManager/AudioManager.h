#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/AudioComponent.h"
#include "Containers/Map.h"
#include "Sound/SoundBase.h"   
#include "AudioManager.generated.h"

UCLASS()
class PARTYJUNGLE_API AAudioManager : public AActor
{
	GENERATED_BODY()
	
public:	
	AAudioManager();

	UFUNCTION(BlueprintCallable, Category = "Audio")
	void SetSFXVolume(float _volume, int Channel = 0);

	UFUNCTION(BlueprintCallable, Category = "Audio")
	void SetSongVolume(float _volume);

	UFUNCTION(BlueprintCallable, Category = "Audio")
	void PlaySong(const FString& Sound, float Volume = 1, bool loop = false);

	UFUNCTION(BlueprintCallable, Category = "Audio")
	void PlaySFX(const FString& Sound, float Volume = 1, bool RandomPitch = false, int Channel = 0);

	UFUNCTION(BlueprintCallable, Category = "Audio")
	void StopSFX(int Channel = 0);

	UFUNCTION(BlueprintCallable, Category = "Audio")
	void StopSong();

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audio")
	TMap<FString, USoundBase*> Tracks;

private:
	UFUNCTION(BlueprintCallable, Category = "Audio")
	USoundBase* GetAudioTrack(const FString& TrackName);

	UPROPERTY(VisibleAnywhere, Category = "Audio")
	UAudioComponent* MusicPlayer;

	UPROPERTY(VisibleAnywhere, Category = "Audio")
	TArray<UAudioComponent*> SFXPlayer;

	const int MAX_SFX_CHANNELS = 5;
};
