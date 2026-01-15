// Charlie BOYER

#pragma once

#include "CoreMinimal.h"
#include "SpiritType.generated.h"

UENUM(meta=(Bitflags, UseEnumValuesAsMaskValuesInEditor="true"))
enum class ESpiritType: uint8
{
	FORCE = 1,
	WISDOM = 2,
	COURAGE = 4,
	NEUTRAL = FORCE | WISDOM | COURAGE
};

ENUM_CLASS_FLAGS(ESpiritType)
