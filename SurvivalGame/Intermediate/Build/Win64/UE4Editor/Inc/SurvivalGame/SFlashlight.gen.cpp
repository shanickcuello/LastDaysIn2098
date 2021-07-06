// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SurvivalGame/Public/Items/SFlashlight.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSFlashlight() {}
// Cross Module References
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASFlashlight_NoRegister();
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASFlashlight();
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASWeapon();
	UPackage* Z_Construct_UPackage__Script_SurvivalGame();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpotLightComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASFlashlight::execOnRep_IsActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_IsActive();
		P_NATIVE_END;
	}
	void ASFlashlight::StaticRegisterNativesASFlashlight()
	{
		UClass* Class = ASFlashlight::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_IsActive", &ASFlashlight::execOnRep_IsActive },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASFlashlight_OnRep_IsActive_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASFlashlight_OnRep_IsActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Items/SFlashlight.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASFlashlight_OnRep_IsActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASFlashlight, nullptr, "OnRep_IsActive", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASFlashlight_OnRep_IsActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASFlashlight_OnRep_IsActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASFlashlight_OnRep_IsActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASFlashlight_OnRep_IsActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASFlashlight_NoRegister()
	{
		return ASFlashlight::StaticClass();
	}
	struct Z_Construct_UClass_ASFlashlight_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmissiveParamName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EmissiveParamName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxEmissiveIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxEmissiveIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightAttachPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LightAttachPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsActive_MetaData[];
#endif
		static void NewProp_bIsActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsActive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightConeComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LightConeComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpotLightComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpotLightComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASFlashlight_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_SurvivalGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASFlashlight_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASFlashlight_OnRep_IsActive, "OnRep_IsActive" }, // 3865064212
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASFlashlight_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Items/SFlashlight.h" },
		{ "ModuleRelativePath", "Public/Items/SFlashlight.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASFlashlight_Statics::NewProp_EmissiveParamName_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/Items/SFlashlight.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASFlashlight_Statics::NewProp_EmissiveParamName = { "EmissiveParamName", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASFlashlight, EmissiveParamName), METADATA_PARAMS(Z_Construct_UClass_ASFlashlight_Statics::NewProp_EmissiveParamName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASFlashlight_Statics::NewProp_EmissiveParamName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASFlashlight_Statics::NewProp_MaxEmissiveIntensity_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/Items/SFlashlight.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASFlashlight_Statics::NewProp_MaxEmissiveIntensity = { "MaxEmissiveIntensity", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASFlashlight, MaxEmissiveIntensity), METADATA_PARAMS(Z_Construct_UClass_ASFlashlight_Statics::NewProp_MaxEmissiveIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASFlashlight_Statics::NewProp_MaxEmissiveIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASFlashlight_Statics::NewProp_LightAttachPoint_MetaData[] = {
		{ "Category", "SFlashlight" },
		{ "ModuleRelativePath", "Public/Items/SFlashlight.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASFlashlight_Statics::NewProp_LightAttachPoint = { "LightAttachPoint", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASFlashlight, LightAttachPoint), METADATA_PARAMS(Z_Construct_UClass_ASFlashlight_Statics::NewProp_LightAttachPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASFlashlight_Statics::NewProp_LightAttachPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASFlashlight_Statics::NewProp_bIsActive_MetaData[] = {
		{ "ModuleRelativePath", "Public/Items/SFlashlight.h" },
	};
#endif
	void Z_Construct_UClass_ASFlashlight_Statics::NewProp_bIsActive_SetBit(void* Obj)
	{
		((ASFlashlight*)Obj)->bIsActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASFlashlight_Statics::NewProp_bIsActive = { "bIsActive", "OnRep_IsActive", (EPropertyFlags)0x0010000100002020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASFlashlight), &Z_Construct_UClass_ASFlashlight_Statics::NewProp_bIsActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASFlashlight_Statics::NewProp_bIsActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASFlashlight_Statics::NewProp_bIsActive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASFlashlight_Statics::NewProp_LightConeComp_MetaData[] = {
		{ "Category", "SFlashlight" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Items/SFlashlight.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASFlashlight_Statics::NewProp_LightConeComp = { "LightConeComp", nullptr, (EPropertyFlags)0x00100000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASFlashlight, LightConeComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASFlashlight_Statics::NewProp_LightConeComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASFlashlight_Statics::NewProp_LightConeComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASFlashlight_Statics::NewProp_SpotLightComp_MetaData[] = {
		{ "Category", "SFlashlight" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Items/SFlashlight.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASFlashlight_Statics::NewProp_SpotLightComp = { "SpotLightComp", nullptr, (EPropertyFlags)0x00100000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASFlashlight, SpotLightComp), Z_Construct_UClass_USpotLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASFlashlight_Statics::NewProp_SpotLightComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASFlashlight_Statics::NewProp_SpotLightComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASFlashlight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASFlashlight_Statics::NewProp_EmissiveParamName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASFlashlight_Statics::NewProp_MaxEmissiveIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASFlashlight_Statics::NewProp_LightAttachPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASFlashlight_Statics::NewProp_bIsActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASFlashlight_Statics::NewProp_LightConeComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASFlashlight_Statics::NewProp_SpotLightComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASFlashlight_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASFlashlight>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASFlashlight_Statics::ClassParams = {
		&ASFlashlight::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASFlashlight_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASFlashlight_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ASFlashlight_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASFlashlight_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASFlashlight()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASFlashlight_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASFlashlight, 78927021);
	template<> SURVIVALGAME_API UClass* StaticClass<ASFlashlight>()
	{
		return ASFlashlight::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASFlashlight(Z_Construct_UClass_ASFlashlight, &ASFlashlight::StaticClass, TEXT("/Script/SurvivalGame"), TEXT("ASFlashlight"), false, nullptr, nullptr, nullptr);

	void ASFlashlight::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bIsActive(TEXT("bIsActive"));

		const bool bIsValid = true
			&& Name_bIsActive == ClassReps[(int32)ENetFields_Private::bIsActive].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASFlashlight"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASFlashlight);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
