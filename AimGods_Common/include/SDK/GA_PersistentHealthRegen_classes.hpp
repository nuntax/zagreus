#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x4C8 - 0x4B0)
// BlueprintGeneratedClass GA_PersistentHealthRegen.GA_PersistentHealthRegen_C
class UGA_PersistentHealthRegen_C : public UAGGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        HealthRegenRate;                                   // 0x4B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12B4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilityTask_Repeat*                   RepeatTask;                                        // 0x4C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_PersistentHealthRegen_C* GetDefaultObj();

	void OnFinished_712AA67141E78B3E710A9DB39319877E(int32 ActionNumber);
	void OnPerformAction_712AA67141E78B3E710A9DB39319877E(int32 ActionNumber);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_PersistentHealthRegen(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 K2Node_CustomEvent_ActionNumber_1, int32 K2Node_CustomEvent_ActionNumber, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Variable, bool K2Node_Event_bWasCancelled, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, class UAbilityTask_Repeat* CallFunc_RepeatAction_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


