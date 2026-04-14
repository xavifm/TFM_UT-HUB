// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/Controllers/CameraControllers/CameraModeControllers/Cinematic_CameraModeController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCinematic_CameraModeController() {}

// ********** Begin Cross Module References ********************************************************
PARTYJUNGLE_API UClass* Z_Construct_UClass_ACameraModeControllerBase();
PARTYJUNGLE_API UClass* Z_Construct_UClass_ACinematic_CameraModeController();
PARTYJUNGLE_API UClass* Z_Construct_UClass_ACinematic_CameraModeController_NoRegister();
PARTYJUNGLE_API UEnum* Z_Construct_UEnum_PartyJungle_ECinematicEndMode();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ECinematicEndMode *********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECinematicEndMode;
static UEnum* ECinematicEndMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECinematicEndMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECinematicEndMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PartyJungle_ECinematicEndMode, (UObject*)Z_Construct_UPackage__Script_PartyJungle(), TEXT("ECinematicEndMode"));
	}
	return Z_Registration_Info_UEnum_ECinematicEndMode.OuterSingleton;
}
template<> PARTYJUNGLE_API UEnum* StaticEnum<ECinematicEndMode>()
{
	return ECinematicEndMode_StaticEnum();
}
struct Z_Construct_UEnum_PartyJungle_ECinematicEndMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Enum with the Cinematic End modes.\n */" },
#endif
		{ "Event.Name", "ECinematicEndMode::Event" },
		{ "ModuleRelativePath", "Controllers/CameraControllers/CameraModeControllers/Cinematic_CameraModeController.h" },
		{ "Time.Name", "ECinematicEndMode::Time" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enum with the Cinematic End modes." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECinematicEndMode::Time", (int64)ECinematicEndMode::Time },
		{ "ECinematicEndMode::Event", (int64)ECinematicEndMode::Event },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PartyJungle_ECinematicEndMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PartyJungle,
	nullptr,
	"ECinematicEndMode",
	"ECinematicEndMode",
	Z_Construct_UEnum_PartyJungle_ECinematicEndMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PartyJungle_ECinematicEndMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PartyJungle_ECinematicEndMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PartyJungle_ECinematicEndMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PartyJungle_ECinematicEndMode()
{
	if (!Z_Registration_Info_UEnum_ECinematicEndMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECinematicEndMode.InnerSingleton, Z_Construct_UEnum_PartyJungle_ECinematicEndMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECinematicEndMode.InnerSingleton;
}
// ********** End Enum ECinematicEndMode ***********************************************************

// ********** Begin Class ACinematic_CameraModeController Function OnCinematicEnd ******************
static FName NAME_ACinematic_CameraModeController_OnCinematicEnd = FName(TEXT("OnCinematicEnd"));
void ACinematic_CameraModeController::OnCinematicEnd()
{
	UFunction* Func = FindFunctionChecked(NAME_ACinematic_CameraModeController_OnCinematicEnd);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ACinematic_CameraModeController_OnCinematicEnd_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "StateData_Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Method called when the Cinematic ends.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Controllers/CameraControllers/CameraModeControllers/Cinematic_CameraModeController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Method called when the Cinematic ends." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACinematic_CameraModeController_OnCinematicEnd_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACinematic_CameraModeController, nullptr, "OnCinematicEnd", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACinematic_CameraModeController_OnCinematicEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACinematic_CameraModeController_OnCinematicEnd_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACinematic_CameraModeController_OnCinematicEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACinematic_CameraModeController_OnCinematicEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACinematic_CameraModeController::execOnCinematicEnd)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCinematicEnd_Implementation();
	P_NATIVE_END;
}
// ********** End Class ACinematic_CameraModeController Function OnCinematicEnd ********************

