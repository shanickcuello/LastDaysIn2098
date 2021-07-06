// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector_NetQuantizeNormal;
struct FHitResult;
#ifdef SURVIVALGAME_SWeaponInstant_generated_h
#error "SWeaponInstant.generated.h already included, missing '#pragma once' in SWeaponInstant.h"
#endif
#define SURVIVALGAME_SWeaponInstant_generated_h

#define SurvivalGame_Source_SurvivalGame_Public_Items_SWeaponInstant_h_15_SPARSE_DATA
#define SurvivalGame_Source_SurvivalGame_Public_Items_SWeaponInstant_h_15_RPC_WRAPPERS \
	virtual bool ServerNotifyMiss_Validate(FVector_NetQuantizeNormal ); \
	virtual void ServerNotifyMiss_Implementation(FVector_NetQuantizeNormal ShootDir); \
	virtual bool ServerNotifyHit_Validate(const FHitResult , FVector_NetQuantizeNormal ); \
	virtual void ServerNotifyHit_Implementation(const FHitResult Impact, FVector_NetQuantizeNormal ShootDir); \
 \
	DECLARE_FUNCTION(execOnRep_HitLocation); \
	DECLARE_FUNCTION(execServerNotifyMiss); \
	DECLARE_FUNCTION(execServerNotifyHit);


#define SurvivalGame_Source_SurvivalGame_Public_Items_SWeaponInstant_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_HitLocation); \
	DECLARE_FUNCTION(execServerNotifyMiss); \
	DECLARE_FUNCTION(execServerNotifyHit);


#define SurvivalGame_Source_SurvivalGame_Public_Items_SWeaponInstant_h_15_EVENT_PARMS \
	struct SWeaponInstant_eventServerNotifyHit_Parms \
	{ \
		FHitResult Impact; \
		FVector_NetQuantizeNormal ShootDir; \
	}; \
	struct SWeaponInstant_eventServerNotifyMiss_Parms \
	{ \
		FVector_NetQuantizeNormal ShootDir; \
	};


#define SurvivalGame_Source_SurvivalGame_Public_Items_SWeaponInstant_h_15_CALLBACK_WRAPPERS
#define SurvivalGame_Source_SurvivalGame_Public_Items_SWeaponInstant_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASWeaponInstant(); \
	friend struct Z_Construct_UClass_ASWeaponInstant_Statics; \
public: \
	DECLARE_CLASS(ASWeaponInstant, ASWeapon, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/SurvivalGame"), NO_API) \
	DECLARE_SERIALIZER(ASWeaponInstant) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		HitImpactNotify=NETFIELD_REP_START, \
		NETFIELD_REP_END=HitImpactNotify	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define SurvivalGame_Source_SurvivalGame_Public_Items_SWeaponInstant_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASWeaponInstant(); \
	friend struct Z_Construct_UClass_ASWeaponInstant_Statics; \
public: \
	DECLARE_CLASS(ASWeaponInstant, ASWeapon, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/SurvivalGame"), NO_API) \
	DECLARE_SERIALIZER(ASWeaponInstant) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		HitImpactNotify=NETFIELD_REP_START, \
		NETFIELD_REP_END=HitImpactNotify	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define SurvivalGame_Source_SurvivalGame_Public_Items_SWeaponInstant_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASWeaponInstant(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASWeaponInstant) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASWeaponInstant); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASWeaponInstant); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASWeaponInstant(ASWeaponInstant&&); \
	NO_API ASWeaponInstant(const ASWeaponInstant&); \
public:


#define SurvivalGame_Source_SurvivalGame_Public_Items_SWeaponInstant_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASWeaponInstant(ASWeaponInstant&&); \
	NO_API ASWeaponInstant(const ASWeaponInstant&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASWeaponInstant); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASWeaponInstant); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASWeaponInstant)


