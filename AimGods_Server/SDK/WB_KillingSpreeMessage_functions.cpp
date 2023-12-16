#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_KillingSpreeMessage.WB_KillingSpreeMessage_C
// (None)

class UClass* UWB_KillingSpreeMessage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_KillingSpreeMessage_C");

	return Clss;
}


// WB_KillingSpreeMessage_C WB_KillingSpreeMessage.Default__WB_KillingSpreeMessage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_KillingSpreeMessage_C* UWB_KillingSpreeMessage_C::GetDefaultObj()
{
	static class UWB_KillingSpreeMessage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_KillingSpreeMessage_C*>(UWB_KillingSpreeMessage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_KillingSpreeMessage.WB_KillingSpreeMessage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWB_KillingSpreeMessage_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_KillingSpreeMessage_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_KillingSpreeMessage.WB_KillingSpreeMessage_C.ExecuteUbergraph_WB_KillingSpreeMessage
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_KillingSpreeMessage_C::ExecuteUbergraph_WB_KillingSpreeMessage(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_KillingSpreeMessage_C", "ExecuteUbergraph_WB_KillingSpreeMessage");

	Params::UWB_KillingSpreeMessage_C_ExecuteUbergraph_WB_KillingSpreeMessage_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


