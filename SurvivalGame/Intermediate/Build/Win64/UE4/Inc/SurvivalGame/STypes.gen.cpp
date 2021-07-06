// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SurvivalGame/STypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTypes() {}
// Cross Module References
	SURVIVALGAME_API UEnum* Z_Construct_UEnum_SurvivalGame_EBotBehaviorType();
	UPackage* Z_Construct_UPackage__Script_SurvivalGame();
	SURVIVALGAME_API UEnum* Z_Construct_UEnum_SurvivalGame_EInventorySlot();
	SURVIVALGAME_API UScriptStruct* Z_Construct_UScriptStruct_FTakeHitInfo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASBaseCharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDamageEvent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPointDamageEvent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRadialDamageEvent();
// End Cross Module References
	static UEnum* EBotBehaviorType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SurvivalGame_EBotBehaviorType, Z_Construct_UPackage__Script_SurvivalGame(), TEXT("EBotBehaviorType"));
		}
		return Singleton;
	}
	template<> SURVIVALGAME_API UEnum* StaticEnum<EBotBehaviorType>()
	{
		return EBotBehaviorType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBotBehaviorType(EBotBehaviorType_StaticEnum, TEXT("/Script/SurvivalGame"), TEXT("EBotBehaviorType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SurvivalGame_EBotBehaviorType_Hash() { return 1347439627U; }
	UEnum* Z_Construct_UEnum_SurvivalGame_EBotBehaviorType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SurvivalGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBotBehaviorType"), 0, Get_Z_Construct_UEnum_SurvivalGame_EBotBehaviorType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBotBehaviorType::Passive", (int64)EBotBehaviorType::Passive },
				{ "EBotBehaviorType::Patrolling", (int64)EBotBehaviorType::Patrolling },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "STypes.h" },
				{ "Passive.Comment", "/* Does not move, remains in place until a player is spotted */" },
				{ "Passive.Name", "EBotBehaviorType::Passive" },
				{ "Passive.ToolTip", "Does not move, remains in place until a player is spotted" },
				{ "Patrolling.Comment", "/* Patrols a region until a player is spotted */" },
				{ "Patrolling.Name", "EBotBehaviorType::Patrolling" },
				{ "Patrolling.ToolTip", "Patrols a region until a player is spotted" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SurvivalGame,
				nullptr,
				"EBotBehaviorType",
				"EBotBehaviorType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EInventorySlot_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SurvivalGame_EInventorySlot, Z_Construct_UPackage__Script_SurvivalGame(), TEXT("EInventorySlot"));
		}
		return Singleton;
	}
	template<> SURVIVALGAME_API UEnum* StaticEnum<EInventorySlot>()
	{
		return EInventorySlot_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EInventorySlot(EInventorySlot_StaticEnum, TEXT("/Script/SurvivalGame"), TEXT("EInventorySlot"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SurvivalGame_EInventorySlot_Hash() { return 189603178U; }
	UEnum* Z_Construct_UEnum_SurvivalGame_EInventorySlot()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SurvivalGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EInventorySlot"), 0, Get_Z_Construct_UEnum_SurvivalGame_EInventorySlot_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EInventorySlot::Hands", (int64)EInventorySlot::Hands },
				{ "EInventorySlot::Primary", (int64)EInventorySlot::Primary },
				{ "EInventorySlot::Secondary", (int64)EInventorySlot::Secondary },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Hands.Comment", "/* For currently equipped items/weapons */" },
				{ "Hands.Name", "EInventorySlot::Hands" },
				{ "Hands.ToolTip", "For currently equipped items/weapons" },
				{ "ModuleRelativePath", "STypes.h" },
				{ "Primary.Comment", "/* For primary weapons on spine bone */" },
				{ "Primary.Name", "EInventorySlot::Primary" },
				{ "Primary.ToolTip", "For primary weapons on spine bone" },
				{ "Secondary.Comment", "/* Storage for small items like flashlight on pelvis */" },
				{ "Secondary.Name", "EInventorySlot::Secondary" },
				{ "Secondary.ToolTip", "Storage for small items like flashlight on pelvis" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SurvivalGame,
				nullptr,
				"EInventorySlot",
				"EInventorySlot",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FTakeHitInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SURVIVALGAME_API uint32 Get_Z_Construct_UScriptStruct_FTakeHitInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTakeHitInfo, Z_Construct_UPackage__Script_SurvivalGame(), TEXT("TakeHitInfo"), sizeof(FTakeHitInfo), Get_Z_Construct_UScriptStruct_FTakeHitInfo_Hash());
	}
	return Singleton;
}
template<> SURVIVALGAME_API UScriptStruct* StaticStruct<FTakeHitInfo>()
{
	return FTakeHitInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTakeHitInfo(FTakeHitInfo::StaticStruct, TEXT("/Script/SurvivalGame"), TEXT("TakeHitInfo"), false, nullptr, nullptr);
static struct FScriptStruct_SurvivalGame_StaticRegisterNativesFTakeHitInfo
{
	FScriptStruct_SurvivalGame_StaticRegisterNativesFTakeHitInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TakeHitInfo")),new UScriptStruct::TCppStructOps<FTakeHitInfo>);
	}
} ScriptStruct_SurvivalGame_StaticRegisterNativesFTakeHitInfo;
	struct Z_Construct_UScriptStruct_FTakeHitInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActualDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ActualDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageTypeClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DamageTypeClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PawnInstigator_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_PawnInstigator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageCauser_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_DamageCauser;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageEventClassID_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DamageEventClassID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bKilled_MetaData[];
