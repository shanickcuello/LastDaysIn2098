// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SurvivalGame/Public/Items/SConsumableActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSConsumableActor() {}
// Cross Module References
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASConsumableActor_NoRegister();
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASConsumableActor();
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASPickupActor();
	UPackage* Z_Construct_UPackage__Script_SurvivalGame();
// End Cross Module References
	void ASConsumableActor::StaticRegisterNativesASConsumableActor()
	{
	}
	UClass* Z_Construct_UClass_ASConsumableActor_NoRegister()
	{
		return ASConsumableActor::StaticClass();
	}
	struct Z_Construct_UClass_ASConsumableActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Nutrition_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Nutrition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASConsumableActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASPickupActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SurvivalGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASConsumableActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for consumable (food) items. Consumable by players to restore energy\n */" },
		{ "IncludePath", "Items/SConsumableActor.h" },
		{ "ModuleRelativePath", "Public/Items/SConsumableActor.h" },
		{ "ToolTip", "Base class for consumable (food) items. Consumable by players to restore energy" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASConsumableActor_Statics::NewProp_Nutrition_MetaData[] = {
		{ "Category", "Consumable" },
		{ "Comment", "/* Amount of hitpoints restored and hunger reduced when consumed. */" },
		{ "ModuleRelativePath", "Public/Items/SConsumableActor.h" },
		{ "ToolTip", "Amount of hitpoints restored and hunger reduced when consumed." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASConsumableActor_Statics::NewProp_Nutrition = { "Nutrition", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASConsumableActor, Nutrition), METADATA_PARAMS(Z_Construct_UClass_ASConsumableActor_Statics::NewProp_Nutrition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASConsumableActor_Statics::NewProp_Nutrition_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASConsumableActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASConsumableActor_Statics::NewProp_Nutrition,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASConsumableActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASConsumableActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASConsumableActor_Statics::ClassParams = {
		&ASConsumableActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASConsumableActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASConsumableActor_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ASConsumableActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASConsumableActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASConsumableActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASConsumableActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASConsumableActor, 1887592187);
	template<> SURVIVALGAME_API UClass* StaticClass<ASConsumableActor>()
	{
		return ASConsumableActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASConsumableActor(Z_Construct_UClass_ASConsumableActor, &ASConsumableActor::StaticClass, TEXT("/Script/SurvivalGame"), TEXT("ASConsumableActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASConsumableActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
