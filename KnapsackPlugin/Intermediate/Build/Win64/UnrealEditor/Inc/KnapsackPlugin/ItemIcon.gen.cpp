// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KnapsackPlugin/Public/ItemIcon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemIcon() {}
// Cross Module References
	KNAPSACKPLUGIN_API UClass* Z_Construct_UClass_UItemIcon_NoRegister();
	KNAPSACKPLUGIN_API UClass* Z_Construct_UClass_UItemIcon();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_KnapsackPlugin();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
// End Cross Module References
	void UItemIcon::StaticRegisterNativesUItemIcon()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UItemIcon);
	UClass* Z_Construct_UClass_UItemIcon_NoRegister()
	{
		return UItemIcon::StaticClass();
	}
	struct Z_Construct_UClass_UItemIcon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IconTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IconTexture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UItemIcon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_KnapsackPlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemIcon_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "ItemIcon.h" },
		{ "ModuleRelativePath", "Public/ItemIcon.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemIcon_Statics::NewProp_IconTexture_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ItemIcon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemIcon_Statics::NewProp_IconTexture = { "IconTexture", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UItemIcon, IconTexture), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UItemIcon_Statics::NewProp_IconTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItemIcon_Statics::NewProp_IconTexture_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItemIcon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemIcon_Statics::NewProp_IconTexture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UItemIcon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemIcon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemIcon_Statics::ClassParams = {
		&UItemIcon::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UItemIcon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UItemIcon_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UItemIcon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UItemIcon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UItemIcon()
	{
		if (!Z_Registration_Info_UClass_UItemIcon.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemIcon.OuterSingleton, Z_Construct_UClass_UItemIcon_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UItemIcon.OuterSingleton;
	}
	template<> KNAPSACKPLUGIN_API UClass* StaticClass<UItemIcon>()
	{
		return UItemIcon::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UItemIcon);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_KnapsackPlugin_Source_KnapsackPlugin_Public_ItemIcon_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_KnapsackPlugin_Source_KnapsackPlugin_Public_ItemIcon_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UItemIcon, UItemIcon::StaticClass, TEXT("UItemIcon"), &Z_Registration_Info_UClass_UItemIcon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemIcon), 1848325183U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_KnapsackPlugin_Source_KnapsackPlugin_Public_ItemIcon_h_3508381045(TEXT("/Script/KnapsackPlugin"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_KnapsackPlugin_Source_KnapsackPlugin_Public_ItemIcon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_KnapsackPlugin_Source_KnapsackPlugin_Public_ItemIcon_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
