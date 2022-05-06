// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProeceduralRoom.generated.h"

UCLASS()
class PCGTEST_API AProeceduralRoom : public AActor
{
	GENERATED_BODY()

	UFUNCTION(BlueprintPure, Category = "Floor", meta = (Keywords = "floor vertex mesh meshdata", NativeBreakFunc))
	TArray<FVector> MeshData(const UStaticMeshComponent* StaticMeshComponent);
	
public:	
	// Sets default values for this actor's properties
	AProeceduralRoom();

	


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private: 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = World, meta = (AllowPrivateAccess = "true"));
	UStaticMeshComponent *Floor;

	TArray<TSubclassOf<AActor>> Rocks; //creating TArray iterate through rock blueprints

	//creating variable that references blueprint class
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = World, meta = (AllowPrivateAccess = "true"));
	TSubclassOf<AActor> BushClass;

	//creating variable that references blueprint class
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = World, meta = (AllowPrivateAccess = "true"));
	TSubclassOf<AActor> TreeClass;

	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = World, meta = (AllowPrivateAccess = "true"));
	TSubclassOf<AActor> Rock01Class;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = World, meta = (AllowPrivateAccess = "true"));
	TSubclassOf<AActor> Rock02Class;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = World, meta = (AllowPrivateAccess = "true"));
	TSubclassOf<AActor> Rock07Class;


	void SpawnItem(UClass *ItemToSpawn); //spawns an actor -- UClass references a blueprint
	

	float SquareWidth;
	float RoomLength;
	float RoomWidth;

	float Radius;

	FVector TopLeft;
	FVector BottomRight;
	int32 GridSizeX;
	int32 GridSizeY;

	void CreateGrid();

	//vectors get passed in without making copies
	FVector GetRandomPointInSqaure(const FVector& UpperLeft, const FVector& LowerRight);

	void PlacePointsOnGrid(UClass *ItemToSpawn);
};
