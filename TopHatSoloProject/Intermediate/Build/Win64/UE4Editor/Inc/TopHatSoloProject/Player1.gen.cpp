// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopHatSoloProject/Player1.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayer1() {}
// Cross Module References
	TOPHATSOLOPROJECT_API UClass* Z_Construct_UClass_APlayer1_NoRegister();
	TOPHATSOLOPROJECT_API UClass* Z_Construct_UClass_APlayer1();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_TopHatSoloProject();
	TOPHATSOLOPROJECT_API UFunction* Z_Construct_UFunction_APlayer1_ActivateSpeedBoost();
	TOPHATSOLOPROJECT_API UFunction* Z_Construct_UFunction_APlayer1_BoostCheck();
	TOPHATSOLOPROJECT_API UFunction* Z_Construct_UFunction_APlayer1_GetTopHatCount();
	TOPHATSOLOPROJECT_API UFunction* Z_Construct_UFunction_APlayer1_SetTopHatCount();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void APlayer1::StaticRegisterNativesAPlayer1()
	{
		UClass* Class = APlayer1::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateSpeedBoost", &APlayer1::execActivateSpeedBoost },
			{ "BoostCheck", &APlayer1::execBoostCheck },
			{ "GetTopHatCount", &APlayer1::execGetTopHatCount },
			{ "SetTopHatCount", &APlayer1::execSetTopHatCount },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APlayer1_ActivateSpeedBoost_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayer1_ActivateSpeedBoost_Statics::Function_MetaDataParams[] = {
		{ "Category", "BOOSTY BOY" },
		{ "ModuleRelativePath", "Player1.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayer1_ActivateSpeedBoost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayer1, "ActivateSpeedBoost", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayer1_ActivateSpeedBoost_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APlayer1_ActivateSpeedBoost_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayer1_ActivateSpeedBoost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayer1_ActivateSpeedBoost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayer1_BoostCheck_Statics
	{
		struct Player1_eventBoostCheck_Parms
		{
			float DeltaTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayer1_BoostCheck_Statics::NewProp_DeltaTime = { UE4CodeGen_Private::EPropertyClass::Float, "DeltaTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Player1_eventBoostCheck_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayer1_BoostCheck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayer1_BoostCheck_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayer1_BoostCheck_Statics::Function_MetaDataParams[] = {
		{ "Category", "Boost Check" },
		{ "ModuleRelativePath", "Player1.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayer1_BoostCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayer1, "BoostCheck", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Player1_eventBoostCheck_Parms), Z_Construct_UFunction_APlayer1_BoostCheck_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APlayer1_BoostCheck_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayer1_BoostCheck_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APlayer1_BoostCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayer1_BoostCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayer1_BoostCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayer1_GetTopHatCount_Statics
	{
		struct Player1_eventGetTopHatCount_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_APlayer1_GetTopHatCount_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Player1_eventGetTopHatCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayer1_GetTopHatCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayer1_GetTopHatCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayer1_GetTopHatCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "TopHat" },
		{ "ModuleRelativePath", "Player1.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayer1_GetTopHatCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayer1, "GetTopHatCount", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Player1_eventGetTopHatCount_Parms), Z_Construct_UFunction_APlayer1_GetTopHatCount_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APlayer1_GetTopHatCount_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayer1_GetTopHatCount_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APlayer1_GetTopHatCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayer1_GetTopHatCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayer1_GetTopHatCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayer1_SetTopHatCount_Statics
	{
		struct Player1_eventSetTopHatCount_Parms
		{
			int32 newTopHatCount;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_newTopHatCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_APlayer1_SetTopHatCount_Statics::NewProp_newTopHatCount = { UE4CodeGen_Private::EPropertyClass::Int, "newTopHatCount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Player1_eventSetTopHatCount_Parms, newTopHatCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayer1_SetTopHatCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayer1_SetTopHatCount_Statics::NewProp_newTopHatCount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayer1_SetTopHatCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "TopHat" },
		{ "ModuleRelativePath", "Player1.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayer1_SetTopHatCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayer1, "SetTopHatCount", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Player1_eventSetTopHatCount_Parms), Z_Construct_UFunction_APlayer1_SetTopHatCount_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APlayer1_SetTopHatCount_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayer1_SetTopHatCount_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APlayer1_SetTopHatCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayer1_SetTopHatCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayer1_SetTopHatCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APlayer1_NoRegister()
	{
		return APlayer1::StaticClass();
	}
	struct Z_Construct_UClass_APlayer1_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentBoostTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_currentBoostTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_boostDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_boostDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TopHatCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_TopHatCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TopHatBaseMeshcomponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TopHatBaseMeshcomponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TopHatRingMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TopHatRingMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TopHatBrimMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TopHatBrimMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VampireCapeMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VampireCapeMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VampireBodyMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VampireBodyMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VampireHeadMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VampireHeadMeshComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayer1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_TopHatSoloProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APlayer1_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayer1_ActivateSpeedBoost, "ActivateSpeedBoost" }, // 3174950039
		{ &Z_Construct_UFunction_APlayer1_BoostCheck, "BoostCheck" }, // 4187510856
		{ &Z_Construct_UFunction_APlayer1_GetTopHatCount, "GetTopHatCount" }, // 2302923568
		{ &Z_Construct_UFunction_APlayer1_SetTopHatCount, "SetTopHatCount" }, // 1017957078
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer1_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player1.h" },
		{ "ModuleRelativePath", "Player1.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer1_Statics::NewProp_currentBoostTime_MetaData[] = {
		{ "Category", "Boost" },
		{ "ModuleRelativePath", "Player1.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayer1_Statics::NewProp_currentBoostTime = { UE4CodeGen_Private::EPropertyClass::Float, "currentBoostTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(APlayer1, currentBoostTime), METADATA_PARAMS(Z_Construct_UClass_APlayer1_Statics::NewProp_currentBoostTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayer1_Statics::NewProp_currentBoostTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer1_Statics::NewProp_boostDuration_MetaData[] = {
		{ "Category", "Boost" },
		{ "ModuleRelativePath", "Player1.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayer1_Statics::NewProp_boostDuration = { UE4CodeGen_Private::EPropertyClass::Float, "boostDuration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(APlayer1, boostDuration), METADATA_PARAMS(Z_Construct_UClass_APlayer1_Statics::NewProp_boostDuration_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayer1_Statics::NewProp_boostDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer1_Statics::NewProp_TopHatCount_MetaData[] = {
		{ "Category", "TopHat" },
		{ "ModuleRelativePath", "Player1.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_APlayer1_Statics::NewProp_TopHatCount = { UE4CodeGen_Private::EPropertyClass::Int, "TopHatCount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(APlayer1, TopHatCount), METADATA_PARAMS(Z_Construct_UClass_APlayer1_Statics::NewProp_TopHatCount_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayer1_Statics::NewProp_TopHatCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer1_Statics::NewProp_TopHatBaseMeshcomponent_MetaData[] = {
		{ "Category", "Player1" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player1.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayer1_Statics::NewProp_TopHatBaseMeshcomponent = { UE4CodeGen_Private::EPropertyClass::Object, "TopHatBaseMeshcomponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000a0009, 1, nullptr, STRUCT_OFFSET(APlayer1, TopHatBaseMeshcomponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayer1_Statics::NewProp_TopHatBaseMeshcomponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayer1_Statics::NewProp_TopHatBaseMeshcomponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer1_Statics::NewProp_TopHatRingMeshComponent_MetaData[] = {
		{ "Category", "Player1" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player1.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayer1_Statics::NewProp_TopHatRingMeshComponent = { UE4CodeGen_Private::EPropertyClass::Object, "TopHatRingMeshComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000a0009, 1, nullptr, STRUCT_OFFSET(APlayer1, TopHatRingMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayer1_Statics::NewProp_TopHatRingMeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayer1_Statics::NewProp_TopHatRingMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer1_Statics::NewProp_TopHatBrimMeshComponent_MetaData[] = {
		{ "Category", "Player1" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player1.h" },
		{ "ToolTip", "Vampire's top hat" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayer1_Statics::NewProp_TopHatBrimMeshComponent = { UE4CodeGen_Private::EPropertyClass::Object, "TopHatBrimMeshComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000a0009, 1, nullptr, STRUCT_OFFSET(APlayer1, TopHatBrimMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayer1_Statics::NewProp_TopHatBrimMeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayer1_Statics::NewProp_TopHatBrimMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer1_Statics::NewProp_VampireCapeMeshComponent_MetaData[] = {
		{ "Category", "Player1" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player1.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayer1_Statics::NewProp_VampireCapeMeshComponent = { UE4CodeGen_Private::EPropertyClass::Object, "VampireCapeMeshComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000a0009, 1, nullptr, STRUCT_OFFSET(APlayer1, VampireCapeMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayer1_Statics::NewProp_VampireCapeMeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayer1_Statics::NewProp_VampireCapeMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer1_Statics::NewProp_VampireBodyMeshComponent_MetaData[] = {
		{ "Category", "Player1" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player1.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayer1_Statics::NewProp_VampireBodyMeshComponent = { UE4CodeGen_Private::EPropertyClass::Object, "VampireBodyMeshComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000a0009, 1, nullptr, STRUCT_OFFSET(APlayer1, VampireBodyMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayer1_Statics::NewProp_VampireBodyMeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayer1_Statics::NewProp_VampireBodyMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer1_Statics::NewProp_VampireHeadMeshComponent_MetaData[] = {
		{ "Category", "Player1" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player1.h" },
		{ "ToolTip", "Vampire boy" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayer1_Statics::NewProp_VampireHeadMeshComponent = { UE4CodeGen_Private::EPropertyClass::Object, "VampireHeadMeshComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000a0009, 1, nullptr, STRUCT_OFFSET(APlayer1, VampireHeadMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayer1_Statics::NewProp_VampireHeadMeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayer1_Statics::NewProp_VampireHeadMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayer1_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer1_Statics::NewProp_currentBoostTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer1_Statics::NewProp_boostDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer1_Statics::NewProp_TopHatCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer1_Statics::NewProp_TopHatBaseMeshcomponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer1_Statics::NewProp_TopHatRingMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer1_Statics::NewProp_TopHatBrimMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer1_Statics::NewProp_VampireCapeMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer1_Statics::NewProp_VampireBodyMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer1_Statics::NewProp_VampireHeadMeshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayer1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayer1>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayer1_Statics::ClassParams = {
		&APlayer1::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_APlayer1_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_APlayer1_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_APlayer1_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APlayer1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayer1()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlayer1_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayer1, 869712890);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayer1(Z_Construct_UClass_APlayer1, &APlayer1::StaticClass, TEXT("/Script/TopHatSoloProject"), TEXT("APlayer1"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayer1);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
