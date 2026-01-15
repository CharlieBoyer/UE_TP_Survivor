// Charlie BOYER - ENSI


#include "UE_TP_Survivor/Public/Subsystems/WorldSpawnerSubsystem.h"

UWorldSpawnerSubsystem::UWorldSpawnerSubsystem()
{
}

UWorldSpawnerSubsystem::~UWorldSpawnerSubsystem()
{
}

FWave* UWorldSpawnerSubsystem::GetCurrentWave() const
{
	return _currentWave;
}

int UWorldSpawnerSubsystem::GetInstanceCount() const
{
	return _instanceCount;
}

void UWorldSpawnerSubsystem::UpdateEnemyInstancesPosition()
{
	// TODO: compute next positions with flow-fields
}
