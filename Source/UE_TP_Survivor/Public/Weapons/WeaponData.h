#pragma once

#include "CoreMinimal.h"
#include "Enums/Rarity.h"
#include "Gameplay/SpiritAttributes.h"
#include "Weapons/WeaponStructTable.h"

class UNiagaraSystem;

struct FWeaponData
{
	FWeaponData() = default;
	explicit FWeaponData(const FWeaponStructTable& Row)
	{
		Rarity = Row.Rarity,
		Effect = Row.VisualEffect,
		Damage = Row.Damage,
		Range = Row.Range,
		Cooldown = Row.Cooldown,
		SpiritAffinity = Row.Affinity,
		DropChance = Row.DropChance;
	}

	ERarity Rarity;
	UNiagaraSystem* Effect;
	int Damage;
	float Range;
	float Cooldown;
	FSpiritAttributes SpiritAffinity;
	float DropChance;

	FWeaponData operator=(const FWeaponStructTable& Other) const
	{
		return FWeaponData(Other);
	}
};
