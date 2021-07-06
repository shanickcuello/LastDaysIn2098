// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SurvivalGame/Public/Items/SWeaponPickup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSWeaponPickup() {}
// Cross Module References
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASWeaponPickup_NoRegister();
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASWeaponPickup();
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASPickupActor();
	UPackage* Z_Construct_UPackage__Script_SurvivalGame();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASWeapon_NoRegister();
// End Cross Module References
	void ASWeaponPickup::StaticRegisterNativesASWeaponPickup()
	{
	}
	UClass* Z_Construct_UClass_ASWeaponPickup_NoRegister()
	{
		return ASWeaponPickup::StaticClass();
	}
	struct Z_Construct_UClass_ASWeaponPickup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WeaponClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASWeaponPickup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASPickupActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SurvivalGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASWeaponPickup_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Items/SWeaponPickup.h" },
		{ "ModuleRelativePath", "Public/Items/SWeaponPickup.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASWeaponPickup_Statics::NewProp_WeaponClass_MetaData[] = {
		{ "Category", "WeaponClass" },
		{ "Comment", "/* Class to add to inventory when picked up */" },
		{ "ModuleRelativePath", "Public/Items/SWeaponPickup.h" },
		{ "ToolTip", "Class to add to inventory when picked up" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASWeaponPickup_Statics::NewProp_WeaponClass = { "WeaponClass", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASWeaponPickup, WeaponClass), Z_Construct_UClass_ASWeapon_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASWeaponPickup_Statics::NewProp_WeaponClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASWeaponPickup_Statics::NewProp_WeaponClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASWeaponPickup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASWeaponPickup_Statics::NewProp_WeaponClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASWeaponPickup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASWeaponPickup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASWeaponPickup_Statics::ClassParams = {
		&ASWeaponPickup::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASWeaponPickup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASWeaponPickup_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ASWeaponPickup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASWeaponPickup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASWeaponPickup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASWeaponPickup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASWeaponPickup, 2696285521);
	template<> SURVIVALGAME_API UClass* StaticClass<ASWeaponPickup>()
	{
		return ASWeaponPickup::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASWeaponPickup(Z_Construct_UClass_ASWeaponPickup, &ASWeaponPickup::StaticClass, TEXT("/Script/SurvivalGame"), TEXT("ASWeaponPickup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASWeaponPickup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
