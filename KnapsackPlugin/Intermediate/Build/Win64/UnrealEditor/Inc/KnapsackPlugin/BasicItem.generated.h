// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef KNAPSACKPLUGIN_BasicItem_generated_h
#error "BasicItem.generated.h already included, missing '#pragma once' in BasicItem.h"
#endif
#define KNAPSACKPLUGIN_BasicItem_generated_h

#define FID_HostProject_Plugins_KnapsackPlugin_Source_KnapsackPlugin_Public_BasicItem_h_17_SPARSE_DATA
#define FID_HostProject_Plugins_KnapsackPlugin_Source_KnapsackPlugin_Public_BasicItem_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnSphereEndOverlap); \
	DECLARE_FUNCTION(execOnSphereOverlap);


#define FID_HostProject_Plugins_KnapsackPlugin_Source_KnapsackPlugin_Public_BasicItem_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnSphereEndOverlap); \
	DECLARE_FUNCTION(execOnSphereOverlap);


#define FID_HostProject_Plugins_KnapsackPlugin_Source_KnapsackPlugin_Public_BasicItem_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABasicItem(); \
	friend struct Z_Construct_UClass_ABasicItem_Statics; \
public: \
	DECLARE_CLASS(ABasicItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/KnapsackPlugin"), NO_API) \
	DECLARE_SERIALIZER(ABasicItem)


#define FID_HostProject_Plugins_KnapsackPlugin_Source_KnapsackPlugin_Public_BasicItem_h_17_INCLASS \
private: \
	static void StaticRegisterNativesABasicItem(); \
	friend struct Z_Construct_UClass_ABasicItem_Statics; \
public: \
	DECLARE_CLASS(ABasicItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/KnapsackPlugin"), NO_API) \
	DECLARE_SERIALIZER(ABasicItem)


#define FID_HostProject_Plugins_KnapsackPlugin_Source_KnapsackPlugin_Public_BasicItem_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABasicItem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABasicItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasicItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasicItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABasicItem(ABasicItem&&); \
	NO_API ABasicItem(const ABasicItem&); \
public:


#define FID_HostProject_Plugins_KnapsackPlugin_Source_KnapsackPlugin_Public_BasicItem_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABasicItem(ABasicItem&&); \
	NO_API ABasicItem(const ABasicItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasicItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasicItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABasicItem)


#define FID_HostProject_Plugins_KnapsackPlugin_Source_KnapsackPlugin_Public_BasicItem_h_14_PROLOG
#define FID_HostProject_Plugins_KnapsackPlugin_Source_KnapsackPlugin_Public_BasicItem_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_KnapsackPlugin_Source_KnapsackPlugin_Public_BasicItem_h_17_SPARSE_DATA \
	FID_HostProject_Plugins_KnapsackPlugin_Source_KnapsackPlugin_Public_BasicItem_h_17_RPC_WRAPPERS \
	FID_HostProject_Plugins_KnapsackPlugin_Source_KnapsackPlugin_Public_BasicItem_h_17_INCLASS \
	FID_HostProject_Plugins_KnapsackPlugin_Source_KnapsackPlugin_Public_BasicItem_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_KnapsackPlugin_Source_KnapsackPlugin_Public_BasicItem_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_KnapsackPlugin_Source_KnapsackPlugin_Public_BasicItem_h_17_SPARSE_DATA \
	FID_HostProject_Plugins_KnapsackPlugin_Source_KnapsackPlugin_Public_BasicItem_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_KnapsackPlugin_Source_KnapsackPlugin_Public_BasicItem_h_17_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_KnapsackPlugin_Source_KnapsackPlugin_Public_BasicItem_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KNAPSACKPLUGIN_API UClass* StaticClass<class ABasicItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_KnapsackPlugin_Source_KnapsackPlugin_Public_BasicItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
