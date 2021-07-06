// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASCharacter;
class USkeletalMeshComponent;
#ifdef SURVIVALGAME_SWeapon_generated_h
#error "SWeapon.generated.h already included, missing '#pragma once' in SWeapon.h"
#endif
#define SURVIVALGAME_SWeapon_generated_h

#define SurvivalGame_Source_SurvivalGame_Public_Items_SWeapon_h_25_SPARSE_DATA
#define SurvivalGame_Source_SurvivalGame_Public_Items_SWeapon_h_25_RPC_WRAPPERS \
	virtual bool ServerStopReload_Validate(); \
	virtual void ServerStopReload_Implementation(); \
	virtual bool ServerStartReload_Validate(); \
	virtual void ServerStartReload_Implementation(); \
	virtual void ClientStartReload_Implementation(); \
	virtual bool ServerHandleFiring_Validate(); \
	virtual void ServerHandleFiring_Implementation(); \
	virtual bool ServerStopFire_Validate(); \
	virtual void ServerStopFire_Implementation(); \
	virtual bool ServerStartFire_Validate(); \
	virtual void ServerStartFire_Implementation(); \
 \
	DECLARE_FUNCTION(execGetMaxAmmo); \
	DECLARE_FUNCTION(execGetMaxAmmoPerClip); \
	DECLARE_FUNCTION(execGetCurrentAmmoInClip); \
	DECLARE_FUNCTION(execGetCurrentAmmo); \
	DECLARE_FUNCTION(execServerStopReload); \
	DECLARE_FUNCTION(execServerStartReload); \
	DECLARE_FUNCTION(execOnRep_Reload); \
	DECLARE_FUNCTION(execClientStartReload); \
	DECLARE_FUNCTION(execOnRep_BurstCounter); \
	DECLARE_FUNCTION(execServerHandleFiring); \
	DECLARE_FUNCTION(execServerStopFire); \
	DECLARE_FUNCTION(execServerStartFire); \
	DECLARE_FUNCTION(execGetPawnOwner); \
	DECLARE_FUNCTION(execGetWeaponMesh); \
	DECLARE_FUNCTION(execOnRep_MyPawn);


#define SurvivalGame_Source_SurvivalGame_Public_Items_SWeapon_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMaxAmmo); \
	DECLARE_FUNCTION(execGetMaxAmmoPerClip); \
	DECLARE_FUNCTION(execGetCurrentAmmoInClip); \
	DECLARE_FUNCTION(execGetCurrentAmmo); \
	DECLARE_FUNCTION(execServerStopReload); \
	DECLARE_FUNCTION(execServerStartReload); \
	DECLARE_FUNCTION(execOnRep_Reload); \
	DECLARE_FUNCTION(execClientStartReload); \
	DECLARE_FUNCTION(execOnRep_BurstCounter); \
	DECLARE_FUNCTION(execServerHandleFiring); \
	DECLARE_FUNCTION(execServerStopFire); \
	DECLARE_FUNCTION(execServerStartFire); \
	DECLARE_FUNCTION(execGetPawnOwner); \
	DECLARE_FUNCTION(execGetWeaponMesh); \
	DECLARE_FUNCTION(execOnRep_MyPawn);


#define SurvivalGame_Source_SurvivalGame_Public_Items_SWeapon_h_25_EVENT_PARMS
#define SurvivalGame_Source_SurvivalGame_Public_Items_SWeapon_h_25_CALLBACK_WRAPPERS
#define SurvivalGame_Source_SurvivalGame_Public_Items_SWeapon_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASWeapon(); \
	friend struct Z_Construct_UClass_ASWeapon_Statics; \
public: \
	DECLARE_CLASS(ASWeapon, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/SurvivalGame"), NO_API) \
	DECLARE_SERIALIZER(ASWeapon) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		MyPawn=NETFIELD_REP_START, \
		BurstCounter, \
		bPendingReload, \
		CurrentAmmo, \
		CurrentAmmoInClip, \
		NETFIELD_REP_END=CurrentAmmoInClip	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define SurvivalGame_Source_SurvivalGame_Public_Items_SWeapon_h_25_INCLASS \
private: \
	static void StaticRegisterNativesASWeapon(); \
	friend struct Z_Construct_UClass_ASWeapon_Statics; \
public: \
	DECLARE_CLASS(ASWeapon, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/SurvivalGame"), NO_API) \
	DECLARE_SERIALIZER(ASWeapon) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		MyPawn=NETFIELD_REP_START, \
		BurstCounter, \
		bPendingReload, \
		CurrentAmmo, \
		CurrentAmmoInClip, \
		NETFIELD_REP_END=CurrentAmmoInClip	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define SurvivalGame_Source_SurvivalGame_Public_Items_SWeapon_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASWeapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASWeapon(ASWeapon&&); \
	NO_API ASWeapon(const ASWeapon&); \
public:


#define SurvivalGame_Source_SurvivalGame_Public_Items_SWeapon_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASWeapon(ASWeapon&&); \
	NO_API ASWeapon(const ASWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASWeapon)