#define SurvivalGame_Source_SurvivalGame_Public_Items_SWeaponInstant_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ImpactTemplate() { return STRUCT_OFFSET(ASWeaponInstant, ImpactTemplate); } \
	FORCEINLINE static uint32 __PPO__TrailTargetParam() { return STRUCT_OFFSET(ASWeaponInstant, TrailTargetParam); } \
	FORCEINLINE static uint32 __PPO__TrailFX() { return STRUCT_OFFSET(ASWeaponInstant, TrailFX); } \
	FORCEINLINE static uint32 __PPO__TracerFX() { return STRUCT_OFFSET(ASWeaponInstant, TracerFX); } \
	FORCEINLINE static uint32 __PPO__MinimumProjectileSpawnDistance() { return STRUCT_OFFSET(ASWeaponInstant, MinimumProjectileSpawnDistance); } \
	FORCEINLINE static uint32 __PPO__TracerRoundInterval() { return STRUCT_OFFSET(ASWeaponInstant, TracerRoundInterval); } \
	FORCEINLINE static uint32 __PPO__HitImpactNotify() { return STRUCT_OFFSET(ASWeaponInstant, HitImpactNotify); } \
	FORCEINLINE static uint32 __PPO__HitDamage() { return STRUCT_OFFSET(ASWeaponInstant, HitDamage); } \
	FORCEINLINE static uint32 __PPO__DamageType() { return STRUCT_OFFSET(ASWeaponInstant, DamageType); } \
	FORCEINLINE static uint32 __PPO__WeaponRange() { return STRUCT_OFFSET(ASWeaponInstant, WeaponRange); } \
	FORCEINLINE static uint32 __PPO__AllowedViewDotHitDir() { return STRUCT_OFFSET(ASWeaponInstant, AllowedViewDotHitDir); } \
	FORCEINLINE static uint32 __PPO__ClientSideHitLeeway() { return STRUCT_OFFSET(ASWeaponInstant, ClientSideHitLeeway); }


#define SurvivalGame_Source_SurvivalGame_Public_Items_SWeaponInstant_h_12_PROLOG \
	SurvivalGame_Source_SurvivalGame_Public_Items_SWeaponInstant_h_15_EVENT_PARMS


#define SurvivalGame_Source_SurvivalGame_Public_Items_SWeaponInstant_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SurvivalGame_Source_SurvivalGame_Public_Items_SWeaponInstant_h_15_PRIVATE_PROPERTY_OFFSET \
	SurvivalGame_Source_SurvivalGame_Public_Items_SWeaponInstant_h_15_SPARSE_DATA \
	SurvivalGame_Source_SurvivalGame_Public_Items_SWeaponInstant_h_15_RPC_WRAPPERS \
	SurvivalGame_Source_SurvivalGame_Public_Items_SWeaponInstant_h_15_CALLBACK_WRAPPERS \
	SurvivalGame_Source_SurvivalGame_Public_Items_SWeaponInstant_h_15_INCLASS \
	SurvivalGame_Source_SurvivalGame_Public_Items_SWeaponInstant_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SurvivalGame_Source_SurvivalGame_Public_Items_SWeaponInstant_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SurvivalGame_Source_SurvivalGame_Public_Items_SWeaponInstant_h_15_PRIVATE_PROPERTY_OFFSET \
	SurvivalGame_Source_SurvivalGame_Public_Items_SWeaponInstant_h_15_SPARSE_DATA \
	SurvivalGame_Source_SurvivalGame_Public_Items_SWeaponInstant_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	SurvivalGame_Source_SurvivalGame_Public_Items_SWeaponInstant_h_15_CALLBACK_WRAPPERS \
	SurvivalGame_Source_SurvivalGame_Public_Items_SWeaponInstant_h_15_INCLASS_NO_PURE_DECLS \
	SurvivalGame_Source_SurvivalGame_Public_Items_SWeaponInstant_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SURVIVALGAME_API UClass* StaticClass<class ASWeaponInstant>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SurvivalGame_Source_SurvivalGame_Public_Items_SWeaponInstant_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
