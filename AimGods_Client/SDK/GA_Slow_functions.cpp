#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Slow.GA_Slow_C
// (None)

class UClass* UGA_Slow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Slow_C");

	return Clss;
}


// GA_Slow_C GA_Slow.Default__GA_Slow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Slow_C* UGA_Slow_C::GetDefaultObj()
{
	static class UGA_Slow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Slow_C*>(UGA_Slow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_Slow.GA_Slow_C.EventReceived_8C05C42E4A4A154A0AA97E86DE76A269
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          Payload                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Slow_C::EventReceived_8C05C42E4A4A154A0AA97E86DE76A269(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Slow_C", "EventReceived_8C05C42E4A4A154A0AA97E86DE76A269");

	Params::UGA_Slow_C_EventReceived_8C05C42E4A4A154A0AA97E86DE76A269_Params Parms{};

	Parms.Payload = Payload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Slow.GA_Slow_C.InvalidHandle_083D573A49EF46DD23593389EE9BB218
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectRemovalInfo  GameplayEffectRemovalInfo                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Slow_C::InvalidHandle_083D573A49EF46DD23593389EE9BB218(struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Slow_C", "InvalidHandle_083D573A49EF46DD23593389EE9BB218");

	Params::UGA_Slow_C_InvalidHandle_083D573A49EF46DD23593389EE9BB218_Params Parms{};

	Parms.GameplayEffectRemovalInfo = GameplayEffectRemovalInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Slow.GA_Slow_C.OnRemoved_083D573A49EF46DD23593389EE9BB218
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectRemovalInfo  GameplayEffectRemovalInfo                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Slow_C::OnRemoved_083D573A49EF46DD23593389EE9BB218(struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Slow_C", "OnRemoved_083D573A49EF46DD23593389EE9BB218");

	Params::UGA_Slow_C_OnRemoved_083D573A49EF46DD23593389EE9BB218_Params Parms{};

	Parms.GameplayEffectRemovalInfo = GameplayEffectRemovalInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Slow.GA_Slow_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_Slow_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Slow_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Slow.GA_Slow_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Slow_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Slow_C", "K2_OnEndAbility");

	Params::UGA_Slow_C_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Slow.GA_Slow_C.ExecuteUbergraph_GA_Slow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilityTask_WaitGameplayEvent*CallFunc_WaitGameplayEvent_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAbilityTask_WaitGameplayEffectRemoved*CallFunc_WaitForGameplayEffectRemoved_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayEffectRemovalInfo  K2Node_CustomEvent_GameplayEffectRemovalInfo_1                   (ConstParm)
// struct FGameplayEffectRemovalInfo  K2Node_CustomEvent_GameplayEffectRemovalInfo                     (ConstParm)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// struct FGameplayEffectRemovalInfo  Temp_struct_Variable                                             (None)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          Temp_struct_Variable_1                                           (None)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsSameTeam_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleCallFunc_MakeEffectContext_ReturnValue                           (None)
// bool                               CallFunc_K2_CommitAbility_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue_1    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleCallFunc_MakeEffectContext_ReturnValue_1                         (None)
// struct FGameplayEventData          K2Node_CustomEvent_Payload                                       (None)
// struct FGameplayEffectSpecHandle   CallFunc_MakeOutgoingSpec_ReturnValue                            (None)
// struct FGameplayEffectSpecHandle   CallFunc_MakeOutgoingSpec_ReturnValue_1                          (None)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue            (NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectSpecToTarget_ReturnValue          (NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Slow_C::ExecuteUbergraph_GA_Slow(int32 EntryPoint, class UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UAbilityTask_WaitGameplayEffectRemoved* CallFunc_WaitForGameplayEffectRemoved_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue_2, const struct FGameplayEffectRemovalInfo& K2Node_CustomEvent_GameplayEffectRemovalInfo_1, const struct FGameplayEffectRemovalInfo& K2Node_CustomEvent_GameplayEffectRemovalInfo, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FGameplayEffectRemovalInfo& Temp_struct_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue, const struct FGameplayEventData& Temp_struct_Variable_1, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsSameTeam_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, const struct FGameplayEffectContextHandle& CallFunc_MakeEffectContext_ReturnValue, bool CallFunc_K2_CommitAbility_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue_1, const struct FGameplayEffectContextHandle& CallFunc_MakeEffectContext_ReturnValue_1, const struct FGameplayEventData& K2Node_CustomEvent_Payload, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingSpec_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingSpec_ReturnValue_1, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectSpecToTarget_ReturnValue, bool K2Node_Event_bWasCancelled, bool CallFunc_IsValid_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Slow_C", "ExecuteUbergraph_GA_Slow");

	Params::UGA_Slow_C_ExecuteUbergraph_GA_Slow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_WaitGameplayEvent_ReturnValue = CallFunc_WaitGameplayEvent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_WaitForGameplayEffectRemoved_ReturnValue = CallFunc_WaitForGameplayEffectRemoved_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_CustomEvent_GameplayEffectRemovalInfo_1 = K2Node_CustomEvent_GameplayEffectRemovalInfo_1;
	Parms.K2Node_CustomEvent_GameplayEffectRemovalInfo = K2Node_CustomEvent_GameplayEffectRemovalInfo;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue = CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsSameTeam_ReturnValue = CallFunc_IsSameTeam_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_MakeEffectContext_ReturnValue = CallFunc_MakeEffectContext_ReturnValue;
	Parms.CallFunc_K2_CommitAbility_ReturnValue = CallFunc_K2_CommitAbility_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue_1 = CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue_1;
	Parms.CallFunc_MakeEffectContext_ReturnValue_1 = CallFunc_MakeEffectContext_ReturnValue_1;
	Parms.K2Node_CustomEvent_Payload = K2Node_CustomEvent_Payload;
	Parms.CallFunc_MakeOutgoingSpec_ReturnValue = CallFunc_MakeOutgoingSpec_ReturnValue;
	Parms.CallFunc_MakeOutgoingSpec_ReturnValue_1 = CallFunc_MakeOutgoingSpec_ReturnValue_1;
	Parms.CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue = CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectSpecToTarget_ReturnValue = CallFunc_BP_ApplyGameplayEffectSpecToTarget_ReturnValue;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

}

}

