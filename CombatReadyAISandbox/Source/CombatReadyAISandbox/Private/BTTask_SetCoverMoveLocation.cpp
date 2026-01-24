#include "BTTask_SetCoverMoveLocation.h"

#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "NavigationSystem.h"
#include "GameFramework/Pawn.h"
#include "Components/CapsuleComponent.h"
#include "DrawDebugHelpers.h"

UBTTask_SetCoverMoveLocation::UBTTask_SetCoverMoveLocation()
{
	NodeName = TEXT("Set Cover Move Location");
}

static FVector GetBoundsClosestPointTo(const AActor* A, const FVector& ToPoint)
{
	FVector Origin, Extents;
	A->GetActorBounds(true, Origin, Extents);

	const FVector Min = Origin - Extents;
	const FVector Max = Origin + Extents;

	return FVector(
		FMath::Clamp(ToPoint.X, Min.X, Max.X),
		FMath::Clamp(ToPoint.Y, Min.Y, Max.Y),
		FMath::Clamp(ToPoint.Z, Min.Z, Max.Z)
	);
}

EBTNodeResult::Type UBTTask_SetCoverMoveLocation::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	UBlackboardComponent* BB = OwnerComp.GetBlackboardComponent();
	if (!BB) return EBTNodeResult::Failed;

	AAIController* AICon = OwnerComp.GetAIOwner();
	APawn* Pawn = AICon ? AICon->GetPawn() : nullptr;
	if (!Pawn) return EBTNodeResult::Failed;

	AActor* Cover = Cast<AActor>(BB->GetValueAsObject(Key_CoverActor));
	if (!Cover) return EBTNodeResult::Failed;

	AActor* Target = Cast<AActor>(BB->GetValueAsObject(Key_TargetActor));
	if (!Target) return EBTNodeResult::Failed;

	UWorld* World = Pawn->GetWorld();
	if (!World) return EBTNodeResult::Failed;

	const UNavigationSystemV1* NavSys = UNavigationSystemV1::GetCurrent(World);
	if (!NavSys) return EBTNodeResult::Failed;

	const FVector PlayerLoc = Target->GetActorLocation();
	const FVector PawnLoc = Pawn->GetActorLocation();
	const FVector CoverAimPoint = Cover->GetActorLocation();

	FCollisionQueryParams Params(SCENE_QUERY_STAT(CoverSurfaceTrace), false);
	Params.AddIgnoredActor(Pawn);
	if (AICon) Params.AddIgnoredActor(AICon);
	Params.AddIgnoredActor(Target);

	FHitResult Hit;
	const bool bHitCoverSurface = World->LineTraceSingleByChannel(
		Hit,
		PlayerLoc,
		CoverAimPoint,
		TraceChannel,
		Params
	);

	FVector SurfacePoint = FVector::ZeroVector;
	FVector SurfaceNormal = FVector::ZeroVector;

	if (bHitCoverSurface && Hit.GetActor() == Cover)
	{
		SurfacePoint = Hit.ImpactPoint;
		SurfaceNormal = -Hit.ImpactNormal;
	}
	else
	{
		SurfacePoint = GetBoundsClosestPointTo(Cover, PlayerLoc);

		FVector FromPlayerToSurface = (SurfacePoint - PlayerLoc);
		if (!FromPlayerToSurface.Normalize())
			FromPlayerToSurface = (PawnLoc - PlayerLoc).GetSafeNormal();

		SurfaceNormal = FromPlayerToSurface;
	}

	float AICapsuleRadius = 34.f;
	if (UCapsuleComponent* Cap = Pawn->FindComponentByClass<UCapsuleComponent>())
	{
		AICapsuleRadius = Cap->GetScaledCapsuleRadius();
	}

	const float StandOff = AICapsuleRadius + MinStandOff + ExtraInset;
	const FVector RawGoal = SurfacePoint + (SurfaceNormal * StandOff);

	FVector Tangent = FVector::CrossProduct(FVector::UpVector, SurfaceNormal);
	if (!Tangent.Normalize())
	{
		Tangent = FVector::CrossProduct(FVector::ForwardVector, SurfaceNormal);
		Tangent.Normalize();
	}

	FVector Origin, Extents;
	Cover->GetActorBounds(true, Origin, Extents);

	const float SlideHalfRange =
		FMath::Abs(Tangent.X) * Extents.X +
		FMath::Abs(Tangent.Y) * Extents.Y +
		FMath::Abs(Tangent.Z) * Extents.Z;

	const float EdgeMargin = AICapsuleRadius + 20.f;
	const float MaxSlide = FMath::Max(0.f, SlideHalfRange - EdgeMargin);

	// --- Occlusion check: candidate must still be "behind" this cover relative to the player
	auto IsOccludedByCover = [&](const FVector& Candidate) -> bool
		{
			FHitResult OcclHit;

			FCollisionQueryParams OcclParams(SCENE_QUERY_STAT(CoverOcclusionTrace), false);
			OcclParams.AddIgnoredActor(Pawn);
			if (AICon) OcclParams.AddIgnoredActor(AICon);
			OcclParams.AddIgnoredActor(Target);

			const bool bHit = World->LineTraceSingleByChannel(
				OcclHit,
				PlayerLoc,
				Candidate,
				TraceChannel,
				OcclParams
			);

			return bHit && (OcclHit.GetActor() == Cover);
		};

	// --- Sample a few candidates along the tangent and take the first valid one
	const int32 Attempts = 8;
	FVector BestLoc = FVector::ZeroVector;
	bool bFound = false;

	for (int32 i = 0; i < Attempts; ++i)
	{
		const float Slide = (MaxSlide > 0.f) ? FMath::FRandRange(-MaxSlide, MaxSlide) : 0.f;
		const FVector RawCandidate = RawGoal + Tangent * Slide;

		FNavLocation ProjectedCandidate;
		const bool bProj = NavSys->ProjectPointToNavigation(
			RawCandidate,
			ProjectedCandidate,
			FVector(ProjectRadius, ProjectRadius, ProjectRadius)
		);

		if (!bProj) continue;
		if (!IsOccludedByCover(ProjectedCandidate.Location)) continue;

		BestLoc = ProjectedCandidate.Location;
		bFound = true;
		break;
	}

	if (!bFound)
	{
		FNavLocation Projected;
		const bool bProjected = NavSys->ProjectPointToNavigation(
			RawGoal,
			Projected,
			FVector(ProjectRadius, ProjectRadius, ProjectRadius)
		);

		if (!bProjected) return EBTNodeResult::Failed;
		BestLoc = Projected.Location;
	}

	BB->SetValueAsVector(Key_DesiredLocation, BestLoc);

	if (bDrawDebug)
	{
		DrawDebugLine(World, PlayerLoc, CoverAimPoint, FColor::Cyan, false, 1.0f, 0, 1.0f);
		DrawDebugSphere(World, SurfacePoint, 18.f, 12, FColor::Yellow, false, 1.0f);
		DrawDebugLine(World, SurfacePoint, SurfacePoint + SurfaceNormal * 120.f, FColor::Green, false, 1.0f, 0, 2.0f);
		DrawDebugLine(World, RawGoal, RawGoal + Tangent * 120.f, FColor::Magenta, false, 1.0f, 0, 2.0f);
		DrawDebugSphere(World, BestLoc, 18.f, 12, FColor::Green, false, 1.0f);
	}

	return EBTNodeResult::Succeeded;
}

