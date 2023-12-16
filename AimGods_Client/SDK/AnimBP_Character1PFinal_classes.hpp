#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3AE (0x616 - 0x268)
// AnimBlueprintGeneratedClass AnimBP_Character1PFinal.AnimBP_Character1PFinal_C
class UAnimBP_Character1PFinal_C : public UAnimInstance
{
public:
	uint8                                        Pad_966[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_0424BBCA4A7763010DCF5F941E488102; // 0x278(0x30)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_1F49BB7E46C67226D1F970917D4CC3D4; // 0x2A8(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_5A8D74E54B9E3449AC3799A7BEDBBEBA; // 0x2F0(0xA0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_A2BB9728494D06C6DD8E1BA141668522; // 0x390(0x78)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_63CF2FF1402222717D618F85541E9BD8; // 0x408(0xE0)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_90BDF2F2451B1BF6D800678CDC3148DD; // 0x4E8(0xA0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1D550CDB4905DC8C1E44F88B14B3765F; // 0x588(0x78)(None)
	float                                        Speed;                                             // 0x600(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             Velocity2D;                                        // 0x604(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsMoving;                                          // 0x60C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_96A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Direction;                                         // 0x610(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PlayChargingAnim;                                  // 0x614(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsFalling;                                         // 0x615(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UAnimBP_Character1PFinal_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_AnimBP_Character1PFinal(int32 EntryPoint, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class ABP_AGCharacter_C* K2Node_DynamicCast_AsBP_AGCharacter, bool K2Node_DynamicCast_bSuccess, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, bool CallFunc_IsFalling_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, const struct FVector& CallFunc_LessLess_VectorRotator_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue, float CallFunc_CalculateDirection_ReturnValue, float CallFunc_VSize_ReturnValue, float K2Node_Event_DeltaTimeX);
};

}


