// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/Minigame/Minigame2/CocoCannon.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCocoCannon() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_ACocoCannon();
PARTYJUNGLE_API UClass* Z_Construct_UClass_ACocoCannon_NoRegister();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACocoCannon Function PossessMovement *************************************
struct Z_Construct_UFunction_ACocoCannon_PossessMovement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Minigame/Minigame2/CocoCannon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACocoCannon_PossessMovement_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACocoCannon, nullptr, "PossessMovement", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACocoCannon_PossessMovement_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACocoCannon_PossessMovement_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACocoCannon_PossessMovement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACocoCannon_PossessMovement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACocoCannon::execPossessMovement)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PossessMovement();
	P_NATIVE_END;
}
// ********** End Class ACocoCannon Function PossessMovement ***************************************

// ********** Begin Class ACocoCannon Function ShootCannon *****************************************
struct Z_Construct_UFunction_ACocoCannon_ShootCannon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Minigame/Minigame2/CocoCannon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACocoCannon_ShootCannon_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACocoCannon, nullptr, "ShootCannon", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACocoCannon_ShootCannon_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACocoCannon_ShootCannon_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACocoCannon_ShootCannon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACocoCannon_ShootCannon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACocoCannon::execShootCannon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShootCannon();
	P_NATIVE_END;
}
// ********** End Class ACocoCannon Function ShootCannon *******************************************

// ********** Begin Class ACocoCannon **************************************************************
void ACocoCannon::StaticRegisterNativesACocoCannon()
{
	UClass* Class = ACocoCannon::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "PossessMovement", &ACocoCannon::execPossessMovement },
		{ "ShootCannon", &ACocoCannon::execShootCannon },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACocoCannon;
UClass* ACocoCannon::GetPrivateStaticClass()
{
	using TClass = ACocoCannon;
	if (!Z_Registration_Info_UClass_ACocoCannon.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CocoCannon"),
			Z_Registration_Info_UClass_ACocoCannon.InnerSingleton,
			StaticRegisterNativesACocoCannon,
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
	return Z_Registration_Info_UClass_ACocoCannon.InnerSingleton;
}
UClass* Z_Construct_UClass_ACocoCannon_NoRegister()
{
	return ACocoCannon::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACocoCannon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Minigame/Minigame2/CocoCannon.h" },
		{ "ModuleRelativePath", "Minigame/Minigame2/CocoCannon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterTeam_MetaData[] = {
		{ "Category", "CocoCannon" },
		{ "ModuleRelativePath", "Minigame/Minigame2/CocoCannon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileReference_MetaData[] = {
		{ "Category", "CocoCannon" },
		{ "ModuleRelativePath", "Minigame/Minigame2/CocoCannon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[] = {
		{ "ModuleRelativePath", "Minigame/Minigame2/CocoCannon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyaAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Minigame/Minigame2/CocoCannon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MetronomeEnabled_MetaData[] = {
		{ "Category", "Metronome" },
		{ "ModuleRelativePath", "Minigame/Minigame2/CocoCannon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxYawDegrees_MetaData[] = {
		{ "Category", "Metronome" },
		{ "ModuleRelativePath", "Minigame/Minigame2/CocoCannon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BPM_MetaData[] = {
		{ "Category", "Metronome" },
		{ "ModuleRelativePath", "Minigame/Minigame2/CocoCannon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CannonMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Minigame/Minigame2/CocoCannon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShootPivot_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Minigame/Minigame2/CocoCannon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CharacterTeam;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileReference;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_KeyaAction;
	static void NewProp_MetronomeEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_MetronomeEnabled;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxYawDegrees;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BPM;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CannonMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ShootPivot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACocoCannon_PossessMovement, "PossessMovement" }, // 2118547952
		{ &Z_Construct_UFunction_ACocoCannon_ShootCannon, "ShootCannon" }, // 71609905
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACocoCannon>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACocoCannon_Statics::NewProp_CharacterTeam = { "CharacterTeam", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACocoCannon, CharacterTeam), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterTeam_MetaData), NewProp_CharacterTeam_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACocoCannon_Statics::NewProp_ProjectileReference = { "ProjectileReference", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACocoCannon, ProjectileReference), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileReference_MetaData), NewProp_ProjectileReference_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACocoCannon_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACocoCannon, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerController_MetaData), NewProp_PlayerController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACocoCannon_Statics::NewProp_KeyaAction = { "KeyaAction", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACocoCannon, KeyaAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyaAction_MetaData), NewProp_KeyaAction_MetaData) };
void Z_Construct_UClass_ACocoCannon_Statics::NewProp_MetronomeEnabled_SetBit(void* Obj)
{
	((ACocoCannon*)Obj)->MetronomeEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACocoCannon_Statics::NewProp_MetronomeEnabled = { "MetronomeEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACocoCannon), &Z_Construct_UClass_ACocoCannon_Statics::NewProp_MetronomeEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MetronomeEnabled_MetaData), NewProp_MetronomeEnabled_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACocoCannon_Statics::NewProp_MaxYawDegrees = { "MaxYawDegrees", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACocoCannon, MaxYawDegrees), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxYawDegrees_MetaData), NewProp_MaxYawDegrees_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACocoCannon_Statics::NewProp_BPM = { "BPM", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACocoCannon, BPM), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BPM_MetaData), NewProp_BPM_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACocoCannon_Statics::NewProp_CannonMesh = { "CannonMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACocoCannon, CannonMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CannonMesh_MetaData), NewProp_CannonMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACocoCannon_Statics::NewProp_ShootPivot = { "ShootPivot", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACocoCannon, ShootPivot), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShootPivot_MetaData), NewProp_ShootPivot_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACocoCannon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACocoCannon_Statics::NewProp_CharacterTeam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACocoCannon_Statics::NewProp_ProjectileReference,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACocoCannon_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACocoCannon_Statics::NewProp_KeyaAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACocoCannon_Statics::NewProp_MetronomeEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACocoCannon_Statics::NewProp_MaxYawDegrees,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACocoCannon_Statics::NewProp_BPM,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACocoCannon_Statics::NewProp_CannonMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACocoCannon_Statics::NewProp_ShootPivot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACocoCannon_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACocoCannon_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_PartyJungle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACocoCannon_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACocoCannon_Statics::ClassParams = {
	&ACocoCannon::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACocoCannon_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACocoCannon_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACocoCannon_Statics::Class_MetaDataParams), Z_Construct_UClass_ACocoCannon_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACocoCannon()
{
	if (!Z_Registration_Info_UClass_ACocoCannon.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACocoCannon.OuterSingleton, Z_Construct_UClass_ACocoCannon_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACocoCannon.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACocoCannon);
ACocoCannon::~ACocoCannon() {}
// ********** End Class ACocoCannon ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_Minigame2_CocoCannon_h__Script_PartyJungle_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACocoCannon, ACocoCannon::StaticClass, TEXT("ACocoCannon"), &Z_Registration_Info_UClass_ACocoCannon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACocoCannon), 1834324621U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_Minigame2_CocoCannon_h__Script_PartyJungle_3082088498(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_Minigame2_CocoCannon_h__Script_PartyJungle_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_Minigame2_CocoCannon_h__Script_PartyJungle_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