#define SurvivalGame_Source_SurvivalGame_Public_Items_SWeapon_h_25_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ShotsPerMinute() { return STRUCT_OFFSET(ASWeapon, ShotsPerMinute); } \
	FORCEINLINE static uint32 __PPO__StorageSlot() { return STRUCT_OFFSET(ASWeapon, StorageSlot); } \
	FORCEINLINE static uint32 __PPO__MyPawn() { return STRUCT_OFFSET(ASWeapon, MyPawn); } \
	FORCEINLINE static uint32 __PPO__Mesh() { return STRUCT_OFFSET(ASWeapon, Mesh); } \
	FORCEINLINE static uint32 __PPO__FireSound() { return STRUCT_OFFSET(ASWeapon, FireSound); } \
	FORCEINLINE static uint32 __PPO__EquipSound() { return STRUCT_OFFSET(ASWeapon, EquipSound); } \
	FORCEINLINE static uint32 __PPO__MuzzleFX() { return STRUCT_OFFSET(ASWeapon, MuzzleFX); } \
	FORCEINLINE static uint32 __PPO__EquipAnim() { return STRUCT_OFFSET(ASWeapon, EquipAnim); } \
	FORCEINLINE static uint32 __PPO__FireAnim() { return STRUCT_OFFSET(ASWeapon, FireAnim); } \
	FORCEINLINE static uint32 __PPO__MuzzlePSC() { return STRUCT_OFFSET(ASWeapon, MuzzlePSC); } \
	FORCEINLINE static uint32 __PPO__MuzzleAttachPoint() { return STRUCT_OFFSET(ASWeapon, MuzzleAttachPoint); } \
	FORCEINLINE static uint32 __PPO__BurstCounter() { return STRUCT_OFFSET(ASWeapon, BurstCounter); } \
	FORCEINLINE static uint32 __PPO__OutOfAmmoSound() { return STRUCT_OFFSET(ASWeapon, OutOfAmmoSound); } \
	FORCEINLINE static uint32 __PPO__NoAnimReloadDuration() { return STRUCT_OFFSET(ASWeapon, NoAnimReloadDuration); } \
	FORCEINLINE static uint32 __PPO__NoEquipAnimDuration() { return STRUCT_OFFSET(ASWeapon, NoEquipAnimDuration); } \
	FORCEINLINE static uint32 __PPO__bPendingReload() { return STRUCT_OFFSET(ASWeapon, bPendingReload); } \
	FORCEINLINE static uint32 __PPO__CurrentAmmo() { return STRUCT_OFFSET(ASWeapon, CurrentAmmo); } \
	FORCEINLINE static uint32 __PPO__CurrentAmmoInClip() { return STRUCT_OFFSET(ASWeapon, CurrentAmmoInClip); } \
	FORCEINLINE static uint32 __PPO__StartAmmo() { return STRUCT_OFFSET(ASWeapon, StartAmmo); } \
	FORCEINLINE static uint32 __PPO__MaxAmmo() { return STRUCT_OFFSET(ASWeapon, MaxAmmo); } \
	FORCEINLINE static uint32 __PPO__MaxAmmoPerClip() { return STRUCT_OFFSET(ASWeapon, MaxAmmoPerClip); } \
	FORCEINLINE static uint32 __PPO__ReloadSound() { return STRUCT_OFFSET(ASWeapon, ReloadSound); } \
	FORCEINLINE static uint32 __PPO__ReloadAnim() { return STRUCT_OFFSET(ASWeapon, ReloadAnim); }


#define SurvivalGame_Source_SurvivalGame_Public_Items_SWeapon_h_22_PROLOG \
	SurvivalGame_Source_SurvivalGame_Public_Items_SWeapon_h_25_EVENT_PARMS


#define SurvivalGame_Source_SurvivalGame_Public_Items_SWeapon_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SurvivalGame_Source_SurvivalGame_Public_Items_SWeapon_h_25_PRIVATE_PROPERTY_OFFSET \
	SurvivalGame_Source_SurvivalGame_Public_Items_SWeapon_h_25_SPARSE_DATA \
	SurvivalGame_Source_SurvivalGame_Public_Items_SWeapon_h_25_RPC_WRAPPERS \
	SurvivalGame_Source_SurvivalGame_Public_Items_SWeapon_h_25_CALLBACK_WRAPPERS \
	SurvivalGame_Source_SurvivalGame_Public_Items_SWeapon_h_25_INCLASS \
	SurvivalGame_Source_SurvivalGame_Public_Items_SWeapon_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SurvivalGame_Source_SurvivalGame_Public_Items_SWeapon_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SurvivalGame_Source_SurvivalGame_Public_Items_SWeapon_h_25_PRIVATE_PROPERTY_OFFSET \
	SurvivalGame_Source_SurvivalGame_Public_Items_SWeapon_h_25_SPARSE_DATA \
	SurvivalGame_Source_SurvivalGame_Public_Items_SWeapon_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	SurvivalGame_Source_SurvivalGame_Public_Items_SWeapon_h_25_CALLBACK_WRAPPERS \
	SurvivalGame_Source_SurvivalGame_Public_Items_SWeapon_h_25_INCLASS_NO_PURE_DECLS \
	SurvivalGame_Source_SurvivalGame_Public_Items_SWeapon_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SURVIVALGAME_API UClass* StaticClass<class ASWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SurvivalGame_Source_SurvivalGame_Public_Items_SWeapon_h


#define FOREACH_ENUM_EWEAPONSTATE(op) \
	op(EWeaponState::Idle) \
	op(EWeaponState::Firing) \
	op(EWeaponState::Equipping) \
	op(EWeaponState::Reloading) 

enum class EWeaponState;
template<> SURVIVALGAME_API UEnum* StaticEnum<EWeaponState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
