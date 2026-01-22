// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/World/WorldManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWorldManager() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_ASquareStar_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AWorldManager();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AWorldManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AWorldManager Function AsssignCameraActors *******************************
struct Z_Construct_UFunction_AWorldManager_AsssignCameraActors_Statics
{
	struct WorldManager_eventAsssignCameraActors_Parms
	{
		TArray<AActor*> _actors;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "World_Functions" },
		{ "ModuleRelativePath", "World/WorldManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__actors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp__actors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWorldManager_AsssignCameraActors_Statics::NewProp__actors_Inner = { "_actors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AWorldManager_AsssignCameraActors_Statics::NewProp__actors = { "_actors", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldManager_eventAsssignCameraActors_Parms, _actors), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWorldManager_AsssignCameraActors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldManager_AsssignCameraActors_Statics::NewProp__actors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldManager_AsssignCameraActors_Statics::NewProp__actors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldManager_AsssignCameraActors_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorldManager_AsssignCameraActors_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWorldManager, nullptr, "AsssignCameraActors", Z_Construct_UFunction_AWorldManager_AsssignCameraActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldManager_AsssignCameraActors_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWorldManager_AsssignCameraActors_Statics::WorldManager_eventAsssignCameraActors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldManager_AsssignCameraActors_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWorldManager_AsssignCameraActors_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWorldManager_AsssignCameraActors_Statics::WorldManager_eventAsssignCameraActors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWorldManager_AsssignCameraActors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWorldManager_AsssignCameraActors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWorldManager::execAsssignCameraActors)
{
	P_GET_TARRAY(AActor*,Z_Param__actors);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AsssignCameraActors(Z_Param__actors);
	P_NATIVE_END;
}
// ********** End Class AWorldManager Function AsssignCameraActors *********************************

// ********** Begin Class AWorldManager Function DisableAllStars ***********************************
struct Z_Construct_UFunction_AWorldManager_DisableAllStars_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "World_Functions" },
		{ "ModuleRelativePath", "World/WorldManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorldManager_DisableAllStars_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWorldManager, nullptr, "DisableAllStars", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldManager_DisableAllStars_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWorldManager_DisableAllStars_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AWorldManager_DisableAllStars()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWorldManager_DisableAllStars_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWorldManager::execDisableAllStars)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DisableAllStars();
	P_NATIVE_END;
}
// ********** End Class AWorldManager Function DisableAllStars *************************************

// ********** Begin Class AWorldManager Function EnableStarAtRandomLocation ************************
struct Z_Construct_UFunction_AWorldManager_EnableStarAtRandomLocation_Statics
{
	struct WorldManager_eventEnableStarAtRandomLocation_Parms
	{
		bool _pointWithCamera;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "World_Functions" },
		{ "CPP_Default__pointWithCamera", "false" },
		{ "ModuleRelativePath", "World/WorldManager.h" },
	};
#endif // WITH_METADATA
	static void NewProp__pointWithCamera_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__pointWithCamera;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AWorldManager_EnableStarAtRandomLocation_Statics::NewProp__pointWithCamera_SetBit(void* Obj)
{
	((WorldManager_eventEnableStarAtRandomLocation_Parms*)Obj)->_pointWithCamera = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWorldManager_EnableStarAtRandomLocation_Statics::NewProp__pointWithCamera = { "_pointWithCamera", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WorldManager_eventEnableStarAtRandomLocation_Parms), &Z_Construct_UFunction_AWorldManager_EnableStarAtRandomLocation_Statics::NewProp__pointWithCamera_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWorldManager_EnableStarAtRandomLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldManager_EnableStarAtRandomLocation_Statics::NewProp__pointWithCamera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldManager_EnableStarAtRandomLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorldManager_EnableStarAtRandomLocation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWorldManager, nullptr, "EnableStarAtRandomLocation", Z_Construct_UFunction_AWorldManager_EnableStarAtRandomLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldManager_EnableStarAtRandomLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWorldManager_EnableStarAtRandomLocation_Statics::WorldManager_eventEnableStarAtRandomLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldManager_EnableStarAtRandomLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWorldManager_EnableStarAtRandomLocation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWorldManager_EnableStarAtRandomLocation_Statics::WorldManager_eventEnableStarAtRandomLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWorldManager_EnableStarAtRandomLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWorldManager_EnableStarAtRandomLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWorldManager::execEnableStarAtRandomLocation)
{
	P_GET_UBOOL(Z_Param__pointWithCamera);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnableStarAtRandomLocation(Z_Param__pointWithCamera);
	P_NATIVE_END;
}
// ********** End Class AWorldManager Function EnableStarAtRandomLocation **************************

