#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x100 (0x368 - 0x268)
// AnimBlueprintGeneratedClass AnimBP_FinalWeapon.AnimBP_FinalWeapon_C
class UAnimBP_FinalWeapon_C : public UAnimInstance
{
public:
	uint8                                        Pad_1333[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_2FF499D045FB0A97650301AC5EFD5A10; // 0x278(0x30)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_9EC59CC0492B8FF527001C82D463AFDA; // 0x2A8(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_AF43E082416D708CC47E32A238BA936E; // 0x2F0(0x78)(None)

	static class UClass* StaticClass();
	static class UAnimBP_FinalWeapon_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_AnimBP_FinalWeapon(int32 EntryPoint);
};

}


