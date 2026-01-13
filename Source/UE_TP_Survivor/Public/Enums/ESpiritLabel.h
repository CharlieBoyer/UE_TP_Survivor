// Charlie BOYER

#pragma once

UENUM(meta=(Bitflags, UseEnumValuesAsMaskValuesInEditor="true"))
enum class ESpiritLabel: uint8
{
	FORCE = 1,
	WISDOM = 2,
	COURAGE = 4,
	NEUTRAL = FORCE | WISDOM | COURAGE
};
