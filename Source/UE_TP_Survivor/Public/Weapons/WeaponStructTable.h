#pragma once

#include "CoreMinimal.h"
#include "Enums/Rarity.h"
#include "Enums/WeaponType.h"
#include "Gameplay/SpiritAttributesStructTable.h"
#include "WeaponStructTable.generated.h"

class UNiagaraSystem;

USTRUCT()
struct FWeaponStructTable: public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere) EWeaponType Type;
	UPROPERTY(EditAnywhere) ERarity Rarity;
	UPROPERTY(EditAnywhere) int Damage;
	UPROPERTY(EditAnywhere) int DamageGrowth;
	UPROPERTY(EditAnywhere) float Range;
	UPROPERTY(EditAnywhere) float Cooldown;
	UPROPERTY(EditAnywhere) FSpiritAttributesStructTable Affinity;
	UPROPERTY(EditAnywhere) FSpiritAttributesStructTable AffinityGrowth;
	UPROPERTY(EditAnywhere) float DropChance;
	UPROPERTY(EditAnywhere) UNiagaraSystem* VisualEffect;
};
