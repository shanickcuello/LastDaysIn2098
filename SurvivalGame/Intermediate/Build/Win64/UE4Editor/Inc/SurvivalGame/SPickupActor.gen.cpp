// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SurvivalGame/Public/Items/SPickupActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSPickupActor() {}
// Cross Module References
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASPickupActor_NoRegister();
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASPickupActor();
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASUsableActor();
	UPackage* Z_Construct_UPackage__Script_SurvivalGame();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASPickupActor::execOnRep_IsActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_IsActive();
		P_NATIVE_END;
	}
	void ASPickupActor::StaticRegisterNativesASPickupActor()
	{
		UClass* Class = ASPickupActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_IsActive", &ASPickupActor::execOnRep_IsActive },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASPickupActor_OnRep_IsActive_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASPickupActor_OnRep_IsActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Items/SPickupActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPickupActor_OnRep_IsActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPickupActor, nullptr, "OnRep_IsActive", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASPickupActor_OnRep_IsActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPickupActor_OnRep_IsActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASPickupActor_OnRep_IsActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASPickupActor_OnRep_IsActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASPickupActor_NoRegister()
	{
		return ASPickupActor::StaticClass();
	}
	struct Z_Construct_UClass_ASPickupActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PickupSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PickupSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsActive_MetaData[];
#endif
		static void NewProp_bIsActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsActive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStartActive_MetaData[];
#endif
		static void NewProp_bStartActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStartActive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowRespawn_MetaData[];
#endif
		static void NewProp_bAllowRespawn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowRespawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RespawnDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RespawnDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RespawnDelayRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RespawnDelayRange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASPickupActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASUsableActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SurvivalGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASPickupActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASPickupActor_OnRep_IsActive, "OnRep_IsActive" }, // 3189990300
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPickupActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Items/SPickupActor.h" },
		{ "ModuleRelativePath", "Public/Items/SPickupActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPickupActor_Statics::NewProp_PickupSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/Items/SPickupActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASPickupActor_Statics::NewProp_PickupSound = { "PickupSound", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASPickupActor, PickupSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASPickupActor_Statics::NewProp_PickupSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASPickupActor_Statics::NewProp_PickupSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPickupActor_Statics::NewProp_bIsActive_MetaData[] = {
		{ "ModuleRelativePath", "Public/Items/SPickupActor.h" },
	};
#endif
	void Z_Construct_UClass_ASPickupActor_Statics::NewProp_bIsActive_SetBit(void* Obj)
	{
		((ASPickupActor*)Obj)->bIsActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASPickupActor_Statics::NewProp_bIsActive = { "bIsActive", "OnRep_IsActive", (EPropertyFlags)0x0020080100002020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASPickupActor), &Z_Construct_UClass_ASPickupActor_Statics::NewProp_bIsActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASPickupActor_Statics::NewProp_bIsActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASPickupActor_Statics::NewProp_bIsActive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPickupActor_Statics::NewProp_bStartActive_MetaData[] = {
		{ "Category", "Pickup" },
		{ "Comment", "/* Immediately spawn on begin play */" },
		{ "ModuleRelativePath", "Public/Items/SPickupActor.h" },
		{ "ToolTip", "Immediately spawn on begin play" },
	};
#endif
	void Z_Construct_UClass_ASPickupActor_Statics::NewProp_bStartActive_SetBit(void* Obj)
	{
		((ASPickupActor*)Obj)->bStartActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASPickupActor_Statics::NewProp_bStartActive = { "bStartActive", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASPickupActor), &Z_Construct_UClass_ASPickupActor_Statics::NewProp_bStartActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASPickupActor_Statics::NewProp_bStartActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASPickupActor_Statics::NewProp_bStartActive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPickupActor_Statics::NewProp_bAllowRespawn_MetaData[] = {
		{ "Category", "Pickup" },
		{ "Comment", "/* Will this item ever respawn */" },
		{ "ModuleRelativePath", "Public/Items/SPickupActor.h" },
		{ "ToolTip", "Will this item ever respawn" },
	};
#endif
	void Z_Construct_UClass_ASPickupActor_Statics::NewProp_bAllowRespawn_SetBit(void* Obj)
	{
		((ASPickupActor*)Obj)->bAllowRespawn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASPickupActor_Statics::NewProp_bAllowRespawn = { "bAllowRespawn", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASPickupActor), &Z_Construct_UClass_ASPickupActor_Statics::NewProp_bAllowRespawn_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASPickupActor_Statics::NewProp_bAllowRespawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASPickupActor_Statics::NewProp_bAllowRespawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPickupActor_Statics::NewProp_RespawnDelay_MetaData[] = {
		{ "Category", "Pickup" },
		{ "ModuleRelativePath", "Public/Items/SPickupActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASPickupActor_Statics::NewProp_RespawnDelay = { "RespawnDelay", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASPickupActor, RespawnDelay), METADATA_PARAMS(Z_Construct_UClass_ASPickupActor_Statics::NewProp_RespawnDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASPickupActor_Statics::NewProp_RespawnDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPickupActor_Statics::NewProp_RespawnDelayRange_MetaData[] = {
		{ "Category", "Pickup" },
		{ "Comment", "/* Extra delay randomly applied on the respawn timer */" },
		{ "ModuleRelativePath", "Public/Items/SPickupActor.h" },
		{ "ToolTip", "Extra delay randomly applied on the respawn timer" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASPickupActor_Statics::NewProp_RespawnDelayRange = { "RespawnDelayRange", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASPickupActor, RespawnDelayRange), METADATA_PARAMS(Z_Construct_UClass_ASPickupActor_Statics::NewProp_RespawnDelayRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASPickupActor_Statics::NewProp_RespawnDelayRange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASPickupActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPickupActor_Statics::NewProp_PickupSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPickupActor_Statics::NewProp_bIsActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPickupActor_Statics::NewProp_bStartActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPickupActor_Statics::NewProp_bAllowRespawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPickupActor_Statics::NewProp_RespawnDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPickupActor_Statics::NewProp_RespawnDelayRange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASPickupActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASPickupActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASPickupActor_Statics::ClassParams = {
		&ASPickupActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASPickupActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASPickupActor_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ASPickupActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASPickupActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASPickupActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASPickupActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASPickupActor, 3605845769);
	template<> SURVIVALGAME_API UClass* StaticClass<ASPickupActor>()
	{
		return ASPickupActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASPickupActor(Z_Construct_UClass_ASPickupActor, &ASPickupActor::StaticClass, TEXT("/Script/SurvivalGame"), TEXT("ASPickupActor"), false, nullptr, nullptr, nullptr);

	void ASPickupActor::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bIsActive(TEXT("bIsActive"));

		const bool bIsValid = true
			&& Name_bIsActive == ClassReps[(int32)ENetFields_Private::bIsActive].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASPickupActor"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASPickupActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
