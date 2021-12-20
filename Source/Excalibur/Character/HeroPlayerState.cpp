// Fill out your copyright notice in the Description page of Project Settings.


#include "HeroPlayerState.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Excalibur/Attributes/HeroPlayerAttributeSet.h"
#include "Excalibur/Character/HeroPlayerCharacter.h"

AHeroPlayerState::AHeroPlayerState()
{
	// Create ability system component, and set it to be explicitly replicated
	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
	
	AttributeSetBase = CreateDefaultSubobject<UHeroPlayerAttributeSet>(TEXT("AttributeSetBase"));
}

void AHeroPlayerState::InitializeAttributes()
{

}

UAbilitySystemComponent* AHeroPlayerState::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

UHeroPlayerAttributeSet* AHeroPlayerState::GetAttributeSetBase() const
{
	return AttributeSetBase;
}