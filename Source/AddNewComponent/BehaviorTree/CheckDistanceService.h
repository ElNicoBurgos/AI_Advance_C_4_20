// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Services/BTService_BlackboardBase.h"
#include "CheckDistanceService.generated.h"

/**
 * 
 */
UCLASS()
class ADDNEWCOMPONENT_API UCheckDistanceService : public UBTService_BlackboardBase
{
	GENERATED_BODY()

protected:
	void TickNode(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory, float DeltaSeconds) override;
public:
	UPROPERTY(EditAnywhere) FBlackboardKeySelector bbCharacter;
	UPROPERTY(EditAnywhere) FBlackboardKeySelector bbCheckInRange;
	UPROPERTY(EditAnywhere) float miniumDistance;

};
