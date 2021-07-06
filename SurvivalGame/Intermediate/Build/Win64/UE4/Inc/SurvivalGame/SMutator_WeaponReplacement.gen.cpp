// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SurvivalGame/Public/Mutators/SMutator_WeaponReplacement.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMutator_WeaponReplacement() {}
// Cross Module References
	SURVIVALGAME_API UScriptStruct* Z_Construct_UScriptStruct_FReplacementInfo();
	UPackage* Z_Construct_UPackage__Script_SurvivalGame();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASWeapon_NoRegister();
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASMutator_WeaponReplacement_NoRegister();
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASMutator_WeaponReplacement();
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASMutator();
// End Cross Module References
class UScriptStruct* FReplacementInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SURVIVALGAME_API uint32 Get_Z_Construct_UScriptStruct_FReplacementInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FReplacementInfo, Z_Construct_UPackage__Script_SurvivalGame(), TEXT("ReplacementInfo"), sizeof(FReplacementInfo), Get_Z_Construct_UScriptStruct_FReplacementInfo_Hash());
	}
	return Singleton;
}
template<> SURVIVALGAME_API UScriptStruct* StaticStruct<FReplacementInfo>()
{
	return FReplacementInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FReplacementInfo(FReplacementInfo::StaticStruct, TEXT("/Script/SurvivalGame"), TEXT("ReplacementInfo"), false, nullptr, nullptr);
static struct FScriptStruct_SurvivalGame_StaticRegisterNativesFReplacementInfo
{
	FScriptStruct_SurvivalGame_StaticRegisterNativesFReplacementInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ReplacementInfo")),new UScriptStruct::TCppStructOps<FReplacementInfo>);
	}
} ScriptStruct_SurvivalGame_StaticRegisterNativesFReplacementInfo;
	struct Z_Construct_UScriptStruct_FReplacementInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FromWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_FromWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ToWeapon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplacementInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Mutators/SMutator_WeaponReplacement.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FReplacementInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FReplacementInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplacementInfo_Statics::NewProp_FromWeapon_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "/** class name of the weapon we want to get rid of */" },
		{ "ModuleRelativePath", "Public/Mutators/SMutator_WeaponReplacement.h" },
		{ "ToolTip", "class name of the weapon we want to get rid of" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FReplacementInfo_Statics::NewProp_FromWeapon = { "FromWeapon", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReplacementInfo, FromWeapon), Z_Construct_UClass_ASWeapon_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FReplacementInfo_Statics::NewProp_FromWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplacementInfo_Statics::NewProp_FromWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplacementInfo_Statics::NewProp_ToWeapon_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "/** fully qualified path of the class to replace it with */" },
		{ "ModuleRelativePath", "Public/Mutators/SMutator_WeaponReplacement.h" },
		{ "ToolTip", "fully qualified path of the class to replace it with" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FReplacementInfo_Statics::NewProp_ToWeapon = { "ToWeapon", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReplacementInfo, ToWeapon), Z_Construct_UClass_ASWeapon_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FReplacementInfo_Statics::NewProp_ToWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplacementInfo_Statics::NewProp_ToWeapon_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FReplacementInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplacementInfo_Statics::NewProp_FromWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplacementInfo_Statics::NewProp_ToWeapon,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FReplacementInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SurvivalGame,
		nullptr,
		&NewStructOps,
		"ReplacementInfo",
		sizeof(FReplacementInfo),
		alignof(FReplacementInfo),
		Z_Construct_UScriptStruct_FReplacementInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplacementInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FReplacementInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplacementInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FReplacementInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FReplacementInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SurvivalGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ReplacementInfo"), sizeof(FReplacementInfo), Get_Z_Construct_UScriptStruct_FReplacementInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FReplacementInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FReplacementInfo_Hash() { return 4278194928U; }
	void ASMutator_WeaponReplacement::StaticRegisterNativesASMutator_WeaponReplacement()
	{
	}
	UClass* Z_Construct_UClass_ASMutator_WeaponReplacement_NoRegister()
	{
		return ASMutator_WeaponReplacement::StaticClass();
	}
	struct Z_Construct_UClass_ASMutator_WeaponReplacement_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeaponsToReplace_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponsToReplace_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WeaponsToReplace;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASMutator_WeaponReplacement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASMutator,
		(UObject* (*)())Z_Construct_UPackage__Script_SurvivalGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASMutator_WeaponReplacement_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Allows mutators to replace weapon pickups in the active level\n */" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Mutators/SMutator_WeaponReplacement.h" },
		{ "ModuleRelativePath", "Public/Mutators/SMutator_WeaponReplacement.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Allows mutators to replace weapon pickups in the active level" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASMutator_WeaponReplacement_Statics::NewProp_WeaponsToReplace_Inner = { "WeaponsToReplace", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FReplacementInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASMutator_WeaponReplacement_Statics::NewProp_WeaponsToReplace_MetaData[] = {
		{ "Category", "WeaponReplacement" },
		{ "ModuleRelativePath", "Public/Mutators/SMutator_WeaponReplacement.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASMutator_WeaponReplacement_Statics::NewProp_WeaponsToReplace = { "WeaponsToReplace", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASMutator_WeaponReplacement, WeaponsToReplace), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASMutator_WeaponReplacement_Statics::NewProp_WeaponsToReplace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASMutator_WeaponReplacement_Statics::NewProp_WeaponsToReplace_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASMutator_WeaponReplacement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASMutator_WeaponReplacement_Statics::NewProp_WeaponsToReplace_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASMutator_WeaponReplacement_Statics::NewProp_WeaponsToReplace,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASMutator_WeaponReplacement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASMutator_WeaponReplacement>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASMutator_WeaponReplacement_Statics::ClassParams = {
		&ASMutator_WeaponReplacement::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASMutator_WeaponReplacement_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASMutator_WeaponReplacement_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ASMutator_WeaponReplacement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASMutator_WeaponReplacement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASMutator_WeaponReplacement()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASMutator_WeaponReplacement_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASMutator_WeaponReplacement, 2600859537);
	template<> SURVIVALGAME_API UClass* StaticClass<ASMutator_WeaponReplacement>()
	{
		return ASMutator_WeaponReplacement::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASMutator_WeaponReplacement(Z_Construct_UClass_ASMutator_WeaponReplacement, &ASMutator_WeaponReplacement::StaticClass, TEXT("/Script/SurvivalGame"), TEXT("ASMutator_WeaponReplacement"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASMutator_WeaponReplacement);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
