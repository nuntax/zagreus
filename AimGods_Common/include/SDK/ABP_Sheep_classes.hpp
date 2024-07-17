#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x204 (0x46C - 0x268)
// AnimBlueprintGeneratedClass ABP_Sheep.ABP_Sheep_C
class UABP_Sheep_C : public UAnimInstance
{
public:
	uint8                                        Pad_1301[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_827D0DAB4CEB93C4FE7E558165DE2C5A; // 0x278(0x30)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_F659921E495F59BB4C411392E20D0E71; // 0x2A8(0xE0)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_8657AFE5496EFB431B6BCC97AAD66BDB; // 0x388(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_F1FE0A87491ACC8AEC431EA4CF55E543; // 0x3B8(0xB0)(None)
	float                                        Speed;                                             // 0x468(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UABP_Sheep_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_ABP_Sheep(int32 EntryPoint, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, float CallFunc_VSize_ReturnValue, float K2Node_Event_DeltaTimeX);
};

}


