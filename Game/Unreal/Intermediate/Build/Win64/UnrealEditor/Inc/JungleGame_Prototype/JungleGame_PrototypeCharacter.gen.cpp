// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JungleGame_Prototype/JungleGame_PrototypeCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJungleGame_PrototypeCharacter() {}
// Cross Module References
	JUNGLEGAME_PROTOTYPE_API UClass* Z_Construct_UClass_AJungleGame_PrototypeCharacter_NoRegister();
	JUNGLEGAME_PROTOTYPE_API UClass* Z_Construct_UClass_AJungleGame_PrototypeCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_JungleGame_Prototype();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	void AJungleGame_PrototypeCharacter::StaticRegisterNativesAJungleGame_PrototypeCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AJungleGame_PrototypeCharacter);
	UClass* Z_Construct_UClass_AJungleGame_PrototypeCharacter_NoRegister()
	{
		return AJungleGame_PrototypeCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AJungleGame_PrototypeCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurnRateGamepad_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TurnRateGamepad;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AJungleGame_PrototypeCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_JungleGame_Prototype,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJungleGame_PrototypeCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "JungleGame_PrototypeCharacter.h" },
		{ "ModuleRelativePath", "JungleGame_PrototypeCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJungleGame_PrototypeCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "JungleGame_PrototypeCharacter.h" },
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJungleGame_PrototypeCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJungleGame_PrototypeCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AJungleGame_PrototypeCharacter_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJungleGame_PrototypeCharacter_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJungleGame_PrototypeCharacter_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Follow camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "JungleGame_PrototypeCharacter.h" },
		{ "ToolTip", "Follow camera" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJungleGame_PrototypeCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJungleGame_PrototypeCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AJungleGame_PrototypeCharacter_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJungleGame_PrototypeCharacter_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJungleGame_PrototypeCharacter_Statics::NewProp_TurnRateGamepad_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "JungleGame_PrototypeCharacter.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AJungleGame_PrototypeCharacter_Statics::NewProp_TurnRateGamepad = { "TurnRateGamepad", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJungleGame_PrototypeCharacter, TurnRateGamepad), METADATA_PARAMS(Z_Construct_UClass_AJungleGame_PrototypeCharacter_Statics::NewProp_TurnRateGamepad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJungleGame_PrototypeCharacter_Statics::NewProp_TurnRateGamepad_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AJungleGame_PrototypeCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJungleGame_PrototypeCharacter_Statics::NewProp_CameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJungleGame_PrototypeCharacter_Statics::NewProp_FollowCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJungleGame_PrototypeCharacter_Statics::NewProp_TurnRateGamepad,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AJungleGame_PrototypeCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AJungleGame_PrototypeCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AJungleGame_PrototypeCharacter_Statics::ClassParams = {
		&AJungleGame_PrototypeCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AJungleGame_PrototypeCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AJungleGame_PrototypeCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AJungleGame_PrototypeCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AJungleGame_PrototypeCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AJungleGame_PrototypeCharacter()
	{
		if (!Z_Registration_Info_UClass_AJungleGame_PrototypeCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AJungleGame_PrototypeCharacter.OuterSingleton, Z_Construct_UClass_AJungleGame_PrototypeCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AJungleGame_PrototypeCharacter.OuterSingleton;
	}
	template<> JUNGLEGAME_PROTOTYPE_API UClass* StaticClass<AJungleGame_PrototypeCharacter>()
	{
		return AJungleGame_PrototypeCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AJungleGame_PrototypeCharacter);
	struct Z_CompiledInDeferFile_FID_JungleGame_Prototype_Source_JungleGame_Prototype_JungleGame_PrototypeCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_JungleGame_Prototype_Source_JungleGame_Prototype_JungleGame_PrototypeCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AJungleGame_PrototypeCharacter, AJungleGame_PrototypeCharacter::StaticClass, TEXT("AJungleGame_PrototypeCharacter"), &Z_Registration_Info_UClass_AJungleGame_PrototypeCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AJungleGame_PrototypeCharacter), 2936596037U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_JungleGame_Prototype_Source_JungleGame_Prototype_JungleGame_PrototypeCharacter_h_404612563(TEXT("/Script/JungleGame_Prototype"),
		Z_CompiledInDeferFile_FID_JungleGame_Prototype_Source_JungleGame_Prototype_JungleGame_PrototypeCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_JungleGame_Prototype_Source_JungleGame_Prototype_JungleGame_PrototypeCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
