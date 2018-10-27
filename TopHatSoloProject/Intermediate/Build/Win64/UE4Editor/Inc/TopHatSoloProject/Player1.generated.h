// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOPHATSOLOPROJECT_Player1_generated_h
#error "Player1.generated.h already included, missing '#pragma once' in Player1.h"
#endif
#define TOPHATSOLOPROJECT_Player1_generated_h

#define TopHatSoloProject_Source_TopHatSoloProject_Player1_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execActivateSpeedBoost) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ActivateSpeedBoost(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBoostCheck) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BoostCheck(Z_Param_DeltaTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTopHatCount) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_newTopHatCount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTopHatCount(Z_Param_newTopHatCount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTopHatCount) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetTopHatCount(); \
		P_NATIVE_END; \
	}


#define TopHatSoloProject_Source_TopHatSoloProject_Player1_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execActivateSpeedBoost) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ActivateSpeedBoost(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBoostCheck) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BoostCheck(Z_Param_DeltaTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTopHatCount) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_newTopHatCount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTopHatCount(Z_Param_newTopHatCount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTopHatCount) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetTopHatCount(); \
		P_NATIVE_END; \
	}


#define TopHatSoloProject_Source_TopHatSoloProject_Player1_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayer1(); \
	friend struct Z_Construct_UClass_APlayer1_Statics; \
public: \
	DECLARE_CLASS(APlayer1, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TopHatSoloProject"), NO_API) \
	DECLARE_SERIALIZER(APlayer1)


#define TopHatSoloProject_Source_TopHatSoloProject_Player1_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAPlayer1(); \
	friend struct Z_Construct_UClass_APlayer1_Statics; \
public: \
	DECLARE_CLASS(APlayer1, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TopHatSoloProject"), NO_API) \
	DECLARE_SERIALIZER(APlayer1)


#define TopHatSoloProject_Source_TopHatSoloProject_Player1_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayer1(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayer1) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayer1); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayer1); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayer1(APlayer1&&); \
	NO_API APlayer1(const APlayer1&); \
public:


#define TopHatSoloProject_Source_TopHatSoloProject_Player1_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayer1(APlayer1&&); \
	NO_API APlayer1(const APlayer1&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayer1); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayer1); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayer1)


#define TopHatSoloProject_Source_TopHatSoloProject_Player1_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__VampireHeadMeshComponent() { return STRUCT_OFFSET(APlayer1, VampireHeadMeshComponent); } \
	FORCEINLINE static uint32 __PPO__VampireBodyMeshComponent() { return STRUCT_OFFSET(APlayer1, VampireBodyMeshComponent); } \
	FORCEINLINE static uint32 __PPO__VampireCapeMeshComponent() { return STRUCT_OFFSET(APlayer1, VampireCapeMeshComponent); } \
	FORCEINLINE static uint32 __PPO__TopHatBrimMeshComponent() { return STRUCT_OFFSET(APlayer1, TopHatBrimMeshComponent); } \
	FORCEINLINE static uint32 __PPO__TopHatRingMeshComponent() { return STRUCT_OFFSET(APlayer1, TopHatRingMeshComponent); } \
	FORCEINLINE static uint32 __PPO__TopHatBaseMeshcomponent() { return STRUCT_OFFSET(APlayer1, TopHatBaseMeshcomponent); }


#define TopHatSoloProject_Source_TopHatSoloProject_Player1_h_11_PROLOG
#define TopHatSoloProject_Source_TopHatSoloProject_Player1_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TopHatSoloProject_Source_TopHatSoloProject_Player1_h_14_PRIVATE_PROPERTY_OFFSET \
	TopHatSoloProject_Source_TopHatSoloProject_Player1_h_14_RPC_WRAPPERS \
	TopHatSoloProject_Source_TopHatSoloProject_Player1_h_14_INCLASS \
	TopHatSoloProject_Source_TopHatSoloProject_Player1_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TopHatSoloProject_Source_TopHatSoloProject_Player1_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TopHatSoloProject_Source_TopHatSoloProject_Player1_h_14_PRIVATE_PROPERTY_OFFSET \
	TopHatSoloProject_Source_TopHatSoloProject_Player1_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	TopHatSoloProject_Source_TopHatSoloProject_Player1_h_14_INCLASS_NO_PURE_DECLS \
	TopHatSoloProject_Source_TopHatSoloProject_Player1_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TopHatSoloProject_Source_TopHatSoloProject_Player1_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
