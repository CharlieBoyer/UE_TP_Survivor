// Charlie BOYER - ENSI

#pragma once

#include "CoreMinimal.h"
#include "Gameplay/SpiritAttributesStructTable.h"
#include "EnemyStructTable.generated.h"

USTRUCT()
struct FEnemyStructTable: public FTableRowBase
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere) FName Name;
	UPROPERTY(EditAnywhere) UStaticMesh* Mesh;
	UPROPERTY(EditAnywhere) int MaxHP;
	UPROPERTY(EditAnywhere) float MoveSpeed;
	UPROPERTY(EditAnywhere) float BaseDamageMult;
	UPROPERTY(EditAnywhere) int ExpValue;
	UPROPERTY(EditAnywhere) int wispValue;
	UPROPERTY(EditAnywhere) FSpiritAttributesStructTable SpiritResistance;
	UPROPERTY(EditAnywhere) FDataTableRowHandle Weapon;
};
