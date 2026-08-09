// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/Minigame/Minigame3/PlayerPalette.h"
#include "InputActionValue.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePlayerPalette() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
PARTYJUNGLE_API UClass* Z_Construct_UClass_APlayerPalette();
PARTYJUNGLE_API UClass* Z_Construct_UClass_APlayerPalette_NoRegister();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// ********** End Cross Module References **********************************************************

// ********** Begin Class APlayerPalette Function MovePallette *************************************
struct Z_Construct_UFunction_APlayerPalette_MovePallette_Statics
{
	struct PlayerPalette_eventMovePallette_Parms
	{
		FInputActionValue _value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Minigame/Minigame3/PlayerPalette.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp__value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerPalette_MovePallette_Statics::NewProp__value = { "_value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerPalette_eventMovePallette_Parms, _value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__value_MetaData), NewProp__value_MetaData) }; // 203218767
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerPalette_MovePallette_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerPalette_MovePallette_Statics::NewProp__value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerPalette_MovePallette_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerPalette_MovePallette_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayerPalette, nullptr, "MovePallette", Z_Construct_UFunction_APlayerPalette_MovePallette_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerPalette_MovePallette_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerPalette_MovePallette_Statics::PlayerPalette_eventMovePallette_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerPalette_MovePallette_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerPalette_MovePallette_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APlayerPalette_MovePallette_Statics::PlayerPalette_eventMovePallette_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerPalette_MovePallette()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerPalette_MovePallette_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerPalette::execMovePallette)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out__value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MovePallette(Z_Param_Out__value);
	P_NATIVE_END;
}
// ********** End Class APlayerPalette Function MovePallette ***************************************

// ********** Begin Class APlayerPalette Function PossessMovement **********************************
struct Z_Construct_UFunction_APlayerPalette_PossessMovement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Minigame/Minigame3/PlayerPalette.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerPalette_PossessMovement_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayerPalette, nullptr, "PossessMovement", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerPalette_PossessMovement_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerPalette_PossessMovement_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_APlayerPalette_PossessMovement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerPalette_PossessMovement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerPalette::execPossessMovement)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PossessMovement();
	P_NATIVE_END;
}
// ********** End Class APlayerPalette Function PossessMovement ************************************

// ********** Begin Class APlayerPalette ***********************************************************
void APlayerPalette::StaticRegisterNativesAPlayerPalette()
{
	UClass* Class = APlayerPalette::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "MovePallette", &APlayerPalette::execMovePallette },
		{ "PossessMovement", &APlayerPalette::execPossessMovement },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_APlayerPalette;
UClass* APlayerPalette::GetPrivateStaticClass()
{
	using TClass = APlayerPalette;
	if (!Z_Registration_Info_UClass_APlayerPalette.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PlayerPalette"),
			Z_Registration_Info_UClass_APlayerPalette.InnerSingleton,
			StaticRegisterNativesAPlayerPalette,
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
	return Z_Registration_Info_UClass_APlayerPalette.InnerSingleton;
}
UClass* Z_Construct_UClass_APlayerPalette_NoRegister()
{
	return APlayerPalette::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APlayerPalette_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Minigame/Minigame3/PlayerPalette.h" },
		{ "ModuleRelativePath", "Minigame/Minigame3/PlayerPalette.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterTeam_MetaData[] = {
		{ "Category", "PlayerPalette" },
		{ "ModuleRelativePath", "Minigame/Minigame3/PlayerPalette.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Minigame/Minigame3/PlayerPalette.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[] = {
		{ "ModuleRelativePath", "Minigame/Minigame3/PlayerPalette.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterPhysics_MetaData[] = {
		{ "Category", "PlayerPalette" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Minigame/Minigame3/PlayerPalette.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyDirAction_MetaData[] = {
		{ "Category", "PlayerPalette" },
		{ "ModuleRelativePath", "Minigame/Minigame3/PlayerPalette.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinZ_MetaData[] = {
		{ "Category", "PlayerPalette" },
		{ "ModuleRelativePath", "Minigame/Minigame3/PlayerPalette.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxZ_MetaData[] = {
		{ "Category", "PlayerPalette" },
		{ "ModuleRelativePath", "Minigame/Minigame3/PlayerPalette.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CharacterTeam;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterPhysics;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_KeyDirAction;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinZ;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxZ;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayerPalette_MovePallette, "MovePallette" }, // 4002779766
		{ &Z_Construct_UFunction_APlayerPalette_PossessMovement, "PossessMovement" }, // 1408639444
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerPalette>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APlayerPalette_Statics::NewProp_CharacterTeam = { "CharacterTeam", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerPalette, CharacterTeam), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterTeam_MetaData), NewProp_CharacterTeam_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerPalette_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerPalette, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMappingContext_MetaData), NewProp_InputMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerPalette_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerPalette, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerController_MetaData), NewProp_PlayerController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerPalette_Statics::NewProp_CharacterPhysics = { "CharacterPhysics", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerPalette, CharacterPhysics), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterPhysics_MetaData), NewProp_CharacterPhysics_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerPalette_Statics::NewProp_KeyDirAction = { "KeyDirAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerPalette, KeyDirAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyDirAction_MetaData), NewProp_KeyDirAction_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APlayerPalette_Statics::NewProp_MinZ = { "MinZ", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerPalette, MinZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinZ_MetaData), NewProp_MinZ_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APlayerPalette_Statics::NewProp_MaxZ = { "MaxZ", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerPalette, MaxZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxZ_MetaData), NewProp_MaxZ_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerPalette_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerPalette_Statics::NewProp_CharacterTeam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerPalette_Statics::NewProp_InputMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerPalette_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerPalette_Statics::NewProp_CharacterPhysics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerPalette_Statics::NewProp_KeyDirAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerPalette_Statics::NewProp_MinZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerPalette_Statics::NewProp_MaxZ,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerPalette_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APlayerPalette_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_PartyJungle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerPalette_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerPalette_Statics::ClassParams = {
	&APlayerPalette::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APlayerPalette_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APlayerPalette_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerPalette_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayerPalette_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APlayerPalette()
{
	if (!Z_Registration_Info_UClass_APlayerPalette.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerPalette.OuterSingleton, Z_Construct_UClass_APlayerPalette_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlayerPalette.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerPalette);
APlayerPalette::~APlayerPalette() {}
// ********** End Class APlayerPalette *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_Minigame3_PlayerPalette_h__Script_PartyJungle_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlayerPalette, APlayerPalette::StaticClass, TEXT("APlayerPalette"), &Z_Registration_Info_UClass_APlayerPalette, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerPalette), 826508996U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_Minigame3_PlayerPalette_h__Script_PartyJungle_1069748465(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_Minigame3_PlayerPalette_h__Script_PartyJungle_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_Minigame3_PlayerPalette_h__Script_PartyJungle_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
