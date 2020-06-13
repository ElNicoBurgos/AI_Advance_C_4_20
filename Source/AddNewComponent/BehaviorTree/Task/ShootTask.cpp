// Fill out your copyright notice in the Description page of Project Settings.

#include "ShootTask.h"
#include "Engine/World.h"
EBTNodeResult::Type UShootTask::ExecuteTask(UBehaviorTreeComponent & OwnerComp, uint8* NodeMemory) {
	GetWorld()->SpawnActor<AActor>(bulletTest, OwnerComp.GetOwner()->GetTransform());
	return EBTNodeResult::Succeeded;
}


