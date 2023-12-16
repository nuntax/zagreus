#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x4F8 - 0x4B0)
// BlueprintGeneratedClass GA_Charge.GA_Charge_C
class UGA_Charge_C : public UAGGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                          HitEnemyTag;                                       // 0x4B8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           ChargeEffectHandle;                                // 0x4C0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                ChargeBuffClass;                                   // 0x4C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                StunDebuffClass;                                   // 0x4D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_WaitGameplayEvent*        WaitGameplayEventAT;                               // 0x4D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_WaitGameplayEffectRemoved* WaitGERemovedAT;                                   // 0x4E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StunDuration;                                      // 0x4E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_15F9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_AGCharacter_C*                     TargetCharacter;                                   // 0x4F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_Charge_C* GetDefaultObj();

	void EventReceived_B389E46F442D31DDADF2378223D28E0A(const struct FGameplayEventData& Payload);
	void InvalidHandle_1511F05D4E525A7473279A983FBAF867(struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo);
	void OnRemoved_1511F05D4E525A7473279A983FBAF867(struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_Charge(int32 EntryPoint, const struct FGameplayEventData& K2Node_CustomEvent_Payload, const struct FGameplayEffectRemovalInfo& K2Node_CustomEvent_GameplayEffectRemovalInfo_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGameplayEffectRemovalInfo& K2Node_CustomEvent_GameplayEffectRemovalInfo, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FGameplayEffectRemovalInfo& Temp_struct_Variable, bool CallFunc_K2_CommitAbility_ReturnValue, class UAbilityTask_WaitGameplayEffectRemoved* CallFunc_WaitForGameplayEffectRemoved_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue, const struct FGameplayEffectContextHandle& CallFunc_MakeEffectContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_Event_bWasCancelled, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingSpec_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, const struct FGameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue_1, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectSpecToTarget_ReturnValue, int32 CallFunc_GetActiveGameplayEffectStackCount_ReturnValue, enum class EEvaluateCurveTableResult CallFunc_EvaluateCurveTableRow_OutResult, float CallFunc_EvaluateCurveTableRow_OutXY, bool CallFunc_Greater_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_IsMovingOnGround_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, const struct FGameplayEventData& Temp_struct_Variable_1, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_4, const struct FGameplayEffectContextHandle& CallFunc_MakeEffectContext_ReturnValue_1, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingSpec_ReturnValue_1, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue, class ABP_AGCharacter_C* K2Node_DynamicCast_AsBP_AGCharacter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsSameTeam_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_3, const struct FVector& CallFunc_GetDirectionUnitVector_ReturnValue, class ABP_AGCharacter_C* K2Node_DynamicCast_AsBP_AGCharacter_1, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_Vector_Distance_ReturnValue, enum class EEvaluateCurveTableResult CallFunc_EvaluateCurveTableRow_OutResult_1, float CallFunc_EvaluateCurveTableRow_OutXY_1, float CallFunc_Divide_FloatFloat_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_1, const struct FActiveGameplayEffectHandle& CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue);
};

}


