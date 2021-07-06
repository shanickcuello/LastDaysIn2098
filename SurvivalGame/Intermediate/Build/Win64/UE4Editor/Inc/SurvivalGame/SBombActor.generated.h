// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SURVIVALGAME_SBombActor_generated_h
#error "SBombActor.generated.h already included, missing '#pragma once' in SBombActor.h"
#endif
#define SURVIVALGAME_SBombActor_generated_h

#define SurvivalGame_Source_SurvivalGame_Public_Items_SBombActor_h_20_SPARSE_DATA
#define SurvivalGame_Source_SurvivalGame_Public_Items_SBombActor_h_20_RPC_WRAPPERS \
	virtual void SimulateExplosion_Implementation(); \
	virtual void SimulateFuzeFX_Implementation(); \
 \
	DECLARE_FUNCTION(execSimulateExplosion); \
	DECLARE_FUNCTION(execSimulateFuzeFX);


#define SurvivalGame_Source_SurvivalGame_Public_Items_SBombActor_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SimulateExplosion_Implementation(); \
	virtual void SimulateFuzeFX_Implementation(); \
 \
	DECLARE_FUNCTION(execSimulateExplosion); \
	DECLARE_FUNCTION(execSimulateFuzeFX);


#define SurvivalGame_Source_SurvivalGame_Public_Items_SBombActor_h_20_EVENT_PARMS
#define SurvivalGame_Source_SurvivalGame_Public_Items_SBombActor_h_20_CALLBACK_WRAPPERS
#define SurvivalGame_Source_SurvivalGame_Public_Items_SBombActor_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBombActor(); \
	friend struct Z_Construct_UClass_ASBombActor_Statics; \
public: \
	DECLARE_CLASS(ASBombActor, ASUsableActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SurvivalGame"), NO_API) \
	DECLARE_SERIALIZER(ASBombActor)


#define SurvivalGame_Source_SurvivalGame_Public_Items_SBombActor_h_20_INCLASS \
private: \
	static void StaticRegisterNativesASBombActor(); \
	friend struct Z_Construct_UClass_ASBombActor_Statics; \
public: \
	DECLARE_CLASS(ASBombActor, ASUsableActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SurvivalGame"), NO_API) \
	DECLARE_SERIALIZER(ASBombActor)


#define SurvivalGame_Source_SurvivalGame_Public_Items_SBombActor_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBombActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBombActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBombActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBombActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBombActor(ASBombActor&&); \
	NO_API ASBombActor(const ASBombActor&); \
public:


#define SurvivalGame_Source_SurvivalGame_Public_Items_SBombActor_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBombActor(ASBombActor&&); \
	NO_API ASBombActor(const ASBombActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBombActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBombActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASBombActor)


#define SurvivalGame_Source_SurvivalGame_Public_Items_SBombActor_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ExplosionPCS() { return STRUCT_OFFSET(ASBombActor, ExplosionPCS); } \
	FORCEINLINE static uint32 __PPO__FuzePCS() { return STRUCT_OFFSET(ASBombActor, FuzePCS); } \
	FORCEINLINE static uint32 __PPO__AudioComp() { return STRUCT_OFFSET(ASBombActor, AudioComp); } \
	FORCEINLINE static uint32 __PPO__ExplosionFX() { return STRUCT_OFFSET(ASBombActor, ExplosionFX); } \
	FORCEINLINE static uint32 __PPO__FuzeFX() { return STRUCT_OFFSET(ASBombActor, FuzeFX); } \
	FORCEINLINE static uint32 __PPO__ExplosionSound() { return STRUCT_OFFSET(ASBombActor, ExplosionSound); } \
	FORCEINLINE static uint32 __PPO__FuzeSound() { return STRUCT_OFFSET(ASBombActor, FuzeSound); } \
	FORCEINLINE static uint32 __PPO__MaxFuzeTime() { return STRUCT_OFFSET(ASBombActor, MaxFuzeTime); } \
	FORCEINLINE static uint32 __PPO__ExplosionDamage() { return STRUCT_OFFSET(ASBombActor, ExplosionDamage); } \
	FORCEINLINE static uint32 __PPO__ExplosionRadius() { return STRUCT_OFFSET(ASBombActor, ExplosionRadius); } \
	FORCEINLINE static uint32 __PPO__DamageType() { return STRUCT_OFFSET(ASBombActor, DamageType); }


#define SurvivalGame_Source_SurvivalGame_Public_Items_SBombActor_h_17_PROLOG \
	SurvivalGame_Source_SurvivalGame_Public_Items_SBombActor_h_20_EVENT_PARMS


#define SurvivalGame_Source_SurvivalGame_Public_Items_SBombActor_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SurvivalGame_Source_SurvivalGame_Public_Items_SBombActor_h_20_PRIVATE_PROPERTY_OFFSET \
	SurvivalGame_Source_SurvivalGame_Public_Items_SBombActor_h_20_SPARSE_DATA \
	SurvivalGame_Source_SurvivalGame_Public_Items_SBombActor_h_20_RPC_WRAPPERS \
	SurvivalGame_Source_SurvivalGame_Public_Items_SBombActor_h_20_CALLBACK_WRAPPERS \
	SurvivalGame_Source_SurvivalGame_Public_Items_SBombActor_h_20_INCLASS \
	SurvivalGame_Source_SurvivalGame_Public_Items_SBombActor_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SurvivalGame_Source_SurvivalGame_Public_Items_SBombActor_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SurvivalGame_Source_SurvivalGame_Public_Items_SBombActor_h_20_PRIVATE_PROPERTY_OFFSET \
	SurvivalGame_Source_SurvivalGame_Public_Items_SBombActor_h_20_SPARSE_DATA \
	SurvivalGame_Source_SurvivalGame_Public_Items_SBombActor_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	SurvivalGame_Source_SurvivalGame_Public_Items_SBombActor_h_20_CALLBACK_WRAPPERS \
	SurvivalGame_Source_SurvivalGame_Public_Items_SBombActor_h_20_INCLASS_NO_PURE_DECLS \
	SurvivalGame_Source_SurvivalGame_Public_Items_SBombActor_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SURVIVALGAME_API UClass* StaticClass<class ASBombActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SurvivalGame_Source_SurvivalGame_Public_Items_SBombActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
