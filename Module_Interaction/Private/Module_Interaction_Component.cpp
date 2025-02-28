#include "Module_Interaction_Component.h"

// UAModule_Interaction_Component
UAModule_Interaction_Component::UAModule_Interaction_Component()
{
	PrimaryComponentTick.bCanEverTick = true;
}
//-------------------------------------------------------------------------------------------------------------
void UAModule_Interaction_Component::BeginPlay()
{
	Super::BeginPlay();
}
//-------------------------------------------------------------------------------------------------------------
void UAModule_Interaction_Component::TickComponent(float delta, ELevelTick type, FActorComponentTickFunction *func)
{
	Super::TickComponent(delta, type, func);
}
//-------------------------------------------------------------------------------------------------------------
void UAModule_Interaction_Component::Interaction(AActor *actor)
{
	actor->ActorHasTag("Player");
	actor->SetActorLocation(FVector(0.0, 0.0, 200.0) );
	// Get player controller

	// player controller -> SetViewTargetWithBlend

	// or do some other interaction
	int yy = 0;

}
//-------------------------------------------------------------------------------------------------------------
