// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SurvivalGame/Public/AI/BTTask_FindBotWaypoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_FindBotWaypoint() {}
// Cross Module References
	SURVIVALGAME_API UClass* Z_Construct_UClass_UBTTask_FindBotWaypoint_NoRegister();
	SURVIVALGAME_API UClass* Z_Construct_UClass_UBTTask_FindBotWaypoint();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
	UPackage* Z_Construct_UPackage__Script_SurvivalGame();
// End Cross Module References
	void UBTTask_FindBotWaypoint::StaticRegisterNativesUBTTask_FindBotWaypoint()
	{
	}
	UClass* Z_Construct_UClass_UBTTask_FindBotWaypoint_NoRegister()
	{
		return UBTTask_FindBotWaypoint::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_FindBotWaypoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_FindBotWaypoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SurvivalGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_FindBotWaypoint_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AI/BTTask_FindBotWaypoint.h" },
		{ "ModuleRelativePath", "Public/AI/BTTask_FindBotWaypoint.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_FindBotWaypoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_FindBotWaypoint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_FindBotWaypoint_Statics::ClassParams = {
		&UBTTask_FindBotWaypoint::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_FindBotWaypoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FindBotWaypoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_FindBotWaypoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTTask_FindBotWaypoint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTTask_FindBotWaypoint, 3613465401);
	template<> SURVIVALGAME_API UClass* StaticClass<UBTTask_FindBotWaypoint>()
	{
		return UBTTask_FindBotWaypoint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTask_FindBotWaypoint(Z_Construct_UClass_UBTTask_FindBotWaypoint, &UBTTask_FindBotWaypoint::StaticClass, TEXT("/Script/SurvivalGame"), TEXT("UBTTask_FindBotWaypoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_FindBotWaypoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
