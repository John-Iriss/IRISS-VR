// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IRISS_VR/IRISS_VRGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIRISS_VRGameModeBase() {}
// Cross Module References
	IRISS_VR_API UClass* Z_Construct_UClass_AIRISS_VRGameModeBase_NoRegister();
	IRISS_VR_API UClass* Z_Construct_UClass_AIRISS_VRGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_IRISS_VR();
// End Cross Module References
	void AIRISS_VRGameModeBase::StaticRegisterNativesAIRISS_VRGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AIRISS_VRGameModeBase_NoRegister()
	{
		return AIRISS_VRGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AIRISS_VRGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AIRISS_VRGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_IRISS_VR,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIRISS_VRGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "IRISS_VRGameModeBase.h" },
		{ "ModuleRelativePath", "IRISS_VRGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AIRISS_VRGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIRISS_VRGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AIRISS_VRGameModeBase_Statics::ClassParams = {
		&AIRISS_VRGameModeBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AIRISS_VRGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AIRISS_VRGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AIRISS_VRGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AIRISS_VRGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AIRISS_VRGameModeBase, 1352355385);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AIRISS_VRGameModeBase(Z_Construct_UClass_AIRISS_VRGameModeBase, &AIRISS_VRGameModeBase::StaticClass, TEXT("/Script/IRISS_VR"), TEXT("AIRISS_VRGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AIRISS_VRGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
