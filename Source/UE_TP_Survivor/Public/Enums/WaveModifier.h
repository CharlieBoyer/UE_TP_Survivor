// Charlie BOYER

#pragma once

#include "CoreMinimal.h"
#include "WaveModifier.generated.h"

UENUM(meta=(Bitflags, UseEnumValuesAsMaskValuesInEditor="true"))
enum class EWaveModifier: uint8
{
	NONE = 0 UMETA(DisplayName="Standard"),		
	UNIFORM = 1 UMETA(DisplayName="Uniform"),
	INVASION = 2 UMETA(DisplayName="Invasion")
};
