// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KnapsackPlugin/Public/ItemDragDrop.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemDragDrop() {}
// Cross Module References
	KNAPSACKPLUGIN_API UClass* Z_Construct_UClass_UItemDragDrop_NoRegister();
	KNAPSACKPLUGIN_API UClass* Z_Construct_UClass_UItemDragDrop();
	UMG_API UClass* Z_Construct_UClass_UDragDropOperation();
	UPackage* Z_Construct_UPackage__Script_KnapsackPlugin();
// End Cross Module References
	void UItemDragDrop::StaticRegisterNativesUItemDragDrop()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UItemDragDrop);
	UClass* Z_Construct_UClass_UItemDragDrop_NoRegister()
	{
		return UItemDragDrop::StaticClass();
	}
	struct Z_Construct_UClass_UItemDragDrop_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UItemDragDrop_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDragDropOperation,
		(UObject* (*)())Z_Construct_UPackage__Script_KnapsackPlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemDragDrop_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ItemDragDrop.h" },
		{ "ModuleRelativePath", "Public/ItemDragDrop.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UItemDragDrop_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemDragDrop>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemDragDrop_Statics::ClassParams = {
		&UItemDragDrop::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UItemDragDrop_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UItemDragDrop_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UItemDragDrop()
	{
		if (!Z_Registration_Info_UClass_UItemDragDrop.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemDragDrop.OuterSingleton, Z_Construct_UClass_UItemDragDrop_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UItemDragDrop.OuterSingleton;
	}
	template<> KNAPSACKPLUGIN_API UClass* StaticClass<UItemDragDrop>()
	{
		return UItemDragDrop::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UItemDragDrop);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_KnapsackPlugin_Source_KnapsackPlugin_Public_ItemDragDrop_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_KnapsackPlugin_Source_KnapsackPlugin_Public_ItemDragDrop_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UItemDragDrop, UItemDragDrop::StaticClass, TEXT("UItemDragDrop"), &Z_Registration_Info_UClass_UItemDragDrop, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemDragDrop), 2037478288U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_KnapsackPlugin_Source_KnapsackPlugin_Public_ItemDragDrop_h_221237963(TEXT("/Script/KnapsackPlugin"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_KnapsackPlugin_Source_KnapsackPlugin_Public_ItemDragDrop_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_KnapsackPlugin_Source_KnapsackPlugin_Public_ItemDragDrop_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
