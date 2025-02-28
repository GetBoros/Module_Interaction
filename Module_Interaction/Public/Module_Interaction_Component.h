#pragma once

#include "Components/ActorComponent.h"
#include "Module_Interaction_Component.generated.h"

//-------------------------------------------------------------------------------------------------------------
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent)) class MODULE_INTERACTION_API UAModule_Interaction_Component : public UActorComponent
{
	GENERATED_BODY()

public:
	UAModule_Interaction_Component();

	virtual void BeginPlay();
	virtual void TickComponent(float delta, ELevelTick type, FActorComponentTickFunction* func);

	UFUNCTION(BlueprintCallable, Category = "Interactions") virtual void Interaction(AActor* actor);
};
//-------------------------------------------------------------------------------------------------------------
