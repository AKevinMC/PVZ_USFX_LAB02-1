// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02/PotEnergia.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePotEnergia() {}
// Cross Module References
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_APotEnergia_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_APotEnergia();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void APotEnergia::StaticRegisterNativesAPotEnergia()
	{
	}
	UClass* Z_Construct_UClass_APotEnergia_NoRegister()
	{
		return APotEnergia::StaticClass();
	}
	struct Z_Construct_UClass_APotEnergia_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PotEnergiaMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PotEnergiaMeshComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APotEnergia_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APotEnergia_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PotEnergia.h" },
		{ "ModuleRelativePath", "PotEnergia.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APotEnergia_Statics::NewProp_PotEnergiaMeshComponent_MetaData[] = {
		{ "Category", "PotEnergia" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PotEnergia.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APotEnergia_Statics::NewProp_PotEnergiaMeshComponent = { "PotEnergiaMeshComponent", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APotEnergia, PotEnergiaMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APotEnergia_Statics::NewProp_PotEnergiaMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APotEnergia_Statics::NewProp_PotEnergiaMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APotEnergia_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APotEnergia_Statics::NewProp_PotEnergiaMeshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APotEnergia_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APotEnergia>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APotEnergia_Statics::ClassParams = {
		&APotEnergia::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APotEnergia_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APotEnergia_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APotEnergia_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APotEnergia_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APotEnergia()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APotEnergia_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APotEnergia, 3432432710);
	template<> PVZ_USFX_LAB02_API UClass* StaticClass<APotEnergia>()
	{
		return APotEnergia::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APotEnergia(Z_Construct_UClass_APotEnergia, &APotEnergia::StaticClass, TEXT("/Script/PVZ_USFX_LAB02"), TEXT("APotEnergia"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APotEnergia);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
