// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_EndSearch.h"
#include "BehaviorTree/BlackboardComponent.h"

UBTTask_EndSearch::UBTTask_EndSearch()
{
	NodeName = TEXT("End Search");
}

EBTNodeResult::Type UBTTask_EndSearch::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	UBlackboardComponent* BB = OwnerComp.GetBlackboardComponent();
	if (!BB) {
		return EBTNodeResult::Failed;
	}
	BB->SetValueAsBool(TEXT("IsSearching"), false);
	BB->ClearValue(TEXT("TargetActor"));
	BB->SetValueAsBool(TEXT("HasLOS"), false);

	return EBTNodeResult::Succeeded;
}

