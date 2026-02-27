// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/Minigame/Minigame3/Minigame3Logic.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMinigame3Logic() {}

// ********** Begin Cross Module References ********************************************************
PARTYJUNGLE_API UClass* Z_Construct_UClass_AMinigame3Logic();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AMinigame3Logic_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AMinigameLogic();
PARTYJUNGLE_API UClass* Z_Construct_UClass_APlayerPalette_NoRegister();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMinigame3Logic Function ResetBallPosition *******************************
static FName NAME_AMinigame3Logic_ResetBallPosition = FName(TEXT("ResetBallPosition"));
void AMinigame3Logic::ResetBallPosition()
{
	UFunction* Func = FindFunctionChecked(NAME_AMinigame3Logic_ResetBallPosition);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AMinigame3Logic_ResetBallPosition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Minigame/Minigame3/Minigame3Logic.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinigame3Logic_ResetBallPosition_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMinigame3Logic, nullptr, "ResetBallPosition", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigame3Logic_ResetBallPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinigame3Logic_ResetBallPosition_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AMinigame3Logic_ResetBallPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinigame3Logic_ResetBallPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AMinigame3Logic Function ResetBallPosition *********************************

// ********** Begin Class AMinigame3Logic Function ResetBallVelocity *******************************
static FName NAME_AMinigame3Logic_ResetBallVelocity = FName(TEXT("ResetBallVelocity"));
void AMinigame3Logic::ResetBallVelocity()
{
	UFunction* Func = FindFunctionChecked(NAME_AMinigame3Logic_ResetBallVelocity);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AMinigame3Logic_ResetBallVelocity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Minigame/Minigame3/Minigame3Logic.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinigame3Logic_ResetBallVelocity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMinigame3Logic, nullptr, "ResetBallVelocity", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigame3Logic_ResetBallVelocity_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinigame3Logic_ResetBallVelocity_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AMinigame3Logic_ResetBallVelocity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinigame3Logic_ResetBallVelocity_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AMinigame3Logic Function ResetBallVelocity *********************************

// ********** Begin Class AMinigame3Logic Function SumScore ****************************************
struct Z_Construct_UFunction_AMinigame3Logic_SumScore_Statics
{
	struct Minigame3Logic_eventSumScore_Parms
	{
		int32 _team;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Minigame/Minigame3/Minigame3Logic.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__team;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMinigame3Logic_SumScore_Statics::NewProp__team = { "_team", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Minigame3Logic_eventSumScore_Parms, _team), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMinigame3Logic_SumScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinigame3Logic_SumScore_Statics::NewProp__team,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigame3Logic_SumScore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinigame3Logic_SumScore_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMinigame3Logic, nullptr, "SumScore", Z_Construct_UFunction_AMinigame3Logic_SumScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigame3Logic_SumScore_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMinigame3Logic_SumScore_Statics::Minigame3Logic_eventSumScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigame3Logic_SumScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinigame3Logic_SumScore_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMinigame3Logic_SumScore_Statics::Minigame3Logic_eventSumScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMinigame3Logic_SumScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinigame3Logic_SumScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMinigame3Logic::execSumScore)
{
	P_GET_PROPERTY(FIntProperty,Z_Param__team);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SumScore(Z_Param__team);
	P_NATIVE_END;
}
// ********** End Class AMinigame3Logic Function SumScore ******************************************

// ********** Begin Class AMinigame3Logic Function SwitchBallMovement ******************************
struct Minigame3Logic_eventSwitchBallMovement_Parms
{
	bool _mode;
};
static FName NAME_AMinigame3Logic_SwitchBallMovement = FName(TEXT("SwitchBallMovement"));
void AMinigame3Logic::SwitchBallMovement(bool _mode)
{
	Minigame3Logic_eventSwitchBallMovement_Parms Parms;
	Parms._mode=_mode ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_AMinigame3Logic_SwitchBallMovement);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMinigame3Logic_SwitchBallMovement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Minigame/Minigame3/Minigame3Logic.h" },
	};
#endif // WITH_METADATA
	static void NewProp__mode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__mode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMinigame3Logic_SwitchBallMovement_Statics::NewProp__mode_SetBit(void* Obj)
{
	((Minigame3Logic_eventSwitchBallMovement_Parms*)Obj)->_mode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMinigame3Logic_SwitchBallMovement_Statics::NewProp__mode = { "_mode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Minigame3Logic_eventSwitchBallMovement_Parms), &Z_Construct_UFunction_AMinigame3Logic_SwitchBallMovement_Statics::NewProp__mode_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMinigame3Logic_SwitchBallMovement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinigame3Logic_SwitchBallMovement_Statics::NewProp__mode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigame3Logic_SwitchBallMovement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinigame3Logic_SwitchBallMovement_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMinigame3Logic, nullptr, "SwitchBallMovement", Z_Construct_UFunction_AMinigame3Logic_SwitchBallMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigame3Logic_SwitchBallMovement_Statics::PropPointers), sizeof(Minigame3Logic_eventSwitchBallMovement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigame3Logic_SwitchBallMovement_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinigame3Logic_SwitchBallMovement_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Minigame3Logic_eventSwitchBallMovement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMinigame3Logic_SwitchBallMovement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinigame3Logic_SwitchBallMovement_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AMinigame3Logic Function SwitchBallMovement ********************************

// ********** Begin Class AMinigame3Logic Function SwitchScore *************************************
struct Minigame3Logic_eventSwitchScore_Parms
{
	int32 _team;
	int32 _score;
};
static FName NAME_AMinigame3Logic_SwitchScore = FName(TEXT("SwitchScore"));
void AMinigame3Logic::SwitchScore(int32 _team, int32 _score)
{
	Minigame3Logic_eventSwitchScore_Parms Parms;
	Parms._team=_team;
	Parms._score=_score;
	UFunction* Func = FindFunctionChecked(NAME_AMinigame3Logic_SwitchScore);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMinigame3Logic_SwitchScore_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Minigame/Minigame3/Minigame3Logic.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__team;
	static const UECodeGen_Private::FIntPropertyParams NewProp__score;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMinigame3Logic_SwitchScore_Statics::NewProp__team = { "_team", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Minigame3Logic_eventSwitchScore_Parms, _team), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMinigame3Logic_SwitchScore_Statics::NewProp__score = { "_score", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Minigame3Logic_eventSwitchScore_Parms, _score), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMinigame3Logic_SwitchScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinigame3Logic_SwitchScore_Statics::NewProp__team,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinigame3Logic_SwitchScore_Statics::NewProp__score,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigame3Logic_SwitchScore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinigame3Logic_SwitchScore_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMinigame3Logic, nullptr, "SwitchScore", Z_Construct_UFunction_AMinigame3Logic_SwitchScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigame3Logic_SwitchScore_Statics::PropPointers), sizeof(Minigame3Logic_eventSwitchScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigame3Logic_SwitchScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinigame3Logic_SwitchScore_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Minigame3Logic_eventSwitchScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMinigame3Logic_SwitchScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinigame3Logic_SwitchScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AMinigame3Logic Function SwitchScore ***************************************

// ********** Begin Class AMinigame3Logic **********************************************************
void AMinigame3Logic::StaticRegisterNativesAMinigame3Logic()
{
	UClass* Class = AMinigame3Logic::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SumScore", &AMinigame3Logic::execSumScore },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMinigame3Logic;
UClass* AMinigame3Logic::GetPrivateStaticClass()
{
	using TClass = AMinigame3Logic;
	if (!Z_Registration_Info_UClass_AMinigame3Logic.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Minigame3Logic"),
			Z_Registration_Info_UClass_AMinigame3Logic.InnerSingleton,
			StaticRegisterNativesAMinigame3Logic,
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
	return Z_Registration_Info_UClass_AMinigame3Logic.InnerSingleton;
}
UClass* Z_Construct_UClass_AMinigame3Logic_NoRegister()
{
	return AMinigame3Logic::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMinigame3Logic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Minigame/Minigame3/Minigame3Logic.h" },
		{ "ModuleRelativePath", "Minigame/Minigame3/Minigame3Logic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeamOne_MetaData[] = {
		{ "Category", "Minigame3Logic" },
		{ "ModuleRelativePath", "Minigame/Minigame3/Minigame3Logic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeamTwo_MetaData[] = {
		{ "Category", "Minigame3Logic" },
		{ "ModuleRelativePath", "Minigame/Minigame3/Minigame3Logic.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TeamOne_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TeamOne;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TeamTwo_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TeamTwo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMinigame3Logic_ResetBallPosition, "ResetBallPosition" }, // 4188708489
		{ &Z_Construct_UFunction_AMinigame3Logic_ResetBallVelocity, "ResetBallVelocity" }, // 2101559818
		{ &Z_Construct_UFunction_AMinigame3Logic_SumScore, "SumScore" }, // 801434434
		{ &Z_Construct_UFunction_AMinigame3Logic_SwitchBallMovement, "SwitchBallMovement" }, // 3085979912
		{ &Z_Construct_UFunction_AMinigame3Logic_SwitchScore, "SwitchScore" }, // 2393385358
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMinigame3Logic>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMinigame3Logic_Statics::NewProp_TeamOne_Inner = { "TeamOne", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_APlayerPalette_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMinigame3Logic_Statics::NewProp_TeamOne = { "TeamOne", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinigame3Logic, TeamOne), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeamOne_MetaData), NewProp_TeamOne_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMinigame3Logic_Statics::NewProp_TeamTwo_Inner = { "TeamTwo", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_APlayerPalette_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMinigame3Logic_Statics::NewProp_TeamTwo = { "TeamTwo", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinigame3Logic, TeamTwo), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeamTwo_MetaData), NewProp_TeamTwo_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMinigame3Logic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigame3Logic_Statics::NewProp_TeamOne_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigame3Logic_Statics::NewProp_TeamOne,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigame3Logic_Statics::NewProp_TeamTwo_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigame3Logic_Statics::NewProp_TeamTwo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMinigame3Logic_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMinigame3Logic_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AMinigameLogic,
	(UObject* (*)())Z_Construct_UPackage__Script_PartyJungle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMinigame3Logic_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMinigame3Logic_Statics::ClassParams = {
	&AMinigame3Logic::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMinigame3Logic_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMinigame3Logic_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMinigame3Logic_Statics::Class_MetaDataParams), Z_Construct_UClass_AMinigame3Logic_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMinigame3Logic()
{
	if (!Z_Registration_Info_UClass_AMinigame3Logic.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMinigame3Logic.OuterSingleton, Z_Construct_UClass_AMinigame3Logic_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMinigame3Logic.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMinigame3Logic);
AMinigame3Logic::~AMinigame3Logic() {}
// ********** End Class AMinigame3Logic ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_Minigame3_Minigame3Logic_h__Script_PartyJungle_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMinigame3Logic, AMinigame3Logic::StaticClass, TEXT("AMinigame3Logic"), &Z_Registration_Info_UClass_AMinigame3Logic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMinigame3Logic), 269186219U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_Minigame3_Minigame3Logic_h__Script_PartyJungle_3461175059(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_Minigame3_Minigame3Logic_h__Script_PartyJungle_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_Minigame3_Minigame3Logic_h__Script_PartyJungle_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
