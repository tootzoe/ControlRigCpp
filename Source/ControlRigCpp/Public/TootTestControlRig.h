// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ControlRig.h"
#include "TootTestControlRig.generated.h"

/**
 * 
 */
// change this meta data and compile, this node will get nullptr in unrealeditor,
// so should restart editor if your change meta data....
USTRUCT(meta = (DisplayName = "Toot Test Rig Node" , Category = "TOOT") )
struct CONTROLRIGCPP_API  FRigUnit_TootTestNode : public FRigUnit /// Pure func without Execute pins
{
    GENERATED_BODY()


    FRigUnit_TootTestNode () {
        ValA = ValB = ValRsl = 0.f;
    }

    RIGVM_METHOD()
    virtual void Execute() override;


    UPROPERTY(meta = (Input))
    float ValA;
    UPROPERTY(meta = (Input))
    float ValB;
    //
    UPROPERTY(meta = (Output))
    float ValRsl;

};

/////////////////////////////////////////////////////////////////////////////////////////////
/// //  With two Execute pins
    USTRUCT(meta = (DisplayName = "Toot Test Rig NodeExe" , Category = "TOOT") )
    struct CONTROLRIGCPP_API  FRigUnitMutable_TootTestNodeExe : public FRigUnitMutable
    {
        GENERATED_BODY()


        FRigUnitMutable_TootTestNodeExe () {
            ValA = ValB = ValRsl = 0.f;
        }

        RIGVM_METHOD()
        virtual void Execute() override;


        UPROPERTY(meta = (Input))
        float ValA;
        UPROPERTY(meta = (Input))
        float ValB;
        //
        UPROPERTY(meta = (Output))
        float ValRsl;

    };

    /////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////////////////////////////////////////////////////////////////////



UCLASS(Blueprintable)
class CONTROLRIGCPP_API UTootTestControlRig : public UControlRig
{
	GENERATED_BODY()

    // URigVMHost interface
    public:
    virtual void Initialize(bool bRequestInit) override;

    protected:
    virtual bool Execute(const FName& InEventName) override;
	

	

// // IMeshDeformerProducer interface
// public:
// virtual FMeshDeformerBeginDestroyEvent &OnBeginDestroy() override;

// // IRigHierarchyProvider interface
// public:
// virtual URigHierarchy *GetHierarchy() const override;

// // INodeMappingProviderInterface interface
// private:
// virtual void GetMappableNodeData(TArray<FName> &OutNames, TArray<FNodeItem> &OutNodeItems) const override;


};
