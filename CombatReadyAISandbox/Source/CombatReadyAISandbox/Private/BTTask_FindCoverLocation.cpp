// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_FindCoverLocation.h"

#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "NavigationSystem.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/Actor.h"
#include "DrawDebugHelpers.h"

UBTTask_FindCoverLocation::UBTTask_FindCoverLocation()
{
	NodeName = TEXT("Find Cover Location");
}

static FVector GetEyePoint(const FVector& Base, float EyeHeightOffset)
{
	return Base + FVector(0.f, 0.f, EyeHeightOffset);
}

EBTNodeResult::Type UBTTask_FindCoverLocation::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	UBlackboardComponent* BB = OwnerComp.GetBlackboardComponent();
	if (!BB) return EBTNodeResult::Failed;

	AAIController* AICon = OwnerComp.GetAIOwner();
	APawn* Pawn = AICon ? AICon->GetPawn() : nullptr;
	if (!Pawn) return EBTNodeResult::Failed;

	UWorld* World = Pawn->GetWorld();
	if (!World) return EBTNodeResult::Failed;

	const float Now = World->GetTimeSeconds();
	const float LockTime = BB->GetValueAsFloat(Key_CoverLockTime);
	if (LockTime > 0.f && Now < LockTime) {
		return EBTNodeResult::Succeeded;
	}

	AActor* Target = Cast<AActor>(BB->GetValueAsObject(Key_TargetActor));
	if (!Target) return EBTNodeResult::Failed;

	const UNavigationSystemV1* NavSys = UNavigationSystemV1::GetCurrent(World);
	if (!NavSys) return EBTNodeResult::Failed;

	const FVector SelfLoc = Pawn->GetActorLocation();
	const FVector TargetLoc = Target->GetActorLocation();

	FNavLocation Best;
	bool bFoundAny = false;

	auto ScorePoint = [&](const FVector& P) -> float {
		if (!bUseDistanceBand) return 0.f;

		const float Dist = FVector::Dist(P, TargetLoc);
		const float Mid = (MinTargetDistance + MaxTargetDistance) * 0.5f;
		return FMath::Abs(Dist - Mid);
		};
	
	float BestScore = TNumericLimits<float>::Max();

	FCollisionQueryParams Params(SCENE_QUERY_STAT(AI_CoverTrace), false);
	Params.AddIgnoredActor(Pawn);

	for (int32 i = 0; i < NumSamples; ++i) {
		const FVector2D Dir2D = FVector2D(FMath::FRandRange(-1.f, 1.f), FMath::FRandRange(-1.f, 1.f)).GetSafeNormal();
		const float R = FMath::FRandRange(SearchRadius * 0.25f, SearchRadius);
		const FVector CandidateRaw = SelfLoc + FVector(Dir2D.X, Dir2D.Y, 0.f) * R;

		FNavLocation CandidateNav;
		const bool bOnNav = NavSys->ProjectPointToNavigation(CandidateRaw, CandidateNav, FVector(250.f, 250.f, 250.f));
		if (!bOnNav) continue;

		const FVector P = CandidateNav.Location;

		if (bUseDistanceBand) {
			const float DistToTarget = FVector::Dist(P, TargetLoc);
			if (DistToTarget < MinTargetDistance || DistToTarget > MaxTargetDistance) {
				if (bDrawDebug) {
					DrawDebugPoint(World, P, 8.f, FColor::Silver, false, 0.3f);
				}
				continue;
			}
		}

		const FVector From = GetEyePoint(P, EyeHeightOffset);
		const FVector To = GetEyePoint(TargetLoc, EyeHeightOffset);

		FHitResult Hit;
		const bool bHit = World->LineTraceSingleByChannel(Hit, From, To, TraceChannel, Params);

		bool bIsCovered = false;
		if (bRequireLOSBlocked) {
			if (bHit && Hit.GetActor() != Target) {
				bIsCovered = true;
			}
		}
		else {
			bIsCovered = true;
		}

		if (bDrawDebug) {
			const FColor C = bIsCovered ? FColor::Green : FColor::Red;
			DrawDebugPoint(World, P, 10.f, C, false, 0.35f);
			DrawDebugLine(World, From, To, C, false, 0.35f, 0, 1.5f);
		}

		if (!bIsCovered) continue;

		const float S = ScorePoint(P);
		if (!bFoundAny || S < BestScore) {
			Best = CandidateNav;
			BestScore = S;
			bFoundAny = true;
		}
	}

	if (!bFoundAny) {
		return EBTNodeResult::Failed;
	}

	BB->SetValueAsVector(Key_DesiredLocation, Best.Location);
	BB->SetValueAsVector(Key_CoverLocation, Best.Location);
	BB->SetValueAsFloat(Key_CoverLockTime, Now + CoverLockSeconds);

	return EBTNodeResult::Succeeded;
}
