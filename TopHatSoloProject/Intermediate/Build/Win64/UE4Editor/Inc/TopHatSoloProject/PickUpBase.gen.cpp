// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopHatSoloProject/Public/PickUpBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickUpBase() {}
// Cross Module References
	TOPHATSOLOPROJECT_API UClass* Z_Construct_UClass_APickUpBase_NoRegister();
	TOPHATSOLOPROJECT_API UClass* Z_Construct_UClass_APickUpBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TopHatSoloProject();
	TOPHATSOLOPROJECT_API UFunction* Z_Construct_UFunction_APickUpBase_OnActivate();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	static FName NAME_APickUpBase_OnActivate = FName(TEXT("OnActivate"));
	void APickUpBase::OnActivate(AActor* pickedUpBy)
	{
		PickUpBase_eventOnActivate_Parms Parms;
		Parms.pickedUpBy=pickedUpBy;
		ProcessEvent(FindFunctionChecked(NAME_APickUpBase_OnActivate),&Parms);
	}
	void APickUpBase::StaticRegisterNativesAPickUpBase()
	{
	}
	struct Z_Construct_UFunction_APickUpBase_OnActivate_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pickedUpBy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APickUpBase_OnActivate_Statics::NewProp_pickedUpBy = { UE4CodeGen_Private::EPropertyClass::Object, "pickedUpBy", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PickUpBase_eventOnActivate_Parms, pickedUpBy), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APickUpBase_OnActivate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickUpBase_OnActivate_Statics::NewProp_pickedUpBy,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickUpBase_OnActivate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pick Up" },
		{ "ModuleRelativePath", "Public/PickUpBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APickUpBase_OnActivate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickUpBase, "OnActivate", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(PickUpBase_eventOnActivate_Parms), Z_Construct_UFunction_APickUpBase_OnActivate_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APickUpBase_OnActivate_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APickUpBase_OnActivate_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APickUpBase_OnActivate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APickUpBase_OnActivate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APickUpBase_OnActivate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APickUpBase_NoRegister()
	{
		return APickUpBase::StaticClass();
	}
	struct Z_Construct_UClass_APickUpBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SphereComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APickUpBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TopHatSoloProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APickUpBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APickUpBase_OnActivate, "OnActivate" }, // 2262813700
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickUpBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PickUpBase.h" },
		{ "ModuleRelativePath", "Public/PickUpBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickUpBase_Statics::NewProp_SphereComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PickUpBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickUpBase_Statics::NewProp_SphereComp = { UE4CodeGen_Private::EPropertyClass::Object, "SphereComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000a0009, 1, nullptr, STRUCT_OFFSET(APickUpBase, SphereComp), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APickUpBase_Statics::NewProp_SphereComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_APickUpBase_Statics::NewProp_SphereComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APickUpBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickUpBase_Statics::NewProp_SphereComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APickUpBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APickUpBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APickUpBase_Statics::ClassParams = {
		&APickUpBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_APickUpBase_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_APickUpBase_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_APickUpBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APickUpBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APickUpBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APickUpBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APickUpBase, 4039700598);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APickUpBase(Z_Construct_UClass_APickUpBase, &APickUpBase::StaticClass, TEXT("/Script/TopHatSoloProject"), TEXT("APickUpBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APickUpBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
