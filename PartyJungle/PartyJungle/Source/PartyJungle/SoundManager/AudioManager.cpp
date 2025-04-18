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

void AAudioManager::PlaySong(const FString& Sound)
{
    FTrack trackQuery = GetAudioTrack(Sound);
    if (trackQuery.SoundTrack != nullptr)
    {
        MusicPlayer->SetSound(trackQuery.SoundTrack);
        MusicPlayer->Play();
    }
}

void AAudioManager::PlaySFX(const FString& Sound)
{
    FTrack trackQuery = GetAudioTrack(Sound);
    if (trackQuery.SoundTrack != nullptr)
    {
        SFXPlayer->SetSound(trackQuery.SoundTrack);
        SFXPlayer->Play();
    }
}

FTrack AAudioManager::GetAudioTrack(const FString& TrackName)
{
    return Tracks.Contains(TrackName) ? Tracks[TrackName] : FTrack();
}

