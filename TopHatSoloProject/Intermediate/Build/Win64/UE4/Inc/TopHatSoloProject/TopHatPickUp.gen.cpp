// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopHatSoloProject/Public/TopHatPickUp.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTopHatPickUp() {}
// Cross Module References
	TOPHATSOLOPROJECT_API UClass* Z_Construct_UClass_ATopHatPickUp_NoRegister();
	TOPHATSOLOPROJECT_API UClass* Z_Construct_UClass_ATopHatPickUp();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TopHatSoloProject();
	TOPHATSOLOPROJECT_API UFunction* Z_Construct_UFunction_ATopHatPickUp_OnActivate();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	static FName NAME_ATopHatPickUp_OnActivate = FName(TEXT("OnActivate"));
	void ATopHatPickUp::OnActivate(AActor* pickedupBy)
	{
		TopHatPickUp_eventOnActivate_Parms Parms;
		Parms.pickedupBy=pickedupBy;
		ProcessEvent(FindFunctionChecked(NAME_ATopHatPickUp_OnActivate),&Parms);
	}
	void ATopHatPickUp::StaticRegisterNativesATopHatPickUp()
	{
	}
	struct Z_Construct_UFunction_ATopHatPickUp_OnActivate_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pickedupBy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATopHatPickUp_OnActivate_Statics::NewProp_pickedupBy = { UE4CodeGen_Private::EPropertyClass::Object, "pickedupBy", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TopHatPickUp_eventOnActivate_Parms, pickedupBy), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATopHatPickUp_OnActivate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATopHatPickUp_OnActivate_Statics::NewProp_pickedupBy,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATopHatPickUp_OnActivate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pickup" },
		{ "ModuleRelativePath", "Public/TopHatPickUp.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATopHatPickUp_OnActivate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATopHatPickUp, "OnActivate", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(TopHatPickUp_eventOnActivate_Parms), Z_Construct_UFunction_ATopHatPickUp_OnActivate_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ATopHatPickUp_OnActivate_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATopHatPickUp_OnActivate_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATopHatPickUp_OnActivate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATopHatPickUp_OnActivate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATopHatPickUp_OnActivate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATopHatPickUp_NoRegister()
	{
		return ATopHatPickUp::StaticClass();
	}
	struct Z_Construct_UClass_ATopHatPickUp_Statics
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
	UObject* (*const Z_Construct_UClass_ATopHatPickUp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TopHatSoloProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATopHatPickUp_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATopHatPickUp_OnActivate, "OnActivate" }, // 1263682304
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopHatPickUp_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TopHatPickUp.h" },
		{ "ModuleRelativePath", "Public/TopHatPickUp.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopHatPickUp_Statics::NewProp_SphereComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TopHatPickUp.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATopHatPickUp_Statics::NewProp_SphereComp = { UE4CodeGen_Private::EPropertyClass::Object, "SphereComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000a0009, 1, nullptr, STRUCT_OFFSET(ATopHatPickUp, SphereComp), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATopHatPickUp_Statics::NewProp_SphereComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATopHatPickUp_Statics::NewProp_SphereComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATopHatPickUp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopHatPickUp_Statics::NewProp_SphereComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATopHatPickUp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATopHatPickUp>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATopHatPickUp_Statics::ClassParams = {
		&ATopHatPickUp::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_ATopHatPickUp_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ATopHatPickUp_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ATopHatPickUp_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATopHatPickUp_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATopHatPickUp()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATopHatPickUp_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATopHatPickUp, 1341905459);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATopHatPickUp(Z_Construct_UClass_ATopHatPickUp, &ATopHatPickUp::StaticClass, TEXT("/Script/TopHatSoloProject"), TEXT("ATopHatPickUp"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATopHatPickUp);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
