// Charlie BOYER - ENSI


#include "Gameplay/RenderActor.h"

#include "Enemy/EnemyData.h"


ARenderActor::ARenderActor()
{
	PrimaryActorTick.bCanEverTick = true;
	
	// Get all raw structs from table rows
	TArray<FEnemyStructTable*> EnemyRawStructs = {};
	EnemyDataTable->GetAllRows<FEnemyStructTable>("[ARenderActor] Recover all ennemies...", EnemyRawStructs);
	
	// Convert raw structs to usable FEnemyData
	TArray<FEnemyData*> EnemyDataArray = {};
	for (const FEnemyStructTable* entity : EnemyRawStructs)
	{
		FEnemyData* enemyData = new FEnemyData(*entity);
		EnemyDataArray.Add(enemyData);
	}
	
	// Create an ISM component for each enemy type
	for (const FEnemyData* EnemyData : EnemyDataArray)
	{
		UInstancedStaticMeshComponent* ISMComp = CreateDefaultSubobject<UInstancedStaticMeshComponent>(EnemyData->Name);
		ISMComp->SetStaticMesh(EnemyData->Mesh);
		ISMComp->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepWorldTransform, NAME_None);
		ISMs.Add(EnemyData->Name, ISMComp);
	}
	
	// Add all ISM components to the actor
	for (const TPair<FName, UInstancedStaticMeshComponent*>& ISMPair : ISMs)
	{
		this->AddInstanceComponent(ISMPair.Value);
	}
}

void ARenderActor::BeginPlay()
{
	Super::BeginPlay();
	
}

void ARenderActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
