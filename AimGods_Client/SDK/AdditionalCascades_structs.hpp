#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x60 - 0x0)
// UserDefinedStruct AdditionalCascades.AdditionalCascades
struct FAdditionalCascades
{
public:
	bool                                         GroundCheck_28_A6A012C24B35997C7699838357EE6D33;   // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_DA4[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        EasyScale_11_67CA65DB47FC16694A0C129F80BAA58A;     // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_DA5[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform_25_E9077CB7454CBBFB01F9FAB68A3A1959;     // 0x10(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	TArray<struct FSplinePoint>                  SplinePoints_3_9FEC5B1E442397E1BCAE7EA746E41A17;   // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor)
	TArray<class AActor*>                        ActorstoIgnore_15_677CA1B446ED3E57BACA079B76EE1C71; // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
};

}


