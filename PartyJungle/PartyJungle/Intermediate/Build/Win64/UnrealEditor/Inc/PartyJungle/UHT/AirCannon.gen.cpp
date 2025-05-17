// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/Minigame/Minigame1/AirCannon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAirCannon() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AAirCannon();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AAirCannon_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AAudioManager_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AMinigameLogic_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AMinion_NoRegister();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// End Cross Module References

// Begin Class AAirCannon Function CalculateCurrentPushStrength
struct Z_Construct_UFunction_AAirCannon_CalculateCurrentPushStrength_Statics
{
	struct AirCannon_eventCalculateCurrentPushStrength_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Minigame/Minigame1/AirCannon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAirCannon_CalculateCurrentPushStrength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AirCannon_eventCalculateCurrentPushStrength_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAirCannon_CalculateCurrentPushStrength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAirCannon_CalculateCurrentPushStrength_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAirCannon_CalculateCurrentPushStrength_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAirCannon_CalculateCurrentPushStrength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAirCannon, nullptr, "CalculateCurrentPushStrength", nullptr, nullptr, Z_Construct_UFunction_AAirCannon_CalculateCurrentPushStrength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAirCannon_CalculateCurrentPushStrength_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAirCannon_CalculateCurrentPushStrength_Statics::AirCannon_eventCalculateCurrentPushStrength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAirCannon_CalculateCurrentPushStrength_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAirCannon_CalculateCurrentPushStrength_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAirCannon_CalculateCurrentPushStrength_Statics::AirCannon_eventCalculateCurrentPushStrength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAirCannon_CalculateCurrentPushStrength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAirCannon_CalculateCurrentPushStrength_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAirCannon::execCalculateCurrentPushStrength)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->CalculateCurrentPushStrength();
	P_NATIVE_END;
}
// End Class AAirCannon Function CalculateCurrentPushStrength

// Begin Class AAirCannon Function FinishCannonCharge
struct Z_Construct_UFunction_AAirCannon_FinishCannonCharge_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Minigame/Minigame1/AirCannon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAirCannon_FinishCannonCharge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAirCannon, nullptr, "FinishCannonCharge", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAirCannon_FinishCannonCharge_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAirCannon_FinishCannonCharge_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AAirCannon_FinishCannonCharge()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAirCannon_FinishCannonCharge_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAirCannon::execFinishCannonCharge)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FinishCannonCharge();
	P_NATIVE_END;
}
// End Class AAirCannon Function FinishCannonCharge

// Begin Class AAirCannon Function IncrementUpForce
struct Z_Construct_UFunction_AAirCannon_IncrementUpForce_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Minigame/Minigame1/AirCannon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAirCannon_IncrementUpForce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAirCannon, nullptr, "IncrementUpForce", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAirCannon_IncrementUpForce_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAirCannon_IncrementUpForce_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AAirCannon_IncrementUpForce()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAirCannon_IncrementUpForce_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAirCannon::execIncrementUpForce)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->IncrementUpForce();
	P_NATIVE_END;
}
// End Class AAirCannon Function IncrementUpForce

// Begin Class AAirCannon Function ResetProjectilePosition
struct Z_Construct_UFunction_AAirCannon_ResetProjectilePosition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Minigame/Minigame1/AirCannon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAirCannon_ResetProjectilePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAirCannon, nullptr, "ResetProjectilePosition", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAirCannon_ResetProjectilePosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAirCannon_ResetProjectilePosition_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AAirCannon_ResetProjectilePosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAirCannon_ResetProjectilePosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAirCannon::execResetProjectilePosition)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetProjectilePosition();
	P_NATIVE_END;
}
// End Class AAirCannon Function ResetProjectilePosition

