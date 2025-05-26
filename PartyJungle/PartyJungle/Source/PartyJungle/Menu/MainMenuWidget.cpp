#include "./MainMenuWidget.h"
#include "AudioDevice.h"
#include "Sound/SoundClass.h"
#include "Engine/Engine.h"
#include "AudioDeviceManager.h"


void UMainMenuWidget::SwitchGameVolume(float _volume)
{
    if (GEngine)
    {
        FAudioDevice* AudioDevice = GEngine->GetMainAudioDeviceRaw();
        if (AudioDevice)
            AudioDevice->SetTransientPrimaryVolume(_volume);
    }
}