// ********** Begin Class AWorldManager Function GetLevelByIndex ***********************************
struct Z_Construct_UFunction_AWorldManager_GetLevelByIndex_Statics
{
	struct WorldManager_eventGetLevelByIndex_Parms
	{
		int32 _index;
		TArray<AActor*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "World_Functions" },
		{ "ModuleRelativePath", "World/WorldManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__index;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWorldManager_GetLevelByIndex_Statics::NewProp__index = { "_index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldManager_eventGetLevelByIndex_Parms, _index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWorldManager_GetLevelByIndex_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AWorldManager_GetLevelByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldManager_eventGetLevelByIndex_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWorldManager_GetLevelByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldManager_GetLevelByIndex_Statics::NewProp__index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldManager_GetLevelByIndex_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldManager_GetLevelByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldManager_GetLevelByIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorldManager_GetLevelByIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWorldManager, nullptr, "GetLevelByIndex", Z_Construct_UFunction_AWorldManager_GetLevelByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldManager_GetLevelByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWorldManager_GetLevelByIndex_Statics::WorldManager_eventGetLevelByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldManager_GetLevelByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWorldManager_GetLevelByIndex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWorldManager_GetLevelByIndex_Statics::WorldManager_eventGetLevelByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWorldManager_GetLevelByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWorldManager_GetLevelByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWorldManager::execGetLevelByIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param__index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<AActor*>*)Z_Param__Result=P_THIS->GetLevelByIndex(Z_Param__index);
	P_NATIVE_END;
}
// ********** End Class AWorldManager Function GetLevelByIndex *************************************

// ********** Begin Class AWorldManager Function GetMinigameCameraByIndex **************************
struct Z_Construct_UFunction_AWorldManager_GetMinigameCameraByIndex_Statics
{
	struct WorldManager_eventGetMinigameCameraByIndex_Parms
	{
		int32 _index;
		UCameraComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "World_Functions" },
		{ "ModuleRelativePath", "World/WorldManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__index;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWorldManager_GetMinigameCameraByIndex_Statics::NewProp__index = { "_index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldManager_eventGetMinigameCameraByIndex_Parms, _index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWorldManager_GetMinigameCameraByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldManager_eventGetMinigameCameraByIndex_Parms, ReturnValue), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWorldManager_GetMinigameCameraByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldManager_GetMinigameCameraByIndex_Statics::NewProp__index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldManager_GetMinigameCameraByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldManager_GetMinigameCameraByIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorldManager_GetMinigameCameraByIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWorldManager, nullptr, "GetMinigameCameraByIndex", Z_Construct_UFunction_AWorldManager_GetMinigameCameraByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldManager_GetMinigameCameraByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWorldManager_GetMinigameCameraByIndex_Statics::WorldManager_eventGetMinigameCameraByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldManager_GetMinigameCameraByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWorldManager_GetMinigameCameraByIndex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWorldManager_GetMinigameCameraByIndex_Statics::WorldManager_eventGetMinigameCameraByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWorldManager_GetMinigameCameraByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWorldManager_GetMinigameCameraByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWorldManager::execGetMinigameCameraByIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param__index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCameraComponent**)Z_Param__Result=P_THIS->GetMinigameCameraByIndex(Z_Param__index);
	P_NATIVE_END;
}
// ********** End Class AWorldManager Function GetMinigameCameraByIndex ****************************

