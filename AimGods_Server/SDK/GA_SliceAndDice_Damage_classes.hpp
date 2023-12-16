#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x4B8 - 0x4B0)
// BlueprintGeneratedClass GA_SliceAndDice_Damage.GA_SliceAndDice_Damage_C
class UGA_SliceAndDice_Damage_C : public UAGGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UGA_SliceAndDice_Damage_C* GetDefaultObj();

	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_SliceAndDice_Damage(int32 EntryPoint, bool CallFunc_K2_CommitAbility_ReturnValue, bool K2Node_Event_bWasCancelled, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FGameplayEffectContextHandle& CallFunc_MakeEffectContext_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingSpec_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue);
};

}


