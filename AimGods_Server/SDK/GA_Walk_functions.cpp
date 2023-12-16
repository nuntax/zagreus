#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Walk.GA_Walk_C
// (None)

class UClass* UGA_Walk_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Walk_C");

	return Clss;
}


// GA_Walk_C GA_Walk.Default__GA_Walk_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Walk_C* UGA_Walk_C::GetDefaultObj()
{
	static class UGA_Walk_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Walk_C*>(UGA_Walk_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_Walk.GA_Walk_C.OnRelease_2B03566A40E5B1F57AAA56A940831EEC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              TimeHeld                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Walk_C::OnRelease_2B03566A40E5B1F57AAA56A940831EEC(float TimeHeld)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Walk_C", "OnRelease_2B03566A40E5B1F57AAA56A940831EEC");

	Params::UGA_Walk_C_OnRelease_2B03566A40E5B1F57AAA56A940831EEC_Params Parms{};

	Parms.TimeHeld = TimeHeld;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Walk.GA_Walk_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Walk_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Walk_C", "K2_OnEndAbility");

	Params::UGA_Walk_C_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Walk.GA_Walk_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_Walk_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Walk_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Walk.GA_Walk_C.ExecuteUbergraph_GA_Walk
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_TimeHeld                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilityTask_WaitInputRelease*CallFunc_WaitInputRelease_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayAbilityActorInfo   CallFunc_GetActorInfo_ReturnValue                                (ContainsInstancedReference)
// struct FGameplayAbilityActorInfo   CallFunc_GetActorInfo_ReturnValue_1                              (ContainsInstancedReference)
// class UAGCharacterMovementComponent*K2Node_DynamicCast_AsAGCharacter_Movement_Component              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAGCharacterMovementComponent*K2Node_DynamicCast_AsAGCharacter_Movement_Component_1            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Walk_C::ExecuteUbergraph_GA_Walk(int32 EntryPoint, float K2Node_CustomEvent_TimeHeld, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float Temp_float_Variable, class UAbilityTask_WaitInputRelease* CallFunc_WaitInputRelease_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_bWasCancelled, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue_1, class UAGCharacterMovementComponent* K2Node_DynamicCast_AsAGCharacter_Movement_Component, bool K2Node_DynamicCast_bSuccess, class UAGCharacterMovementComponent* K2Node_DynamicCast_AsAGCharacter_Movement_Component_1, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Walk_C", "ExecuteUbergraph_GA_Walk");

	Params::UGA_Walk_C_ExecuteUbergraph_GA_Walk_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_TimeHeld = K2Node_CustomEvent_TimeHeld;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.CallFunc_WaitInputRelease_ReturnValue = CallFunc_WaitInputRelease_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.CallFunc_GetActorInfo_ReturnValue = CallFunc_GetActorInfo_ReturnValue;
	Parms.CallFunc_GetActorInfo_ReturnValue_1 = CallFunc_GetActorInfo_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsAGCharacter_Movement_Component = K2Node_DynamicCast_AsAGCharacter_Movement_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsAGCharacter_Movement_Component_1 = K2Node_DynamicCast_AsAGCharacter_Movement_Component_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


