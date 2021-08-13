// Fill out your copyright notice in the Description page of Project Settings.


#include "HFFFactory.h"
#include "HFFAsset.h"

UHFFFactory::UHFFFactory() 
{
	SupportedClass = UHFFAsset::StaticClass();
	bCreateNew = true;
	bEditAfterNew = true;
}

UObject* UHFFFactory::FactoryCreateNew(UClass* InClass, UObject* InParent,
	FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	UHFFAsset* TestAsset = NewObject<UHFFAsset>(InParent, InName, Flags | RF_Transactional);
	return TestAsset;
}

bool UHFFFactory::ShouldShowInNewMenu() const
{
	return true;
}
