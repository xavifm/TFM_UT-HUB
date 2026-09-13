// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartyJungle/Controllers/UIControllers/UIControllerBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeUIControllerBase() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AControllerBase();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AUIControllerBase();
PARTYJUNGLE_API UClass* Z_Construct_UClass_AUIControllerBase_NoRegister();
PARTYJUNGLE_API UFunction* Z_Construct_UDelegateFunction_PartyJungle_Event_UpdateWidgets__DelegateSignature();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_PartyJungle();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FEvent_UpdateWidgets **************************************************
struct Z_Construct_UDelegateFunction_PartyJungle_Event_UpdateWidgets__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Name of the structure that will be generated\n" },
#endif
		{ "ModuleRelativePath", "Controllers/UIControllers/UIControllerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of the structure that will be generated" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_PartyJungle_Event_UpdateWidgets__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_PartyJungle, nullptr, "Event_UpdateWidgets__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PartyJungle_Event_UpdateWidgets__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_PartyJungle_Event_UpdateWidgets__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_PartyJungle_Event_UpdateWidgets__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PartyJungle_Event_UpdateWidgets__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEvent_UpdateWidgets_DelegateWrapper(const FMulticastScriptDelegate& Event_UpdateWidgets)
{
	Event_UpdateWidgets.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FEvent_UpdateWidgets ****************************************************

// ********** Begin Class AUIControllerBase ********************************************************
void AUIControllerBase::StaticRegisterNativesAUIControllerBase()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AUIControllerBase;
UClass* AUIControllerBase::GetPrivateStaticClass()
{
	using TClass = AUIControllerBase;
	if (!Z_Registration_Info_UClass_AUIControllerBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("UIControllerBase"),
			Z_Registration_Info_UClass_AUIControllerBase.InnerSingleton,
			StaticRegisterNativesAUIControllerBase,
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
	return Z_Registration_Info_UClass_AUIControllerBase.InnerSingleton;
}
UClass* Z_Construct_UClass_AUIControllerBase_NoRegister()
{
	return AUIControllerBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AUIControllerBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Base UI Controller class.\n */" },
#endif
		{ "IncludePath", "Controllers/UIControllers/UIControllerBase.h" },
		{ "ModuleRelativePath", "Controllers/UIControllers/UIControllerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base UI Controller class." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_UserWidgetClass_MetaData[] = {
		{ "Category", "UIController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//!< Event triggered when the Controller exits, used for exiting the selected widget.\n" },
#endif
		{ "ModuleRelativePath", "Controllers/UIControllers/UIControllerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "!< Event triggered when the Controller exits, used for exiting the selected widget." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_UserWidget_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//!< Type of the used UserWidget class.\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Controllers/UIControllers/UIControllerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "!< Type of the used UserWidget class." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_m_UserWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_m_UserWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUIControllerBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AUIControllerBase_Statics::NewProp_m_UserWidgetClass = { "m_UserWidgetClass", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUIControllerBase, m_UserWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_UserWidgetClass_MetaData), NewProp_m_UserWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUIControllerBase_Statics::NewProp_m_UserWidget = { "m_UserWidget", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUIControllerBase, m_UserWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_UserWidget_MetaData), NewProp_m_UserWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUIControllerBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIControllerBase_Statics::NewProp_m_UserWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIControllerBase_Statics::NewProp_m_UserWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUIControllerBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AUIControllerBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AControllerBase,
	(UObject* (*)())Z_Construct_UPackage__Script_PartyJungle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUIControllerBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AUIControllerBase_Statics::ClassParams = {
	&AUIControllerBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AUIControllerBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AUIControllerBase_Statics::PropPointers),
	0,
	0x008001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUIControllerBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AUIControllerBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AUIControllerBase()
{
	if (!Z_Registration_Info_UClass_AUIControllerBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUIControllerBase.OuterSingleton, Z_Construct_UClass_AUIControllerBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AUIControllerBase.OuterSingleton;
}
AUIControllerBase::AUIControllerBase() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AUIControllerBase);
AUIControllerBase::~AUIControllerBase() {}
// ********** End Class AUIControllerBase **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Controllers_UIControllers_UIControllerBase_h__Script_PartyJungle_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AUIControllerBase, AUIControllerBase::StaticClass, TEXT("AUIControllerBase"), &Z_Registration_Info_UClass_AUIControllerBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUIControllerBase), 3462516197U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Controllers_UIControllers_UIControllerBase_h__Script_PartyJungle_1621664603(TEXT("/Script/PartyJungle"),
	Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Controllers_UIControllers_UIControllerBase_h__Script_PartyJungle_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PartyJungle_Source_PartyJungle_Controllers_UIControllers_UIControllerBase_h__Script_PartyJungle_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
