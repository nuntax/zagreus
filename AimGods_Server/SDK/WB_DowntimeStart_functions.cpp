#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_DowntimeStart.WB_DowntimeStart_C
// (None)

class UClass* UWB_DowntimeStart_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_DowntimeStart_C");

	return Clss;
}


// WB_DowntimeStart_C WB_DowntimeStart.Default__WB_DowntimeStart_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_DowntimeStart_C* UWB_DowntimeStart_C::GetDefaultObj()
{
	static class UWB_DowntimeStart_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_DowntimeStart_C*>(UWB_DowntimeStart_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_DowntimeStart.WB_DowntimeStart_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWB_DowntimeStart_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_DowntimeStart_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_DowntimeStart.WB_DowntimeStart_C.BndEvt__WB_Btn_Accept_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_DowntimeStart_C::BndEvt__WB_Btn_Accept_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_DowntimeStart_C", "BndEvt__WB_Btn_Accept_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_DowntimeStart.WB_DowntimeStart_C.ExecuteUbergraph_WB_DowntimeStart
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UWB_DowntimeStart_C::ExecuteUbergraph_WB_DowntimeStart(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_DowntimeStart_C", "ExecuteUbergraph_WB_DowntimeStart");

	Params::UWB_DowntimeStart_C_ExecuteUbergraph_WB_DowntimeStart_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


