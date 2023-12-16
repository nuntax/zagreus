#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_ErrorPopUp.WB_ErrorPopUp_C
// (None)

class UClass* UWB_ErrorPopUp_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_ErrorPopUp_C");

	return Clss;
}


// WB_ErrorPopUp_C WB_ErrorPopUp.Default__WB_ErrorPopUp_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_ErrorPopUp_C* UWB_ErrorPopUp_C::GetDefaultObj()
{
	static class UWB_ErrorPopUp_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_ErrorPopUp_C*>(UWB_ErrorPopUp_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_ErrorPopUp.WB_ErrorPopUp_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWB_ErrorPopUp_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_ErrorPopUp_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_ErrorPopUp.WB_ErrorPopUp_C.BndEvt__WB_Btn_Back_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_ErrorPopUp_C::BndEvt__WB_Btn_Back_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_ErrorPopUp_C", "BndEvt__WB_Btn_Back_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_ErrorPopUp.WB_ErrorPopUp_C.ExecuteUbergraph_WB_ErrorPopUp
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UWB_ErrorPopUp_C::ExecuteUbergraph_WB_ErrorPopUp(int32 EntryPoint, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_ErrorPopUp_C", "ExecuteUbergraph_WB_ErrorPopUp");

	Params::UWB_ErrorPopUp_C_ExecuteUbergraph_WB_ErrorPopUp_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


