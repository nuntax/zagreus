#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x4C0 - 0x4B0)
// BlueprintGeneratedClass GA_RootMotionMoveToForce.GA_RootMotionMoveToForce_C
class UGA_RootMotionMoveToForce_C : public UAGGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAbilityTask_ApplyRootMotionMoveToForce* MoveToForceTask;                                   // 0x4B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_RootMotionMoveToForce_C* GetDefaultObj();

	void OnTimedOutAndDestinationReached_EDA6A90643EFEB5AF2DA19BAF2ACD9EC();
	void OnTimedOut_EDA6A90643EFEB5AF2DA19BAF2ACD9EC();
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_RootMotionMoveToForce(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_Event_bWasCancelled, const struct FGameplayEventData& K2Node_Event_EventData, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue, const struct FVector& CallFunc_GetTargetDataEndPoint_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue, class UAbilityTask_ApplyRootMotionMoveToForce* CallFunc_ApplyRootMotionMoveToForce_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
};

}