// Begin Class AAirCannon Function SetForceBarStrength
struct AirCannon_eventSetForceBarStrength_Parms
{
	float _force;
};
static FName NAME_AAirCannon_SetForceBarStrength = FName(TEXT("SetForceBarStrength"));
void AAirCannon::SetForceBarStrength(float _force)
{
	AirCannon_eventSetForceBarStrength_Parms Parms;
	Parms._force=_force;
	ProcessEvent(FindFunctionChecked(NAME_AAirCannon_SetForceBarStrength),&Parms);
}
struct Z_Construct_UFunction_AAirCannon_SetForceBarStrength_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Minigame/Minigame1/AirCannon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp__force;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAirCannon_SetForceBarStrength_Statics::NewProp__force = { "_force", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AirCannon_eventSetForceBarStrength_Parms, _force), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAirCannon_SetForceBarStrength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAirCannon_SetForceBarStrength_Statics::NewProp__force,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAirCannon_SetForceBarStrength_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAirCannon_SetForceBarStrength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAirCannon, nullptr, "SetForceBarStrength", nullptr, nullptr, Z_Construct_UFunction_AAirCannon_SetForceBarStrength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAirCannon_SetForceBarStrength_Statics::PropPointers), sizeof(AirCannon_eventSetForceBarStrength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAirCannon_SetForceBarStrength_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAirCannon_SetForceBarStrength_Statics::Function_MetaDataParams) };
static_assert(sizeof(AirCannon_eventSetForceBarStrength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAirCannon_SetForceBarStrength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAirCannon_SetForceBarStrength_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AAirCannon Function SetForceBarStrength

// Begin Class AAirCannon Function SetTickleStrengthCannon
struct AirCannon_eventSetTickleStrengthCannon_Parms
{
	float _force;
};
static FName NAME_AAirCannon_SetTickleStrengthCannon = FName(TEXT("SetTickleStrengthCannon"));
void AAirCannon::SetTickleStrengthCannon(float _force)
{
	AirCannon_eventSetTickleStrengthCannon_Parms Parms;
	Parms._force=_force;
	ProcessEvent(FindFunctionChecked(NAME_AAirCannon_SetTickleStrengthCannon),&Parms);
}
struct Z_Construct_UFunction_AAirCannon_SetTickleStrengthCannon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Minigame/Minigame1/AirCannon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp__force;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAirCannon_SetTickleStrengthCannon_Statics::NewProp__force = { "_force", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AirCannon_eventSetTickleStrengthCannon_Parms, _force), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAirCannon_SetTickleStrengthCannon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAirCannon_SetTickleStrengthCannon_Statics::NewProp__force,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAirCannon_SetTickleStrengthCannon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAirCannon_SetTickleStrengthCannon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAirCannon, nullptr, "SetTickleStrengthCannon", nullptr, nullptr, Z_Construct_UFunction_AAirCannon_SetTickleStrengthCannon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAirCannon_SetTickleStrengthCannon_Statics::PropPointers), sizeof(AirCannon_eventSetTickleStrengthCannon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAirCannon_SetTickleStrengthCannon_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAirCannon_SetTickleStrengthCannon_Statics::Function_MetaDataParams) };
static_assert(sizeof(AirCannon_eventSetTickleStrengthCannon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAirCannon_SetTickleStrengthCannon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAirCannon_SetTickleStrengthCannon_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AAirCannon Function SetTickleStrengthCannon

// Begin Class AAirCannon Function ShootCannon
struct Z_Construct_UFunction_AAirCannon_ShootCannon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Minigame/Minigame1/AirCannon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAirCannon_ShootCannon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAirCannon, nullptr, "ShootCannon", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAirCannon_ShootCannon_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAirCannon_ShootCannon_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AAirCannon_ShootCannon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAirCannon_ShootCannon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAirCannon::execShootCannon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShootCannon();
	P_NATIVE_END;
}
// End Class AAirCannon Function ShootCannon

// Begin Class AAirCannon Function StartCannonCharge
struct Z_Construct_UFunction_AAirCannon_StartCannonCharge_Statics
{
	struct AirCannon_eventStartCannonCharge_Parms
	{
		float _time;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Minigame/Minigame1/AirCannon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp__time;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAirCannon_StartCannonCharge_Statics::NewProp__time = { "_time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AirCannon_eventStartCannonCharge_Parms, _time), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAirCannon_StartCannonCharge_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAirCannon_StartCannonCharge_Statics::NewProp__time,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAirCannon_StartCannonCharge_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAirCannon_StartCannonCharge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAirCannon, nullptr, "StartCannonCharge", nullptr, nullptr, Z_Construct_UFunction_AAirCannon_StartCannonCharge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAirCannon_StartCannonCharge_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAirCannon_StartCannonCharge_Statics::AirCannon_eventStartCannonCharge_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAirCannon_StartCannonCharge_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAirCannon_StartCannonCharge_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAirCannon_StartCannonCharge_Statics::AirCannon_eventStartCannonCharge_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAirCannon_StartCannonCharge()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAirCannon_StartCannonCharge_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAirCannon::execStartCannonCharge)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param__time);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartCannonCharge(Z_Param__time);
	P_NATIVE_END;
}
// End Class AAirCannon Function StartCannonCharge

// Begin Class AAirCannon
void AAirCannon::StaticRegisterNativesAAirCannon()
{
	UClass* Class = AAirCannon::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CalculateCurrentPushStrength", &AAirCannon::execCalculateCurrentPushStrength },
		{ "FinishCannonCharge", &AAirCannon::execFinishCannonCharge },
		{ "IncrementUpForce", &AAirCannon::execIncrementUpForce },
		{ "ResetProjectilePosition", &AAirCannon::execResetProjectilePosition },
		{ "ShootCannon", &AAirCannon::execShootCannon },
		{ "StartCannonCharge", &AAirCannon::execStartCannonCharge },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAirCannon);
UClass* Z_Construct_UClass_AAirCannon_NoRegister()
{
	return AAirCannon::StaticClass();
}
struct Z_Construct_UClass_AAirCannon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Minigame/Minigame1/AirCannon.h" },
		{ "ModuleRelativePath", "Minigame/Minigame1/AirCannon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CannonTeam_MetaData[] = {
		{ "ModuleRelativePath", "Minigame/Minigame1/AirCannon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinionReference_MetaData[] = {
		{ "ModuleRelativePath", "Minigame/Minigame1/AirCannon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinigameLogic_MetaData[] = {
		{ "ModuleRelativePath", "Minigame/Minigame1/AirCannon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioManager_MetaData[] = {
		{ "Category", "AirCannon" },
		{ "ModuleRelativePath", "Minigame/Minigame1/AirCannon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[] = {
		{ "ModuleRelativePath", "Minigame/Minigame1/AirCannon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileReference_MetaData[] = {
		{ "Category", "AirCannon" },
		{ "ModuleRelativePath", "Minigame/Minigame1/AirCannon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectilePhysics_MetaData[] = {
		{ "Category", "AirCannon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Minigame/Minigame1/AirCannon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Minigame/Minigame1/AirCannon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyaAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Minigame/Minigame1/AirCannon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CannonFinished_MetaData[] = {
		{ "ModuleRelativePath", "Minigame/Minigame1/AirCannon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CannonCharging_MetaData[] = {
		{ "ModuleRelativePath", "Minigame/Minigame1/AirCannon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpForce_MetaData[] = {
		{ "ModuleRelativePath", "Minigame/Minigame1/AirCannon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PushTimestamps_MetaData[] = {
		{ "ModuleRelativePath", "Minigame/Minigame1/AirCannon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CannonTeam;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MinionReference;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MinigameLogic;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileReference;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectilePhysics;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_KeyaAction;
	static void NewProp_CannonFinished_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CannonFinished;
	static void NewProp_CannonCharging_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CannonCharging;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UpForce;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PushTimestamps_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PushTimestamps;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAirCannon_CalculateCurrentPushStrength, "CalculateCurrentPushStrength" }, // 4050000169
		{ &Z_Construct_UFunction_AAirCannon_FinishCannonCharge, "FinishCannonCharge" }, // 209865113
		{ &Z_Construct_UFunction_AAirCannon_IncrementUpForce, "IncrementUpForce" }, // 960392935
		{ &Z_Construct_UFunction_AAirCannon_ResetProjectilePosition, "ResetProjectilePosition" }, // 1534674162
		{ &Z_Construct_UFunction_AAirCannon_SetForceBarStrength, "SetForceBarStrength" }, // 2679235018
		{ &Z_Construct_UFunction_AAirCannon_SetTickleStrengthCannon, "SetTickleStrengthCannon" }, // 1216262549
		{ &Z_Construct_UFunction_AAirCannon_ShootCannon, "ShootCannon" }, // 2884160260
		{ &Z_Construct_UFunction_AAirCannon_StartCannonCharge, "StartCannonCharge" }, // 4131551427
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAirCannon>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAirCannon_Statics::NewProp_CannonTeam = { "CannonTeam", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAirCannon, CannonTeam), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CannonTeam_MetaData), NewProp_CannonTeam_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAirCannon_Statics::NewProp_MinionReference = { "MinionReference", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAirCannon, MinionReference), Z_Construct_UClass_AMinion_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinionReference_MetaData), NewProp_MinionReference_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAirCannon_Statics::NewProp_MinigameLogic = { "MinigameLogic", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAirCannon, MinigameLogic), Z_Construct_UClass_AMinigameLogic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinigameLogic_MetaData), NewProp_MinigameLogic_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAirCannon_Statics::NewProp_AudioManager = { "AudioManager", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAirCannon, AudioManager), Z_Construct_UClass_AAudioManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioManager_MetaData), NewProp_AudioManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAirCannon_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAirCannon, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerController_MetaData), NewProp_PlayerController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAirCannon_Statics::NewProp_ProjectileReference = { "ProjectileReference", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAirCannon, ProjectileReference), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileReference_MetaData), NewProp_ProjectileReference_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAirCannon_Statics::NewProp_ProjectilePhysics = { "ProjectilePhysics", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAirCannon, ProjectilePhysics), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectilePhysics_MetaData), NewProp_ProjectilePhysics_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAirCannon_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAirCannon, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMappingContext_MetaData), NewProp_InputMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAirCannon_Statics::NewProp_KeyaAction = { "KeyaAction", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAirCannon, KeyaAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyaAction_MetaData), NewProp_KeyaAction_MetaData) };
void Z_Construct_UClass_AAirCannon_Statics::NewProp_CannonFinished_SetBit(void* Obj)
{
	((AAirCannon*)Obj)->CannonFinished = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAirCannon_Statics::NewProp_CannonFinished = { "CannonFinished", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAirCannon), &Z_Construct_UClass_AAirCannon_Statics::NewProp_CannonFinished_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CannonFinished_MetaData), NewProp_CannonFinished_MetaData) };
void Z_Construct_UClass_AAirCannon_Statics::NewProp_CannonCharging_SetBit(void* Obj)
{
	((AAirCannon*)Obj)->CannonCharging = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAirCannon_Statics::NewProp_CannonCharging = { "CannonCharging", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAirCannon), &Z_Construct_UClass_AAirCannon_Statics::NewProp_CannonCharging_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CannonCharging_MetaData), NewProp_CannonCharging_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAirCannon_Statics::NewProp_UpForce = { "UpForce", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAirCannon, UpForce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpForce_MetaData), NewProp_UpForce_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAirCannon_Statics::NewProp_PushTimestamps_Inner = { "PushTimestamps", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAirCannon_Statics::NewProp_PushTimestamps = { "PushTimestamps", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAirCannon, PushTimestamps), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PushTimestamps_MetaData), NewProp_PushTimestamps_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAirCannon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAirCannon_Statics::NewProp_CannonTeam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAirCannon_Statics::NewProp_MinionReference,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAirCannon_Statics::NewProp_MinigameLogic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAirCannon_Statics::NewProp_AudioManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAirCannon_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAirCannon_Statics::NewProp_ProjectileReference,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAirCannon_Statics::NewProp_ProjectilePhysics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAirCannon_Statics::NewProp_InputMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAirCannon_Statics::NewProp_KeyaAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAirCannon_Statics::NewProp_CannonFinished,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAirCannon_Statics::NewProp_CannonCharging,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAirCannon_Statics::NewProp_UpForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAirCannon_Statics::NewProp_PushTimestamps_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAirCannon_Statics::NewProp_PushTimestamps,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAirCannon_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAirCannon_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_PartyJungle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAirCannon_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAirCannon_Statics::ClassParams = {
	&AAirCannon::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AAirCannon_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AAirCannon_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAirCannon_Statics::Class_MetaDataParams), Z_Construct_UClass_AAirCannon_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAirCannon()
{
	if (!Z_Registration_Info_UClass_AAirCannon.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAirCannon.OuterSingleton, Z_Construct_UClass_AAirCannon_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAirCannon.OuterSingleton;
}
template<> PARTYJUNGLE_API UClass* StaticClass<AAirCannon>()
{
	return AAirCannon::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAirCannon);
AAirCannon::~AAirCannon() {}
// End Class AAirCannon

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_Minigame1_AirCannon_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAirCannon, AAirCannon::StaticClass, TEXT("AAirCannon"), &Z_Registration_Info_UClass_AAirCannon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAirCannon), 4222360050U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_Minigame1_AirCannon_h_3573136729(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_Minigame1_AirCannon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_xavi_Documents_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_Minigame1_AirCannon_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
