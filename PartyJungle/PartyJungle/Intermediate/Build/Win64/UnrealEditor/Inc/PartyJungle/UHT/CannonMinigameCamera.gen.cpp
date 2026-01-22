// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/Minigame/Minigame1/CannonMinigameCamera.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCannonMinigameCamera() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn();
PARTYJUNGLE_API UClass* Z_Construct_UClass_ACannonMinigameCamera();
PARTYJUNGLE_API UClass* Z_Construct_UClass_ACannonMinigameCamera_NoRegister();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACannonMinigameCamera Function ResetCameraPosition ***********************
static FName NAME_ACannonMinigameCamera_ResetCameraPosition = FName(TEXT("ResetCameraPosition"));
void ACannonMinigameCamera::ResetCameraPosition()
{
	UFunction* Func = FindFunctionChecked(NAME_ACannonMinigameCamera_ResetCameraPosition);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ACannonMinigameCamera_ResetCameraPosition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera Functions" },
		{ "ModuleRelativePath", "Minigame/Minigame1/CannonMinigameCamera.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACannonMinigameCamera_ResetCameraPosition_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACannonMinigameCamera, nullptr, "ResetCameraPosition", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACannonMinigameCamera_ResetCameraPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACannonMinigameCamera_ResetCameraPosition_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACannonMinigameCamera_ResetCameraPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACannonMinigameCamera_ResetCameraPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class ACannonMinigameCamera Function ResetCameraPosition *************************

// ********** Begin Class ACannonMinigameCamera Function SetCameraTarget ***************************
struct CannonMinigameCamera_eventSetCameraTarget_Parms
{
	AActor* _reference;
};
static FName NAME_ACannonMinigameCamera_SetCameraTarget = FName(TEXT("SetCameraTarget"));
void ACannonMinigameCamera::SetCameraTarget(AActor* _reference)
{
	CannonMinigameCamera_eventSetCameraTarget_Parms Parms;
	Parms._reference=_reference;
	UFunction* Func = FindFunctionChecked(NAME_ACannonMinigameCamera_SetCameraTarget);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ACannonMinigameCamera_SetCameraTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera Functions" },
		{ "ModuleRelativePath", "Minigame/Minigame1/CannonMinigameCamera.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__reference;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACannonMinigameCamera_SetCameraTarget_Statics::NewProp__reference = { "_reference", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CannonMinigameCamera_eventSetCameraTarget_Parms, _reference), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACannonMinigameCamera_SetCameraTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACannonMinigameCamera_SetCameraTarget_Statics::NewProp__reference,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACannonMinigameCamera_SetCameraTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACannonMinigameCamera_SetCameraTarget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACannonMinigameCamera, nullptr, "SetCameraTarget", Z_Construct_UFunction_ACannonMinigameCamera_SetCameraTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACannonMinigameCamera_SetCameraTarget_Statics::PropPointers), sizeof(CannonMinigameCamera_eventSetCameraTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACannonMinigameCamera_SetCameraTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACannonMinigameCamera_SetCameraTarget_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(CannonMinigameCamera_eventSetCameraTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACannonMinigameCamera_SetCameraTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACannonMinigameCamera_SetCameraTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class ACannonMinigameCamera Function SetCameraTarget *****************************

// ********** Begin Class ACannonMinigameCamera ****************************************************
void ACannonMinigameCamera::StaticRegisterNativesACannonMinigameCamera()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACannonMinigameCamera;
UClass* ACannonMinigameCamera::GetPrivateStaticClass()
{
	using TClass = ACannonMinigameCamera;
	if (!Z_Registration_Info_UClass_ACannonMinigameCamera.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CannonMinigameCamera"),
			Z_Registration_Info_UClass_ACannonMinigameCamera.InnerSingleton,
			StaticRegisterNativesACannonMinigameCamera,
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
	return Z_Registration_Info_UClass_ACannonMinigameCamera.InnerSingleton;
}
UClass* Z_Construct_UClass_ACannonMinigameCamera_NoRegister()
{
	return ACannonMinigameCamera::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACannonMinigameCamera_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Minigame/Minigame1/CannonMinigameCamera.h" },
		{ "ModuleRelativePath", "Minigame/Minigame1/CannonMinigameCamera.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACannonMinigameCamera_ResetCameraPosition, "ResetCameraPosition" }, // 1170134790
		{ &Z_Construct_UFunction_ACannonMinigameCamera_SetCameraTarget, "SetCameraTarget" }, // 2647292405
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACannonMinigameCamera>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACannonMinigameCamera_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_PartyJungle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACannonMinigameCamera_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACannonMinigameCamera_Statics::ClassParams = {
	&ACannonMinigameCamera::StaticClass,
	"Game",
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACannonMinigameCamera_Statics::Class_MetaDataParams), Z_Construct_UClass_ACannonMinigameCamera_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACannonMinigameCamera()
{
	if (!Z_Registration_Info_UClass_ACannonMinigameCamera.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACannonMinigameCamera.OuterSingleton, Z_Construct_UClass_ACannonMinigameCamera_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACannonMinigameCamera.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACannonMinigameCamera);
ACannonMinigameCamera::~ACannonMinigameCamera() {}
// ********** End Class ACannonMinigameCamera ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_Minigame1_CannonMinigameCamera_h__Script_PartyJungle_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACannonMinigameCamera, ACannonMinigameCamera::StaticClass, TEXT("ACannonMinigameCamera"), &Z_Registration_Info_UClass_ACannonMinigameCamera, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACannonMinigameCamera), 3591909455U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_Minigame1_CannonMinigameCamera_h__Script_PartyJungle_2981327230(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_Minigame1_CannonMinigameCamera_h__Script_PartyJungle_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_Unreal_Projects_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Minigame_Minigame1_CannonMinigameCamera_h__Script_PartyJungle_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
