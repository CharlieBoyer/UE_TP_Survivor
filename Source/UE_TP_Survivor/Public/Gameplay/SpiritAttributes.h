// Charlie BOYER - ENSI

#pragma once

#include "Enums/SpiritType.h"
#include "SpiritAttributesStructTable.h"
#include "SpiritAttributes.generated.h"

USTRUCT()
struct FSpiritAttributes
{
	GENERATED_BODY()
	
	float Force;
	float Wisdom;
	float Courage;
	
	FSpiritAttributes operator=(const FSpiritAttributesStructTable& Other)
	{
		return FSpiritAttributes
		{
			Force = Other.Force,
			Wisdom = Other.Wisdom,
			Courage = Other.Courage
		};
	}
	
	ESpiritType GetType() const
	{
		const int32 Total = Force + Wisdom + Courage;
		if (Total == 0)
			return ESpiritType::NEUTRAL;

		const float ForceRatio = static_cast<float>(Force) / Total;
		const float WisdomRatio = static_cast<float>(Wisdom) / Total;
		const float CourageRatio = static_cast<float>(Courage) / Total;

		constexpr float DominantThreshold = 0.5f;
		constexpr float MixedThreshold = 0.3f;
		constexpr int32 AbsoluteTolerance = 1;

		// Check if one attribute is dominant
		if (ForceRatio > DominantThreshold)
			return ESpiritType::FORCE;
		if (WisdomRatio > DominantThreshold)
			return ESpiritType::WISDOM;
		if (CourageRatio > DominantThreshold)
			return ESpiritType::COURAGE;

		// If all attributes are balanced (within AbsoluteTolerance)
		if (FMath::Abs(Force - Wisdom) <= AbsoluteTolerance &&
			FMath::Abs(Force - Courage) <= AbsoluteTolerance &&
			FMath::Abs(Wisdom - Courage) <= AbsoluteTolerance)
		{
			return ESpiritType::NEUTRAL;
		}

		// Check mixed combinations
		ESpiritType Result = ESpiritType::NEUTRAL;
		if (ForceRatio > MixedThreshold)
			Result = Result | ESpiritType::FORCE;
		if (WisdomRatio > MixedThreshold)
			Result = Result | ESpiritType::WISDOM;
		if (CourageRatio > MixedThreshold)
			Result = Result | ESpiritType::COURAGE;
		
		// If no dominance or mixed combinations, return NEUTRAL
		return Result;
	}
};
