// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ArenaBattle.h"
#include "Engine/DataTable.h"
#include "Engine/GameInstance.h"
#include "ABGameInstance.generated.h"

USTRUCT(BlueprintType)
struct FABCharacterDate : public FTableRowBase
{
	GENERATED_BODY()

public:
	FABCharacterDate() : Level(1), MaxHP(100.f), Attack(10.f), DropExp(10), NextExp(30) {}

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Data")
		int32 Level;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Data")
		float MaxHP;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Data")
		float Attack;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Data")
		int32 DropExp;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Data")
		int32 NextExp;

};


/**
 * 
 */
UCLASS()
class ARENABATTLE_API UABGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	UABGameInstance();

	virtual void Init() override;
	FABCharacterDate* GetABCharacterData(int32 Level);

private:
	UPROPERTY()
		class UDataTable* ABCharacterTable;
};
