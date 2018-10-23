// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopHatSoloProject/Public/Spawner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawner() {}
// Cross Module References
	TOPHATSOLOPROJECT_API UClass* Z_Construct_UClass_ASpawner_NoRegister();
	TOPHATSOLOPROJECT_API UClass* Z_Construct_UClass_ASpawner();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TopHatSoloProject();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ASpawner::StaticRegisterNativesASpawner()
	{
	}
	UClass* Z_Construct_UClass_ASpawner_NoRegister()
	{
		return ASpawner::StaticClass();
	}
	struct Z_Construct_UClass_ASpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnerMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnerMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TopHatSoloProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Spawner.h" },
		{ "ModuleRelativePath", "Public/Spawner.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawner_Statics::NewProp_SpawnerMesh_MetaData[] = {
		{ "Category", "Spawner" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Spawner.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpawner_Statics::NewProp_SpawnerMesh = { UE4CodeGen_Private::EPropertyClass::Object, "SpawnerMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000a0009, 1, nullptr, STRUCT_OFFSET(ASpawner, SpawnerMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASpawner_Statics::NewProp_SpawnerMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASpawner_Statics::NewProp_SpawnerMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpawner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawner_Statics::NewProp_SpawnerMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpawner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASpawner_Statics::ClassParams = {
		&ASpawner::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_ASpawner_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ASpawner_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ASpawner_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpawner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASpawner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpawner, 1688046700);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpawner(Z_Construct_UClass_ASpawner, &ASpawner::StaticClass, TEXT("/Script/TopHatSoloProject"), TEXT("ASpawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpawner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
