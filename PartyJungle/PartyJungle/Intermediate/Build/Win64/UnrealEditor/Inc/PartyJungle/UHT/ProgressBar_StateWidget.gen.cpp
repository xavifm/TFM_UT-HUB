// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/Controllers/UIControllers/StateWidgets/ProgressBar_StateWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeProgressBar_StateWidget() {}

// ********** Begin Cross Module References ********************************************************
PARTYJUNGLE_API UClass* Z_Construct_UClass_UProgressBar_StateWidget();
PARTYJUNGLE_API UClass* Z_Construct_UClass_UProgressBar_StateWidget_NoRegister();
PARTYJUNGLE_API UFunction* Z_Construct_UDelegateFunction_PartyJungle_Event_ProgressBarPercentChanged__DelegateSignature();
UMG_API UClass* Z_Construct_UClass_UProgressBar();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FEvent_ProgressBarPercentChanged **************************************
struct Z_Construct_UDelegateFunction_PartyJungle_Event_ProgressBarPercentChanged__DelegateSignature_Statics
{
	struct _Script_PartyJungle_eventEvent_ProgressBarPercentChanged_Parms
	{
		FString a_ProgressBarId;
		float a_OldProgressBarPercent;
		float a_NewProgressBarPercent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Event triggered when the ProgressBar percentage is changed.\n */// Name of the structure that will be generated\n// Parameters of the delegate (Type, Name):\n// Id of the affected ProgressBar.\n// Old ProgressBar Percentage.\n// New ProgressBar Percentage.\n" },
#endif
		{ "ModuleRelativePath", "Controllers/UIControllers/StateWidgets/ProgressBar_StateWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event triggered when the ProgressBar percentage is changed.\n // Name of the structure that will be generated\n// Parameters of the delegate (Type, Name):\n// Id of the affected ProgressBar.\n// Old ProgressBar Percentage.\n// New ProgressBar Percentage." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_a_ProgressBarId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_a_ProgressBarId;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_a_OldProgressBarPercent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_a_NewProgressBarPercent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_PartyJungle_Event_ProgressBarPercentChanged__DelegateSignature_Statics::NewProp_a_ProgressBarId = { "a_ProgressBarId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_PartyJungle_eventEvent_ProgressBarPercentChanged_Parms, a_ProgressBarId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_a_ProgressBarId_MetaData), NewProp_a_ProgressBarId_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_PartyJungle_Event_ProgressBarPercentChanged__DelegateSignature_Statics::NewProp_a_OldProgressBarPercent = { "a_OldProgressBarPercent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_PartyJungle_eventEvent_ProgressBarPercentChanged_Parms, a_OldProgressBarPercent), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_PartyJungle_Event_ProgressBarPercentChanged__DelegateSignature_Statics::NewProp_a_NewProgressBarPercent = { "a_NewProgressBarPercent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_PartyJungle_eventEvent_ProgressBarPercentChanged_Parms, a_NewProgressBarPercent), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PartyJungle_Event_ProgressBarPercentChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PartyJungle_Event_ProgressBarPercentChanged__DelegateSignature_Statics::NewProp_a_ProgressBarId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PartyJungle_Event_ProgressBarPercentChanged__DelegateSignature_Statics::NewProp_a_OldProgressBarPercent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PartyJungle_Event_ProgressBarPercentChanged__DelegateSignature_Statics::NewProp_a_NewProgressBarPercent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PartyJungle_Event_ProgressBarPercentChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_PartyJungle_Event_ProgressBarPercentChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_PartyJungle, nullptr, "Event_ProgressBarPercentChanged__DelegateSignature", Z_Construct_UDelegateFunction_PartyJungle_Event_ProgressBarPercentChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PartyJungle_Event_ProgressBarPercentChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_PartyJungle_Event_ProgressBarPercentChanged__DelegateSignature_Statics::_Script_PartyJungle_eventEvent_ProgressBarPercentChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PartyJungle_Event_ProgressBarPercentChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_PartyJungle_Event_ProgressBarPercentChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_PartyJungle_Event_ProgressBarPercentChanged__DelegateSignature_Statics::_Script_PartyJungle_eventEvent_ProgressBarPercentChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_PartyJungle_Event_ProgressBarPercentChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PartyJungle_Event_ProgressBarPercentChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEvent_ProgressBarPercentChanged_DelegateWrapper(const FMulticastScriptDelegate& Event_ProgressBarPercentChanged, const FString& a_ProgressBarId, float a_OldProgressBarPercent, float a_NewProgressBarPercent)
{
	struct _Script_PartyJungle_eventEvent_ProgressBarPercentChanged_Parms
	{
		FString a_ProgressBarId;
		float a_OldProgressBarPercent;
		float a_NewProgressBarPercent;
	};
	_Script_PartyJungle_eventEvent_ProgressBarPercentChanged_Parms Parms;
	Parms.a_ProgressBarId=a_ProgressBarId;
	Parms.a_OldProgressBarPercent=a_OldProgressBarPercent;
	Parms.a_NewProgressBarPercent=a_NewProgressBarPercent;
	Event_ProgressBarPercentChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FEvent_ProgressBarPercentChanged ****************************************

// ********** Begin Class UProgressBar_StateWidget Function OnBegin ********************************
struct Z_Construct_UFunction_UProgressBar_StateWidget_OnBegin_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ProgressBar_StateWidget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Method called when the StateWidget is created, at the begin of the UIController's state.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Controllers/UIControllers/StateWidgets/ProgressBar_StateWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Method called when the StateWidget is created, at the begin of the UIController's state." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProgressBar_StateWidget_OnBegin_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UProgressBar_StateWidget, nullptr, "OnBegin", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProgressBar_StateWidget_OnBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProgressBar_StateWidget_OnBegin_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UProgressBar_StateWidget_OnBegin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProgressBar_StateWidget_OnBegin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UProgressBar_StateWidget::execOnBegin)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnBegin();
	P_NATIVE_END;
}
// ********** End Class UProgressBar_StateWidget Function OnBegin **********************************

// ********** Begin Class UProgressBar_StateWidget Function OnExit *********************************
struct Z_Construct_UFunction_UProgressBar_StateWidget_OnExit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ProgressBar_StateWidget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Method called when the StateWidget is exited, at the exit of the UIController's state.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Controllers/UIControllers/StateWidgets/ProgressBar_StateWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Method called when the StateWidget is exited, at the exit of the UIController's state." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProgressBar_StateWidget_OnExit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UProgressBar_StateWidget, nullptr, "OnExit", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProgressBar_StateWidget_OnExit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProgressBar_StateWidget_OnExit_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UProgressBar_StateWidget_OnExit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProgressBar_StateWidget_OnExit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UProgressBar_StateWidget::execOnExit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnExit();
	P_NATIVE_END;
}
// ********** End Class UProgressBar_StateWidget Function OnExit ***********************************

// ********** Begin Class UProgressBar_StateWidget Function OnStart ********************************
struct Z_Construct_UFunction_UProgressBar_StateWidget_OnStart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ProgressBar_StateWidget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Method called when the StateWidget is started, at the start of the UIController's state.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Controllers/UIControllers/StateWidgets/ProgressBar_StateWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Method called when the StateWidget is started, at the start of the UIController's state." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProgressBar_StateWidget_OnStart_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UProgressBar_StateWidget, nullptr, "OnStart", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProgressBar_StateWidget_OnStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProgressBar_StateWidget_OnStart_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UProgressBar_StateWidget_OnStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProgressBar_StateWidget_OnStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UProgressBar_StateWidget::execOnStart)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnStart();
	P_NATIVE_END;
}
// ********** End Class UProgressBar_StateWidget Function OnStart **********************************

// ********** Begin Class UProgressBar_StateWidget *************************************************
void UProgressBar_StateWidget::StaticRegisterNativesUProgressBar_StateWidget()
{
	UClass* Class = UProgressBar_StateWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnBegin", &UProgressBar_StateWidget::execOnBegin },
		{ "OnExit", &UProgressBar_StateWidget::execOnExit },
		{ "OnStart", &UProgressBar_StateWidget::execOnStart },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UProgressBar_StateWidget;
UClass* UProgressBar_StateWidget::GetPrivateStaticClass()
{
	using TClass = UProgressBar_StateWidget;
	if (!Z_Registration_Info_UClass_UProgressBar_StateWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ProgressBar_StateWidget"),
			Z_Registration_Info_UClass_UProgressBar_StateWidget.InnerSingleton,
			StaticRegisterNativesUProgressBar_StateWidget,
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
	return Z_Registration_Info_UClass_UProgressBar_StateWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UProgressBar_StateWidget_NoRegister()
{
	return UProgressBar_StateWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UProgressBar_StateWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * StateWidget for the UProgressBar widgets.\n */" },
#endif
		{ "IncludePath", "Controllers/UIControllers/StateWidgets/ProgressBar_StateWidget.h" },
		{ "ModuleRelativePath", "Controllers/UIControllers/StateWidgets/ProgressBar_StateWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "StateWidget for the UProgressBar widgets." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UProgressBar_StateWidget_OnBegin, "OnBegin" }, // 1158807367
		{ &Z_Construct_UFunction_UProgressBar_StateWidget_OnExit, "OnExit" }, // 1411156695
		{ &Z_Construct_UFunction_UProgressBar_StateWidget_OnStart, "OnStart" }, // 2120517635
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProgressBar_StateWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UProgressBar_StateWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UProgressBar,
	(UObject* (*)())Z_Construct_UPackage__Script_PartyJungle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProgressBar_StateWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UProgressBar_StateWidget_Statics::ClassParams = {
	&UProgressBar_StateWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00A000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProgressBar_StateWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UProgressBar_StateWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UProgressBar_StateWidget()
{
	if (!Z_Registration_Info_UClass_UProgressBar_StateWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UProgressBar_StateWidget.OuterSingleton, Z_Construct_UClass_UProgressBar_StateWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UProgressBar_StateWidget.OuterSingleton;
}
UProgressBar_StateWidget::UProgressBar_StateWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UProgressBar_StateWidget);
UProgressBar_StateWidget::~UProgressBar_StateWidget() {}
// ********** End Class UProgressBar_StateWidget ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Controllers_UIControllers_StateWidgets_ProgressBar_StateWidget_h__Script_PartyJungle_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UProgressBar_StateWidget, UProgressBar_StateWidget::StaticClass, TEXT("UProgressBar_StateWidget"), &Z_Registration_Info_UClass_UProgressBar_StateWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProgressBar_StateWidget), 2719670340U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Controllers_UIControllers_StateWidgets_ProgressBar_StateWidget_h__Script_PartyJungle_2821442852(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Controllers_UIControllers_StateWidgets_ProgressBar_StateWidget_h__Script_PartyJungle_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Controllers_UIControllers_StateWidgets_ProgressBar_StateWidget_h__Script_PartyJungle_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
