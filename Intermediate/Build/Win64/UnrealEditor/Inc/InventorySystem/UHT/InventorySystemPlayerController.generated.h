// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InventorySystemPlayerController.h"

#ifdef INVENTORYSYSTEM_InventorySystemPlayerController_generated_h
#error "InventorySystemPlayerController.generated.h already included, missing '#pragma once' in InventorySystemPlayerController.h"
#endif
#define INVENTORYSYSTEM_InventorySystemPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AInventorySystemPlayerController *****************************************
struct Z_Construct_UClass_AInventorySystemPlayerController_Statics;
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_AInventorySystemPlayerController_NoRegister();

#define FID_InventorySystem_Source_InventorySystem_InventorySystemPlayerController_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInventorySystemPlayerController(); \
	friend struct ::Z_Construct_UClass_AInventorySystemPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INVENTORYSYSTEM_API UClass* ::Z_Construct_UClass_AInventorySystemPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(AInventorySystemPlayerController, APlayerController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/InventorySystem"), Z_Construct_UClass_AInventorySystemPlayerController_NoRegister) \
	DECLARE_SERIALIZER(AInventorySystemPlayerController)


#define FID_InventorySystem_Source_InventorySystem_InventorySystemPlayerController_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AInventorySystemPlayerController(AInventorySystemPlayerController&&) = delete; \
	AInventorySystemPlayerController(const AInventorySystemPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInventorySystemPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInventorySystemPlayerController); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AInventorySystemPlayerController) \
	NO_API virtual ~AInventorySystemPlayerController();


#define FID_InventorySystem_Source_InventorySystem_InventorySystemPlayerController_h_17_PROLOG
#define FID_InventorySystem_Source_InventorySystem_InventorySystemPlayerController_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_InventorySystem_Source_InventorySystem_InventorySystemPlayerController_h_20_INCLASS_NO_PURE_DECLS \
	FID_InventorySystem_Source_InventorySystem_InventorySystemPlayerController_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AInventorySystemPlayerController;

// ********** End Class AInventorySystemPlayerController *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_InventorySystem_Source_InventorySystem_InventorySystemPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
