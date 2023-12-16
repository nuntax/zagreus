#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x4D8 - 0x4B0)
// BlueprintGeneratedClass GA_PowerShot_new.GA_PowerShot_new_C
class UGA_PowerShot_new_C : public UAGGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                PowerShotBuffClass;                                // 0x4B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           PowerShotEffectHandle;                             // 0x4C0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_WaitGameplayEvent*        WaitGameplayEventAT;                               // 0x4C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_WaitGameplayEffectRemoved* WaitGERemovedAT;                                   // 0x4D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_PowerShot_new_C* GetDefaultObj();

	void EventReceived_5268730746588438709D9CA6D512C34E(const struct FGameplayEventData& Payload);
	void InvalidHandle_423042D143082123B831878B37606DA1(struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo);
	void OnRemoved_423042D143082123B831878B37606DA1(struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_PowerShot_new(int32 EntryPoint, const struct FGameplayEventData& Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue, bool CallFunc_IsSameTeam_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class UAGAbilitySystemComponent* K2Node_DynamicCast_AsAGAbility_System_Component, bool K2Node_DynamicCast_bSuccess, class UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue, class UAbilityTask_WaitGameplayEffectRemoved* CallFunc_WaitForGameplayEffectRemoved_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, const struct FGameplayEffectRemovalInfo& K2Node_CustomEvent_GameplayEffectRemovalInfo_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FGameplayEffectRemovalInfo& K2Node_CustomEvent_GameplayEffectRemovalInfo, const struct FGameplayEffectRemovalInfo& Temp_struct_Variable_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, const struct FGameplayEffectContextHandle& CallFunc_MakeEffectContext_ReturnValue, bool CallFunc_K2_CommitAbility_ReturnValue, const struct FGameplayEventData& K2Node_CustomEvent_Payload, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingSpec_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue, bool K2Node_Event_bWasCancelled, bool CallFunc_IsValid_ReturnValue_4);
};

}


