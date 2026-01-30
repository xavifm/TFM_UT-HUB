// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/Minigame/Minigame2/VictimCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVictimCharacter() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AVictimCharacter();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AVictimCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AVictimCharacter Function BeginPlay **************************************
struct Z_Construct_UFunction_AVictimCharacter_BeginPlay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Minigame/Minigame2/VictimCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVictimCharacter_BeginPlay_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AVictimCharacter, nullptr, "BeginPlay", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVictimCharacter_BeginPlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVictimCharacter_BeginPlay_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AVictimCharacter_BeginPlay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVictimCharacter_BeginPlay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVictimCharacter::execBeginPlay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BeginPlay();
	P_NATIVE_END;
}
// ********** End Class AVictimCharacter Function BeginPlay ****************************************

// ********** Begin Class AVictimCharacter Function PossessMovement ********************************
struct Z_Construct_UFunction_AVictimCharacter_PossessMovement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Minigame/Minigame2/VictimCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVictimCharacter_PossessMovement_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AVictimCharacter, nullptr, "PossessMovement", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVictimCharacter_PossessMovement_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVictimCharacter_PossessMovement_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AVictimCharacter_PossessMovement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVictimCharacter_PossessMovement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVictimCharacter::execPossessMovement)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PossessMovement();
	P_NATIVE_END;
}
// ********** End Class AVictimCharacter Function PossessMovement **********************************

// ********** Begin Class AVictimCharacter Function ResetCharacterPosition *************************
struct Z_Construct_UFunction_AVictimCharacter_ResetCharacterPosition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Minigame/Minigame2/VictimCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVictimCharacter_ResetCharacterPosition_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AVictimCharacter, nullptr, "ResetCharacterPosition", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVictimCharacter_ResetCharacterPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVictimCharacter_ResetCharacterPosition_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AVictimCharacter_ResetCharacterPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVictimCharacter_ResetCharacterPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVictimCharacter::execResetCharacterPosition)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetCharacterPosition();
	P_NATIVE_END;
}
// ********** End Class AVictimCharacter Function ResetCharacterPosition ***************************

// ********** Begin Class AVictimCharacter *********************************************************
void AVictimCharacter::StaticRegisterNativesAVictimCharacter()
{
	UClass* Class = AVictimCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BeginPlay", &AVictimCharacter::execBeginPlay },
		{ "PossessMovement", &AVictimCharacter::execPossessMovement },
		{ "ResetCharacterPosition", &AVictimCharacter::execResetCharacterPosition },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AVictimCharacter;
UClass* AVictimCharacter::GetPrivateStaticClass()
{
	using TClass = AVictimCharacter;
	if (!Z_Registration_Info_UClass_AVictimCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VictimCharacter"),
			Z_Registration_Info_UClass_AVictimCharacter.InnerSingleton,
			StaticRegisterNativesAVictimCharacter,
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
	return Z_Registration_Info_UClass_AVictimCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_AVictimCharacter_NoRegister()
{
	return AVictimCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AVictimCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Minigame/Minigame2/VictimCharacter.h" },
		{ "ModuleRelativePath", "Minigame/Minigame2/VictimCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterTeam_MetaData[] = {
		{ "Category", "VictimCharacter" },
		{ "ModuleRelativePath", "Minigame/Minigame2/VictimCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinX_MetaData[] = {
		{ "Category", "VictimCharacter" },
		{ "ModuleRelativePath", "Minigame/Minigame2/VictimCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxX_MetaData[] = {
		{ "Category", "VictimCharacter" },
		{ "ModuleRelativePath", "Minigame/Minigame2/VictimCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterPhysics_MetaData[] = {
		{ "Category", "VictimCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Minigame/Minigame2/VictimCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Minigame/Minigame2/VictimCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[] = {
		{ "ModuleRelativePath", "Minigame/Minigame2/VictimCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyDirAction_MetaData[] = {
		{ "Category", "VictimCharacter" },
		{ "ModuleRelativePath", "Minigame/Minigame2/VictimCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CharacterTeam;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxX;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterPhysics;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_KeyDirAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AVictimCharacter_BeginPlay, "BeginPlay" }, // 3545300052
		{ &Z_Construct_UFunction_AVictimCharacter_PossessMovement, "PossessMovement" }, // 1955856938
		{ &Z_Construct_UFunction_AVictimCharacter_ResetCharacterPosition, "ResetCharacterPosition" }, // 4131908690
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVictimCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVictimCharacter_Statics::NewProp_CharacterTeam = { "CharacterTeam", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVictimCharacter, CharacterTeam), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterTeam_MetaData), NewProp_CharacterTeam_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVictimCharacter_Statics::NewProp_MinX = { "MinX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVictimCharacter, MinX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinX_MetaData), NewProp_MinX_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVictimCharacter_Statics::NewProp_MaxX = { "MaxX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVictimCharacter, MaxX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxX_MetaData), NewProp_MaxX_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVictimCharacter_Statics::NewProp_CharacterPhysics = { "CharacterPhysics", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVictimCharacter, CharacterPhysics), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterPhysics_MetaData), NewProp_CharacterPhysics_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVictimCharacter_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVictimCharacter, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMappingContext_MetaData), NewProp_InputMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVictimCharacter_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVictimCharacter, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerController_MetaData), NewProp_PlayerController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVictimCharacter_Statics::NewProp_KeyDirAction = { "KeyDirAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVictimCharacter, KeyDirAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyDirAction_MetaData), NewProp_KeyDirAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVictimCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVictimCharacter_Statics::NewProp_CharacterTeam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVictimCharacter_Statics::NewProp_MinX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVictimCharacter_Statics::NewProp_MaxX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVictimCharacter_Statics::NewProp_CharacterPhysics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVictimCharacter_Statics::NewProp_InputMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVictimCharacter_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVictimCharacter_Statics::NewProp_KeyDirAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVictimCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AVictimCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_PartyJungle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVictimCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AVictimCharacter_Statics::ClassParams = {
	&AVictimCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AVictimCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AVictimCharacter_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVictimCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AVictimCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AVictimCharacter()
{
	if (!Z_Registration_Info_UClass_AVictimCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVictimCharacter.OuterSingleton, Z_Construct_UClass_AVictimCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AVictimCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AVictimCharacter);
AVictimCharacter::~AVictimCharacter() {}
// ********** End Class AVictimCharacter ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_Minigame2_VictimCharacter_h__Script_PartyJungle_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AVictimCharacter, AVictimCharacter::StaticClass, TEXT("AVictimCharacter"), &Z_Registration_Info_UClass_AVictimCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVictimCharacter), 3056569106U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_Minigame2_VictimCharacter_h__Script_PartyJungle_3362152374(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_Minigame2_VictimCharacter_h__Script_PartyJungle_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_Minigame2_VictimCharacter_h__Script_PartyJungle_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
