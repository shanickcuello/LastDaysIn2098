// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef SURVIVALGAME_SCarryObjectComponent_generated_h
#error "SCarryObjectComponent.generated.h already included, missing '#pragma once' in SCarryObjectComponent.h"
#endif
#define SURVIVALGAME_SCarryObjectComponent_generated_h

#define SurvivalGame_Source_SurvivalGame_Public_Components_SCarryObjectComponent_h_15_SPARSE_DATA
#define SurvivalGame_Source_SurvivalGame_Public_Components_SCarryObjectComponent_h_15_RPC_WRAPPERS \
	virtual void OnRotateMulticast_Implementation(float DirectionYaw, float DirectionRoll); \
	virtual bool ServerRotate_Validate(float , float ); \
	virtual void ServerRotate_Implementation(float DirectionYaw, float DirectionRoll); \
	virtual bool ServerThrow_Validate(); \
	virtual void ServerThrow_Implementation(); \
	virtual void OnDropMulticast_Implementation(); \
	virtual bool ServerDrop_Validate(); \
	virtual void ServerDrop_Implementation(); \
	virtual void OnPickupMulticast_Implementation(AActor* FocusActor); \
	virtual bool ServerPickup_Validate(); \
	virtual void ServerPickup_Implementation(); \
 \
	DECLARE_FUNCTION(execOnRotateMulticast); \
	DECLARE_FUNCTION(execServerRotate); \
	DECLARE_FUNCTION(execServerThrow); \
	DECLARE_FUNCTION(execOnDropMulticast); \
	DECLARE_FUNCTION(execServerDrop); \
	DECLARE_FUNCTION(execOnPickupMulticast); \
	DECLARE_FUNCTION(execServerPickup);


#define SurvivalGame_Source_SurvivalGame_Public_Components_SCarryObjectComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRotateMulticast); \
	DECLARE_FUNCTION(execServerRotate); \
	DECLARE_FUNCTION(execServerThrow); \
	DECLARE_FUNCTION(execOnDropMulticast); \
	DECLARE_FUNCTION(execServerDrop); \
	DECLARE_FUNCTION(execOnPickupMulticast); \
	DECLARE_FUNCTION(execServerPickup);


#define SurvivalGame_Source_SurvivalGame_Public_Components_SCarryObjectComponent_h_15_EVENT_PARMS \
	struct SCarryObjectComponent_eventOnPickupMulticast_Parms \
	{ \
		AActor* FocusActor; \
	}; \
	struct SCarryObjectComponent_eventOnRotateMulticast_Parms \
	{ \
		float DirectionYaw; \
		float DirectionRoll; \
	}; \
	struct SCarryObjectComponent_eventServerRotate_Parms \
	{ \
		float DirectionYaw; \
		float DirectionRoll; \
	};


#define SurvivalGame_Source_SurvivalGame_Public_Components_SCarryObjectComponent_h_15_CALLBACK_WRAPPERS
#define SurvivalGame_Source_SurvivalGame_Public_Components_SCarryObjectComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSCarryObjectComponent(); \
	friend struct Z_Construct_UClass_USCarryObjectComponent_Statics; \
public: \
	DECLARE_CLASS(USCarryObjectComponent, USpringArmComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SurvivalGame"), NO_API) \
	DECLARE_SERIALIZER(USCarryObjectComponent)


#define SurvivalGame_Source_SurvivalGame_Public_Components_SCarryObjectComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUSCarryObjectComponent(); \
	friend struct Z_Construct_UClass_USCarryObjectComponent_Statics; \
public: \
	DECLARE_CLASS(USCarryObjectComponent, USpringArmComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SurvivalGame"), NO_API) \
	DECLARE_SERIALIZER(USCarryObjectComponent)


#define SurvivalGame_Source_SurvivalGame_Public_Components_SCarryObjectComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USCarryObjectComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USCarryObjectComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USCarryObjectComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USCarryObjectComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USCarryObjectComponent(USCarryObjectComponent&&); \
	NO_API USCarryObjectComponent(const USCarryObjectComponent&); \
public:


#define SurvivalGame_Source_SurvivalGame_Public_Components_SCarryObjectComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USCarryObjectComponent(USCarryObjectComponent&&); \
	NO_API USCarryObjectComponent(const USCarryObjectComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USCarryObjectComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USCarryObjectComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USCarryObjectComponent)


#define SurvivalGame_Source_SurvivalGame_Public_Components_SCarryObjectComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__RotateSpeed() { return STRUCT_OFFSET(USCarryObjectComponent, RotateSpeed); }


#define SurvivalGame_Source_SurvivalGame_Public_Components_SCarryObjectComponent_h_12_PROLOG \
	SurvivalGame_Source_SurvivalGame_Public_Components_SCarryObjectComponent_h_15_EVENT_PARMS


#define SurvivalGame_Source_SurvivalGame_Public_Components_SCarryObjectComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SurvivalGame_Source_SurvivalGame_Public_Components_SCarryObjectComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	SurvivalGame_Source_SurvivalGame_Public_Components_SCarryObjectComponent_h_15_SPARSE_DATA \
	SurvivalGame_Source_SurvivalGame_Public_Components_SCarryObjectComponent_h_15_RPC_WRAPPERS \
	SurvivalGame_Source_SurvivalGame_Public_Components_SCarryObjectComponent_h_15_CALLBACK_WRAPPERS \
	SurvivalGame_Source_SurvivalGame_Public_Components_SCarryObjectComponent_h_15_INCLASS \
	SurvivalGame_Source_SurvivalGame_Public_Components_SCarryObjectComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SurvivalGame_Source_SurvivalGame_Public_Components_SCarryObjectComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SurvivalGame_Source_SurvivalGame_Public_Components_SCarryObjectComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	SurvivalGame_Source_SurvivalGame_Public_Components_SCarryObjectComponent_h_15_SPARSE_DATA \
	SurvivalGame_Source_SurvivalGame_Public_Components_SCarryObjectComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	SurvivalGame_Source_SurvivalGame_Public_Components_SCarryObjectComponent_h_15_CALLBACK_WRAPPERS \
	SurvivalGame_Source_SurvivalGame_Public_Components_SCarryObjectComponent_h_15_INCLASS_NO_PURE_DECLS \
	SurvivalGame_Source_SurvivalGame_Public_Components_SCarryObjectComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SURVIVALGAME_API UClass* StaticClass<class USCarryObjectComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SurvivalGame_Source_SurvivalGame_Public_Components_SCarryObjectComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
