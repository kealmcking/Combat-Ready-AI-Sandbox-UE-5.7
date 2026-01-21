// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_SetBackpedalLocation.h"

#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "NavigationSystem.h"
#include "GameFramework/Pawn.h"

UBTTask_SetBackpedalLocation::UBTTask_SetBackpedalLocation()
{
	NodeName = TEXT("Set Backpedal Location");
}

EBTNodeResult::Type UBTTask_SetBackpedalLocation::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	UBlackboardComponent* BB = OwnerComp.GetBlackboardComponent();
	if (!BB) return EBTNodeResult::Failed;

	AAIController* AICon = OwnerComp.GetAIOwner();
	APawn* Pawn = AICon ? AICon->GetPawn() : nullptr;
	if (!Pawn) return EBTNodeResult::Failed;

	AActor* Target = Cast<AActor>(BB->GetValueAsObject(Key_TargetActor));
	if (!Target) return EBTNodeResult::Failed;

	UWorld* World = Pawn->GetWorld();
	if (!World) return EBTNodeResult::Failed;

	const UNavigationSystemV1* NavSys = UNavigationSystemV1::GetCurrent(World);
	if (!NavSys) return EBTNodeResult::Failed;

	const FVector SelfLoc = Pawn->GetActorLocation();
	const FVector TargetLoc = Target->GetActorLocation();

	FVector Away = (SelfLoc - TargetLoc);
	if (!Away.Normalize()) {
		Away = Pawn->GetActorForwardVector();
	}

	const FVector Right = FVector::CrossProduct(FVector::UpVector, Away).GetSafeNormal();
	const float Jitter = FMath::FRandRange(-SideJitter, SideJitter);

	const FVector RawGoal = SelfLoc + (Away * BackpedalDistance) + (Right * Jitter);

	FNavLocation Projected;
	const bool bProjected = NavSys->ProjectPointToNavigation(
		RawGoal,
		Projected,
		FVector(ProjectRadius, ProjectRadius, ProjectRadius)
	);

	if (!bProjected) return EBTNodeResult::Failed;

	BB->SetValueAsVector(Key_DesiredLocation, Projected.Location);
	return EBTNodeResult::Succeeded;
}