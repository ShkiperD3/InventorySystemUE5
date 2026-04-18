// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InventoryComponent.h"

#ifdef INVENTORYSYSTEM_InventoryComponent_generated_h
#error "InventoryComponent.generated.h already included, missing '#pragma once' in InventoryComponent.h"
#endif
#define INVENTORYSYSTEM_InventoryComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FItemData;

// ********** Begin Delegate FOnInventoryUpdated ***************************************************
#define FID_InventorySystem_Source_InventorySystem_Public_InventoryComponent_h_10_DELEGATE \
INVENTORYSYSTEM_API void FOnInventoryUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnInventoryUpdated);


// ********** End Delegate FOnInventoryUpdated *****************************************************

// ********** Begin Class UInventoryComponent ******************************************************
#define FID_InventorySystem_Source_InventorySystem_Public_InventoryComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddItem);


struct Z_Construct_UClass_UInventoryComponent_Statics;
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UInventoryComponent_NoRegister();

#define FID_InventorySystem_Source_InventorySystem_Public_InventoryComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventoryComponent(); \
	friend struct ::Z_Construct_UClass_UInventoryComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INVENTORYSYSTEM_API UClass* ::Z_Construct_UClass_UInventoryComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UInventoryComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InventorySystem"), Z_Construct_UClass_UInventoryComponent_NoRegister) \
	DECLARE_SERIALIZER(UInventoryComponent)


#define FID_InventorySystem_Source_InventorySystem_Public_InventoryComponent_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventoryComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInventoryComponent(UInventoryComponent&&) = delete; \
	UInventoryComponent(const UInventoryComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventoryComponent) \
	NO_API virtual ~UInventoryComponent();


#define FID_InventorySystem_Source_InventorySystem_Public_InventoryComponent_h_12_PROLOG
#define FID_InventorySystem_Source_InventorySystem_Public_InventoryComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_InventorySystem_Source_InventorySystem_Public_InventoryComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_InventorySystem_Source_InventorySystem_Public_InventoryComponent_h_15_INCLASS_NO_PURE_DECLS \
	FID_InventorySystem_Source_InventorySystem_Public_InventoryComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInventoryComponent;

// ********** End Class UInventoryComponent ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_InventorySystem_Source_InventorySystem_Public_InventoryComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
