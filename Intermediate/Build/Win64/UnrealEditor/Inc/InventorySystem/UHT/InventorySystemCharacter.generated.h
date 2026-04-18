// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InventorySystemCharacter.h"

#ifdef INVENTORYSYSTEM_InventorySystemCharacter_generated_h
#error "InventorySystemCharacter.generated.h already included, missing '#pragma once' in InventorySystemCharacter.h"
#endif
#define INVENTORYSYSTEM_InventorySystemCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AInventorySystemCharacter ************************************************
#define FID_InventorySystem_Source_InventorySystem_InventorySystemCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoMove); \
	DECLARE_FUNCTION(execDoAim);


struct Z_Construct_UClass_AInventorySystemCharacter_Statics;
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_AInventorySystemCharacter_NoRegister();

#define FID_InventorySystem_Source_InventorySystem_InventorySystemCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInventorySystemCharacter(); \
	friend struct ::Z_Construct_UClass_AInventorySystemCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INVENTORYSYSTEM_API UClass* ::Z_Construct_UClass_AInventorySystemCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AInventorySystemCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/InventorySystem"), Z_Construct_UClass_AInventorySystemCharacter_NoRegister) \
	DECLARE_SERIALIZER(AInventorySystemCharacter)


#define FID_InventorySystem_Source_InventorySystem_InventorySystemCharacter_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AInventorySystemCharacter(AInventorySystemCharacter&&) = delete; \
	AInventorySystemCharacter(const AInventorySystemCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInventorySystemCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInventorySystemCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AInventorySystemCharacter) \
	NO_API virtual ~AInventorySystemCharacter();


#define FID_InventorySystem_Source_InventorySystem_InventorySystemCharacter_h_21_PROLOG
#define FID_InventorySystem_Source_InventorySystem_InventorySystemCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_InventorySystem_Source_InventorySystem_InventorySystemCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_InventorySystem_Source_InventorySystem_InventorySystemCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_InventorySystem_Source_InventorySystem_InventorySystemCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AInventorySystemCharacter;

// ********** End Class AInventorySystemCharacter **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_InventorySystem_Source_InventorySystem_InventorySystemCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
