// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCGTest/ProeceduralRoom.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProeceduralRoom() {}
// Cross Module References
	PCGTEST_API UClass* Z_Construct_UClass_AProeceduralRoom_NoRegister();
	PCGTEST_API UClass* Z_Construct_UClass_AProeceduralRoom();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PCGTest();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AProeceduralRoom::execMeshData)
	{
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_StaticMeshComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector>*)Z_Param__Result=P_THIS->MeshData(Z_Param_StaticMeshComponent);
		P_NATIVE_END;
	}
	void AProeceduralRoom::StaticRegisterNativesAProeceduralRoom()
	{
		UClass* Class = AProeceduralRoom::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MeshData", &AProeceduralRoom::execMeshData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AProeceduralRoom_MeshData_Statics
	{
		struct ProeceduralRoom_eventMeshData_Parms
		{
			const UStaticMeshComponent* StaticMeshComponent;
			TArray<FVector> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProeceduralRoom_MeshData_Statics::NewProp_StaticMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AProeceduralRoom_MeshData_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProeceduralRoom_eventMeshData_Parms, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AProeceduralRoom_MeshData_Statics::NewProp_StaticMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AProeceduralRoom_MeshData_Statics::NewProp_StaticMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AProeceduralRoom_MeshData_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AProeceduralRoom_MeshData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProeceduralRoom_eventMeshData_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProeceduralRoom_MeshData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProeceduralRoom_MeshData_Statics::NewProp_StaticMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProeceduralRoom_MeshData_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProeceduralRoom_MeshData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProeceduralRoom_MeshData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Floor" },
		{ "Keywords", "floor vertex mesh meshdata" },
		{ "ModuleRelativePath", "ProeceduralRoom.h" },
		{ "NativeBreakFunc", "" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AProeceduralRoom_MeshData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProeceduralRoom, nullptr, "MeshData", nullptr, nullptr, sizeof(ProeceduralRoom_eventMeshData_Parms), Z_Construct_UFunction_AProeceduralRoom_MeshData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProeceduralRoom_MeshData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProeceduralRoom_MeshData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AProeceduralRoom_MeshData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProeceduralRoom_MeshData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AProeceduralRoom_MeshData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AProeceduralRoom_NoRegister()
	{
		return AProeceduralRoom::StaticClass();
	}
	struct Z_Construct_UClass_AProeceduralRoom_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Floor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Floor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BushClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_BushClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TreeClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_TreeClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rock01Class_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Rock01Class;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rock02Class_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Rock02Class;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rock07Class_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Rock07Class;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProeceduralRoom_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PCGTest,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AProeceduralRoom_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AProeceduralRoom_MeshData, "MeshData" }, // 2421807379
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProeceduralRoom_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ProeceduralRoom.h" },
		{ "ModuleRelativePath", "ProeceduralRoom.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProeceduralRoom_Statics::NewProp_Floor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "World" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ProeceduralRoom.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProeceduralRoom_Statics::NewProp_Floor = { "Floor", nullptr, (EPropertyFlags)0x004000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProeceduralRoom, Floor), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProeceduralRoom_Statics::NewProp_Floor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProeceduralRoom_Statics::NewProp_Floor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProeceduralRoom_Statics::NewProp_BushClass_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "World" },
		{ "Comment", "//creating variable that references blueprint class\n" },
		{ "ModuleRelativePath", "ProeceduralRoom.h" },
		{ "ToolTip", "creating variable that references blueprint class" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AProeceduralRoom_Statics::NewProp_BushClass = { "BushClass", nullptr, (EPropertyFlags)0x0044000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProeceduralRoom, BushClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AProeceduralRoom_Statics::NewProp_BushClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProeceduralRoom_Statics::NewProp_BushClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProeceduralRoom_Statics::NewProp_TreeClass_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "World" },
		{ "Comment", "//creating variable that references blueprint class\n" },
		{ "ModuleRelativePath", "ProeceduralRoom.h" },
		{ "ToolTip", "creating variable that references blueprint class" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AProeceduralRoom_Statics::NewProp_TreeClass = { "TreeClass", nullptr, (EPropertyFlags)0x0044000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProeceduralRoom, TreeClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AProeceduralRoom_Statics::NewProp_TreeClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProeceduralRoom_Statics::NewProp_TreeClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProeceduralRoom_Statics::NewProp_Rock01Class_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "World" },
		{ "ModuleRelativePath", "ProeceduralRoom.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AProeceduralRoom_Statics::NewProp_Rock01Class = { "Rock01Class", nullptr, (EPropertyFlags)0x0044000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProeceduralRoom, Rock01Class), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AProeceduralRoom_Statics::NewProp_Rock01Class_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProeceduralRoom_Statics::NewProp_Rock01Class_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProeceduralRoom_Statics::NewProp_Rock02Class_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "World" },
		{ "ModuleRelativePath", "ProeceduralRoom.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AProeceduralRoom_Statics::NewProp_Rock02Class = { "Rock02Class", nullptr, (EPropertyFlags)0x0044000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProeceduralRoom, Rock02Class), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AProeceduralRoom_Statics::NewProp_Rock02Class_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProeceduralRoom_Statics::NewProp_Rock02Class_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProeceduralRoom_Statics::NewProp_Rock07Class_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "World" },
		{ "ModuleRelativePath", "ProeceduralRoom.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AProeceduralRoom_Statics::NewProp_Rock07Class = { "Rock07Class", nullptr, (EPropertyFlags)0x0044000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProeceduralRoom, Rock07Class), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AProeceduralRoom_Statics::NewProp_Rock07Class_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProeceduralRoom_Statics::NewProp_Rock07Class_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProeceduralRoom_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProeceduralRoom_Statics::NewProp_Floor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProeceduralRoom_Statics::NewProp_BushClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProeceduralRoom_Statics::NewProp_TreeClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProeceduralRoom_Statics::NewProp_Rock01Class,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProeceduralRoom_Statics::NewProp_Rock02Class,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProeceduralRoom_Statics::NewProp_Rock07Class,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProeceduralRoom_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProeceduralRoom>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProeceduralRoom_Statics::ClassParams = {
		&AProeceduralRoom::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AProeceduralRoom_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AProeceduralRoom_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AProeceduralRoom_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProeceduralRoom_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProeceduralRoom()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProeceduralRoom_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProeceduralRoom, 4283874534);
	template<> PCGTEST_API UClass* StaticClass<AProeceduralRoom>()
	{
		return AProeceduralRoom::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProeceduralRoom(Z_Construct_UClass_AProeceduralRoom, &AProeceduralRoom::StaticClass, TEXT("/Script/PCGTest"), TEXT("AProeceduralRoom"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProeceduralRoom);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
