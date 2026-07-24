// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBlueprintFunctionLibrary.h"
#include "AbilitySystemComponent.h"

void UMyBlueprintFunctionLibrary::SetAttributeBase(
    UAbilitySystemComponent* AbilitySystemComponent,
    FGameplayAttribute Attribute,
    float Value)
{
    if (!AbilitySystemComponent)
    {
        return;
    }
    
    
    AbilitySystemComponent->SetNumericAttributeBase(Attribute, Value);
}