#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_PlayerReportPopup.WB_PlayerReportPopup_C
// (None)

class UClass* UWB_PlayerReportPopup_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_PlayerReportPopup_C");

	return Clss;
}


// WB_PlayerReportPopup_C WB_PlayerReportPopup.Default__WB_PlayerReportPopup_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_PlayerReportPopup_C* UWB_PlayerReportPopup_C::GetDefaultObj()
{
	static class UWB_PlayerReportPopup_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_PlayerReportPopup_C*>(UWB_PlayerReportPopup_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_PlayerReportPopup.WB_PlayerReportPopup_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWB_PlayerReportPopup_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PlayerReportPopup_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_PlayerReportPopup.WB_PlayerReportPopup_C.BndEvt__WB_Btn_Generic_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_PlayerReportPopup_C::BndEvt__WB_Btn_Generic_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PlayerReportPopup_C", "BndEvt__WB_Btn_Generic_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_PlayerReportPopup.WB_PlayerReportPopup_C.BndEvt__WB_Btn_Generic_1_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_PlayerReportPopup_C::BndEvt__WB_Btn_Generic_1_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PlayerReportPopup_C", "BndEvt__WB_Btn_Generic_1_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_PlayerReportPopup.WB_PlayerReportPopup_C.ExecuteUbergraph_WB_PlayerReportPopup
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAGGameState*                K2Node_DynamicCast_AsAGGame_State                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMatchPlayer                CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAGPlayerController*         K2Node_DynamicCast_AsAGPlayer_Controller                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetSelectedOption_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetSelectedOption_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)

void UWB_PlayerReportPopup_C::ExecuteUbergraph_WB_PlayerReportPopup(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AAGGameState* K2Node_DynamicCast_AsAGGame_State, bool K2Node_DynamicCast_bSuccess, const struct FMatchPlayer& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AAGPlayerController* K2Node_DynamicCast_AsAGPlayer_Controller, bool K2Node_DynamicCast_bSuccess_1, const class FString& CallFunc_GetSelectedOption_ReturnValue, const class FString& CallFunc_GetSelectedOption_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PlayerReportPopup_C", "ExecuteUbergraph_WB_PlayerReportPopup");

	Params::UWB_PlayerReportPopup_C_ExecuteUbergraph_WB_PlayerReportPopup_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsAGGame_State = K2Node_DynamicCast_AsAGGame_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsAGPlayer_Controller = K2Node_DynamicCast_AsAGPlayer_Controller;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetSelectedOption_ReturnValue = CallFunc_GetSelectedOption_ReturnValue;
	Parms.CallFunc_GetSelectedOption_ReturnValue_1 = CallFunc_GetSelectedOption_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


