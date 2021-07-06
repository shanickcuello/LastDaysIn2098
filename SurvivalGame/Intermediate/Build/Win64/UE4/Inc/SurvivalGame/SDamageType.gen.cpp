// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SurvivalGame/Public/Items/SDamageType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSDamageType() {}
// Cross Module References
	SURVIVALGAME_API UClass* Z_Construct_UClass_USDamageType_NoRegister();
	SURVIVALGAME_API UClass* Z_Construct_UClass_USDamageType();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType();
	UPackage* Z_Construct_UPackage__Script_SurvivalGame();
// End Cross Module References
	void USDamageType::StaticRegisterNativesUSDamageType()
	{
	}
	UClass* Z_Construct_UClass_USDamageType_NoRegister()
	{
		return USDamageType::StaticClass();
	}
	struct Z_Construct_UClass_USDamageType_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanDieFrom_MetaData[];
#endif
		static void NewProp_bCanDieFrom_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanDieFrom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeadDmgModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HeadDmgModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LimbDmgModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LimbDmgModifier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USDamageType_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDamageType,
		(UObject* (*)())Z_Construct_UPackage__Script_SurvivalGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USDamageType_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Items/SDamageType.h" },
		{ "ModuleRelativePath", "Public/Items/SDamageType.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USDamageType_Statics::NewProp_bCanDieFrom_MetaData[] = {
		{ "Category", "SDamageType" },
		{ "Comment", "/* Can player die from this damage type (eg. players don't die from hunger) */" },
		{ "ModuleRelativePath", "Public/Items/SDamageType.h" },
		{ "ToolTip", "Can player die from this damage type (eg. players don't die from hunger)" },
	};
#endif
	void Z_Construct_UClass_USDamageType_Statics::NewProp_bCanDieFrom_SetBit(void* Obj)
	{
		((USDamageType*)Obj)->bCanDieFrom = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USDamageType_Statics::NewProp_bCanDieFrom = { "bCanDieFrom", nullptr, (EPropertyFlags)0x0040000000010011, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USDamageType), &Z_Construct_UClass_USDamageType_Statics::NewProp_bCanDieFrom_SetBit, METADATA_PARAMS(Z_Construct_UClass_USDamageType_Statics::NewProp_bCanDieFrom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USDamageType_Statics::NewProp_bCanDieFrom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USDamageType_Statics::NewProp_HeadDmgModifier_MetaData[] = {
		{ "Category", "SDamageType" },
		{ "Comment", "/* Damage modifier for headshot damage */" },
		{ "ModuleRelativePath", "Public/Items/SDamageType.h" },
		{ "ToolTip", "Damage modifier for headshot damage" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USDamageType_Statics::NewProp_HeadDmgModifier = { "HeadDmgModifier", nullptr, (EPropertyFlags)0x0040000000010011, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USDamageType, HeadDmgModifier), METADATA_PARAMS(Z_Construct_UClass_USDamageType_Statics::NewProp_HeadDmgModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USDamageType_Statics::NewProp_HeadDmgModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USDamageType_Statics::NewProp_LimbDmgModifier_MetaData[] = {
		{ "Category", "SDamageType" },
		{ "ModuleRelativePath", "Public/Items/SDamageType.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USDamageType_Statics::NewProp_LimbDmgModifier = { "LimbDmgModifier", nullptr, (EPropertyFlags)0x0040000000010011, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USDamageType, LimbDmgModifier), METADATA_PARAMS(Z_Construct_UClass_USDamageType_Statics::NewProp_LimbDmgModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USDamageType_Statics::NewProp_LimbDmgModifier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USDamageType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USDamageType_Statics::NewProp_bCanDieFrom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USDamageType_Statics::NewProp_HeadDmgModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USDamageType_Statics::NewProp_LimbDmgModifier,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USDamageType_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USDamageType>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USDamageType_Statics::ClassParams = {
		&USDamageType::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USDamageType_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USDamageType_Statics::PropPointers),
		0,
		0x001100A0u,
		METADATA_PARAMS(Z_Construct_UClass_USDamageType_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USDamageType_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USDamageType()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USDamageType_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USDamageType, 2856705258);
	template<> SURVIVALGAME_API UClass* StaticClass<USDamageType>()
	{
		return USDamageType::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USDamageType(Z_Construct_UClass_USDamageType, &USDamageType::StaticClass, TEXT("/Script/SurvivalGame"), TEXT("USDamageType"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USDamageType);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
