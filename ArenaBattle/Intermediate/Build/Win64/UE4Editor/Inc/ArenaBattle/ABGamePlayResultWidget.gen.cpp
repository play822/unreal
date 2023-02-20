// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle/Public/ABGamePlayResultWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABGamePlayResultWidget() {}
// Cross Module References
	ARENABATTLE_API UClass* Z_Construct_UClass_UABGamePlayResultWidget_NoRegister();
	ARENABATTLE_API UClass* Z_Construct_UClass_UABGamePlayResultWidget();
	ARENABATTLE_API UClass* Z_Construct_UClass_UABGamePlayWidget();
	UPackage* Z_Construct_UPackage__Script_ArenaBattle();
// End Cross Module References
	void UABGamePlayResultWidget::StaticRegisterNativesUABGamePlayResultWidget()
	{
	}
	UClass* Z_Construct_UClass_UABGamePlayResultWidget_NoRegister()
	{
		return UABGamePlayResultWidget::StaticClass();
	}
	struct Z_Construct_UClass_UABGamePlayResultWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UABGamePlayResultWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UABGamePlayWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABGamePlayResultWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ABGamePlayResultWidget.h" },
		{ "ModuleRelativePath", "Public/ABGamePlayResultWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UABGamePlayResultWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABGamePlayResultWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UABGamePlayResultWidget_Statics::ClassParams = {
		&UABGamePlayResultWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UABGamePlayResultWidget_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UABGamePlayResultWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UABGamePlayResultWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UABGamePlayResultWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UABGamePlayResultWidget, 3060598902);
	template<> ARENABATTLE_API UClass* StaticClass<UABGamePlayResultWidget>()
	{
		return UABGamePlayResultWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UABGamePlayResultWidget(Z_Construct_UClass_UABGamePlayResultWidget, &UABGamePlayResultWidget::StaticClass, TEXT("/Script/ArenaBattle"), TEXT("UABGamePlayResultWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UABGamePlayResultWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
