// Fill out your copyright notice in the Description page of Project Settings.


#include "BTService_SelectWeaponAction.h"

#include "BehaviorTree/BlackboardComponent.h"
#include "GameFramework/Actor.h"

#include "AICombatTypes.h"

UBTService_SelectWeaponAction::UBTService_SelectWeaponAction()
{
	NodeName = TEXT("Select Weapon Action");

	Interval = 0.15f;
	RandomDeviation = 0.03f;
	bNotifyBecomeRelevant = true;
}

void UBTService_SelectWeaponAction::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

	UBlackboardComponent* BB = OwnerComp.GetBlackboardComponent();
	if (!BB) return;

	const float Now = OwnerComp.GetWorld() ? OwnerComp.GetWorld()->GetTimeSeconds() : 0.0f;

	AActor* Target = Cast<AActor>(BB->GetValueAsObject(Key_TargetActor));
	if (!Target) {
		BB->SetValueAsEnum(Key_DesiredWeaponAction, static_cast<uint8>(EAIWeaponAction::None));
		return;
	}
	const bool bHasLOS = BB->GetValueAsBool(Key_HasLOS);
	const float Dist = BB->GetValueAsFloat(Key_DistanceToTarget);

	const float ReloadEnd = BB->GetValueAsFloat(Key_ReloadEndTime);
	if (ReloadEnd > 0.0f && Now < ReloadEnd) {
		BB->SetValueAsEnum(Key_DesiredWeaponAction, static_cast<uint8>(EAIWeaponAction::Reload));
		return;
	}

	const int32 Ammo = BB->GetValueAsInt(Key_AmmoInMag);
	if (Ammo == 0) {
		BB->SetValueAsEnum(Key_DesiredWeaponAction, static_cast<uint8>(EAIWeaponAction::Reload));
		return;
	}

	const float NextFire = BB->GetValueAsFloat(Key_NextFireTime);
	if (NextFire > 0.0f && Now < NextFire) {
		BB->SetValueAsEnum(Key_DesiredWeaponAction, static_cast<uint8>(EAIWeaponAction::None));
		return;
	}

	if (bHasLOS && Dist <= MaxFireDistance) {
		BB->SetValueAsEnum(Key_DesiredWeaponAction, static_cast<uint8>(EAIWeaponAction::Fire));
	}
	else {
		BB->SetValueAsEnum(Key_DesiredWeaponAction, static_cast<uint8>(EAIWeaponAction::None));
	}
}


