// Charlie BOYER - ENSI

#pragma once

#include <memory>

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Weapons/WeaponBase.h"
#include "AttackComponent.generated.h"

/**
 * 
 */
UCLASS()
class UE_TP_SURVIVOR_API UAttackComponent : public UObject
{
	GENERATED_BODY()
	
public:
	UAttackComponent();
	UAttackComponent(FWeaponBase* Weapon);
	virtual ~UAttackComponent() override;
	
private:
	FWeaponBase* _weapon;
};
