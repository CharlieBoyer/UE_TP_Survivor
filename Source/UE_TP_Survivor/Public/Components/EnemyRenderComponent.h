// Charlie BOYER - ENSI

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EnemyRenderComponent.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class UE_TP_SURVIVOR_API UEnemyRenderComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UEnemyRenderComponent();

protected:
	virtual void BeginPlay() override;

public:
	void DrawInstances()
};
