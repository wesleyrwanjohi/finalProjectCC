#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class USceneComponent;
#include "BP_Rock__pf1750436433.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/TerrainTest/Blueprints/BP_Rock.BP_Rock_C", OverrideNativeName="BP_Rock_C"))
class ABP_Rock_C__pf1750436433 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Num Of Rocks", Category="Default", MultiLine="true", OverrideNativeName="NumOfRocks"))
	int32 bpv__NumOfRocks__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Modifier", Category="Default", MultiLine="true", OverrideNativeName="Modifier"))
	float bpv__Modifier__pf;
	ABP_Rock_C__pf1750436433(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", Comment="/**\t * Construction script, the place to spawn components and do other setup.\t * @note Name used in CreateBlueprint function\t */", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	virtual void bpf__UserConstructionScript__pf();
public:
};
