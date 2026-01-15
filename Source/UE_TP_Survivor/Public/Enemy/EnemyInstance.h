// Charlie BOYER - ENSI

#pragma once

#include "EnemyData.h"
#include "Components/AttackComponent.h"
#include "EnemyInstance.generated.h"

/**
 * 
 */
UCLASS()
class UE_TP_SURVIVOR_API UEnemyInstance: public UObject
{
	GENERATED_BODY()
	
public:
	UEnemyInstance();
	virtual ~UEnemyInstance() override;
	
	FVector GetPosition() const;
	FVector GetRotation() const;
	
private:
	void SetPosition(const FVector& Value);
	void SetRotation(const FVector& Value); 
	
private:
	std::shared_ptr<FEnemyData> _data;
	std::shared_ptr<UAttackComponent> _atkComponent;
	FVector _position;
	FVector _rotation;
	
	//TODO: Animation states / AnimTextures
};
