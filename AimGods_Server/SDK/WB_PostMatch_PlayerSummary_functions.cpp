#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_PostMatch_PlayerSummary.WB_PostMatch_PlayerSummary_C
// (None)

class UClass* UWB_PostMatch_PlayerSummary_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_PostMatch_PlayerSummary_C");

	return Clss;
}


// WB_PostMatch_PlayerSummary_C WB_PostMatch_PlayerSummary.Default__WB_PostMatch_PlayerSummary_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_PostMatch_PlayerSummary_C* UWB_PostMatch_PlayerSummary_C::GetDefaultObj()
{
	static class UWB_PostMatch_PlayerSummary_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_PostMatch_PlayerSummary_C*>(UWB_PostMatch_PlayerSummary_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_PostMatch_PlayerSummary.WB_PostMatch_PlayerSummary_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWB_PostMatch_PlayerSummary_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PostMatch_PlayerSummary_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_PostMatch_PlayerSummary.WB_PostMatch_PlayerSummary_C.TimerRefresh
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_PostMatch_PlayerSummary_C::TimerRefresh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PostMatch_PlayerSummary_C", "TimerRefresh");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_PostMatch_PlayerSummary.WB_PostMatch_PlayerSummary_C.ExecuteUbergraph_WB_PostMatch_PlayerSummary
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAGPlayerController*         K2Node_DynamicCast_AsAGPlayer_Controller                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAGPlayerState*              K2Node_DynamicCast_AsAGPlayer_State                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_AGPlayerController_C*    K2Node_DynamicCast_AsBP_AGPlayer_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_AGPlayerState_C*         K2Node_DynamicCast_AsBP_AGPlayer_State                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)

void UWB_PostMatch_PlayerSummary_C::ExecuteUbergraph_WB_PostMatch_PlayerSummary(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AAGPlayerController* K2Node_DynamicCast_AsAGPlayer_Controller, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class AAGPlayerState* K2Node_DynamicCast_AsAGPlayer_State, bool K2Node_DynamicCast_bSuccess_1, class ABP_AGPlayerController_C* K2Node_DynamicCast_AsBP_AGPlayer_Controller, bool K2Node_DynamicCast_bSuccess_2, class ABP_AGPlayerState_C* K2Node_DynamicCast_AsBP_AGPlayer_State, bool K2Node_DynamicCast_bSuccess_3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PostMatch_PlayerSummary_C", "ExecuteUbergraph_WB_PostMatch_PlayerSummary");

	Params::UWB_PostMatch_PlayerSummary_C_ExecuteUbergraph_WB_PostMatch_PlayerSummary_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsAGPlayer_Controller = K2Node_DynamicCast_AsAGPlayer_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsAGPlayer_State = K2Node_DynamicCast_AsAGPlayer_State;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsBP_AGPlayer_Controller = K2Node_DynamicCast_AsBP_AGPlayer_Controller;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsBP_AGPlayer_State = K2Node_DynamicCast_AsBP_AGPlayer_State;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


