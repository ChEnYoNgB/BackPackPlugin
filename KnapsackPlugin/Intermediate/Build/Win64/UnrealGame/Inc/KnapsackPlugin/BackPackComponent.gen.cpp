// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KnapsackPlugin/Public/BackPackComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBackPackComponent() {}
// Cross Module References
	KNAPSACKPLUGIN_API UClass* Z_Construct_UClass_UBackPackComponent_NoRegister();
	KNAPSACKPLUGIN_API UClass* Z_Construct_UClass_UBackPackComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_KnapsackPlugin();
	KNAPSACKPLUGIN_API UClass* Z_Construct_UClass_ABasicItem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	void UBackPackComponent::StaticRegisterNativesUBackPackComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBackPackComponent);
	UClass* Z_Construct_UClass_UBackPackComponent_NoRegister()
	{
		return UBackPackComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBackPackComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsThrowAll_MetaData[];
#endif
		static void NewProp_bIsThrowAll_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsThrowAll;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsFull_MetaData[];
#endif
		static void NewProp_bIsFull_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFull;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmetyItem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EmetyItem;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemArray;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerCharacter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmptyTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EmptyTexture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBackPackComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_KnapsackPlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBackPackComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "BackPackComponent.h" },
		{ "ModuleRelativePath", "Public/BackPackComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBackPackComponent_Statics::NewProp_bIsThrowAll_MetaData[] = {
		{ "ModuleRelativePath", "Public/BackPackComponent.h" },
	};
#endif
	void Z_Construct_UClass_UBackPackComponent_Statics::NewProp_bIsThrowAll_SetBit(void* Obj)
	{
		((UBackPackComponent*)Obj)->bIsThrowAll = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBackPackComponent_Statics::NewProp_bIsThrowAll = { "bIsThrowAll", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBackPackComponent), &Z_Construct_UClass_UBackPackComponent_Statics::NewProp_bIsThrowAll_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBackPackComponent_Statics::NewProp_bIsThrowAll_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBackPackComponent_Statics::NewProp_bIsThrowAll_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBackPackComponent_Statics::NewProp_MaxSize_MetaData[] = {
		{ "Category", "Knapsack" },
		{ "ModuleRelativePath", "Public/BackPackComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBackPackComponent_Statics::NewProp_MaxSize = { "MaxSize", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBackPackComponent, MaxSize), METADATA_PARAMS(Z_Construct_UClass_UBackPackComponent_Statics::NewProp_MaxSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBackPackComponent_Statics::NewProp_MaxSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBackPackComponent_Statics::NewProp_bIsFull_MetaData[] = {
		{ "Category", "Knapsack" },
		{ "ModuleRelativePath", "Public/BackPackComponent.h" },
	};
#endif
	void Z_Construct_UClass_UBackPackComponent_Statics::NewProp_bIsFull_SetBit(void* Obj)
	{
		((UBackPackComponent*)Obj)->bIsFull = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBackPackComponent_Statics::NewProp_bIsFull = { "bIsFull", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBackPackComponent), &Z_Construct_UClass_UBackPackComponent_Statics::NewProp_bIsFull_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBackPackComponent_Statics::NewProp_bIsFull_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBackPackComponent_Statics::NewProp_bIsFull_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBackPackComponent_Statics::NewProp_EmetyItem_MetaData[] = {
		{ "Category", "Knapsack" },
		{ "ModuleRelativePath", "Public/BackPackComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBackPackComponent_Statics::NewProp_EmetyItem = { "EmetyItem", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBackPackComponent, EmetyItem), Z_Construct_UClass_ABasicItem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBackPackComponent_Statics::NewProp_EmetyItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBackPackComponent_Statics::NewProp_EmetyItem_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBackPackComponent_Statics::NewProp_ItemArray_Inner = { "ItemArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ABasicItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBackPackComponent_Statics::NewProp_ItemArray_MetaData[] = {
		{ "Category", "Knapsack" },
		{ "ModuleRelativePath", "Public/BackPackComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBackPackComponent_Statics::NewProp_ItemArray = { "ItemArray", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBackPackComponent, ItemArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBackPackComponent_Statics::NewProp_ItemArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBackPackComponent_Statics::NewProp_ItemArray_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBackPackComponent_Statics::NewProp_PlayerCharacter_MetaData[] = {
		{ "Category", "Knapsack" },
		{ "ModuleRelativePath", "Public/BackPackComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBackPackComponent_Statics::NewProp_PlayerCharacter = { "PlayerCharacter", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBackPackComponent, PlayerCharacter), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBackPackComponent_Statics::NewProp_PlayerCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBackPackComponent_Statics::NewProp_PlayerCharacter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBackPackComponent_Statics::NewProp_PlayerController_MetaData[] = {
		{ "Category", "Knapsack" },
		{ "ModuleRelativePath", "Public/BackPackComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBackPackComponent_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBackPackComponent, PlayerController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBackPackComponent_Statics::NewProp_PlayerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBackPackComponent_Statics::NewProp_PlayerController_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBackPackComponent_Statics::NewProp_EmptyTexture_MetaData[] = {
		{ "Category", "Knapsack" },
		{ "ModuleRelativePath", "Public/BackPackComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBackPackComponent_Statics::NewProp_EmptyTexture = { "EmptyTexture", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBackPackComponent, EmptyTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBackPackComponent_Statics::NewProp_EmptyTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBackPackComponent_Statics::NewProp_EmptyTexture_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBackPackComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackPackComponent_Statics::NewProp_bIsThrowAll,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackPackComponent_Statics::NewProp_MaxSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackPackComponent_Statics::NewProp_bIsFull,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackPackComponent_Statics::NewProp_EmetyItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackPackComponent_Statics::NewProp_ItemArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackPackComponent_Statics::NewProp_ItemArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackPackComponent_Statics::NewProp_PlayerCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackPackComponent_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackPackComponent_Statics::NewProp_EmptyTexture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBackPackComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBackPackComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBackPackComponent_Statics::ClassParams = {
		&UBackPackComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBackPackComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBackPackComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBackPackComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBackPackComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBackPackComponent()
	{
		if (!Z_Registration_Info_UClass_UBackPackComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBackPackComponent.OuterSingleton, Z_Construct_UClass_UBackPackComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBackPackComponent.OuterSingleton;
	}
	template<> KNAPSACKPLUGIN_API UClass* StaticClass<UBackPackComponent>()
	{
		return UBackPackComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBackPackComponent);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_KnapsackPlugin_Source_KnapsackPlugin_Public_BackPackComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_KnapsackPlugin_Source_KnapsackPlugin_Public_BackPackComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBackPackComponent, UBackPackComponent::StaticClass, TEXT("UBackPackComponent"), &Z_Registration_Info_UClass_UBackPackComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBackPackComponent), 2794023116U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_KnapsackPlugin_Source_KnapsackPlugin_Public_BackPackComponent_h_781431389(TEXT("/Script/KnapsackPlugin"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_KnapsackPlugin_Source_KnapsackPlugin_Public_BackPackComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_KnapsackPlugin_Source_KnapsackPlugin_Public_BackPackComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
