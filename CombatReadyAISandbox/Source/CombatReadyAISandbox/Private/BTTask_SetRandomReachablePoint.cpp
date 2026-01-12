// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_SetRandomReachablePoint.h"

#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "NavigationSystem.h"
#include "GameFramework/Pawn.h"

UBTTask_SetRandomReachablePoint::UBTTask_SetRandomReachablePoint()
{
	NodeName = TEXT("Set Random Reachable Point");

	MoveLocationKey.AddVectorFilter(this, GET_MEMBER_NAME_CHECKED(UBTTask_SetRandomReachablePoint, MoveLocationKey));
}

EBTNodeResult::Type UBTTask_SetRandomReachablePoint::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AAIController* AICon = OwnerComp.GetAIOwner();
	if (!AICon) {
		return EBTNodeResult::Failed;
	}
	
	APawn* Pawn = AICon->GetPawn();
	if (!Pawn) {
		return EBTNodeResult::Failed;
	}

	UWorld* World = Pawn->GetWorld();
	if (!World) {
		return EBTNodeResult::Failed;
	}

	const UNavigationSystemV1* NavSys = UNavigationSystemV1::GetCurrent(World);
	if (!NavSys) {
		return EBTNodeResult::Failed;
	}

	const FVector Origin = Pawn->GetActorLocation();
	FNavLocation OutLocation;
	const bool bFound = NavSys->GetRandomReachablePointInRadius(Origin, SearchRadius, OutLocation);

	if (!bFound) {
		return EBTNodeResult::Failed;
	}

	UBlackboardComponent* BB = OwnerComp.GetBlackboardComponent();
	if (!BB) {
		return EBTNodeResult::Failed;
	}

	BB->SetValueAsVector(MoveLocationKey.SelectedKeyName, OutLocation.Location);
	return EBTNodeResult::Succeeded;
}
