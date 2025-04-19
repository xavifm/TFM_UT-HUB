#include "./AudioManager.h"

AAudioManager::AAudioManager()
{
    PrimaryActorTick.bCanEverTick = false;

    MusicPlayer = CreateDefaultSubobject<UAudioComponent>(TEXT("MusicPlayer"));
    SFXPlayer = CreateDefaultSubobject<UAudioComponent>(TEXT("SFXPlayer"));

    RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    MusicPlayer->SetupAttachment(RootComponent);
    SFXPlayer->SetupAttachment(RootComponent);
}

void AAudioManager::PlaySong(const FString& Sound, float Volume, bool loop)
{
    USoundBase* trackQuery = GetAudioTrack(Sound);
    if (trackQuery)
    {
        MusicPlayer->SetSound(trackQuery);
        MusicPlayer->SetVolumeMultiplier(Volume);
        MusicPlayer->Play();
    }
}

void AAudioManager::PlaySFX(const FString& Sound, float Volume, bool RandomPitch)
{
    USoundBase* trackQuery = GetAudioTrack(Sound);
    if (trackQuery)
    {
        SFXPlayer->SetSound(trackQuery);
        SFXPlayer->SetVolumeMultiplier(Volume);

        int pitch = 1;

        if(RandomPitch)
            pitch = FMath::RandRange(0.75, 1.2);

        SFXPlayer->SetPitchMultiplier(pitch);
        SFXPlayer->Play();
    }
}

USoundBase* AAudioManager::GetAudioTrack(const FString& TrackName)
{
    return Tracks.Contains(TrackName) ? Tracks[TrackName] : nullptr;
}

