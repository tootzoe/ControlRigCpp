// Fill out your copyright notice in the Description page of Project Settings.


#include "TootTestControlRig.h"


FRigUnit_TootTestNode_Execute()
{
   ValRsl = ValA + ValB + 1;
}
/////////////////////////////////////////////////////////////////////////////////////////////
FRigUnitMutable_TootTestNodeExe_Execute()
{
   ValRsl = ValA * ValB + 2;
}
/////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////

bool UTootTestControlRig::Execute(const FName &InEventName)
{

    UE_LOG(LogTemp, Warning, TEXT("FName: %s....%hs") , *InEventName.ToString() , __func__);



    return Super::Execute(InEventName);

}


void UTootTestControlRig::Initialize(bool bRequestInit)
{

    Super::Initialize(bRequestInit);

    UE_LOG(LogTemp, Warning, TEXT("msg....%hs") , __func__);
}

