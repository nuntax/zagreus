#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x4B8 - 0x4B0)
// BlueprintGeneratedClass GA_Walk.GA_Walk_C
class UGA_Walk_C : public UAGGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UGA_Walk_C* GetDefaultObj();

	void OnRelease_2B03566A40E5B1F57AAA56A940831EEC(float TimeHeld);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_Walk(int32 EntryPoint, float K2Node_CustomEvent_TimeHeld, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float Temp_float_Variable, class UAbilityTask_WaitInputRelease* CallFunc_WaitInputRelease_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_bWasCancelled, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue_1, class UAGCharacterMovementComponent* K2Node_DynamicCast_AsAGCharacter_Movement_Component, bool K2Node_DynamicCast_bSuccess, class UAGCharacterMovementComponent* K2Node_DynamicCast_AsAGCharacter_Movement_Component_1, bool K2Node_DynamicCast_bSuccess_1);
};

}


