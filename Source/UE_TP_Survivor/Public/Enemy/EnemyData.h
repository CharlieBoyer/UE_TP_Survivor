#pragma once

#include <memory>

#include "CoreMinimal.h"
#include "EnemyStructTable.h"
#include "Gameplay/SpiritAttributes.h"
#include "Weapons/WeaponBase.h"
#include "Weapons/WeaponStructTable.h"

struct FEnemyData
{
	FName Name;
	UStaticMesh* Mesh;
	int MaxHP;
	float MoveSpeed;
	float BaseDamageMult;
	int ExpValue;
	int wispValue;
	FSpiritAttributes SpiritResistance;
	std::shared_ptr<FWeaponBase> Weapon;

	explicit FEnemyData(const FEnemyStructTable& TableStruct)
	{
		const FWeaponStructTable* StructTable = TableStruct.Weapon.GetRow<FWeaponStructTable>(TableStruct.Weapon.RowName.ToString());

		Name = TableStruct.Name,
		Mesh = TableStruct.Mesh,
		MaxHP = TableStruct.MaxHP,
		MoveSpeed = TableStruct.MoveSpeed,
		BaseDamageMult = TableStruct.BaseDamageMult,
		ExpValue = TableStruct.ExpValue,
		wispValue = TableStruct.wispValue,
		SpiritResistance = TableStruct.SpiritResistance,
			
		Weapon = std::make_shared<FWeaponBase>(FWeaponBase(FWeaponData(*StructTable)));
	}
	
	FEnemyData operator=(const FEnemyStructTable& Other) const
	{
		return FEnemyData(Other);
	}
};