// ********** Begin Class ACinematic_CameraModeController Function PlayCinematic *******************
static FName NAME_ACinematic_CameraModeController_PlayCinematic = FName(TEXT("PlayCinematic"));
void ACinematic_CameraModeController::PlayCinematic()
{
	UFunction* Func = FindFunctionChecked(NAME_ACinematic_CameraModeController_PlayCinematic);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ACinematic_CameraModeController_PlayCinematic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "StateData_Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Method called for playing the cinematic.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Controllers/CameraControllers/CameraModeControllers/Cinematic_CameraModeController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Method called for playing the cinematic." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACinematic_CameraModeController_PlayCinematic_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACinematic_CameraModeController, nullptr, "PlayCinematic", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACinematic_CameraModeController_PlayCinematic_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACinematic_CameraModeController_PlayCinematic_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACinematic_CameraModeController_PlayCinematic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACinematic_CameraModeController_PlayCinematic_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACinematic_CameraModeController::execPlayCinematic)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayCinematic_Implementation();
	P_NATIVE_END;
}
// ********** End Class ACinematic_CameraModeController Function PlayCinematic *********************

// ********** Begin Class ACinematic_CameraModeController Function TriggerEvent_CinematicEnd *******
struct Z_Construct_UFunction_ACinematic_CameraModeController_TriggerEvent_CinematicEnd_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "CinematicCamera_Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Triggers the 'CinematicEnd' event, which triggers the cinematic end if ECinematicEndMode::Event is select.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Controllers/CameraControllers/CameraModeControllers/Cinematic_CameraModeController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Triggers the 'CinematicEnd' event, which triggers the cinematic end if ECinematicEndMode::Event is select." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACinematic_CameraModeController_TriggerEvent_CinematicEnd_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACinematic_CameraModeController, nullptr, "TriggerEvent_CinematicEnd", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACinematic_CameraModeController_TriggerEvent_CinematicEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACinematic_CameraModeController_TriggerEvent_CinematicEnd_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACinematic_CameraModeController_TriggerEvent_CinematicEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACinematic_CameraModeController_TriggerEvent_CinematicEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACinematic_CameraModeController::execTriggerEvent_CinematicEnd)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TriggerEvent_CinematicEnd();
	P_NATIVE_END;
}
// ********** End Class ACinematic_CameraModeController Function TriggerEvent_CinematicEnd *********

