#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10AD (0x1315 - 0x268)
// AnimBlueprintGeneratedClass AnimBP_Character3P.AnimBP_Character3P_C
class UAnimBP_Character3P_C : public UAnimInstance
{
public:
	uint8                                        Pad_12F3[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_0C0304664E5D637E777F8F82B80BDD47; // 0x278(0x30)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_24E37AE040B13DA63FCEF0AE5F5F1415; // 0x2A8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1F0CA7D54F1926766F307EBD0A3AE5E6; // 0x2D0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_FE38FD5849537D563BBC8C949FA5523C; // 0x2F8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_4AAD4A594EABD4F92E1D44BBD3F4830B; // 0x320(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_78C3746B4C10022D609AD6A27618D2ED; // 0x348(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_58EDEBE34160C294191EBFAB9F63A3B7; // 0x370(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_F13AB6764EBE8335385B039A555B9993; // 0x398(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_65693E2D4AACC1AD08E80C8AE9060490; // 0x3C0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_315E9BF04EA579C328EB6A866B91C07A; // 0x3E8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_307FC4CC48F85A1320F2F5B9C76A92A8; // 0x410(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_E2FA68D046B28AF86B5CBAA099FA056F; // 0x438(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_D25429B644E6C66D625827BA5AE5F04E; // 0x460(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_5C6D350441E998F44093C798BB4C071C; // 0x488(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3163F8234400D90A8D5A4494801CFE23; // 0x4B0(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3D2880714B0ADC658ADEEDB224583334; // 0x4D8(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_D6C151D6499F347318762592E6493AA7; // 0x550(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_C87207284A14F873B3B0A9870EC61AE6; // 0x580(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_7526BB6B4EE01A9053D7E5A531E00418; // 0x5F8(0x30)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_C6840A414E888EE73F8F539647D22D1E; // 0x628(0xE0)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_4664B17F4CB02F4B6A675C8868CAFEA8; // 0x708(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_C2D643BA4C3600B1D9D7D8A75F5F8A1F; // 0x738(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_923A2E92452270AE79162487AF01084E; // 0x7B0(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1C0BEA184A4517BE4A73F6B8B18270A7; // 0x7E0(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_EB35F24F40F27C351EA7A7914C563941; // 0x858(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_D8DBE5F9406EA7D3F0C5D8BC456AE6B6; // 0x888(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2CECE82A42D9A4C2879D88A5ECEE39CB; // 0x900(0x30)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_1995CFFC4E4C2C5D00C8549266C69DEE; // 0x930(0xE0)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_5925BA954F8CE550AF7F2186CB70990D; // 0xA10(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_AD21F2574F606D48D79179B2C8B9494C; // 0xA40(0xB0)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_EB6B45254644A8897A02D1917D8BC39C; // 0xAF0(0xB8)(None)
	uint8                                        Pad_12F4[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_Fabrik                      AnimGraphNode_Fabrik_F263D9D24B8127A43726CDA7E9FCCC23; // 0xBB0(0x190)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_3F66AD02436A56A2552255914BC48656; // 0xD40(0x20)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_779027B94FAE5348F3A38C9B284E3042; // 0xD60(0xB8)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_4E72FF504FFA74DD23C13881F9CDB83F; // 0xE18(0x20)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_E71FEB6543525574D8F38FB32055CE2F; // 0xE38(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_3F953753436521F56659AB81DBDEBA9B; // 0xE60(0x28)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_94FE38364AAA98F13743108CE6309ED4; // 0xE88(0xC0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_9A796E4D478AD69E17B384B6670E7395; // 0xF48(0x48)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_A86CBACE4064A0BE474E15AAA061B003; // 0xF90(0xB8)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_87EE42194E1242B357B2A8B3DCF57677; // 0x1048(0x28)(None)
	struct FAnimNode_RotationOffsetBlendSpace    AnimGraphNode_RotationOffsetBlendSpace_133DE9DE4522A4B0C465D6B6B2B3DD51; // 0x1070(0x188)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_24D25C2E4DF69448F986F788E2EAED7C; // 0x11F8(0x78)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_4C44D6404DD0BCFA00778EA0BB10452E; // 0x1270(0x48)(None)
	float                                        Speed;                                             // 0x12B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Direction;                                         // 0x12BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Enable_Jump;                                       // 0x12C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Jumping;                                           // 0x12C1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Crouching;                                         // 0x12C2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_12F6[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AAGWeapon*                             Weapon;                                            // 0x12C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_AGCharacter_C*                     Character;                                         // 0x12D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12F7[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            WeaponGripTransform;                               // 0x12E0(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                        AimPitch;                                          // 0x1310(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsDead;                                            // 0x1314(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UAnimBP_Character3P_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void Can_Jump(bool Should_Jump, bool* bJumping, bool CallFunc_EqualEqual_BoolBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Character3P_AnimGraphNode_TransitionResult_D25429B644E6C66D625827BA5AE5F04E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Character3P_AnimGraphNode_TransitionResult_1F0CA7D54F1926766F307EBD0A3AE5E6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Character3P_AnimGraphNode_TransitionResult_315E9BF04EA579C328EB6A866B91C07A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Character3P_AnimGraphNode_TransitionResult_24E37AE040B13DA63FCEF0AE5F5F1415();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Character3P_AnimGraphNode_TransitionResult_65693E2D4AACC1AD08E80C8AE9060490();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Character3P_AnimGraphNode_TransitionResult_4AAD4A594EABD4F92E1D44BBD3F4830B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Character3P_AnimGraphNode_TransitionResult_F13AB6764EBE8335385B039A555B9993();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void Get_Weapon_IK_Transform();
	void Get_Aim_Offsets();
	void ExecuteUbergraph_AnimBP_Character3P(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue_2, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_2, bool CallFunc_Less_FloatFloat_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_1, float K2Node_Event_DeltaTimeX, bool CallFunc_IsFalling_ReturnValue, bool CallFunc_IsCrouching_ReturnValue, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class ABP_AGCharacter_C* K2Node_DynamicCast_AsBP_AGCharacter, bool K2Node_DynamicCast_bSuccess, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, bool CallFunc_IsDead_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, float CallFunc_CalculateDirection_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_TransformToBoneSpace_OutPosition, const struct FRotator& CallFunc_TransformToBoneSpace_OutRotation, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FRotator& CallFunc_GetBaseAimRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_ClampAngle_ReturnValue);
};

}


