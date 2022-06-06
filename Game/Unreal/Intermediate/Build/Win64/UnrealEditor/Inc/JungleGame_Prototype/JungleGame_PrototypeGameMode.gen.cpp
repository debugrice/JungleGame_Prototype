// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JungleGame_Prototype/JungleGame_PrototypeGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJungleGame_PrototypeGameMode() {}
// Cross Module References
	JUNGLEGAME_PROTOTYPE_API UClass* Z_Construct_UClass_AJungleGame_PrototypeGameMode_NoRegister();
	JUNGLEGAME_PROTOTYPE_API UClass* Z_Construct_UClass_AJungleGame_PrototypeGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_JungleGame_Prototype();
// End Cross Module References
	void AJungleGame_PrototypeGameMode::StaticRegisterNativesAJungleGame_PrototypeGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AJungleGame_PrototypeGameMode);
	UClass* Z_Construct_UClass_AJungleGame_PrototypeGameMode_NoRegister()
	{
		return AJungleGame_PrototypeGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AJungleGame_PrototypeGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AJungleGame_PrototypeGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_JungleGame_Prototype,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJungleGame_PrototypeGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "JungleGame_PrototypeGameMode.h" },
		{ "ModuleRelativePath", "JungleGame_PrototypeGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AJungleGame_PrototypeGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AJungleGame_PrototypeGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AJungleGame_PrototypeGameMode_Statics::ClassParams = {
		&AJungleGame_PrototypeGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AJungleGame_PrototypeGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AJungleGame_PrototypeGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AJungleGame_PrototypeGameMode()
	{
		if (!Z_Registration_Info_UClass_AJungleGame_PrototypeGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AJungleGame_PrototypeGameMode.OuterSingleton, Z_Construct_UClass_AJungleGame_PrototypeGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AJungleGame_PrototypeGameMode.OuterSingleton;
	}
	template<> JUNGLEGAME_PROTOTYPE_API UClass* StaticClass<AJungleGame_PrototypeGameMode>()
	{
		return AJungleGame_PrototypeGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AJungleGame_PrototypeGameMode);
	struct Z_CompiledInDeferFile_FID_JungleGame_Prototype_Source_JungleGame_Prototype_JungleGame_PrototypeGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_JungleGame_Prototype_Source_JungleGame_Prototype_JungleGame_PrototypeGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AJungleGame_PrototypeGameMode, AJungleGame_PrototypeGameMode::StaticClass, TEXT("AJungleGame_PrototypeGameMode"), &Z_Registration_Info_UClass_AJungleGame_PrototypeGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AJungleGame_PrototypeGameMode), 332342840U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_JungleGame_Prototype_Source_JungleGame_Prototype_JungleGame_PrototypeGameMode_h_4034139431(TEXT("/Script/JungleGame_Prototype"),
		Z_CompiledInDeferFile_FID_JungleGame_Prototype_Source_JungleGame_Prototype_JungleGame_PrototypeGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_JungleGame_Prototype_Source_JungleGame_Prototype_JungleGame_PrototypeGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
