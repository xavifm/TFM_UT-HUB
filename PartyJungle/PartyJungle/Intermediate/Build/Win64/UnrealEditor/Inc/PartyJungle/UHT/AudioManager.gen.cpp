// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/SoundManager/AudioManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioManager() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AAudioManager();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AAudioManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// End Cross Module References

// Begin Class AAudioManager Function GetAudioTrack
struct Z_Construct_UFunction_AAudioManager_GetAudioTrack_Statics
{
	struct AudioManager_eventGetAudioTrack_Parms
	{
		FString TrackName;
		USoundBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "SoundManager/AudioManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_TrackName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AAudioManager_GetAudioTrack_Statics::NewProp_TrackName = { "TrackName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioManager_eventGetAudioTrack_Parms, TrackName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackName_MetaData), NewProp_TrackName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAudioManager_GetAudioTrack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioManager_eventGetAudioTrack_Parms, ReturnValue), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAudioManager_GetAudioTrack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAudioManager_GetAudioTrack_Statics::NewProp_TrackName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAudioManager_GetAudioTrack_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAudioManager_GetAudioTrack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAudioManager_GetAudioTrack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAudioManager, nullptr, "GetAudioTrack", nullptr, nullptr, Z_Construct_UFunction_AAudioManager_GetAudioTrack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAudioManager_GetAudioTrack_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAudioManager_GetAudioTrack_Statics::AudioManager_eventGetAudioTrack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAudioManager_GetAudioTrack_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAudioManager_GetAudioTrack_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAudioManager_GetAudioTrack_Statics::AudioManager_eventGetAudioTrack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAudioManager_GetAudioTrack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAudioManager_GetAudioTrack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAudioManager::execGetAudioTrack)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_TrackName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USoundBase**)Z_Param__Result=P_THIS->GetAudioTrack(Z_Param_TrackName);
	P_NATIVE_END;
}
// End Class AAudioManager Function GetAudioTrack

// Begin Class AAudioManager Function PlaySFX
struct Z_Construct_UFunction_AAudioManager_PlaySFX_Statics
{
	struct AudioManager_eventPlaySFX_Parms
	{
		FString Sound;
		float Volume;
		bool RandomPitch;
		int32 Channel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "CPP_Default_Channel", "0" },
		{ "CPP_Default_RandomPitch", "false" },
		{ "CPP_Default_Volume", "1.000000" },
		{ "ModuleRelativePath", "SoundManager/AudioManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Sound;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
	static void NewProp_RandomPitch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RandomPitch;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Channel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AAudioManager_PlaySFX_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioManager_eventPlaySFX_Parms, Sound), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sound_MetaData), NewProp_Sound_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAudioManager_PlaySFX_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioManager_eventPlaySFX_Parms, Volume), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AAudioManager_PlaySFX_Statics::NewProp_RandomPitch_SetBit(void* Obj)
{
	((AudioManager_eventPlaySFX_Parms*)Obj)->RandomPitch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAudioManager_PlaySFX_Statics::NewProp_RandomPitch = { "RandomPitch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AudioManager_eventPlaySFX_Parms), &Z_Construct_UFunction_AAudioManager_PlaySFX_Statics::NewProp_RandomPitch_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAudioManager_PlaySFX_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioManager_eventPlaySFX_Parms, Channel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAudioManager_PlaySFX_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAudioManager_PlaySFX_Statics::NewProp_Sound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAudioManager_PlaySFX_Statics::NewProp_Volume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAudioManager_PlaySFX_Statics::NewProp_RandomPitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAudioManager_PlaySFX_Statics::NewProp_Channel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAudioManager_PlaySFX_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAudioManager_PlaySFX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAudioManager, nullptr, "PlaySFX", nullptr, nullptr, Z_Construct_UFunction_AAudioManager_PlaySFX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAudioManager_PlaySFX_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAudioManager_PlaySFX_Statics::AudioManager_eventPlaySFX_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAudioManager_PlaySFX_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAudioManager_PlaySFX_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAudioManager_PlaySFX_Statics::AudioManager_eventPlaySFX_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAudioManager_PlaySFX()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAudioManager_PlaySFX_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAudioManager::execPlaySFX)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Sound);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
	P_GET_UBOOL(Z_Param_RandomPitch);
	P_GET_PROPERTY(FIntProperty,Z_Param_Channel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlaySFX(Z_Param_Sound,Z_Param_Volume,Z_Param_RandomPitch,Z_Param_Channel);
	P_NATIVE_END;
}
// End Class AAudioManager Function PlaySFX

// Begin Class AAudioManager Function PlaySong
struct Z_Construct_UFunction_AAudioManager_PlaySong_Statics
{
	struct AudioManager_eventPlaySong_Parms
	{
		FString Sound;
		float Volume;
		bool loop;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "CPP_Default_loop", "false" },
		{ "CPP_Default_Volume", "1.000000" },
		{ "ModuleRelativePath", "SoundManager/AudioManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Sound;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
	static void NewProp_loop_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_loop;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AAudioManager_PlaySong_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioManager_eventPlaySong_Parms, Sound), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sound_MetaData), NewProp_Sound_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAudioManager_PlaySong_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioManager_eventPlaySong_Parms, Volume), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AAudioManager_PlaySong_Statics::NewProp_loop_SetBit(void* Obj)
{
	((AudioManager_eventPlaySong_Parms*)Obj)->loop = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAudioManager_PlaySong_Statics::NewProp_loop = { "loop", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AudioManager_eventPlaySong_Parms), &Z_Construct_UFunction_AAudioManager_PlaySong_Statics::NewProp_loop_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAudioManager_PlaySong_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAudioManager_PlaySong_Statics::NewProp_Sound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAudioManager_PlaySong_Statics::NewProp_Volume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAudioManager_PlaySong_Statics::NewProp_loop,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAudioManager_PlaySong_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAudioManager_PlaySong_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAudioManager, nullptr, "PlaySong", nullptr, nullptr, Z_Construct_UFunction_AAudioManager_PlaySong_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAudioManager_PlaySong_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAudioManager_PlaySong_Statics::AudioManager_eventPlaySong_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAudioManager_PlaySong_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAudioManager_PlaySong_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAudioManager_PlaySong_Statics::AudioManager_eventPlaySong_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAudioManager_PlaySong()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAudioManager_PlaySong_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAudioManager::execPlaySong)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Sound);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
	P_GET_UBOOL(Z_Param_loop);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlaySong(Z_Param_Sound,Z_Param_Volume,Z_Param_loop);
	P_NATIVE_END;
}
// End Class AAudioManager Function PlaySong

