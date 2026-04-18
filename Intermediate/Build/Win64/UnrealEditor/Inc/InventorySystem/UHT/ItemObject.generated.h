// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Variant_Shooter/ItemObject.h"

#ifdef INVENTORYSYSTEM_ItemObject_generated_h
#error "ItemObject.generated.h already included, missing '#pragma once' in ItemObject.h"
#endif
#define INVENTORYSYSTEM_ItemObject_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UItemObject **************************************************************
struct Z_Construct_UClass_UItemObject_Statics;
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UItemObject_NoRegister();

#define FID_InventorySystem_Source_InventorySystem_Public_Variant_Shooter_ItemObject_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUItemObject(); \
	friend struct ::Z_Construct_UClass_UItemObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INVENTORYSYSTEM_API UClass* ::Z_Construct_UClass_UItemObject_NoRegister(); \
public: \
	DECLARE_CLASS2(UItemObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InventorySystem"), Z_Construct_UClass_UItemObject_NoRegister) \
	DECLARE_SERIALIZER(UItemObject)


#define FID_InventorySystem_Source_InventorySystem_Public_Variant_Shooter_ItemObject_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UItemObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UItemObject(UItemObject&&) = delete; \
	UItemObject(const UItemObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItemObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItemObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UItemObject) \
	NO_API virtual ~UItemObject();


#define FID_InventorySystem_Source_InventorySystem_Public_Variant_Shooter_ItemObject_h_10_PROLOG
#define FID_InventorySystem_Source_InventorySystem_Public_Variant_Shooter_ItemObject_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_InventorySystem_Source_InventorySystem_Public_Variant_Shooter_ItemObject_h_13_INCLASS_NO_PURE_DECLS \
	FID_InventorySystem_Source_InventorySystem_Public_Variant_Shooter_ItemObject_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UItemObject;

// ********** End Class UItemObject ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_InventorySystem_Source_InventorySystem_Public_Variant_Shooter_ItemObject_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
