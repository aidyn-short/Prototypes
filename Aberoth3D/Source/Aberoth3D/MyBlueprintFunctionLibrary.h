// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AttributeSet.h"
#include "GeneralAttributeSet.h"
#include "MyBlueprintFunctionLibrary.generated.h"

class UAbilitySystemComponent;

UCLASS()
class ABEROTH3D_API UMyBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:

    UFUNCTION(BlueprintCallable, Category = "GAS")
    static void SetAttributeBase(
        UAbilitySystemComponent* AbilitySystemComponent,
        FGameplayAttribute Attribute,
        float Value);
};