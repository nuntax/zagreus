#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4E8 (0x750 - 0x268)
// AnimBlueprintGeneratedClass AnimBP_Wizard_ThirdPerson.AnimBP_Wizard_ThirdPerson_C
class UAnimBP_Wizard_ThirdPerson_C : public UAnimInstance
{
public:
	uint8                                        Pad_14C6[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_9D977CC14A745082752CFD84A7781038; // 0x278(0x30)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2CAA98254FB48350B9EBAEA9C3081CD8; // 0x2A8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_C6360F064C7352940F90FF9C846518C3; // 0x2D0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_470115CE457E5590E9255488B92B621E; // 0x2F8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_587BB26744C3EE71A7489A9AE0AE1F07; // 0x320(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1C0908804FDCFF5174F71CA2AFE5BE8E; // 0x348(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_FE17A4A0441E5087BD1630A99823FB1B; // 0x3C0(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3857E6AC4799268DE7A463B2FD09516D; // 0x3F0(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_D3BAA064459EA623EFB107B424061954; // 0x468(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_83988503474CA42A649608BA984A8679; // 0x498(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_D9F3A0004C1F6C28E5D26FA9781A84E8; // 0x510(0x30)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_5099719D46639B3F3332899373DE8C1A; // 0x540(0xE0)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_5F33AE2A4481358B54EF40BD8D0E55DF; // 0x620(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_F5BFD9044783311D5B8169A2D92CB3F2; // 0x650(0xB0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_924AADBC4208AF0EADAB528DE13DE081; // 0x700(0x48)(None)
	bool                                         IsInAir_;                                          // 0x748(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_14C8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Speed;                                             // 0x74C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAnimBP_Wizard_ThirdPerson_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Wizard_ThirdPerson_AnimGraphNode_TransitionResult_2CAA98254FB48350B9EBAEA9C3081CD8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Wizard_ThirdPerson_AnimGraphNode_TransitionResult_470115CE457E5590E9255488B92B621E();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_AnimBP_Wizard_ThirdPerson(int32 EntryPoint, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue_1, float K2Node_Event_DeltaTimeX, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, float CallFunc_VSize_ReturnValue, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, bool CallFunc_IsFalling_ReturnValue);
};

}


