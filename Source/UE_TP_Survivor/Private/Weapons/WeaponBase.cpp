// Charlie BOYER - ENSI


#include "Weapons/WeaponBase.h"


FWeaponBase::FWeaponBase() : _data() {}

FWeaponBase::FWeaponBase(const FWeaponData& InData) : _data(InData) {}

FWeaponBase::~FWeaponBase() {}

FWeaponData FWeaponBase::GetData() const
{
	return _data;
}
