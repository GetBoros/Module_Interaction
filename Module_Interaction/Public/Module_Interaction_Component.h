#pragma once

#include "Components/ActorComponent.h"
#include "Module_Interaction_Component.generated.h"

//-------------------------------------------------------------------------------------------------------------
UCLASS(BlueprintType) class UItemDataAsset : public UPrimaryDataAsset
{
    GENERATED_BODY()

public:
    UPROPERTY(EditDefaultsOnly) FText item_name;
    UPROPERTY(EditDefaultsOnly) UTexture2D *icon;
    //UPROPERTY(EditDefaultsOnly) TSubclassOf<UGameplayAbility> use_ability_class;
    UPROPERTY(EditDefaultsOnly) bool is_stackable;
    UPROPERTY(EditDefaultsOnly) int32 max_stack;
};

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