// Begin Class AAudioManager Function SetSFXVolume
struct Z_Construct_UFunction_AAudioManager_SetSFXVolume_Statics
{
	struct AudioManager_eventSetSFXVolume_Parms
	{
		float _volume;
		int32 Channel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "CPP_Default_Channel", "0" },
		{ "ModuleRelativePath", "SoundManager/AudioManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp__volume;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Channel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAudioManager_SetSFXVolume_Statics::NewProp__volume = { "_volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioManager_eventSetSFXVolume_Parms, _volume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAudioManager_SetSFXVolume_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioManager_eventSetSFXVolume_Parms, Channel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAudioManager_SetSFXVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAudioManager_SetSFXVolume_Statics::NewProp__volume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAudioManager_SetSFXVolume_Statics::NewProp_Channel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAudioManager_SetSFXVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAudioManager_SetSFXVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAudioManager, nullptr, "SetSFXVolume", nullptr, nullptr, Z_Construct_UFunction_AAudioManager_SetSFXVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAudioManager_SetSFXVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAudioManager_SetSFXVolume_Statics::AudioManager_eventSetSFXVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAudioManager_SetSFXVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAudioManager_SetSFXVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAudioManager_SetSFXVolume_Statics::AudioManager_eventSetSFXVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAudioManager_SetSFXVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAudioManager_SetSFXVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAudioManager::execSetSFXVolume)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param__volume);
	P_GET_PROPERTY(FIntProperty,Z_Param_Channel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSFXVolume(Z_Param__volume,Z_Param_Channel);
	P_NATIVE_END;
}
// End Class AAudioManager Function SetSFXVolume

// Begin Class AAudioManager Function SetSongVolume
struct Z_Construct_UFunction_AAudioManager_SetSongVolume_Statics
{
	struct AudioManager_eventSetSongVolume_Parms
	{
		float _volume;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "SoundManager/AudioManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp__volume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAudioManager_SetSongVolume_Statics::NewProp__volume = { "_volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioManager_eventSetSongVolume_Parms, _volume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAudioManager_SetSongVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAudioManager_SetSongVolume_Statics::NewProp__volume,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAudioManager_SetSongVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAudioManager_SetSongVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAudioManager, nullptr, "SetSongVolume", nullptr, nullptr, Z_Construct_UFunction_AAudioManager_SetSongVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAudioManager_SetSongVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAudioManager_SetSongVolume_Statics::AudioManager_eventSetSongVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAudioManager_SetSongVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAudioManager_SetSongVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAudioManager_SetSongVolume_Statics::AudioManager_eventSetSongVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAudioManager_SetSongVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAudioManager_SetSongVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAudioManager::execSetSongVolume)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param__volume);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSongVolume(Z_Param__volume);
	P_NATIVE_END;
}
// End Class AAudioManager Function SetSongVolume

