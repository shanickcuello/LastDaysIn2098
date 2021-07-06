// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASWeapon;
#ifdef SURVIVALGAME_SCharacter_generated_h
#error "SCharacter.generated.h already included, missing '#pragma once' in SCharacter.h"
#endif
#define SURVIVALGAME_SCharacter_generated_h

#define SurvivalGame_Source_SurvivalGame_Public_Player_SCharacter_h_15_SPARSE_DATA
#define SurvivalGame_Source_SurvivalGame_Public_Player_SCharacter_h_15_RPC_WRAPPERS \
	virtual bool ServerEquipWeapon_Validate(ASWeapon* ); \
	virtual void ServerEquipWeapon_Implementation(ASWeapon* Weapon); \
	virtual bool ServerDropWeapon_Validate(); \
	virtual void ServerDropWeapon_Implementation(); \
	virtual bool ServerUse_Validate(); \
	virtual void ServerUse_Implementation(); \
	virtual bool ServerSetIsJumping_Validate(bool ); \
	virtual void ServerSetIsJumping_Implementation(bool NewJumping); \
 \
	DECLARE_FUNCTION(execSwapToNewWeaponMesh); \
	DECLARE_FUNCTION(execOnRep_CurrentWeapon); \
	DECLARE_FUNCTION(execServerEquipWeapon); \
	DECLARE_FUNCTION(execIsFiring); \
	DECLARE_FUNCTION(execGetCurrentWeapon); \
	DECLARE_FUNCTION(execServerDropWeapon); \
	DECLARE_FUNCTION(execRestoreCondition); \
	DECLARE_FUNCTION(execGetMaxHunger); \
	DECLARE_FUNCTION(execGetHunger); \
	DECLARE_FUNCTION(execServerUse); \
	DECLARE_FUNCTION(execServerSetIsJumping); \
	DECLARE_FUNCTION(execIsInitiatedJump); \
	DECLARE_FUNCTION(execMakePawnNoise); \
	DECLARE_FUNCTION(execGetLastMakeNoiseTime); \
	DECLARE_FUNCTION(execGetLastNoiseLoudness);


#define SurvivalGame_Source_SurvivalGame_Public_Player_SCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSwapToNewWeaponMesh); \
	DECLARE_FUNCTION(execOnRep_CurrentWeapon); \
	DECLARE_FUNCTION(execServerEquipWeapon); \
	DECLARE_FUNCTION(execIsFiring); \
	DECLARE_FUNCTION(execGetCurrentWeapon); \
	DECLARE_FUNCTION(execServerDropWeapon); \
	DECLARE_FUNCTION(execRestoreCondition); \
	DECLARE_FUNCTION(execGetMaxHunger); \
	DECLARE_FUNCTION(execGetHunger); \
	DECLARE_FUNCTION(execServerUse); \
	DECLARE_FUNCTION(execServerSetIsJumping); \
	DECLARE_FUNCTION(execIsInitiatedJump); \
	DECLARE_FUNCTION(execMakePawnNoise); \
	DECLARE_FUNCTION(execGetLastMakeNoiseTime); \
	DECLARE_FUNCTION(execGetLastNoiseLoudness);


#define SurvivalGame_Source_SurvivalGame_Public_Player_SCharacter_h_15_EVENT_PARMS \
	struct SCharacter_eventServerEquipWeapon_Parms \
	{ \
		ASWeapon* Weapon; \
	}; \
	struct SCharacter_eventServerSetIsJumping_Parms \
	{ \
		bool NewJumping; \
	};


#define SurvivalGame_Source_SurvivalGame_Public_Player_SCharacter_h_15_CALLBACK_WRAPPERS
#define SurvivalGame_Source_SurvivalGame_Public_Player_SCharacter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASCharacter(); \
	friend struct Z_Construct_UClass_ASCharacter_Statics; \
