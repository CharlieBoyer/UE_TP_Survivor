// Charlie BOYER - ENSI

#pragma once

#include "CoreMinimal.h"
#include "WeaponData.h"

/**
 * 
 */
class UE_TP_SURVIVOR_API FWeaponBase
{
	
public:
	FWeaponBase();
	FWeaponBase(const FWeaponData& InData);
	~FWeaponBase();
	
	FWeaponData GetData() const;

private:
	FWeaponData _data;
	
	int _level = 1;
};
