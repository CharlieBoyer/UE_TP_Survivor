// Charlie BOYER - ENSI

#pragma once

#include "CoreMinimal.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "GameFramework/Actor.h"
#include "RenderActor.generated.h"

UCLASS(Blueprintable)
class UE_TP_SURVIVOR_API ARenderActor : public AActor
{
	GENERATED_BODY()

public:
	ARenderActor();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
	
private:
	UPROPERTY()
	TMap<FName, UInstancedStaticMeshComponent*> ISMs;
	UPROPERTY(EditAnywhere, Category="BP Data")
	UDataTable* EnemyDataTable;
};