// ********** Begin Class ACinematic_CameraModeController ******************************************
void ACinematic_CameraModeController::StaticRegisterNativesACinematic_CameraModeController()
{
	UClass* Class = ACinematic_CameraModeController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnCinematicEnd", &ACinematic_CameraModeController::execOnCinematicEnd },
		{ "PlayCinematic", &ACinematic_CameraModeController::execPlayCinematic },
		{ "TriggerEvent_CinematicEnd", &ACinematic_CameraModeController::execTriggerEvent_CinematicEnd },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACinematic_CameraModeController;
UClass* ACinematic_CameraModeController::GetPrivateStaticClass()
{
	using TClass = ACinematic_CameraModeController;
	if (!Z_Registration_Info_UClass_ACinematic_CameraModeController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Cinematic_CameraModeController"),
			Z_Registration_Info_UClass_ACinematic_CameraModeController.InnerSingleton,
			StaticRegisterNativesACinematic_CameraModeController,
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
	return Z_Registration_Info_UClass_ACinematic_CameraModeController.InnerSingleton;
}
UClass* Z_Construct_UClass_ACinematic_CameraModeController_NoRegister()
{
	return ACinematic_CameraModeController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACinematic_CameraModeController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Controller for each Camera in Cinematic Camera Mode.\n */" },
#endif
		{ "IncludePath", "Controllers/CameraControllers/CameraModeControllers/Cinematic_CameraModeController.h" },
		{ "ModuleRelativePath", "Controllers/CameraControllers/CameraModeControllers/Cinematic_CameraModeController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Controller for each Camera in Cinematic Camera Mode." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_CinematicEndMode_MetaData[] = {
		{ "Category", "CinematicCamera" },
		{ "ModuleRelativePath", "Controllers/CameraControllers/CameraModeControllers/Cinematic_CameraModeController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_EndCinematicTime_MetaData[] = {
		{ "Category", "CinematicCamera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//!< Cinematic camera End mode.\n" },
#endif
		{ "ModuleRelativePath", "Controllers/CameraControllers/CameraModeControllers/Cinematic_CameraModeController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "!< Cinematic camera End mode." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_m_CinematicEndMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_m_CinematicEndMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_m_EndCinematicTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACinematic_CameraModeController_OnCinematicEnd, "OnCinematicEnd" }, // 4036503042
		{ &Z_Construct_UFunction_ACinematic_CameraModeController_PlayCinematic, "PlayCinematic" }, // 1358479697
		{ &Z_Construct_UFunction_ACinematic_CameraModeController_TriggerEvent_CinematicEnd, "TriggerEvent_CinematicEnd" }, // 1025182236
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACinematic_CameraModeController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACinematic_CameraModeController_Statics::NewProp_m_CinematicEndMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACinematic_CameraModeController_Statics::NewProp_m_CinematicEndMode = { "m_CinematicEndMode", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACinematic_CameraModeController, m_CinematicEndMode), Z_Construct_UEnum_PartyJungle_ECinematicEndMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_CinematicEndMode_MetaData), NewProp_m_CinematicEndMode_MetaData) }; // 586468745
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACinematic_CameraModeController_Statics::NewProp_m_EndCinematicTime = { "m_EndCinematicTime", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACinematic_CameraModeController, m_EndCinematicTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_EndCinematicTime_MetaData), NewProp_m_EndCinematicTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACinematic_CameraModeController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACinematic_CameraModeController_Statics::NewProp_m_CinematicEndMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACinematic_CameraModeController_Statics::NewProp_m_CinematicEndMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACinematic_CameraModeController_Statics::NewProp_m_EndCinematicTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACinematic_CameraModeController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACinematic_CameraModeController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACameraModeControllerBase,
	(UObject* (*)())Z_Construct_UPackage__Script_PartyJungle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACinematic_CameraModeController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACinematic_CameraModeController_Statics::ClassParams = {
	&ACinematic_CameraModeController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACinematic_CameraModeController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACinematic_CameraModeController_Statics::PropPointers),
	0,
	0x008001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACinematic_CameraModeController_Statics::Class_MetaDataParams), Z_Construct_UClass_ACinematic_CameraModeController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACinematic_CameraModeController()
{
	if (!Z_Registration_Info_UClass_ACinematic_CameraModeController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACinematic_CameraModeController.OuterSingleton, Z_Construct_UClass_ACinematic_CameraModeController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACinematic_CameraModeController.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACinematic_CameraModeController);
ACinematic_CameraModeController::~ACinematic_CameraModeController() {}
// ********** End Class ACinematic_CameraModeController ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_CameraControllers_CameraModeControllers_Cinematic_CameraModeController_h__Script_PartyJungle_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECinematicEndMode_StaticEnum, TEXT("ECinematicEndMode"), &Z_Registration_Info_UEnum_ECinematicEndMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 586468745U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACinematic_CameraModeController, ACinematic_CameraModeController::StaticClass, TEXT("ACinematic_CameraModeController"), &Z_Registration_Info_UClass_ACinematic_CameraModeController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACinematic_CameraModeController), 175513688U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_CameraControllers_CameraModeControllers_Cinematic_CameraModeController_h__Script_PartyJungle_3919715620(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_CameraControllers_CameraModeControllers_Cinematic_CameraModeController_h__Script_PartyJungle_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_CameraControllers_CameraModeControllers_Cinematic_CameraModeController_h__Script_PartyJungle_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_CameraControllers_CameraModeControllers_Cinematic_CameraModeController_h__Script_PartyJungle_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_TFM_UT_HUB_PartyJungle_PartyJungle_Source_PartyJungle_Controllers_CameraControllers_CameraModeControllers_Cinematic_CameraModeController_h__Script_PartyJungle_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
