// Fill out your copyright notice in the Description page of Project Settings.


#include "HeroPlayerCharacter.h"
#include "MovementComp/HeroCharacterMovementComponent.h"

// Sets default values
AHeroPlayerCharacter::AHeroPlayerCharacter(const class FObjectInitializer& InitializerObject)
	: Super(InitializerObject.SetDefaultSubobjectClass<UHeroCharacterMovementComponent>(ACharacter::CharacterMovementComponentName))
{
 	
}

// Called when the game starts or when spawned
void AHeroPlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AHeroPlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AHeroPlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Bind to AbilitySystemComponent
	AbilitySystemComponent->BindAbilityActivationToInputComponent(InputComponent, 
		FGameplayAbilityInputBinds(FString("ConfirmTarget"),
		FString("CancelTarget"), FString("EHeroAbilityInputID"), 
		static_cast<int32>(EHeroAbilityInputID::Type::Confirm), static_cast<int32>(EHeroAbilityInputID::Type::Cancel)));
}

