// Fill out your copyright notice in the Description page of Project Settings.

#include "BTService_UpdateTargetMemory.h"

#include "BehaviorTree/BlackboardComponent.h"
#include "AIController.h"
#include "GameFramework/Actor.h"

UBTService_UpdateTargetMemory::UBTService_UpdateTargetMemory()
{
	NodeName = TEXT("Update Target Memory");
	Interval = 0.2f;
	RandomDeviation = 0.0f;
}

void UBTService_UpdateTargetMemory::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) {
	UBlackboardComponent* BB = OwnerComp.GetBlackboardComponent();

	if (!BB) return;

	const bool bHasLOS = BB->GetValueAsBool(TEXT("HasLOS"));
	const float LastSensedTime = BB->GetValueAsFloat(TEXT("LastSensedTime"));

	const float Now = OwnerComp.GetWorld()->GetTimeSeconds();
	const float TimeSinceSensed = Now - LastSensedTime;

	if (bHasLOS) {
		BB->SetValueAsBool(TEXT("IsSearching"), false);
		return;
	}

	if (TimeSinceSensed < MaxSearchTime) {
		BB->SetValueAsBool(TEXT("IsSearching"), true);
	}
	else {
		BB->ClearValue(TEXT("TargetActor"));
		BB->SetValueAsBool(TEXT("IsSearching"), false);
		BB->SetValueAsBool(TEXT("HasLOS"), false);
	}
}

