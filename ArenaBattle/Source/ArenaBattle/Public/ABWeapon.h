// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ArenaBattle.h"
#include "GameFramework/Actor.h"
#include "ABWeapon.generated.h"

UCLASS()
class ARENABATTLE_API AABWeapon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AABWeapon();

	float GetAttackRange();
	float GetAttackDamage();
	float GetAttackModifier();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	UPROPERTY(VisibleAnywhere, Category = Weapon)
		USkeletalMeshComponent* Weapon;

protected:
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = Attack)
		float AttackRange;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = Attack)
		float AttackDamageMin;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = Attack)
		float AttackDamageMax;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = Attack)
		float AttackModifierMin;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = Attack)
		float AttackModifierMax;

	UPROPERTY(Transient, VisibleInstanceOnly, BlueprintReadOnly, Category = Attack)
		float AttackDamage;

	UPROPERTY(Transient, VisibleInstanceOnly, BlueprintReadOnly, Category = Attack)
		float AttackModifier;
	
};
