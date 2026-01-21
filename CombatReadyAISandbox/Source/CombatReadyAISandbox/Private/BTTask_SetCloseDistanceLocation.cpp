// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_SetCloseDistanceLocation.h"

#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "NavigationSystem.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/Actor.h"

UBTTask_SetCloseDistanceLocation::UBTTask_SetCloseDistanceLocation()
{
	NodeName = TEXT("Set Close Distance Location");
}

EBTNodeResult::Type UBTTask_SetCloseDistanceLocation::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
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

	const float MinR = BB->GetValueAsFloat(Key_PreferredRangeMin);
	const float MaxR = BB->GetValueAsFloat(Key_PreferredRangeMax);

	const float SafeMinR = FMath::Max(0.0f, MinR);
	const float SafeMaxR = FMath::Max(SafeMinR, MaxR);

	const float Band = (SafeMaxR - SafeMinR);
	float DesiredR = SafeMinR + Band * FMath::Clamp(RangeBias01, 0.0f, 1.0f);

	DesiredR = FMath::Max(DesiredR, MinSeperationFromTarget);

	const FVector TargetLoc = Target->GetActorLocation();
	const FVector SelfLoc = Pawn->GetActorLocation();

	FVector FromTarget = (SelfLoc - TargetLoc);
	if (!FromTarget.Normalize()) {
		FromTarget = Pawn->GetActorForwardVector();
	}

	const FVector Right = FVector::CrossProduct(FVector::UpVector, FromTarget).GetSafeNormal();
	const float Jitter = FMath::FRandRange(-SideJitter, SideJitter);

	const FVector RawGoal = TargetLoc + (FromTarget * DesiredR) + (Right * Jitter);

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
