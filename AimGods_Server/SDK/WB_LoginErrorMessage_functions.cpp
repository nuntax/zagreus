#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_LoginErrorMessage.WB_LoginErrorMessage_C
// (None)

class UClass* UWB_LoginErrorMessage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_LoginErrorMessage_C");

	return Clss;
}


// WB_LoginErrorMessage_C WB_LoginErrorMessage.Default__WB_LoginErrorMessage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_LoginErrorMessage_C* UWB_LoginErrorMessage_C::GetDefaultObj()
{
	static class UWB_LoginErrorMessage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_LoginErrorMessage_C*>(UWB_LoginErrorMessage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_LoginErrorMessage.WB_LoginErrorMessage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWB_LoginErrorMessage_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_LoginErrorMessage_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_LoginErrorMessage.WB_LoginErrorMessage_C.BndEvt__WB_Btn_Back_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_LoginErrorMessage_C::BndEvt__WB_Btn_Back_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_LoginErrorMessage_C", "BndEvt__WB_Btn_Back_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_LoginErrorMessage.WB_LoginErrorMessage_C.ExecuteUbergraph_WB_LoginErrorMessage
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UWB_LoginErrorMessage_C::ExecuteUbergraph_WB_LoginErrorMessage(int32 EntryPoint, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_LoginErrorMessage_C", "ExecuteUbergraph_WB_LoginErrorMessage");

	Params::UWB_LoginErrorMessage_C_ExecuteUbergraph_WB_LoginErrorMessage_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