// ********** Begin Class AWorldManager Function InitializeCameras *********************************
struct Z_Construct_UFunction_AWorldManager_InitializeCameras_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "World_Functions" },
		{ "ModuleRelativePath", "World/WorldManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorldManager_InitializeCameras_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWorldManager, nullptr, "InitializeCameras", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldManager_InitializeCameras_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWorldManager_InitializeCameras_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AWorldManager_InitializeCameras()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWorldManager_InitializeCameras_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWorldManager::execInitializeCameras)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeCameras();
	P_NATIVE_END;
}
// ********** End Class AWorldManager Function InitializeCameras ***********************************

// ********** Begin Class AWorldManager Function LoadPortion ***************************************
struct Z_Construct_UFunction_AWorldManager_LoadPortion_Statics
{
	struct WorldManager_eventLoadPortion_Parms
	{
		int32 _index;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "World_Functions" },
		{ "ModuleRelativePath", "World/WorldManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWorldManager_LoadPortion_Statics::NewProp__index = { "_index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldManager_eventLoadPortion_Parms, _index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWorldManager_LoadPortion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldManager_LoadPortion_Statics::NewProp__index,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldManager_LoadPortion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorldManager_LoadPortion_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWorldManager, nullptr, "LoadPortion", Z_Construct_UFunction_AWorldManager_LoadPortion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldManager_LoadPortion_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWorldManager_LoadPortion_Statics::WorldManager_eventLoadPortion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldManager_LoadPortion_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWorldManager_LoadPortion_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWorldManager_LoadPortion_Statics::WorldManager_eventLoadPortion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWorldManager_LoadPortion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWorldManager_LoadPortion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWorldManager::execLoadPortion)
{
	P_GET_PROPERTY(FIntProperty,Z_Param__index);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadPortion(Z_Param__index);
	P_NATIVE_END;
}
// ********** End Class AWorldManager Function LoadPortion *****************************************

// ********** Begin Class AWorldManager Function StartMapPointCinematic ****************************
struct WorldManager_eventStartMapPointCinematic_Parms
{
	FVector _position;
	float _time;
};
static FName NAME_AWorldManager_StartMapPointCinematic = FName(TEXT("StartMapPointCinematic"));
void AWorldManager::StartMapPointCinematic(FVector _position, float _time)
{
	WorldManager_eventStartMapPointCinematic_Parms Parms;
	Parms._position=_position;
	Parms._time=_time;
	UFunction* Func = FindFunctionChecked(NAME_AWorldManager_StartMapPointCinematic);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AWorldManager_StartMapPointCinematic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "World/WorldManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp__position;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__time;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWorldManager_StartMapPointCinematic_Statics::NewProp__position = { "_position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldManager_eventStartMapPointCinematic_Parms, _position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWorldManager_StartMapPointCinematic_Statics::NewProp__time = { "_time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldManager_eventStartMapPointCinematic_Parms, _time), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWorldManager_StartMapPointCinematic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldManager_StartMapPointCinematic_Statics::NewProp__position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldManager_StartMapPointCinematic_Statics::NewProp__time,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldManager_StartMapPointCinematic_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorldManager_StartMapPointCinematic_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWorldManager, nullptr, "StartMapPointCinematic", Z_Construct_UFunction_AWorldManager_StartMapPointCinematic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldManager_StartMapPointCinematic_Statics::PropPointers), sizeof(WorldManager_eventStartMapPointCinematic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08820800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldManager_StartMapPointCinematic_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWorldManager_StartMapPointCinematic_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(WorldManager_eventStartMapPointCinematic_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWorldManager_StartMapPointCinematic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWorldManager_StartMapPointCinematic_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AWorldManager Function StartMapPointCinematic ******************************

// ********** Begin Class AWorldManager Function UnloadEntireWorld *********************************
struct Z_Construct_UFunction_AWorldManager_UnloadEntireWorld_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "World_Functions" },
		{ "ModuleRelativePath", "World/WorldManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorldManager_UnloadEntireWorld_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWorldManager, nullptr, "UnloadEntireWorld", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldManager_UnloadEntireWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWorldManager_UnloadEntireWorld_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AWorldManager_UnloadEntireWorld()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWorldManager_UnloadEntireWorld_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWorldManager::execUnloadEntireWorld)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnloadEntireWorld();
	P_NATIVE_END;
}
// ********** End Class AWorldManager Function UnloadEntireWorld ***********************************

// ********** Begin Class AWorldManager ************************************************************
void AWorldManager::StaticRegisterNativesAWorldManager()
{
	UClass* Class = AWorldManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AsssignCameraActors", &AWorldManager::execAsssignCameraActors },
		{ "DisableAllStars", &AWorldManager::execDisableAllStars },
		{ "EnableStarAtRandomLocation", &AWorldManager::execEnableStarAtRandomLocation },
		{ "GetLevelByIndex", &AWorldManager::execGetLevelByIndex },
		{ "GetMinigameCameraByIndex", &AWorldManager::execGetMinigameCameraByIndex },
		{ "InitializeCameras", &AWorldManager::execInitializeCameras },
		{ "LoadPortion", &AWorldManager::execLoadPortion },
		{ "UnloadEntireWorld", &AWorldManager::execUnloadEntireWorld },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AWorldManager;
UClass* AWorldManager::GetPrivateStaticClass()
{
	using TClass = AWorldManager;
	if (!Z_Registration_Info_UClass_AWorldManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("WorldManager"),
			Z_Registration_Info_UClass_AWorldManager.InnerSingleton,
			StaticRegisterNativesAWorldManager,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AWorldManager.InnerSingleton;
}
UClass* Z_Construct_UClass_AWorldManager_NoRegister()
{
	return AWorldManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AWorldManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "World/WorldManager.h" },
		{ "ModuleRelativePath", "World/WorldManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoardActors_MetaData[] = {
		{ "Category", "World_Segment" },
		{ "ModuleRelativePath", "World/WorldManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Minigame0Actors_MetaData[] = {
		{ "Category", "World_Segment" },
		{ "ModuleRelativePath", "World/WorldManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinigameCameras_MetaData[] = {
		{ "Category", "World_Cameras" },
		{ "ModuleRelativePath", "World/WorldManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapCamera_MetaData[] = {
		{ "Category", "World_Cameras" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "World/WorldManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FullMapCamera_MetaData[] = {
		{ "Category", "World_Cameras" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "World/WorldManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapCameraActor_MetaData[] = {
		{ "Category", "World_Cameras" },
		{ "ModuleRelativePath", "World/WorldManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FullMapCameraActor_MetaData[] = {
		{ "Category", "World_Cameras" },
		{ "ModuleRelativePath", "World/WorldManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraActors_MetaData[] = {
		{ "Category", "World_Cameras" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "World/WorldManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapCrowns_MetaData[] = {
		{ "Category", "World_Crowns" },
		{ "ModuleRelativePath", "World/WorldManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoardActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BoardActors;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Minigame0Actors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Minigame0Actors;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MinigameCameras_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MinigameCameras;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MapCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FullMapCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MapCameraActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FullMapCameraActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CameraActors;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MapCrowns_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MapCrowns;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AWorldManager_AsssignCameraActors, "AsssignCameraActors" }, // 177570660
		{ &Z_Construct_UFunction_AWorldManager_DisableAllStars, "DisableAllStars" }, // 556948302
		{ &Z_Construct_UFunction_AWorldManager_EnableStarAtRandomLocation, "EnableStarAtRandomLocation" }, // 2635431754
		{ &Z_Construct_UFunction_AWorldManager_GetLevelByIndex, "GetLevelByIndex" }, // 3134651353
		{ &Z_Construct_UFunction_AWorldManager_GetMinigameCameraByIndex, "GetMinigameCameraByIndex" }, // 4231099228
		{ &Z_Construct_UFunction_AWorldManager_InitializeCameras, "InitializeCameras" }, // 522898123
		{ &Z_Construct_UFunction_AWorldManager_LoadPortion, "LoadPortion" }, // 568760706
		{ &Z_Construct_UFunction_AWorldManager_StartMapPointCinematic, "StartMapPointCinematic" }, // 3918929468
		{ &Z_Construct_UFunction_AWorldManager_UnloadEntireWorld, "UnloadEntireWorld" }, // 3062019286
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWorldManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldManager_Statics::NewProp_BoardActors_Inner = { "BoardActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWorldManager_Statics::NewProp_BoardActors = { "BoardActors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldManager, BoardActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoardActors_MetaData), NewProp_BoardActors_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldManager_Statics::NewProp_Minigame0Actors_Inner = { "Minigame0Actors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWorldManager_Statics::NewProp_Minigame0Actors = { "Minigame0Actors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldManager, Minigame0Actors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Minigame0Actors_MetaData), NewProp_Minigame0Actors_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldManager_Statics::NewProp_MinigameCameras_Inner = { "MinigameCameras", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWorldManager_Statics::NewProp_MinigameCameras = { "MinigameCameras", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldManager, MinigameCameras), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinigameCameras_MetaData), NewProp_MinigameCameras_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldManager_Statics::NewProp_MapCamera = { "MapCamera", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldManager, MapCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapCamera_MetaData), NewProp_MapCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldManager_Statics::NewProp_FullMapCamera = { "FullMapCamera", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldManager, FullMapCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FullMapCamera_MetaData), NewProp_FullMapCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldManager_Statics::NewProp_MapCameraActor = { "MapCameraActor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldManager, MapCameraActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapCameraActor_MetaData), NewProp_MapCameraActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldManager_Statics::NewProp_FullMapCameraActor = { "FullMapCameraActor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldManager, FullMapCameraActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FullMapCameraActor_MetaData), NewProp_FullMapCameraActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldManager_Statics::NewProp_CameraActors_Inner = { "CameraActors", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWorldManager_Statics::NewProp_CameraActors = { "CameraActors", nullptr, (EPropertyFlags)0x001000800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldManager, CameraActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraActors_MetaData), NewProp_CameraActors_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldManager_Statics::NewProp_MapCrowns_Inner = { "MapCrowns", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ASquareStar_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWorldManager_Statics::NewProp_MapCrowns = { "MapCrowns", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldManager, MapCrowns), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapCrowns_MetaData), NewProp_MapCrowns_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWorldManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldManager_Statics::NewProp_BoardActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldManager_Statics::NewProp_BoardActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldManager_Statics::NewProp_Minigame0Actors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldManager_Statics::NewProp_Minigame0Actors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldManager_Statics::NewProp_MinigameCameras_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldManager_Statics::NewProp_MinigameCameras,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldManager_Statics::NewProp_MapCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldManager_Statics::NewProp_FullMapCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldManager_Statics::NewProp_MapCameraActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldManager_Statics::NewProp_FullMapCameraActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldManager_Statics::NewProp_CameraActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldManager_Statics::NewProp_CameraActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldManager_Statics::NewProp_MapCrowns_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldManager_Statics::NewProp_MapCrowns,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWorldManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWorldManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_PartyJungle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWorldManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWorldManager_Statics::ClassParams = {
	&AWorldManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AWorldManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AWorldManager_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWorldManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AWorldManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWorldManager()
{
	if (!Z_Registration_Info_UClass_AWorldManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWorldManager.OuterSingleton, Z_Construct_UClass_AWorldManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWorldManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWorldManager);
AWorldManager::~AWorldManager() {}
// ********** End Class AWorldManager **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_World_WorldManager_h__Script_PartyJungle_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWorldManager, AWorldManager::StaticClass, TEXT("AWorldManager"), &Z_Registration_Info_UClass_AWorldManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWorldManager), 3571265479U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_World_WorldManager_h__Script_PartyJungle_1367921236(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_World_WorldManager_h__Script_PartyJungle_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_World_WorldManager_h__Script_PartyJungle_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
