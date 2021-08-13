// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Factories/Factory.h"
#include "HFFFactory.generated.h"

/**
 * 
 */
UCLASS()
class SOURCE426_API UHFFFactory : public UFactory
{
	GENERATED_BODY()
	
public:

	UHFFFactory();

	virtual UObject* FactoryCreateNew(UClass* InClass, UObject* InParent,
		FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;

	virtual bool ShouldShowInNewMenu() const override;
};
