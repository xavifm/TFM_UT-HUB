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
PARTYJUNGLE_API UScriptStruct* Z_Construct_UScriptStruct_FTrack();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// End Cross Module References

// Begin ScriptStruct FTrack
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Track;
class UScriptStruct* FTrack::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Track.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Track.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTrack, (UObject*)Z_Construct_UPackage__Script_PartyJungle(), TEXT("Track"));
	}
	return Z_Registration_Info_UScriptStruct_Track.OuterSingleton;
}
template<> PARTYJUNGLE_API UScriptStruct* StaticStruct<FTrack>()
{
	return FTrack::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTrack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "SoundManager/AudioManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackName_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "SoundManager/AudioManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundTrack_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "SoundManager/AudioManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_TrackName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundTrack;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTrack>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTrack_Statics::NewProp_TrackName = { "TrackName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTrack, TrackName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackName_MetaData), NewProp_TrackName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTrack_Statics::NewProp_SoundTrack = { "SoundTrack", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTrack, SoundTrack), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundTrack_MetaData), NewProp_SoundTrack_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTrack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrack_Statics::NewProp_TrackName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrack_Statics::NewProp_SoundTrack,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTrack_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PartyJungle,
	nullptr,
	&NewStructOps,
	"Track",
	Z_Construct_UScriptStruct_FTrack_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrack_Statics::PropPointers),
	sizeof(FTrack),
	alignof(FTrack),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrack_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTrack_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTrack()
{
	if (!Z_Registration_Info_UScriptStruct_Track.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Track.InnerSingleton, Z_Construct_UScriptStruct_FTrack_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Track.InnerSingleton;
}
// End ScriptStruct FTrack

// Begin Class AAudioManager Function GetAudioTrack
struct Z_Construct_UFunction_AAudioManager_GetAudioTrack_Statics
{
	struct AudioManager_eventGetAudioTrack_Parms
	{
		FString TrackName;
		FTrack ReturnValue;
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
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AAudioManager_GetAudioTrack_Statics::NewProp_TrackName = { "TrackName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioManager_eventGetAudioTrack_Parms, TrackName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackName_MetaData), NewProp_TrackName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAudioManager_GetAudioTrack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioManager_eventGetAudioTrack_Parms, ReturnValue), Z_Construct_UScriptStruct_FTrack, METADATA_PARAMS(0, nullptr) }; // 1605646905
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
	*(FTrack*)Z_Param__Result=P_THIS->GetAudioTrack(Z_Param_TrackName);
	P_NATIVE_END;
}
// End Class AAudioManager Function GetAudioTrack

// Begin Class AAudioManager Function PlaySFX
struct Z_Construct_UFunction_AAudioManager_PlaySFX_Statics
{
	struct AudioManager_eventPlaySFX_Parms
	{
		FString Sound;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "SoundManager/AudioManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Sound;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AAudioManager_PlaySFX_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioManager_eventPlaySFX_Parms, Sound), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sound_MetaData), NewProp_Sound_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAudioManager_PlaySFX_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAudioManager_PlaySFX_Statics::NewProp_Sound,
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
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlaySFX(Z_Param_Sound);
	P_NATIVE_END;
}
// End Class AAudioManager Function PlaySFX

// Begin Class AAudioManager Function PlaySong
struct Z_Construct_UFunction_AAudioManager_PlaySong_Statics
{
	struct AudioManager_eventPlaySong_Parms
	{
		FString Sound;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "SoundManager/AudioManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Sound;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AAudioManager_PlaySong_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioManager_eventPlaySong_Parms, Sound), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sound_MetaData), NewProp_Sound_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAudioManager_PlaySong_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAudioManager_PlaySong_Statics::NewProp_Sound,
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
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlaySong(Z_Param_Sound);
	P_NATIVE_END;
}
// End Class AAudioManager Function PlaySong

// Begin Class AAudioManager
void AAudioManager::StaticRegisterNativesAAudioManager()
{
	UClass* Class = AAudioManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAudioTrack", &AAudioManager::execGetAudioTrack },
		{ "PlaySFX", &AAudioManager::execPlaySFX },
		{ "PlaySong", &AAudioManager::execPlaySong },
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
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tracks_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Tracks_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Tracks;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MusicPlayer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SFXPlayer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAudioManager_GetAudioTrack, "GetAudioTrack" }, // 1803736919
		{ &Z_Construct_UFunction_AAudioManager_PlaySFX, "PlaySFX" }, // 3852610837
		{ &Z_Construct_UFunction_AAudioManager_PlaySong, "PlaySong" }, // 3095961149
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAudioManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAudioManager_Statics::NewProp_Tracks_ValueProp = { "Tracks", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FTrack, METADATA_PARAMS(0, nullptr) }; // 1605646905
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AAudioManager_Statics::NewProp_Tracks_Key_KeyProp = { "Tracks_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AAudioManager_Statics::NewProp_Tracks = { "Tracks", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAudioManager, Tracks), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tracks_MetaData), NewProp_Tracks_MetaData) }; // 1605646905
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAudioManager_Statics::NewProp_MusicPlayer = { "MusicPlayer", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAudioManager, MusicPlayer), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MusicPlayer_MetaData), NewProp_MusicPlayer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAudioManager_Statics::NewProp_SFXPlayer = { "SFXPlayer", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAudioManager, SFXPlayer), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SFXPlayer_MetaData), NewProp_SFXPlayer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAudioManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAudioManager_Statics::NewProp_Tracks_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAudioManager_Statics::NewProp_Tracks_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAudioManager_Statics::NewProp_Tracks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAudioManager_Statics::NewProp_MusicPlayer,
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
struct Z_CompiledInDeferFile_FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_SoundManager_AudioManager_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTrack::StaticStruct, Z_Construct_UScriptStruct_FTrack_Statics::NewStructOps, TEXT("Track"), &Z_Registration_Info_UScriptStruct_Track, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTrack), 1605646905U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAudioManager, AAudioManager::StaticClass, TEXT("AAudioManager"), &Z_Registration_Info_UClass_AAudioManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAudioManager), 3352056119U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_SoundManager_AudioManager_h_2184050806(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_SoundManager_AudioManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_SoundManager_AudioManager_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_SoundManager_AudioManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_SoundManager_AudioManager_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
