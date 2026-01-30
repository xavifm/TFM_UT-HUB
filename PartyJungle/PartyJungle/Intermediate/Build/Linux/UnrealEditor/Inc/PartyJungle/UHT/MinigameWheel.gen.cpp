// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/UIManager/MInigames/MinigameWheel.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMinigameWheel() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AMinigameWheel();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AMinigameWheel_NoRegister();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMinigameWheel Function SwitchUiVisibility *******************************
struct MinigameWheel_eventSwitchUiVisibility_Parms
{
	bool _visibility;
};
static FName NAME_AMinigameWheel_SwitchUiVisibility = FName(TEXT("SwitchUiVisibility"));
void AMinigameWheel::SwitchUiVisibility(bool _visibility)
{
	MinigameWheel_eventSwitchUiVisibility_Parms Parms;
	Parms._visibility=_visibility ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_AMinigameWheel_SwitchUiVisibility);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMinigameWheel_SwitchUiVisibility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "UIManager/MInigames/MinigameWheel.h" },
	};
#endif // WITH_METADATA
	static void NewProp__visibility_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__visibility;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMinigameWheel_SwitchUiVisibility_Statics::NewProp__visibility_SetBit(void* Obj)
{
	((MinigameWheel_eventSwitchUiVisibility_Parms*)Obj)->_visibility = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMinigameWheel_SwitchUiVisibility_Statics::NewProp__visibility = { "_visibility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MinigameWheel_eventSwitchUiVisibility_Parms), &Z_Construct_UFunction_AMinigameWheel_SwitchUiVisibility_Statics::NewProp__visibility_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMinigameWheel_SwitchUiVisibility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinigameWheel_SwitchUiVisibility_Statics::NewProp__visibility,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameWheel_SwitchUiVisibility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinigameWheel_SwitchUiVisibility_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMinigameWheel, nullptr, "SwitchUiVisibility", Z_Construct_UFunction_AMinigameWheel_SwitchUiVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameWheel_SwitchUiVisibility_Statics::PropPointers), sizeof(MinigameWheel_eventSwitchUiVisibility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameWheel_SwitchUiVisibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinigameWheel_SwitchUiVisibility_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(MinigameWheel_eventSwitchUiVisibility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMinigameWheel_SwitchUiVisibility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinigameWheel_SwitchUiVisibility_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AMinigameWheel Function SwitchUiVisibility *********************************

// ********** Begin Class AMinigameWheel ***********************************************************
void AMinigameWheel::StaticRegisterNativesAMinigameWheel()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMinigameWheel;
UClass* AMinigameWheel::GetPrivateStaticClass()
{
	using TClass = AMinigameWheel;
	if (!Z_Registration_Info_UClass_AMinigameWheel.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MinigameWheel"),
			Z_Registration_Info_UClass_AMinigameWheel.InnerSingleton,
			StaticRegisterNativesAMinigameWheel,
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
	return Z_Registration_Info_UClass_AMinigameWheel.InnerSingleton;
}
UClass* Z_Construct_UClass_AMinigameWheel_NoRegister()
{
	return AMinigameWheel::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMinigameWheel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UIManager/MInigames/MinigameWheel.h" },
		{ "ModuleRelativePath", "UIManager/MInigames/MinigameWheel.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMinigameWheel_SwitchUiVisibility, "SwitchUiVisibility" }, // 3647522569
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMinigameWheel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMinigameWheel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_PartyJungle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMinigameWheel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMinigameWheel_Statics::ClassParams = {
	&AMinigameWheel::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMinigameWheel_Statics::Class_MetaDataParams), Z_Construct_UClass_AMinigameWheel_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMinigameWheel()
{
	if (!Z_Registration_Info_UClass_AMinigameWheel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMinigameWheel.OuterSingleton, Z_Construct_UClass_AMinigameWheel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMinigameWheel.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMinigameWheel);
AMinigameWheel::~AMinigameWheel() {}
// ********** End Class AMinigameWheel *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_UIManager_MInigames_MinigameWheel_h__Script_PartyJungle_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMinigameWheel, AMinigameWheel::StaticClass, TEXT("AMinigameWheel"), &Z_Registration_Info_UClass_AMinigameWheel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMinigameWheel), 3743035788U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_UIManager_MInigames_MinigameWheel_h__Script_PartyJungle_2955965281(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_UIManager_MInigames_MinigameWheel_h__Script_PartyJungle_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_UIManager_MInigames_MinigameWheel_h__Script_PartyJungle_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
