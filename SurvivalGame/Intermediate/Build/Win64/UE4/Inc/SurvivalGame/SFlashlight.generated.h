// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SURVIVALGAME_SFlashlight_generated_h
#error "SFlashlight.generated.h already included, missing '#pragma once' in SFlashlight.h"
#endif
#define SURVIVALGAME_SFlashlight_generated_h

#define SurvivalGame_Source_SurvivalGame_Public_Items_SFlashlight_h_15_SPARSE_DATA
#define SurvivalGame_Source_SurvivalGame_Public_Items_SFlashlight_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_IsActive);


#define SurvivalGame_Source_SurvivalGame_Public_Items_SFlashlight_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_IsActive);


#define SurvivalGame_Source_SurvivalGame_Public_Items_SFlashlight_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASFlashlight(); \
	friend struct Z_Construct_UClass_ASFlashlight_Statics; \
public: \
	DECLARE_CLASS(ASFlashlight, ASWeapon, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/SurvivalGame"), NO_API) \
	DECLARE_SERIALIZER(ASFlashlight) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bIsActive=NETFIELD_REP_START, \
		NETFIELD_REP_END=bIsActive	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define SurvivalGame_Source_SurvivalGame_Public_Items_SFlashlight_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASFlashlight(); \
	friend struct Z_Construct_UClass_ASFlashlight_Statics; \
public: \
	DECLARE_CLASS(ASFlashlight, ASWeapon, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/SurvivalGame"), NO_API) \
	DECLARE_SERIALIZER(ASFlashlight) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bIsActive=NETFIELD_REP_START, \
		NETFIELD_REP_END=bIsActive	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define SurvivalGame_Source_SurvivalGame_Public_Items_SFlashlight_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASFlashlight(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASFlashlight) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASFlashlight); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASFlashlight); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASFlashlight(ASFlashlight&&); \
	NO_API ASFlashlight(const ASFlashlight&); \
public:


#define SurvivalGame_Source_SurvivalGame_Public_Items_SFlashlight_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASFlashlight(ASFlashlight&&); \
	NO_API ASFlashlight(const ASFlashlight&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASFlashlight); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASFlashlight); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASFlashlight)


#define SurvivalGame_Source_SurvivalGame_Public_Items_SFlashlight_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__EmissiveParamName() { return STRUCT_OFFSET(ASFlashlight, EmissiveParamName); } \
	FORCEINLINE static uint32 __PPO__MaxEmissiveIntensity() { return STRUCT_OFFSET(ASFlashlight, MaxEmissiveIntensity); }


#define SurvivalGame_Source_SurvivalGame_Public_Items_SFlashlight_h_12_PROLOG
#define SurvivalGame_Source_SurvivalGame_Public_Items_SFlashlight_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SurvivalGame_Source_SurvivalGame_Public_Items_SFlashlight_h_15_PRIVATE_PROPERTY_OFFSET \
	SurvivalGame_Source_SurvivalGame_Public_Items_SFlashlight_h_15_SPARSE_DATA \
	SurvivalGame_Source_SurvivalGame_Public_Items_SFlashlight_h_15_RPC_WRAPPERS \
	SurvivalGame_Source_SurvivalGame_Public_Items_SFlashlight_h_15_INCLASS \
	SurvivalGame_Source_SurvivalGame_Public_Items_SFlashlight_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SurvivalGame_Source_SurvivalGame_Public_Items_SFlashlight_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SurvivalGame_Source_SurvivalGame_Public_Items_SFlashlight_h_15_PRIVATE_PROPERTY_OFFSET \
	SurvivalGame_Source_SurvivalGame_Public_Items_SFlashlight_h_15_SPARSE_DATA \
	SurvivalGame_Source_SurvivalGame_Public_Items_SFlashlight_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	SurvivalGame_Source_SurvivalGame_Public_Items_SFlashlight_h_15_INCLASS_NO_PURE_DECLS \
	SurvivalGame_Source_SurvivalGame_Public_Items_SFlashlight_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SURVIVALGAME_API UClass* StaticClass<class ASFlashlight>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SurvivalGame_Source_SurvivalGame_Public_Items_SFlashlight_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
