#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_FireWeapon.GA_FireWeapon_C
// (None)

class UClass* UGA_FireWeapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_FireWeapon_C");

	return Clss;
}


// GA_FireWeapon_C GA_FireWeapon.Default__GA_FireWeapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_FireWeapon_C* UGA_FireWeapon_C::GetDefaultObj()
{
	static class UGA_FireWeapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_FireWeapon_C*>(UGA_FireWeapon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_FireWeapon.GA_FireWeapon_C.OnFinish_63B485764B6D1CB947C8F4AF905DC2CC
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_FireWeapon_C::OnFinish_63B485764B6D1CB947C8F4AF905DC2CC()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_FireWeapon_C", "OnFinish_63B485764B6D1CB947C8F4AF905DC2CC");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_FireWeapon.GA_FireWeapon_C.OnRelease_26564A464E1523A9E3B3F2AE941950C3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              TimeHeld                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_FireWeapon_C::OnRelease_26564A464E1523A9E3B3F2AE941950C3(float TimeHeld)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_FireWeapon_C", "OnRelease_26564A464E1523A9E3B3F2AE941950C3");

	Params::UGA_FireWeapon_C_OnRelease_26564A464E1523A9E3B3F2AE941950C3_Params Parms{};

	Parms.TimeHeld = TimeHeld;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_FireWeapon.GA_FireWeapon_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_FireWeapon_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_FireWeapon_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_FireWeapon.GA_FireWeapon_C.ExecuteUbergraph_GA_FireWeapon
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// float                              K2Node_CustomEvent_TimeHeld                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilityTask_WaitInputRelease*CallFunc_WaitInputRelease_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayAbilityActorInfo   CallFunc_GetActorInfo_ReturnValue                                (ContainsInstancedReference)
// bool                               CallFunc_K2_CommitAbility_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_AGCharacter_C*           K2Node_DynamicCast_AsBP_AGCharacter                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Fire_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Fire_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Fire_ReturnValue_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAbilityTask_WaitDelay*      CallFunc_WaitDelay_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute(ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_FireWeapon_C::ExecuteUbergraph_GA_FireWeapon(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_CustomEvent_TimeHeld, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, float Temp_float_Variable, class UAbilityTask_WaitInputRelease* CallFunc_WaitInputRelease_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, bool CallFunc_K2_CommitAbility_ReturnValue, class ABP_AGCharacter_C* K2Node_DynamicCast_AsBP_AGCharacter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Fire_ReturnValue, float CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue, bool CallFunc_Fire_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_Fire_ReturnValue_2, class UAbilityTask_WaitDelay* CallFunc_WaitDelay_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_FireWeapon_C", "ExecuteUbergraph_GA_FireWeapon");

	Params::UGA_FireWeapon_C_ExecuteUbergraph_GA_FireWeapon_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_TimeHeld = K2Node_CustomEvent_TimeHeld;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.CallFunc_WaitInputRelease_ReturnValue = CallFunc_WaitInputRelease_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetActorInfo_ReturnValue = CallFunc_GetActorInfo_ReturnValue;
	Parms.CallFunc_K2_CommitAbility_ReturnValue = CallFunc_K2_CommitAbility_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_AGCharacter = K2Node_DynamicCast_AsBP_AGCharacter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Fire_ReturnValue = CallFunc_Fire_ReturnValue;
	Parms.CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue = CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue;
	Parms.CallFunc_Fire_ReturnValue_1 = CallFunc_Fire_ReturnValue_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Fire_ReturnValue_2 = CallFunc_Fire_ReturnValue_2;
	Parms.CallFunc_WaitDelay_ReturnValue = CallFunc_WaitDelay_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue = CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue;
	Parms.CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute = CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute;
	Parms.CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue = CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


