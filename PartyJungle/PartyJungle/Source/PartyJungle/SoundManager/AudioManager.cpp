#include "./AudioManager.h"

AAudioManager::AAudioManager()
{
    PrimaryActorTick.bCanEverTick = false;

    RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

    MusicPlayer = CreateDefaultSubobject<UAudioComponent>(TEXT("MusicPlayer"));
    MusicPlayer->SetupAttachment(RootComponent);

    for (int i = 0; i < MAX_SFX_CHANNELS; ++i)
    {
        FString ComponentName = FString::Printf(TEXT("SFXPlayer_%d"), i);
        UAudioComponent* NewSFX = CreateDefaultSubobject<UAudioComponent>(*ComponentName);
        NewSFX->SetupAttachment(RootComponent);
        SFXPlayer.Add(NewSFX);
    }
}

void AAudioManager::SetSFXVolume(float _volume, int Channel)
{
    if (!SFXPlayer.IsValidIndex(Channel))
        return;

    SFXPlayer[Channel]->SetVolumeMultiplier(_volume);
}

void AAudioManager::SetSongVolume(float _volume)
{
    MusicPlayer->SetVolumeMultiplier(_volume);
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

void AAudioManager::PlaySFX(const FString& Sound, float Volume, bool RandomPitch, int Channel)
{
    USoundBase* trackQuery = GetAudioTrack(Sound);

    if (!SFXPlayer.IsValidIndex(Channel))
        return;

    if (trackQuery)
    {
        SFXPlayer[Channel]->SetSound(trackQuery);
        SFXPlayer[Channel]->SetVolumeMultiplier(Volume);

        int pitch = 1;

        if(RandomPitch)
            pitch = FMath::RandRange(0.75, 1.2);

        SFXPlayer[Channel]->SetPitchMultiplier(pitch);
        SFXPlayer[Channel]->Play();
    }
}

void AAudioManager::StopSFX(int Channel)
{
    if (!SFXPlayer.IsValidIndex(Channel))
        return;

    SFXPlayer[Channel]->Stop();
}

void AAudioManager::StopSong() 
{
    MusicPlayer->Stop();
}


USoundBase* AAudioManager::GetAudioTrack(const FString& TrackName)
{
    return Tracks.Contains(TrackName) ? Tracks[TrackName] : nullptr;
}