#endif
		static void NewProp_bKilled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bKilled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnsureReplicationByte_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EnsureReplicationByte;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeneralDamageEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GeneralDamageEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointDamageEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PointDamageEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RadialDamageEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RadialDamageEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTakeHitInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "STypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTakeHitInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_ActualDamage_MetaData[] = {
		{ "ModuleRelativePath", "STypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_ActualDamage = { "ActualDamage", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTakeHitInfo, ActualDamage), METADATA_PARAMS(Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_ActualDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_ActualDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_DamageTypeClass_MetaData[] = {
		{ "ModuleRelativePath", "STypes.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_DamageTypeClass = { "DamageTypeClass", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTakeHitInfo, DamageTypeClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_DamageTypeClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_DamageTypeClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_PawnInstigator_MetaData[] = {
		{ "ModuleRelativePath", "STypes.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_PawnInstigator = { "PawnInstigator", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTakeHitInfo, PawnInstigator), Z_Construct_UClass_ASBaseCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_PawnInstigator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_PawnInstigator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_DamageCauser_MetaData[] = {
		{ "ModuleRelativePath", "STypes.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTakeHitInfo, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_DamageCauser_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_DamageCauser_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_DamageEventClassID_MetaData[] = {
		{ "ModuleRelativePath", "STypes.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_DamageEventClassID = { "DamageEventClassID", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTakeHitInfo, DamageEventClassID), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_DamageEventClassID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_DamageEventClassID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_bKilled_MetaData[] = {
		{ "ModuleRelativePath", "STypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_bKilled_SetBit(void* Obj)
	{
		((FTakeHitInfo*)Obj)->bKilled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_bKilled = { "bKilled", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTakeHitInfo), &Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_bKilled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_bKilled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_bKilled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_EnsureReplicationByte_MetaData[] = {
		{ "ModuleRelativePath", "STypes.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_EnsureReplicationByte = { "EnsureReplicationByte", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTakeHitInfo, EnsureReplicationByte), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_EnsureReplicationByte_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_EnsureReplicationByte_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_GeneralDamageEvent_MetaData[] = {
		{ "ModuleRelativePath", "STypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_GeneralDamageEvent = { "GeneralDamageEvent", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTakeHitInfo, GeneralDamageEvent), Z_Construct_UScriptStruct_FDamageEvent, METADATA_PARAMS(Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_GeneralDamageEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_GeneralDamageEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_PointDamageEvent_MetaData[] = {
		{ "ModuleRelativePath", "STypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_PointDamageEvent = { "PointDamageEvent", nullptr, (EPropertyFlags)0x0040008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTakeHitInfo, PointDamageEvent), Z_Construct_UScriptStruct_FPointDamageEvent, METADATA_PARAMS(Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_PointDamageEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_PointDamageEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_RadialDamageEvent_MetaData[] = {
		{ "ModuleRelativePath", "STypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_RadialDamageEvent = { "RadialDamageEvent", nullptr, (EPropertyFlags)0x0040008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTakeHitInfo, RadialDamageEvent), Z_Construct_UScriptStruct_FRadialDamageEvent, METADATA_PARAMS(Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_RadialDamageEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_RadialDamageEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTakeHitInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_ActualDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_DamageTypeClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_PawnInstigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_DamageCauser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_DamageEventClassID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_bKilled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_EnsureReplicationByte,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_GeneralDamageEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_PointDamageEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTakeHitInfo_Statics::NewProp_RadialDamageEvent,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTakeHitInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SurvivalGame,
		nullptr,
		&NewStructOps,
		"TakeHitInfo",
		sizeof(FTakeHitInfo),
		alignof(FTakeHitInfo),
		Z_Construct_UScriptStruct_FTakeHitInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTakeHitInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTakeHitInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTakeHitInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTakeHitInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTakeHitInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SurvivalGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TakeHitInfo"), sizeof(FTakeHitInfo), Get_Z_Construct_UScriptStruct_FTakeHitInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTakeHitInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTakeHitInfo_Hash() { return 509223909U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
