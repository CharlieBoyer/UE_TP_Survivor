// Charlie BOYER - ENSI

#pragma once

#include "CoreMinimal.h"
#include "Components/EnemyRenderComponent.h"
#include "Enemy/EnemyInstance.h"
#include "Gameplay/RenderActor.h"
#include "Gameplay/Wave.h"
#include "Subsystems/WorldSubsystem.h"
#include "WorldSpawnerSubsystem.generated.h"

/**
 * 
 */
UCLASS()
class UE_TP_SURVIVOR_API UWorldSpawnerSubsystem : public UWorldSubsystem
{
	GENERATED_BODY()
	
public:
	UWorldSpawnerSubsystem();
	virtual ~UWorldSpawnerSubsystem() override;
	
public:
	FWave* GetCurrentWave() const;
	int GetInstanceCount() const;
	
	void UpdateEnemyInstancesPosition();
	
private:
	UPROPERTY()
	TMap<FName, UInstancedStaticMeshComponent*> _ISMs;
	UPROPERTY()
	TObjectPtr<ARenderActor> _renderActor;
	UPROPERTY()
	TMap<int, UEnemyInstance*> _enemyInstances;
	
private:
	int _instanceCount;
	FWave* _currentWave;
};
