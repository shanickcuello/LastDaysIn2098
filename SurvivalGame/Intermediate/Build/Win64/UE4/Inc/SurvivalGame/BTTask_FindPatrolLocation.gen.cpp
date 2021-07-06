// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SurvivalGame/Public/AI/BTTask_FindPatrolLocation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_FindPatrolLocation() {}
// Cross Module References
	SURVIVALGAME_API UClass* Z_Construct_UClass_UBTTask_FindPatrolLocation_NoRegister();
	SURVIVALGAME_API UClass* Z_Construct_UClass_UBTTask_FindPatrolLocation();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
	UPackage* Z_Construct_UPackage__Script_SurvivalGame();
// End Cross Module References
	void UBTTask_FindPatrolLocation::StaticRegisterNativesUBTTask_FindPatrolLocation()
	{
	}
	UClass* Z_Construct_UClass_UBTTask_FindPatrolLocation_NoRegister()
	{
		return UBTTask_FindPatrolLocation::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_FindPatrolLocation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_FindPatrolLocation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SurvivalGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_FindPatrolLocation_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Blackboard Task - Finds a position to a nearby waypoint\n*/" },
		{ "IncludePath", "AI/BTTask_FindPatrolLocation.h" },
		{ "ModuleRelativePath", "Public/AI/BTTask_FindPatrolLocation.h" },
		{ "ToolTip", "Blackboard Task - Finds a position to a nearby waypoint" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_FindPatrolLocation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_FindPatrolLocation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_FindPatrolLocation_Statics::ClassParams = {
		&UBTTask_FindPatrolLocation::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_FindPatrolLocation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FindPatrolLocation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_FindPatrolLocation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTTask_FindPatrolLocation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTTask_FindPatrolLocation, 3129942366);
	template<> SURVIVALGAME_API UClass* StaticClass<UBTTask_FindPatrolLocation>()
	{
		return UBTTask_FindPatrolLocation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTask_FindPatrolLocation(Z_Construct_UClass_UBTTask_FindPatrolLocation, &UBTTask_FindPatrolLocation::StaticClass, TEXT("/Script/SurvivalGame"), TEXT("UBTTask_FindPatrolLocation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_FindPatrolLocation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
