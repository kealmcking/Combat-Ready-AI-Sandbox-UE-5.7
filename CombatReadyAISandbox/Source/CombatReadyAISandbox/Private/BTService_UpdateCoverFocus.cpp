// Fill out your copyright notice in the Description page of Project Settings.


#include "BTService_UpdateCoverFocus.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "AIEnemyController.h"
#include "AICombatTypes.h"

UBTService_UpdateCoverFocus::UBTService_UpdateCoverFocus()
{
	NodeName = TEXT("Update Cover Focus");
	Interval = 0.1f;
	RandomDeviation = 0.0f;
}

void UBTService_UpdateCoverFocus::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

	UBlackboardComponent* BB = OwnerComp.GetBlackboardComponent();
	if (!BB) return;

	AAIEnemyController* Con = Cast<AAIEnemyController>(OwnerComp.GetAIOwner());
	if (!Con) return;

	AActor* Target = Cast<AActor>(BB->GetValueAsObject(Key_TargetActor));

	const uint8 CoverRaw = BB->GetValueAsEnum(Key_DesiredCoverAction);
	const EAICoverAction CoverAction = static_cast<EAICoverAction>(CoverRaw);

	if (CoverAction == EAICoverAction::Peek) {
		Con->SetCombatFocus(Target);
	}
	else {
		Con->ClearCombatFocus();
	}
}
