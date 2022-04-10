// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Units/Highlevel/RigUnit_HighlevelBase.h"

#include "MyControlRigGraphNode.generated.h"

/**
 * 
 */
USTRUCT(meta=(DisplayName="My ControlTig Graph Node", Category="Test", Keywords="Pain", NodeColor="0 1 1"))
struct  ANIMTESTS_API FMyControlRigGraphNode : public FRigUnit_HighlevelBaseMutable
{
	GENERATED_BODY()
	
	//RIGVM_METHOD()
	//virtual void Execute(const FRigUnitContext& Context) override;

	FMyControlRigGraphNode()
	{
	}
};

