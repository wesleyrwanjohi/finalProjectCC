// Fill out your copyright notice in the Description page of Project Settings.


#include "ProeceduralRoom.h"
#include "DrawDebugHelpers.h"

// Sets default values
AProeceduralRoom::AProeceduralRoom()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//setting floor component to static mesh component
	Floor = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FloorComponent")); 
	SetRootComponent(Floor);

	Rocks.Emplace(Rock01Class);
	Rocks.Emplace(Rock02Class);

	//5 x 5 grid
	GridSizeX = 10;
	GridSizeY = 10;

	//position vectors of top left and top right of grid
	TopLeft = FVector(0.f);
	BottomRight = FVector(25000.f, 25000.f, 0.f);


	SquareWidth = 5000;
	RoomLength = 25000;
	RoomWidth = 25000;

	Radius = 100.f;
}

// Called when the game starts or when spawned
void AProeceduralRoom::BeginPlay()
{
	Super::BeginPlay();

	//draws grid 
	CreateGrid();

	//spawns rocks
	//PlacePointsOnGrid(TreeClass);

	
	for (int i = 0; i < 10; i++) {
		PlacePointsOnGrid(Rock01Class);
		PlacePointsOnGrid(Rock02Class);
	}

	for (int i = 0; i < 75; i++) {
		SpawnItem(Rock07Class);
	}
	

	/*for (auto& pcgRocks: Rocks) 
	{
		PlacePointsOnGrid(pcgRocks);
	}*/
	
	
	/*for (int i = 0; i < 500; i++) {
		SpawnItem(BushClass);
	}*/

	//SpawnItem(TreeClass);
	
}

TArray<FVector> AProeceduralRoom::MeshData(const UStaticMeshComponent* StaticMeshComponent)
{
	TArray<FVector> vertices = TArray<FVector>();

	//~~~~~~~~~~~~~~~~~~~~
	// Many thanks to Rama for this solution! :)
	//
	// Vertex Buffer
	if (!IsValidLowLevel()) return vertices;
	if (!StaticMeshComponent) return vertices;
	if (!StaticMeshComponent->GetStaticMesh()) return vertices;
	if (!StaticMeshComponent->GetStaticMesh()->RenderData) return vertices;
	if (StaticMeshComponent->GetStaticMesh()->RenderData->LODResources.Num() > 0)
	{
		FPositionVertexBuffer* VertexBuffer = &StaticMeshComponent->GetStaticMesh()->RenderData->LODResources[0].VertexBuffers.PositionVertexBuffer;
		if (VertexBuffer)
		{
			const int32 VertexCount = VertexBuffer->GetNumVertices();
			for (int32 Index = 0; Index < VertexCount; Index++)
			{
				//This is in the Static Mesh Actor Class, so it is location and tranform of the SMActor
				const FVector WorldSpaceVertexLocation = GetActorLocation() + GetTransform().TransformVector(VertexBuffer->VertexPosition(Index));
				//add to output FVector array
				vertices.Add(WorldSpaceVertexLocation);
			}
		}
	}

	return vertices;
}

// Called every frame
void AProeceduralRoom::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AProeceduralRoom::SpawnItem(UClass * ItemToSpawn)
{
	//creates random x and y positions for item
	float XCoord = FMath::FRandRange(2500.f, 22500.f);
	float YCoord = FMath::FRandRange(0.f, 25000.f);

	//random rotation between 0 and 360 degrees
	float YRot = FMath::FRandRange(0.f, 360.f);

	FVector Location(XCoord, YCoord, 0.f);
	FRotator Rotation(0.f, YRot, 0.f);

	GetWorld()->SpawnActor<AActor>(ItemToSpawn, Location, Rotation); //spawns an actor at random location and rotation 

}

void AProeceduralRoom::CreateGrid() 
{
	for (int32 i = 0; i < GridSizeX +1; i++)
	{
		FVector Start = TopLeft + FVector(i*SquareWidth, 0.f, 1.0f);
		FVector End = Start + FVector(0.f, RoomLength, 1.0f);
		DrawDebugLine(GetWorld(), Start, End, FColor::Blue, true);
	}

	for (int32 i = 0; i < GridSizeX + 1; i++)
	{
		FVector Start = TopLeft + FVector(0.f, i*SquareWidth, 1.0f);
		FVector End = Start + FVector(RoomWidth, 0.f, 1.0f);
		DrawDebugLine(GetWorld(), Start, End, FColor::Blue, true);
	}
}

FVector AProeceduralRoom::GetRandomPointInSqaure(const FVector& UpperLeft, const FVector& LowerRight) 
{
	//gets random coordinate in square
	float RandomX = FMath::FRandRange(UpperLeft.X, LowerRight.X);
	float RandomY = FMath::RandRange(UpperLeft.Y, LowerRight.Y);

	return FVector(RandomX, RandomY, 1.0f);
}

void AProeceduralRoom::PlacePointsOnGrid(UClass *ItemToSpawn)
{
	//2D for loop that iterates through grid squares and finds random points 
	for (int32 i = 0; i < GridSizeX; i++)
	{
		for (int32 j = 0; j < GridSizeY; j++) {


			FVector UpperLeft(i * SquareWidth + Radius, j * SquareWidth + Radius, 1.0f);
			FVector LowerRight(i * SquareWidth + SquareWidth - Radius, j * SquareWidth + SquareWidth - Radius, 1.0f);
			FVector RandPointInSquare = GetRandomPointInSqaure(UpperLeft, LowerRight); //find random point in grid -- offset by a defined radius

			//DrawDebugPoint(GetWorld(), RandPointInSquare, 5.f, FColor::Red, true); 

			//DrawDebugCircle(GetWorld(), RandPointInSquare, Radius, 48, FColor::Red, true, -1.f, 0, 2.5f, FVector(0.f, 1.f, 0.f), FVector(1.f, 0.f, 0.f), true); 

			
			float RandRotY = FMath::FRandRange(0.f, 360.f);

			GetWorld()->SpawnActor<AActor>(ItemToSpawn, RandPointInSquare, FRotator(0.f,RandRotY,0.f)); //spawns an actor at random location and rotation 
		}
	}
}
	
