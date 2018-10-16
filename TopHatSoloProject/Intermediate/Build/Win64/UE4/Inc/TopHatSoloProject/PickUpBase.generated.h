// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef TOPHATSOLOPROJECT_PickUpBase_generated_h
#error "PickUpBase.generated.h already included, missing '#pragma once' in PickUpBase.h"
#endif
#define TOPHATSOLOPROJECT_PickUpBase_generated_h

#define TopHatSoloProject_Source_TopHatSoloProject_Public_PickUpBase_h_14_RPC_WRAPPERS
#define TopHatSoloProject_Source_TopHatSoloProject_Public_PickUpBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define TopHatSoloProject_Source_TopHatSoloProject_Public_PickUpBase_h_14_EVENT_PARMS \
	struct PickUpBase_eventOnActivate_Parms \
	{ \
		AActor* pickedUpBy; \
	};


#define TopHatSoloProject_Source_TopHatSoloProject_Public_PickUpBase_h_14_CALLBACK_WRAPPERS
#define TopHatSoloProject_Source_TopHatSoloProject_Public_PickUpBase_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPickUpBase(); \
	friend struct Z_Construct_UClass_APickUpBase_Statics; \
public: \
	DECLARE_CLASS(APickUpBase, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TopHatSoloProject"), NO_API) \
	DECLARE_SERIALIZER(APickUpBase)


#define TopHatSoloProject_Source_TopHatSoloProject_Public_PickUpBase_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAPickUpBase(); \
	friend struct Z_Construct_UClass_APickUpBase_Statics; \
public: \
	DECLARE_CLASS(APickUpBase, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TopHatSoloProject"), NO_API) \
	DECLARE_SERIALIZER(APickUpBase)


#define TopHatSoloProject_Source_TopHatSoloProject_Public_PickUpBase_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APickUpBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APickUpBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickUpBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickUpBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickUpBase(APickUpBase&&); \
	NO_API APickUpBase(const APickUpBase&); \
public:


#define TopHatSoloProject_Source_TopHatSoloProject_Public_PickUpBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickUpBase(APickUpBase&&); \
	NO_API APickUpBase(const APickUpBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickUpBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickUpBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APickUpBase)


#define TopHatSoloProject_Source_TopHatSoloProject_Public_PickUpBase_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SphereComp() { return STRUCT_OFFSET(APickUpBase, SphereComp); }


#define TopHatSoloProject_Source_TopHatSoloProject_Public_PickUpBase_h_11_PROLOG \
	TopHatSoloProject_Source_TopHatSoloProject_Public_PickUpBase_h_14_EVENT_PARMS


#define TopHatSoloProject_Source_TopHatSoloProject_Public_PickUpBase_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TopHatSoloProject_Source_TopHatSoloProject_Public_PickUpBase_h_14_PRIVATE_PROPERTY_OFFSET \
	TopHatSoloProject_Source_TopHatSoloProject_Public_PickUpBase_h_14_RPC_WRAPPERS \
	TopHatSoloProject_Source_TopHatSoloProject_Public_PickUpBase_h_14_CALLBACK_WRAPPERS \
	TopHatSoloProject_Source_TopHatSoloProject_Public_PickUpBase_h_14_INCLASS \
	TopHatSoloProject_Source_TopHatSoloProject_Public_PickUpBase_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TopHatSoloProject_Source_TopHatSoloProject_Public_PickUpBase_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TopHatSoloProject_Source_TopHatSoloProject_Public_PickUpBase_h_14_PRIVATE_PROPERTY_OFFSET \
	TopHatSoloProject_Source_TopHatSoloProject_Public_PickUpBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	TopHatSoloProject_Source_TopHatSoloProject_Public_PickUpBase_h_14_CALLBACK_WRAPPERS \
	TopHatSoloProject_Source_TopHatSoloProject_Public_PickUpBase_h_14_INCLASS_NO_PURE_DECLS \
	TopHatSoloProject_Source_TopHatSoloProject_Public_PickUpBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TopHatSoloProject_Source_TopHatSoloProject_Public_PickUpBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
