#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_PersistentHealthRegen.GA_PersistentHealthRegen_C
// (None)

class UClass* UGA_PersistentHealthRegen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_PersistentHealthRegen_C");

	return Clss;
}


// GA_PersistentHealthRegen_C GA_PersistentHealthRegen.Default__GA_PersistentHealthRegen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_PersistentHealthRegen_C* UGA_PersistentHealthRegen_C::GetDefaultObj()
{
	static class UGA_PersistentHealthRegen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_PersistentHealthRegen_C*>(UGA_PersistentHealthRegen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_PersistentHealthRegen.GA_PersistentHealthRegen_C.OnFinished_712AA67141E78B3E710A9DB39319877E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ActionNumber                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_PersistentHealthRegen_C::OnFinished_712AA67141E78B3E710A9DB39319877E(int32 ActionNumber)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_PersistentHealthRegen_C", "OnFinished_712AA67141E78B3E710A9DB39319877E");

	Params::UGA_PersistentHealthRegen_C_OnFinished_712AA67141E78B3E710A9DB39319877E_Params Parms{};

	Parms.ActionNumber = ActionNumber;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_PersistentHealthRegen.GA_PersistentHealthRegen_C.OnPerformAction_712AA67141E78B3E710A9DB39319877E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ActionNumber                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_PersistentHealthRegen_C::OnPerformAction_712AA67141E78B3E710A9DB39319877E(int32 ActionNumber)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_PersistentHealthRegen_C", "OnPerformAction_712AA67141E78B3E710A9DB39319877E");

	Params::UGA_PersistentHealthRegen_C_OnPerformAction_712AA67141E78B3E710A9DB39319877E_Params Parms{};

	Parms.ActionNumber = ActionNumber;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_PersistentHealthRegen.GA_PersistentHealthRegen_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_PersistentHealthRegen_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_PersistentHealthRegen_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_PersistentHealthRegen.GA_PersistentHealthRegen_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_PersistentHealthRegen_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_PersistentHealthRegen_C", "K2_OnEndAbility");

	Params::UGA_PersistentHealthRegen_C_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_PersistentHealthRegen.GA_PersistentHealthRegen_C.ExecuteUbergraph_GA_PersistentHealthRegen
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// int32                              K2Node_CustomEvent_ActionNumber_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_ActionNumber                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue               (NoDestructor, HasGetValueTypeHash)
// class UAbilityTask_Repeat*         CallFunc_RepeatAction_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_PersistentHealthRegen_C::ExecuteUbergraph_GA_PersistentHealthRegen(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 K2Node_CustomEvent_ActionNumber_1, int32 K2Node_CustomEvent_ActionNumber, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Variable, bool K2Node_Event_bWasCancelled, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, class UAbilityTask_Repeat* CallFunc_RepeatAction_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_PersistentHealthRegen_C", "ExecuteUbergraph_GA_PersistentHealthRegen");

	Params::UGA_PersistentHealthRegen_C_ExecuteUbergraph_GA_PersistentHealthRegen_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_ActionNumber_1 = K2Node_CustomEvent_ActionNumber_1;
	Parms.K2Node_CustomEvent_ActionNumber = K2Node_CustomEvent_ActionNumber;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue = CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue;
	Parms.CallFunc_RepeatAction_ReturnValue = CallFunc_RepeatAction_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


