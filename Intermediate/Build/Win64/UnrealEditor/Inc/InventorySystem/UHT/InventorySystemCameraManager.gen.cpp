// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventorySystemCameraManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeInventorySystemCameraManager() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_AInventorySystemCameraManager();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_AInventorySystemCameraManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_InventorySystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AInventorySystemCameraManager ********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AInventorySystemCameraManager;
UClass* AInventorySystemCameraManager::GetPrivateStaticClass()
{
	using TClass = AInventorySystemCameraManager;
	if (!Z_Registration_Info_UClass_AInventorySystemCameraManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("InventorySystemCameraManager"),
			Z_Registration_Info_UClass_AInventorySystemCameraManager.InnerSingleton,
			StaticRegisterNativesAInventorySystemCameraManager,
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
	return Z_Registration_Info_UClass_AInventorySystemCameraManager.InnerSingleton;
}
UClass* Z_Construct_UClass_AInventorySystemCameraManager_NoRegister()
{
	return AInventorySystemCameraManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AInventorySystemCameraManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Basic First Person camera manager.\n *  Limits min/max look pitch.\n */" },
#endif
		{ "IncludePath", "InventorySystemCameraManager.h" },
		{ "ModuleRelativePath", "InventorySystemCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic First Person camera manager.\nLimits min/max look pitch." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class AInventorySystemCameraManager constinit property declarations ************
// ********** End Class AInventorySystemCameraManager constinit property declarations **************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInventorySystemCameraManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AInventorySystemCameraManager_Statics
UObject* (*const Z_Construct_UClass_AInventorySystemCameraManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerCameraManager,
	(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInventorySystemCameraManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AInventorySystemCameraManager_Statics::ClassParams = {
	&AInventorySystemCameraManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInventorySystemCameraManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AInventorySystemCameraManager_Statics::Class_MetaDataParams)
};
void AInventorySystemCameraManager::StaticRegisterNativesAInventorySystemCameraManager()
{
}
UClass* Z_Construct_UClass_AInventorySystemCameraManager()
{
	if (!Z_Registration_Info_UClass_AInventorySystemCameraManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInventorySystemCameraManager.OuterSingleton, Z_Construct_UClass_AInventorySystemCameraManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AInventorySystemCameraManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AInventorySystemCameraManager);
AInventorySystemCameraManager::~AInventorySystemCameraManager() {}
// ********** End Class AInventorySystemCameraManager **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_InventorySystem_Source_InventorySystem_InventorySystemCameraManager_h__Script_InventorySystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AInventorySystemCameraManager, AInventorySystemCameraManager::StaticClass, TEXT("AInventorySystemCameraManager"), &Z_Registration_Info_UClass_AInventorySystemCameraManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInventorySystemCameraManager), 3665205293U) },
	};
}; // Z_CompiledInDeferFile_FID_InventorySystem_Source_InventorySystem_InventorySystemCameraManager_h__Script_InventorySystem_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_InventorySystem_Source_InventorySystem_InventorySystemCameraManager_h__Script_InventorySystem_1376638497{
	TEXT("/Script/InventorySystem"),
	Z_CompiledInDeferFile_FID_InventorySystem_Source_InventorySystem_InventorySystemCameraManager_h__Script_InventorySystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_InventorySystem_Source_InventorySystem_InventorySystemCameraManager_h__Script_InventorySystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
