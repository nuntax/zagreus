#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x500 - 0x4B0)
// BlueprintGeneratedClass GA_SheepNew.GA_SheepNew_C
class UGA_SheepNew_C : public UAGGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FActiveGameplayEffectHandle           GESheepBuffSpecHandle;                             // 0x4B8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_WaitGameplayEvent*        ATWaitGameplayEvent;                               // 0x4C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_WaitGameplayEffectRemoved* ATGEChargeRemoved;                                 // 0x4C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_WaitGameplayEffectRemoved* ATGEDebuffRemoved;                                 // 0x4D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                         SheepMesh;                                         // 0x4D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_AGCharacter_C*                     TargetCharacter;                                   // 0x4E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                         HumanMesh;                                         // 0x4E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                HumanAnimClass;                                    // 0x4F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           GESheepDebuffSpecHandle;                           // 0x4F8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_SheepNew_C* GetDefaultObj();

	void EventReceived_7232435B4781CBA57A5F32B953D29CC5(const struct FGameplayEventData& Payload);
	void InvalidHandle_8C953441424CCFCF9C5F7D98812C991D(struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo);
	void OnRemoved_8C953441424CCFCF9C5F7D98812C991D(struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void TargetReceivedDamage(class UAGAbilitySystemComponent* SourceASC, float MitigatedDamage, const struct FGameplayTagContainer& GEAssetTags);
	void ExecuteUbergraph_GA_SheepNew(int32 EntryPoint, const struct FGameplayEventData& Temp_struct_Variable, class UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue, class ABP_AGCharacter_C* K2Node_DynamicCast_AsBP_AGCharacter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsSameTeam_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FGameplayEffectRemovalInfo& K2Node_CustomEvent_GameplayEffectRemovalInfo_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGameplayEffectRemovalInfo& K2Node_CustomEvent_GameplayEffectRemovalInfo, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FGameplayEffectRemovalInfo& Temp_struct_Variable_1, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromActor_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, const struct FGameplayEffectContextHandle& CallFunc_MakeEffectContext_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingSpec_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FGameplayEventData& K2Node_CustomEvent_Payload, class UAbilityTask_WaitGameplayEffectRemoved* CallFunc_WaitForGameplayEffectRemoved_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, bool K2Node_Event_bWasCancelled, bool CallFunc_K2_CommitAbility_ReturnValue, class UAGAbilitySystemComponent* K2Node_CustomEvent_SourceASC, float K2Node_CustomEvent_MitigatedDamage, const struct FGameplayTagContainer& K2Node_CustomEvent_GEAssetTags, bool CallFunc_Greater_FloatFloat_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class UAGAbilitySystemComponent* K2Node_DynamicCast_AsAGAbility_System_Component, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_RemoveActiveGameplayEffect_ReturnValue);
};

}


