// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "ShootTask.generated.h"

/**
 * 
 */
UCLASS()
class ADDNEWCOMPONENT_API UShootTask : public UBTTask_BlackboardBase
{
	GENERATED_BODY()
	
protected:

	EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent & OwnerComp, uint8* NodeMemory) override;

public:

	UPROPERTY(EditAnywhere) TSubclassOf<AActor> bulletTest;
};
