// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InventorySystemGameMode.h"

#ifdef INVENTORYSYSTEM_InventorySystemGameMode_generated_h
#error "InventorySystemGameMode.generated.h already included, missing '#pragma once' in InventorySystemGameMode.h"
#endif
#define INVENTORYSYSTEM_InventorySystemGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AInventorySystemGameMode *************************************************
struct Z_Construct_UClass_AInventorySystemGameMode_Statics;
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_AInventorySystemGameMode_NoRegister();

#define FID_InventorySystem_Source_InventorySystem_InventorySystemGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInventorySystemGameMode(); \
	friend struct ::Z_Construct_UClass_AInventorySystemGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INVENTORYSYSTEM_API UClass* ::Z_Construct_UClass_AInventorySystemGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(AInventorySystemGameMode, AGameModeBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/InventorySystem"), Z_Construct_UClass_AInventorySystemGameMode_NoRegister) \
	DECLARE_SERIALIZER(AInventorySystemGameMode)


#define FID_InventorySystem_Source_InventorySystem_InventorySystemGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AInventorySystemGameMode(AInventorySystemGameMode&&) = delete; \
	AInventorySystemGameMode(const AInventorySystemGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInventorySystemGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInventorySystemGameMode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AInventorySystemGameMode) \
	NO_API virtual ~AInventorySystemGameMode();


#define FID_InventorySystem_Source_InventorySystem_InventorySystemGameMode_h_12_PROLOG
#define FID_InventorySystem_Source_InventorySystem_InventorySystemGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_InventorySystem_Source_InventorySystem_InventorySystemGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_InventorySystem_Source_InventorySystem_InventorySystemGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AInventorySystemGameMode;

// ********** End Class AInventorySystemGameMode ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_InventorySystem_Source_InventorySystem_InventorySystemGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
