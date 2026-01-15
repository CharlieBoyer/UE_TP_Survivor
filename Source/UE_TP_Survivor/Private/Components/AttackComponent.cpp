// Charlie BOYER - ENSI


#include "Components/AttackComponent.h"

UAttackComponent::UAttackComponent(): _weapon(nullptr) {}

UAttackComponent::UAttackComponent(FWeaponBase* Weapon)
{
	_weapon = Weapon;
}

UAttackComponent::~UAttackComponent()
{
}
