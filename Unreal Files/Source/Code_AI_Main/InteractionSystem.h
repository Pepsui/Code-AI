// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "InteractionSystem.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UInteractionSystem : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class CODE_AI_MAIN_API IInteractionSystem
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	virtual FName GetName() = 0;

	virtual FName GetQuestID() = 0;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Interact")
	void OnInteract();

};
