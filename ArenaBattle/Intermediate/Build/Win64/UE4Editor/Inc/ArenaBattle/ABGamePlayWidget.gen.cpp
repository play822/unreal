// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle/Public/ABGamePlayWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABGamePlayWidget() {}
// Cross Module References
	ARENABATTLE_API UClass* Z_Construct_UClass_UABGamePlayWidget_NoRegister();
	ARENABATTLE_API UClass* Z_Construct_UClass_UABGamePlayWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_ArenaBattle();
	ARENABATTLE_API UFunction* Z_Construct_UFunction_UABGamePlayWidget_OnResumeClicked();
	ARENABATTLE_API UFunction* Z_Construct_UFunction_UABGamePlayWidget_OnRetryGameClicked();
	ARENABATTLE_API UFunction* Z_Construct_UFunction_UABGamePlayWidget_OnReturnToTitleClicked();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	void UABGamePlayWidget::StaticRegisterNativesUABGamePlayWidget()
	{
		UClass* Class = UABGamePlayWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnResumeClicked", &UABGamePlayWidget::execOnResumeClicked },
			{ "OnRetryGameClicked", &UABGamePlayWidget::execOnRetryGameClicked },
			{ "OnReturnToTitleClicked", &UABGamePlayWidget::execOnReturnToTitleClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UABGamePlayWidget_OnResumeClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABGamePlayWidget_OnResumeClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABGamePlayWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABGamePlayWidget_OnResumeClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABGamePlayWidget, nullptr, "OnResumeClicked", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABGamePlayWidget_OnResumeClicked_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UABGamePlayWidget_OnResumeClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABGamePlayWidget_OnResumeClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABGamePlayWidget_OnResumeClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABGamePlayWidget_OnRetryGameClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABGamePlayWidget_OnRetryGameClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABGamePlayWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABGamePlayWidget_OnRetryGameClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABGamePlayWidget, nullptr, "OnRetryGameClicked", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABGamePlayWidget_OnRetryGameClicked_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UABGamePlayWidget_OnRetryGameClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABGamePlayWidget_OnRetryGameClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABGamePlayWidget_OnRetryGameClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABGamePlayWidget_OnReturnToTitleClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABGamePlayWidget_OnReturnToTitleClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABGamePlayWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABGamePlayWidget_OnReturnToTitleClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABGamePlayWidget, nullptr, "OnReturnToTitleClicked", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABGamePlayWidget_OnReturnToTitleClicked_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UABGamePlayWidget_OnReturnToTitleClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABGamePlayWidget_OnReturnToTitleClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABGamePlayWidget_OnReturnToTitleClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UABGamePlayWidget_NoRegister()
	{
		return UABGamePlayWidget::StaticClass();
	}
	struct Z_Construct_UClass_UABGamePlayWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RetryGameButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RetryGameButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnToTitleButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnToTitleButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResumeButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ResumeButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UABGamePlayWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UABGamePlayWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UABGamePlayWidget_OnResumeClicked, "OnResumeClicked" }, // 2191226658
		{ &Z_Construct_UFunction_UABGamePlayWidget_OnRetryGameClicked, "OnRetryGameClicked" }, // 2973684921
		{ &Z_Construct_UFunction_UABGamePlayWidget_OnReturnToTitleClicked, "OnReturnToTitleClicked" }, // 2692466549
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABGamePlayWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ABGamePlayWidget.h" },
		{ "ModuleRelativePath", "Public/ABGamePlayWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABGamePlayWidget_Statics::NewProp_RetryGameButton_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ABGamePlayWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UABGamePlayWidget_Statics::NewProp_RetryGameButton = { "RetryGameButton", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UABGamePlayWidget, RetryGameButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UABGamePlayWidget_Statics::NewProp_RetryGameButton_MetaData, ARRAY_COUNT(Z_Construct_UClass_UABGamePlayWidget_Statics::NewProp_RetryGameButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABGamePlayWidget_Statics::NewProp_ReturnToTitleButton_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ABGamePlayWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UABGamePlayWidget_Statics::NewProp_ReturnToTitleButton = { "ReturnToTitleButton", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UABGamePlayWidget, ReturnToTitleButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UABGamePlayWidget_Statics::NewProp_ReturnToTitleButton_MetaData, ARRAY_COUNT(Z_Construct_UClass_UABGamePlayWidget_Statics::NewProp_ReturnToTitleButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABGamePlayWidget_Statics::NewProp_ResumeButton_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ABGamePlayWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UABGamePlayWidget_Statics::NewProp_ResumeButton = { "ResumeButton", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UABGamePlayWidget, ResumeButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UABGamePlayWidget_Statics::NewProp_ResumeButton_MetaData, ARRAY_COUNT(Z_Construct_UClass_UABGamePlayWidget_Statics::NewProp_ResumeButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UABGamePlayWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABGamePlayWidget_Statics::NewProp_RetryGameButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABGamePlayWidget_Statics::NewProp_ReturnToTitleButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABGamePlayWidget_Statics::NewProp_ResumeButton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UABGamePlayWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABGamePlayWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UABGamePlayWidget_Statics::ClassParams = {
		&UABGamePlayWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UABGamePlayWidget_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UABGamePlayWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UABGamePlayWidget_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UABGamePlayWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UABGamePlayWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UABGamePlayWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UABGamePlayWidget, 2791462862);
	template<> ARENABATTLE_API UClass* StaticClass<UABGamePlayWidget>()
	{
		return UABGamePlayWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UABGamePlayWidget(Z_Construct_UClass_UABGamePlayWidget, &UABGamePlayWidget::StaticClass, TEXT("/Script/ArenaBattle"), TEXT("UABGamePlayWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UABGamePlayWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
