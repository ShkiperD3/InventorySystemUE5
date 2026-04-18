// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventorySystem_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	INVENTORYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_InventorySystem_BulletCountUpdatedDelegate__DelegateSignature();
	INVENTORYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_InventorySystem_DamagedDelegate__DelegateSignature();
	INVENTORYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnInventoryUpdated__DelegateSignature();
	INVENTORYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_InventorySystem_PawnDeathDelegate__DelegateSignature();
	INVENTORYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_InventorySystem_SprintStateChangedDelegate__DelegateSignature();
	INVENTORYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_InventorySystem_UpdateSprintMeterDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_InventorySystem;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_InventorySystem()
	{
		if (!Z_Registration_Info_UPackage__Script_InventorySystem.OuterSingleton)
		{
		static UObject* (*const SingletonFuncArray[])() = {
			(UObject* (*)())Z_Construct_UDelegateFunction_InventorySystem_BulletCountUpdatedDelegate__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_InventorySystem_DamagedDelegate__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_InventorySystem_OnInventoryUpdated__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_InventorySystem_PawnDeathDelegate__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_InventorySystem_SprintStateChangedDelegate__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_InventorySystem_UpdateSprintMeterDelegate__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/InventorySystem",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000000,
			0xB2C60981,
			0x7D8AF43D,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_InventorySystem.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_InventorySystem.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_InventorySystem(Z_Construct_UPackage__Script_InventorySystem, TEXT("/Script/InventorySystem"), Z_Registration_Info_UPackage__Script_InventorySystem, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xB2C60981, 0x7D8AF43D));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
