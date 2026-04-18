// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Variant_Shooter/ItemObject.h"
#include "ItemData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeItemObject() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UItemObject();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UItemObject_NoRegister();
INVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FItemData();
UPackage* Z_Construct_UPackage__Script_InventorySystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UItemObject **************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UItemObject;
UClass* UItemObject::GetPrivateStaticClass()
{
	using TClass = UItemObject;
	if (!Z_Registration_Info_UClass_UItemObject.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ItemObject"),
			Z_Registration_Info_UClass_UItemObject.InnerSingleton,
			StaticRegisterNativesUItemObject,
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
	return Z_Registration_Info_UClass_UItemObject.InnerSingleton;
}
UClass* Z_Construct_UClass_UItemObject_NoRegister()
{
	return UItemObject::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UItemObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Variant_Shooter/ItemObject.h" },
		{ "ModuleRelativePath", "Public/Variant_Shooter/ItemObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "Category", "ItemObject" },
		{ "ModuleRelativePath", "Public/Variant_Shooter/ItemObject.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UItemObject constinit property declarations ******************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UItemObject constinit property declarations ********************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UItemObject_Statics

// ********** Begin Class UItemObject Property Definitions *****************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UItemObject_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemObject, Data), Z_Construct_UScriptStruct_FItemData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 1726295713
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItemObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemObject_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemObject_Statics::PropPointers) < 2048);
// ********** End Class UItemObject Property Definitions *******************************************
UObject* (*const Z_Construct_UClass_UItemObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemObject_Statics::ClassParams = {
	&UItemObject::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UItemObject_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UItemObject_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UItemObject_Statics::Class_MetaDataParams)
};
void UItemObject::StaticRegisterNativesUItemObject()
{
}
UClass* Z_Construct_UClass_UItemObject()
{
	if (!Z_Registration_Info_UClass_UItemObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemObject.OuterSingleton, Z_Construct_UClass_UItemObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UItemObject.OuterSingleton;
}
UItemObject::UItemObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UItemObject);
UItemObject::~UItemObject() {}
// ********** End Class UItemObject ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_InventorySystem_Source_InventorySystem_Public_Variant_Shooter_ItemObject_h__Script_InventorySystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UItemObject, UItemObject::StaticClass, TEXT("UItemObject"), &Z_Registration_Info_UClass_UItemObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemObject), 788661240U) },
	};
}; // Z_CompiledInDeferFile_FID_InventorySystem_Source_InventorySystem_Public_Variant_Shooter_ItemObject_h__Script_InventorySystem_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_InventorySystem_Source_InventorySystem_Public_Variant_Shooter_ItemObject_h__Script_InventorySystem_614726574{
	TEXT("/Script/InventorySystem"),
	Z_CompiledInDeferFile_FID_InventorySystem_Source_InventorySystem_Public_Variant_Shooter_ItemObject_h__Script_InventorySystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_InventorySystem_Source_InventorySystem_Public_Variant_Shooter_ItemObject_h__Script_InventorySystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
