// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopHatSoloProject/Public/TopHatBoost.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTopHatBoost() {}
// Cross Module References
	TOPHATSOLOPROJECT_API UClass* Z_Construct_UClass_ATopHatBoost_NoRegister();
	TOPHATSOLOPROJECT_API UClass* Z_Construct_UClass_ATopHatBoost();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TopHatSoloProject();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	void ATopHatBoost::StaticRegisterNativesATopHatBoost()
	{
	}
	UClass* Z_Construct_UClass_ATopHatBoost_NoRegister()
	{
		return ATopHatBoost::StaticClass();
	}
	struct Z_Construct_UClass_ATopHatBoost_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TopHatRightFeatherMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TopHatRightFeatherMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TopHatLeftFeatherMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TopHatLeftFeatherMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TopHatBrimMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TopHatBrimMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TopHatRingMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TopHatRingMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TopHatBaseMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TopHatBaseMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SphereComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATopHatBoost_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TopHatSoloProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopHatBoost_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TopHatBoost.h" },
		{ "ModuleRelativePath", "Public/TopHatBoost.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopHatBoost_Statics::NewProp_TopHatRightFeatherMesh_MetaData[] = {
		{ "Category", "Top Hat Right Feather" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TopHatBoost.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATopHatBoost_Statics::NewProp_TopHatRightFeatherMesh = { UE4CodeGen_Private::EPropertyClass::Object, "TopHatRightFeatherMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000a0009, 1, nullptr, STRUCT_OFFSET(ATopHatBoost, TopHatRightFeatherMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATopHatBoost_Statics::NewProp_TopHatRightFeatherMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATopHatBoost_Statics::NewProp_TopHatRightFeatherMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopHatBoost_Statics::NewProp_TopHatLeftFeatherMesh_MetaData[] = {
		{ "Category", "Top Hat Left Feather" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TopHatBoost.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATopHatBoost_Statics::NewProp_TopHatLeftFeatherMesh = { UE4CodeGen_Private::EPropertyClass::Object, "TopHatLeftFeatherMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000a0009, 1, nullptr, STRUCT_OFFSET(ATopHatBoost, TopHatLeftFeatherMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATopHatBoost_Statics::NewProp_TopHatLeftFeatherMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATopHatBoost_Statics::NewProp_TopHatLeftFeatherMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopHatBoost_Statics::NewProp_TopHatBrimMesh_MetaData[] = {
		{ "Category", "Top Hat Brim" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TopHatBoost.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATopHatBoost_Statics::NewProp_TopHatBrimMesh = { UE4CodeGen_Private::EPropertyClass::Object, "TopHatBrimMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000a0009, 1, nullptr, STRUCT_OFFSET(ATopHatBoost, TopHatBrimMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATopHatBoost_Statics::NewProp_TopHatBrimMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATopHatBoost_Statics::NewProp_TopHatBrimMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopHatBoost_Statics::NewProp_TopHatRingMesh_MetaData[] = {
		{ "Category", "Top Hat Ring" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TopHatBoost.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATopHatBoost_Statics::NewProp_TopHatRingMesh = { UE4CodeGen_Private::EPropertyClass::Object, "TopHatRingMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000a0009, 1, nullptr, STRUCT_OFFSET(ATopHatBoost, TopHatRingMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATopHatBoost_Statics::NewProp_TopHatRingMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATopHatBoost_Statics::NewProp_TopHatRingMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopHatBoost_Statics::NewProp_TopHatBaseMesh_MetaData[] = {
		{ "Category", "Top Hat Base" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TopHatBoost.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATopHatBoost_Statics::NewProp_TopHatBaseMesh = { UE4CodeGen_Private::EPropertyClass::Object, "TopHatBaseMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000a0009, 1, nullptr, STRUCT_OFFSET(ATopHatBoost, TopHatBaseMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATopHatBoost_Statics::NewProp_TopHatBaseMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATopHatBoost_Statics::NewProp_TopHatBaseMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopHatBoost_Statics::NewProp_SphereComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TopHatBoost.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATopHatBoost_Statics::NewProp_SphereComp = { UE4CodeGen_Private::EPropertyClass::Object, "SphereComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000a0009, 1, nullptr, STRUCT_OFFSET(ATopHatBoost, SphereComp), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATopHatBoost_Statics::NewProp_SphereComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATopHatBoost_Statics::NewProp_SphereComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATopHatBoost_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopHatBoost_Statics::NewProp_TopHatRightFeatherMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopHatBoost_Statics::NewProp_TopHatLeftFeatherMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopHatBoost_Statics::NewProp_TopHatBrimMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopHatBoost_Statics::NewProp_TopHatRingMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopHatBoost_Statics::NewProp_TopHatBaseMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopHatBoost_Statics::NewProp_SphereComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATopHatBoost_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATopHatBoost>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATopHatBoost_Statics::ClassParams = {
		&ATopHatBoost::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_ATopHatBoost_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ATopHatBoost_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ATopHatBoost_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATopHatBoost_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATopHatBoost()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATopHatBoost_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATopHatBoost, 2716183308);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATopHatBoost(Z_Construct_UClass_ATopHatBoost, &ATopHatBoost::StaticClass, TEXT("/Script/TopHatSoloProject"), TEXT("ATopHatBoost"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATopHatBoost);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
