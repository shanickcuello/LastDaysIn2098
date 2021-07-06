// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SURVIVALGAME_STypes_generated_h
#error "STypes.generated.h already included, missing '#pragma once' in STypes.h"
#endif
#define SURVIVALGAME_STypes_generated_h

#define SurvivalGame_Source_SurvivalGame_STypes_h_35_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTakeHitInfo_Statics; \
	SURVIVALGAME_API static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__EnsureReplicationByte() { return STRUCT_OFFSET(FTakeHitInfo, EnsureReplicationByte); } \
	FORCEINLINE static uint32 __PPO__GeneralDamageEvent() { return STRUCT_OFFSET(FTakeHitInfo, GeneralDamageEvent); } \
	FORCEINLINE static uint32 __PPO__PointDamageEvent() { return STRUCT_OFFSET(FTakeHitInfo, PointDamageEvent); } \
	FORCEINLINE static uint32 __PPO__RadialDamageEvent() { return STRUCT_OFFSET(FTakeHitInfo, RadialDamageEvent); }


template<> SURVIVALGAME_API UScriptStruct* StaticStruct<struct FTakeHitInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SurvivalGame_Source_SurvivalGame_STypes_h


#define FOREACH_ENUM_EBOTBEHAVIORTYPE(op) \
	op(EBotBehaviorType::Passive) \
	op(EBotBehaviorType::Patrolling) 

enum class EBotBehaviorType : uint8;
template<> SURVIVALGAME_API UEnum* StaticEnum<EBotBehaviorType>();

#define FOREACH_ENUM_EINVENTORYSLOT(op) \
	op(EInventorySlot::Hands) \
	op(EInventorySlot::Primary) \
	op(EInventorySlot::Secondary) 

enum class EInventorySlot : uint8;
template<> SURVIVALGAME_API UEnum* StaticEnum<EInventorySlot>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
