// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventorySystemGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeInventorySystemGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_AInventorySystemGameMode();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_AInventorySystemGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_InventorySystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AInventorySystemGameMode *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AInventorySystemGameMode;
UClass* AInventorySystemGameMode::GetPrivateStaticClass()
{
	using TClass = AInventorySystemGameMode;
	if (!Z_Registration_Info_UClass_AInventorySystemGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("InventorySystemGameMode"),
			Z_Registration_Info_UClass_AInventorySystemGameMode.InnerSingleton,
			StaticRegisterNativesAInventorySystemGameMode,
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
	return Z_Registration_Info_UClass_AInventorySystemGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AInventorySystemGameMode_NoRegister()
{
	return AInventorySystemGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AInventorySystemGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a first person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "InventorySystemGameMode.h" },
		{ "ModuleRelativePath", "InventorySystemGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a first person game" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class AInventorySystemGameMode constinit property declarations *****************
// ********** End Class AInventorySystemGameMode constinit property declarations *******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInventorySystemGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AInventorySystemGameMode_Statics
UObject* (*const Z_Construct_UClass_AInventorySystemGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInventorySystemGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AInventorySystemGameMode_Statics::ClassParams = {
	&AInventorySystemGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008002ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInventorySystemGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AInventorySystemGameMode_Statics::Class_MetaDataParams)
};
void AInventorySystemGameMode::StaticRegisterNativesAInventorySystemGameMode()
{
}
UClass* Z_Construct_UClass_AInventorySystemGameMode()
{
	if (!Z_Registration_Info_UClass_AInventorySystemGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInventorySystemGameMode.OuterSingleton, Z_Construct_UClass_AInventorySystemGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AInventorySystemGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AInventorySystemGameMode);
AInventorySystemGameMode::~AInventorySystemGameMode() {}
// ********** End Class AInventorySystemGameMode ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_InventorySystem_Source_InventorySystem_InventorySystemGameMode_h__Script_InventorySystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AInventorySystemGameMode, AInventorySystemGameMode::StaticClass, TEXT("AInventorySystemGameMode"), &Z_Registration_Info_UClass_AInventorySystemGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInventorySystemGameMode), 1859574327U) },
	};
}; // Z_CompiledInDeferFile_FID_InventorySystem_Source_InventorySystem_InventorySystemGameMode_h__Script_InventorySystem_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_InventorySystem_Source_InventorySystem_InventorySystemGameMode_h__Script_InventorySystem_3227751003{
	TEXT("/Script/InventorySystem"),
	Z_CompiledInDeferFile_FID_InventorySystem_Source_InventorySystem_InventorySystemGameMode_h__Script_InventorySystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_InventorySystem_Source_InventorySystem_InventorySystemGameMode_h__Script_InventorySystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
