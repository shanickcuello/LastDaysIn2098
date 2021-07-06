// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SurvivalGame/Public/AI/SBotWaypoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBotWaypoint() {}
// Cross Module References
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASBotWaypoint_NoRegister();
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASBotWaypoint();
	ENGINE_API UClass* Z_Construct_UClass_ATargetPoint();
	UPackage* Z_Construct_UPackage__Script_SurvivalGame();
// End Cross Module References
	void ASBotWaypoint::StaticRegisterNativesASBotWaypoint()
	{
	}
	UClass* Z_Construct_UClass_ASBotWaypoint_NoRegister()
	{
		return ASBotWaypoint::StaticClass();
	}
	struct Z_Construct_UClass_ASBotWaypoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBotWaypoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATargetPoint,
		(UObject* (*)())Z_Construct_UPackage__Script_SurvivalGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBotWaypoint_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Waypoint helper for bots to generate waypoints during patrols. Object is placed in level to specify a potential patrol target location.\n */" },
		{ "IncludePath", "AI/SBotWaypoint.h" },
		{ "ModuleRelativePath", "Public/AI/SBotWaypoint.h" },
		{ "ToolTip", "Waypoint helper for bots to generate waypoints during patrols. Object is placed in level to specify a potential patrol target location." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBotWaypoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBotWaypoint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBotWaypoint_Statics::ClassParams = {
		&ASBotWaypoint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBotWaypoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBotWaypoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBotWaypoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBotWaypoint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBotWaypoint, 1652474874);
	template<> SURVIVALGAME_API UClass* StaticClass<ASBotWaypoint>()
	{
		return ASBotWaypoint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBotWaypoint(Z_Construct_UClass_ASBotWaypoint, &ASBotWaypoint::StaticClass, TEXT("/Script/SurvivalGame"), TEXT("ASBotWaypoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBotWaypoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
