#pragma once

#include "CoreMinimal.h"
#include "WeaponType.generated.h"

UENUM()
enum class EWeaponType: uint8
{
	// Player
	SWORD_SLASH 		UMETA(DisplayName="Sword Slash"),
	ARC_VOLLEY			UMETA(DisplayName="Arc Volley"),
	SHIELD_BASH 		UMETA(DisplayName="Shield Bash"),
	FAIRY_CHARM 		UMETA(DisplayName="Fairy Charm"),
	
	// Enemy
	ENEMY_LIGHT_MELEE 	UMETA(DisplayName="Enemy melee light"),
	ENEMY_HEAVY_MELEE 	UMETA(DisplayName="Enemy melee heavy"),
	ENEMY_RANGED_ARROWS UMETA(DisplayName="Enemy ranged arrow"),
	ENEMY_RANGED_MAGIC	UMETA(DisplayName="Enemy ranged magic")
};