public: \
	DECLARE_CLASS(ASCharacter, ASBaseCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SurvivalGame"), NO_API) \
	DECLARE_SERIALIZER(ASCharacter) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bIsJumping=NETFIELD_REP_START, \
		Hunger, \
		Inventory, \
		CurrentWeapon, \
		NETFIELD_REP_END=CurrentWeapon	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define SurvivalGame_Source_SurvivalGame_Public_Player_SCharacter_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASCharacter(); \
	friend struct Z_Construct_UClass_ASCharacter_Statics; \
public: \
	DECLARE_CLASS(ASCharacter, ASBaseCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SurvivalGame"), NO_API) \
	DECLARE_SERIALIZER(ASCharacter) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bIsJumping=NETFIELD_REP_START, \
		Hunger, \
		Inventory, \
		CurrentWeapon, \
		NETFIELD_REP_END=CurrentWeapon	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define SurvivalGame_Source_SurvivalGame_Public_Player_SCharacter_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASCharacter(ASCharacter&&); \
	NO_API ASCharacter(const ASCharacter&); \
public:


#define SurvivalGame_Source_SurvivalGame_Public_Player_SCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASCharacter(ASCharacter&&); \
	NO_API ASCharacter(const ASCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASCharacter)


#define SurvivalGame_Source_SurvivalGame_Public_Player_SCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoomComp() { return STRUCT_OFFSET(ASCharacter, CameraBoomComp); } \
	FORCEINLINE static uint32 __PPO__CameraComp() { return STRUCT_OFFSET(ASCharacter, CameraComp); } \
	FORCEINLINE static uint32 __PPO__CarriedObjectComp() { return STRUCT_OFFSET(ASCharacter, CarriedObjectComp); } \
	FORCEINLINE static uint32 __PPO__WeaponAttachPoint() { return STRUCT_OFFSET(ASCharacter, WeaponAttachPoint); } \
	FORCEINLINE static uint32 __PPO__PelvisAttachPoint() { return STRUCT_OFFSET(ASCharacter, PelvisAttachPoint); } \
	FORCEINLINE static uint32 __PPO__SpineAttachPoint() { return STRUCT_OFFSET(ASCharacter, SpineAttachPoint); } \
	FORCEINLINE static uint32 __PPO__DropWeaponMaxDistance() { return STRUCT_OFFSET(ASCharacter, DropWeaponMaxDistance); }


#define SurvivalGame_Source_SurvivalGame_Public_Player_SCharacter_h_12_PROLOG \
	SurvivalGame_Source_SurvivalGame_Public_Player_SCharacter_h_15_EVENT_PARMS


#define SurvivalGame_Source_SurvivalGame_Public_Player_SCharacter_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SurvivalGame_Source_SurvivalGame_Public_Player_SCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	SurvivalGame_Source_SurvivalGame_Public_Player_SCharacter_h_15_SPARSE_DATA \
	SurvivalGame_Source_SurvivalGame_Public_Player_SCharacter_h_15_RPC_WRAPPERS \
	SurvivalGame_Source_SurvivalGame_Public_Player_SCharacter_h_15_CALLBACK_WRAPPERS \
	SurvivalGame_Source_SurvivalGame_Public_Player_SCharacter_h_15_INCLASS \
	SurvivalGame_Source_SurvivalGame_Public_Player_SCharacter_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SurvivalGame_Source_SurvivalGame_Public_Player_SCharacter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SurvivalGame_Source_SurvivalGame_Public_Player_SCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	SurvivalGame_Source_SurvivalGame_Public_Player_SCharacter_h_15_SPARSE_DATA \
	SurvivalGame_Source_SurvivalGame_Public_Player_SCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	SurvivalGame_Source_SurvivalGame_Public_Player_SCharacter_h_15_CALLBACK_WRAPPERS \
	SurvivalGame_Source_SurvivalGame_Public_Player_SCharacter_h_15_INCLASS_NO_PURE_DECLS \
	SurvivalGame_Source_SurvivalGame_Public_Player_SCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SURVIVALGAME_API UClass* StaticClass<class ASCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SurvivalGame_Source_SurvivalGame_Public_Player_SCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
