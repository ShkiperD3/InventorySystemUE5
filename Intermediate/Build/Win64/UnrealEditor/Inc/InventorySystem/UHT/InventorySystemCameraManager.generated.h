// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InventorySystemCameraManager.h"

#ifdef INVENTORYSYSTEM_InventorySystemCameraManager_generated_h
#error "InventorySystemCameraManager.generated.h already included, missing '#pragma once' in InventorySystemCameraManager.h"
#endif
#define INVENTORYSYSTEM_InventorySystemCameraManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AInventorySystemCameraManager ********************************************
struct Z_Construct_UClass_AInventorySystemCameraManager_Statics;
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_AInventorySystemCameraManager_NoRegister();

#define FID_InventorySystem_Source_InventorySystem_InventorySystemCameraManager_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInventorySystemCameraManager(); \
	friend struct ::Z_Construct_UClass_AInventorySystemCameraManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INVENTORYSYSTEM_API UClass* ::Z_Construct_UClass_AInventorySystemCameraManager_NoRegister(); \
public: \
	DECLARE_CLASS2(AInventorySystemCameraManager, APlayerCameraManager, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/InventorySystem"), Z_Construct_UClass_AInventorySystemCameraManager_NoRegister) \
	DECLARE_SERIALIZER(AInventorySystemCameraManager)


#define FID_InventorySystem_Source_InventorySystem_InventorySystemCameraManager_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AInventorySystemCameraManager(AInventorySystemCameraManager&&) = delete; \
	AInventorySystemCameraManager(const AInventorySystemCameraManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInventorySystemCameraManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInventorySystemCameraManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInventorySystemCameraManager) \
	NO_API virtual ~AInventorySystemCameraManager();


#define FID_InventorySystem_Source_InventorySystem_InventorySystemCameraManager_h_13_PROLOG
#define FID_InventorySystem_Source_InventorySystem_InventorySystemCameraManager_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_InventorySystem_Source_InventorySystem_InventorySystemCameraManager_h_16_INCLASS_NO_PURE_DECLS \
	FID_InventorySystem_Source_InventorySystem_InventorySystemCameraManager_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AInventorySystemCameraManager;

// ********** End Class AInventorySystemCameraManager **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_InventorySystem_Source_InventorySystem_InventorySystemCameraManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
