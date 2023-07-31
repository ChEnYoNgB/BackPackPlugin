// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KnapsackPlugin/Public/BackPackWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBackPackWidget() {}
// Cross Module References
	KNAPSACKPLUGIN_API UClass* Z_Construct_UClass_UBackPackWidget_NoRegister();
	KNAPSACKPLUGIN_API UClass* Z_Construct_UClass_UBackPackWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_KnapsackPlugin();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	KNAPSACKPLUGIN_API UClass* Z_Construct_UClass_UBackPackComponent_NoRegister();
	KNAPSACKPLUGIN_API UClass* Z_Construct_UClass_UItemSlot_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWrapBox_NoRegister();
// End Cross Module References
	void UBackPackWidget::StaticRegisterNativesUBackPackWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBackPackWidget);
	UClass* Z_Construct_UClass_UBackPackWidget_NoRegister()
	{
		return UBackPackWidget::StaticClass();
	}
	struct Z_Construct_UClass_UBackPackWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackPackComponentClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_BackPackComponentClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemSlotClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ItemSlotClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemList_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackPackComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BackPackComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBackPackWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_KnapsackPlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBackPackWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "BackPackWidget.h" },
		{ "ModuleRelativePath", "Public/BackPackWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBackPackWidget_Statics::NewProp_BackPackComponentClass_MetaData[] = {
		{ "Category", "BasicSetting" },
		{ "ModuleRelativePath", "Public/BackPackWidget.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBackPackWidget_Statics::NewProp_BackPackComponentClass = { "BackPackComponentClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBackPackWidget, BackPackComponentClass), Z_Construct_UClass_UBackPackComponent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UBackPackWidget_Statics::NewProp_BackPackComponentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBackPackWidget_Statics::NewProp_BackPackComponentClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBackPackWidget_Statics::NewProp_ItemSlotClass_MetaData[] = {
		{ "Category", "BasicSetting" },
		{ "ModuleRelativePath", "Public/BackPackWidget.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBackPackWidget_Statics::NewProp_ItemSlotClass = { "ItemSlotClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBackPackWidget, ItemSlotClass), Z_Construct_UClass_UItemSlot_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UBackPackWidget_Statics::NewProp_ItemSlotClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBackPackWidget_Statics::NewProp_ItemSlotClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBackPackWidget_Statics::NewProp_ItemList_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BackPackWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBackPackWidget_Statics::NewProp_ItemList = { "ItemList", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBackPackWidget, ItemList), Z_Construct_UClass_UWrapBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBackPackWidget_Statics::NewProp_ItemList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBackPackWidget_Statics::NewProp_ItemList_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBackPackWidget_Statics::NewProp_BackPackComponent_MetaData[] = {
		{ "Category", "BackPackComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BackPackWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBackPackWidget_Statics::NewProp_BackPackComponent = { "BackPackComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBackPackWidget, BackPackComponent), Z_Construct_UClass_UBackPackComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBackPackWidget_Statics::NewProp_BackPackComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBackPackWidget_Statics::NewProp_BackPackComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBackPackWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackPackWidget_Statics::NewProp_BackPackComponentClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackPackWidget_Statics::NewProp_ItemSlotClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackPackWidget_Statics::NewProp_ItemList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackPackWidget_Statics::NewProp_BackPackComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBackPackWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBackPackWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBackPackWidget_Statics::ClassParams = {
		&UBackPackWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBackPackWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBackPackWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBackPackWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBackPackWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBackPackWidget()
	{
		if (!Z_Registration_Info_UClass_UBackPackWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBackPackWidget.OuterSingleton, Z_Construct_UClass_UBackPackWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBackPackWidget.OuterSingleton;
	}
	template<> KNAPSACKPLUGIN_API UClass* StaticClass<UBackPackWidget>()
	{
		return UBackPackWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBackPackWidget);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_KnapsackPlugin_Source_KnapsackPlugin_Public_BackPackWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_KnapsackPlugin_Source_KnapsackPlugin_Public_BackPackWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBackPackWidget, UBackPackWidget::StaticClass, TEXT("UBackPackWidget"), &Z_Registration_Info_UClass_UBackPackWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBackPackWidget), 653815358U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_KnapsackPlugin_Source_KnapsackPlugin_Public_BackPackWidget_h_4086471834(TEXT("/Script/KnapsackPlugin"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_KnapsackPlugin_Source_KnapsackPlugin_Public_BackPackWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_KnapsackPlugin_Source_KnapsackPlugin_Public_BackPackWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
