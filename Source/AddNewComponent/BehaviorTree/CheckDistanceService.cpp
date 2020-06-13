// Fill out your copyright notice in the Description page of Project Settings.

#include "CheckDistanceService.h"
#include "BehaviorTree/BlackboardComponent.h"

void UCheckDistanceService::TickNode(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory, float DeltaSeconds)
{
	UBlackboardComponent* bbComponent = OwnerComp.GetBlackboardComponent();
	UObject* targetObject = bbComponent->GetValueAsObject(bbCharacter.SelectedKeyName);
	AActor* targetCharacter = Cast<AActor>(targetObject);

	
	if (targetCharacter) {
		FVector enemyLocation = OwnerComp.GetOwner()->GetActorLocation();
		FVector characterLocation = targetCharacter->GetActorLocation();
		FVector distance = enemyLocation - characterLocation;
		float distanceLenght = distance.Size();

		if (distanceLenght <= miniumDistance) {
			bbComponent->SetValueAsBool(bbCheckInRange.SelectedKeyName, true);
		}
		else {
			bbComponent->SetValueAsBool(bbCheckInRange.SelectedKeyName, false);
		}
	}

}

