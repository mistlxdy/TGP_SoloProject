// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopHatSoloProject/Public/Timer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimer() {}
// Cross Module References
	TOPHATSOLOPROJECT_API UClass* Z_Construct_UClass_ATimer_NoRegister();
	TOPHATSOLOPROJECT_API UClass* Z_Construct_UClass_ATimer();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TopHatSoloProject();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	void ATimer::StaticRegisterNativesATimer()
	{
	}
	UClass* Z_Construct_UClass_ATimer_NoRegister()
	{
		return ATimer::StaticClass();
	}
	struct Z_Construct_UClass_ATimer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FailedGame_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FailedGame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_widgetTemplate_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_widgetTemplate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATimer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TopHatSoloProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Timer.h" },
		{ "ModuleRelativePath", "Public/Timer.h" },
		{ "ToolTip", "#include \"Runtime/UMG/Public/Blueprint/UserWidget.h\"" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimer_Statics::NewProp_FailedGame_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Timer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATimer_Statics::NewProp_FailedGame = { UE4CodeGen_Private::EPropertyClass::Object, "FailedGame", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080008, 1, nullptr, STRUCT_OFFSET(ATimer, FailedGame), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATimer_Statics::NewProp_FailedGame_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATimer_Statics::NewProp_FailedGame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimer_Statics::NewProp_widgetTemplate_MetaData[] = {
		{ "Category", "Timer" },
		{ "ModuleRelativePath", "Public/Timer.h" },
		{ "ToolTip", "Work pls i beg you unreal" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATimer_Statics::NewProp_widgetTemplate = { UE4CodeGen_Private::EPropertyClass::Class, "widgetTemplate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000010001, 1, nullptr, STRUCT_OFFSET(ATimer, widgetTemplate), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ATimer_Statics::NewProp_widgetTemplate_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATimer_Statics::NewProp_widgetTemplate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATimer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimer_Statics::NewProp_FailedGame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimer_Statics::NewProp_widgetTemplate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATimer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATimer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATimer_Statics::ClassParams = {
		&ATimer::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_ATimer_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ATimer_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ATimer_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATimer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATimer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATimer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATimer, 4119098787);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATimer(Z_Construct_UClass_ATimer, &ATimer::StaticClass, TEXT("/Script/TopHatSoloProject"), TEXT("ATimer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATimer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
