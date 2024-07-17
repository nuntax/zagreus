#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_RootMotionMoveToForce.GA_RootMotionMoveToForce_C
// (None)

class UClass* UGA_RootMotionMoveToForce_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_RootMotionMoveToForce_C");

	return Clss;
}


// GA_RootMotionMoveToForce_C GA_RootMotionMoveToForce.Default__GA_RootMotionMoveToForce_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_RootMotionMoveToForce_C* UGA_RootMotionMoveToForce_C::GetDefaultObj()
{
	static class UGA_RootMotionMoveToForce_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_RootMotionMoveToForce_C*>(UGA_RootMotionMoveToForce_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_RootMotionMoveToForce.GA_RootMotionMoveToForce_C.OnTimedOutAndDestinationReached_EDA6A90643EFEB5AF2DA19BAF2ACD9EC
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_RootMotionMoveToForce_C::OnTimedOutAndDestinationReached_EDA6A90643EFEB5AF2DA19BAF2ACD9EC()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_RootMotionMoveToForce_C", "OnTimedOutAndDestinationReached_EDA6A90643EFEB5AF2DA19BAF2ACD9EC");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_RootMotionMoveToForce.GA_RootMotionMoveToForce_C.OnTimedOut_EDA6A90643EFEB5AF2DA19BAF2ACD9EC
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_RootMotionMoveToForce_C::OnTimedOut_EDA6A90643EFEB5AF2DA19BAF2ACD9EC()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_RootMotionMoveToForce_C", "OnTimedOut_EDA6A90643EFEB5AF2DA19BAF2ACD9EC");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_RootMotionMoveToForce.GA_RootMotionMoveToForce_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_RootMotionMoveToForce_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_RootMotionMoveToForce_C", "K2_OnEndAbility");

	Params::UGA_RootMotionMoveToForce_C_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_RootMotionMoveToForce.GA_RootMotionMoveToForce_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_RootMotionMoveToForce_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_RootMotionMoveToForce_C", "K2_ActivateAbilityFromEvent");

	Params::UGA_RootMotionMoveToForce_C_K2_ActivateAbilityFromEvent_Params Parms{};

	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_RootMotionMoveToForce.GA_RootMotionMoveToForce_C.ExecuteUbergraph_GA_RootMotionMoveToForce
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)
// struct FGameplayEffectSpecHandle   CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue              (None)
// struct FVector                     CallFunc_GetTargetDataEndPoint_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectSpecHandle   CallFunc_AssignTagSetByCallerMagnitude_ReturnValue               (None)
// class UAbilityTask_ApplyRootMotionMoveToForce*CallFunc_ApplyRootMotionMoveToForce_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue           (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_RootMotionMoveToForce_C::ExecuteUbergraph_GA_RootMotionMoveToForce(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_Event_bWasCancelled, const struct FGameplayEventData& K2Node_Event_EventData, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue, const struct FVector& CallFunc_GetTargetDataEndPoint_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue, class UAbilityTask_ApplyRootMotionMoveToForce* CallFunc_ApplyRootMotionMoveToForce_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_RootMotionMoveToForce_C", "ExecuteUbergraph_GA_RootMotionMoveToForce");

	Params::UGA_RootMotionMoveToForce_C_ExecuteUbergraph_GA_RootMotionMoveToForce_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;
	Parms.CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue = CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue;
	Parms.CallFunc_GetTargetDataEndPoint_ReturnValue = CallFunc_GetTargetDataEndPoint_ReturnValue;
	Parms.CallFunc_AssignTagSetByCallerMagnitude_ReturnValue = CallFunc_AssignTagSetByCallerMagnitude_ReturnValue;
	Parms.CallFunc_ApplyRootMotionMoveToForce_ReturnValue = CallFunc_ApplyRootMotionMoveToForce_ReturnValue;
	Parms.CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue = CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