// Begin Class AAudioManager Function StopSFX
struct Z_Construct_UFunction_AAudioManager_StopSFX_Statics
{
	struct AudioManager_eventStopSFX_Parms
	{
		int32 Channel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "CPP_Default_Channel", "0" },
		{ "ModuleRelativePath", "SoundManager/AudioManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Channel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAudioManager_StopSFX_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioManager_eventStopSFX_Parms, Channel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAudioManager_StopSFX_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAudioManager_StopSFX_Statics::NewProp_Channel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAudioManager_StopSFX_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAudioManager_StopSFX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAudioManager, nullptr, "StopSFX", nullptr, nullptr, Z_Construct_UFunction_AAudioManager_StopSFX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAudioManager_StopSFX_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAudioManager_StopSFX_Statics::AudioManager_eventStopSFX_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAudioManager_StopSFX_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAudioManager_StopSFX_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAudioManager_StopSFX_Statics::AudioManager_eventStopSFX_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAudioManager_StopSFX()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAudioManager_StopSFX_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAudioManager::execStopSFX)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Channel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopSFX(Z_Param_Channel);
	P_NATIVE_END;
}
// End Class AAudioManager Function StopSFX

// Begin Class AAudioManager Function StopSong
struct Z_Construct_UFunction_AAudioManager_StopSong_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "SoundManager/AudioManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAudioManager_StopSong_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAudioManager, nullptr, "StopSong", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAudioManager_StopSong_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAudioManager_StopSong_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AAudioManager_StopSong()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAudioManager_StopSong_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAudioManager::execStopSong)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopSong();
	P_NATIVE_END;
}
// End Class AAudioManager Function StopSong

// Begin Class AAudioManager
void AAudioManager::StaticRegisterNativesAAudioManager()
{
	UClass* Class = AAudioManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAudioTrack", &AAudioManager::execGetAudioTrack },
		{ "PlaySFX", &AAudioManager::execPlaySFX },
		{ "PlaySong", &AAudioManager::execPlaySong },
		{ "SetSFXVolume", &AAudioManager::execSetSFXVolume },
		{ "SetSongVolume", &AAudioManager::execSetSongVolume },
		{ "StopSFX", &AAudioManager::execStopSFX },
		{ "StopSong", &AAudioManager::execStopSong },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAudioManager);
UClass* Z_Construct_UClass_AAudioManager_NoRegister()
{
	return AAudioManager::StaticClass();
}
struct Z_Construct_UClass_AAudioManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SoundManager/AudioManager.h" },
		{ "ModuleRelativePath", "SoundManager/AudioManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tracks_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "SoundManager/AudioManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MusicPlayer_MetaData[] = {
		{ "Category", "Audio" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SoundManager/AudioManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SFXPlayer_MetaData[] = {
		{ "Category", "Audio" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SoundManager/AudioManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Tracks_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Tracks_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Tracks;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MusicPlayer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SFXPlayer_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SFXPlayer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAudioManager_GetAudioTrack, "GetAudioTrack" }, // 1392250555
		{ &Z_Construct_UFunction_AAudioManager_PlaySFX, "PlaySFX" }, // 872062494
		{ &Z_Construct_UFunction_AAudioManager_PlaySong, "PlaySong" }, // 1383138438
		{ &Z_Construct_UFunction_AAudioManager_SetSFXVolume, "SetSFXVolume" }, // 534408414
		{ &Z_Construct_UFunction_AAudioManager_SetSongVolume, "SetSongVolume" }, // 554889542
		{ &Z_Construct_UFunction_AAudioManager_StopSFX, "StopSFX" }, // 1760069264
		{ &Z_Construct_UFunction_AAudioManager_StopSong, "StopSong" }, // 2117561834
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAudioManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAudioManager_Statics::NewProp_Tracks_ValueProp = { "Tracks", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AAudioManager_Statics::NewProp_Tracks_Key_KeyProp = { "Tracks_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AAudioManager_Statics::NewProp_Tracks = { "Tracks", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAudioManager, Tracks), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tracks_MetaData), NewProp_Tracks_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAudioManager_Statics::NewProp_MusicPlayer = { "MusicPlayer", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAudioManager, MusicPlayer), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MusicPlayer_MetaData), NewProp_MusicPlayer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAudioManager_Statics::NewProp_SFXPlayer_Inner = { "SFXPlayer", nullptr, (EPropertyFlags)0x00000000000a0008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAudioManager_Statics::NewProp_SFXPlayer = { "SFXPlayer", nullptr, (EPropertyFlags)0x0040008000020009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAudioManager, SFXPlayer), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SFXPlayer_MetaData), NewProp_SFXPlayer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAudioManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAudioManager_Statics::NewProp_Tracks_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAudioManager_Statics::NewProp_Tracks_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAudioManager_Statics::NewProp_Tracks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAudioManager_Statics::NewProp_MusicPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAudioManager_Statics::NewProp_SFXPlayer_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAudioManager_Statics::NewProp_SFXPlayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAudioManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAudioManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_PartyJungle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAudioManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAudioManager_Statics::ClassParams = {
	&AAudioManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AAudioManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AAudioManager_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAudioManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AAudioManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAudioManager()
{
	if (!Z_Registration_Info_UClass_AAudioManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAudioManager.OuterSingleton, Z_Construct_UClass_AAudioManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAudioManager.OuterSingleton;
}
template<> PARTYJUNGLE_API UClass* StaticClass<AAudioManager>()
{
	return AAudioManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAudioManager);
AAudioManager::~AAudioManager() {}
// End Class AAudioManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_SoundManager_AudioManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAudioManager, AAudioManager::StaticClass, TEXT("AAudioManager"), &Z_Registration_Info_UClass_AAudioManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAudioManager), 2113606355U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_SoundManager_AudioManager_h_4254547418(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_SoundManager_AudioManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_SoundManager_AudioManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
