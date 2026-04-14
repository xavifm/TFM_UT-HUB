// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePartyJungle_init() {}
	PARTYJUNGLE_API UFunction* Z_Construct_UDelegateFunction_PartyJungle_Event_GameManagerLoaded__DelegateSignature();
	PARTYJUNGLE_API UFunction* Z_Construct_UDelegateFunction_PartyJungle_Event_GameStateChanged__DelegateSignature();
	PARTYJUNGLE_API UFunction* Z_Construct_UDelegateFunction_PartyJungle_Event_MinionChanged__DelegateSignature();
	PARTYJUNGLE_API UFunction* Z_Construct_UDelegateFunction_PartyJungle_Event_PlayerChanged__DelegateSignature();
	PARTYJUNGLE_API UFunction* Z_Construct_UDelegateFunction_PartyJungle_Event_PlayerInputAxis__DelegateSignature();
	PARTYJUNGLE_API UFunction* Z_Construct_UDelegateFunction_PartyJungle_Event_PlayerInputKey__DelegateSignature();
	PARTYJUNGLE_API UFunction* Z_Construct_UDelegateFunction_PartyJungle_Event_SceneChanged__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_PartyJungle;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_PartyJungle()
	{
		if (!Z_Registration_Info_UPackage__Script_PartyJungle.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_PartyJungle_Event_GameManagerLoaded__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_PartyJungle_Event_GameStateChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_PartyJungle_Event_MinionChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_PartyJungle_Event_PlayerChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_PartyJungle_Event_PlayerInputAxis__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_PartyJungle_Event_PlayerInputKey__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_PartyJungle_Event_SceneChanged__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/PartyJungle",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xA9076464,
				0xC8E74917,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_PartyJungle.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_PartyJungle.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_PartyJungle(Z_Construct_UPackage__Script_PartyJungle, TEXT("/Script/PartyJungle"), Z_Registration_Info_UPackage__Script_PartyJungle, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xA9076464, 0xC8E74917));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
