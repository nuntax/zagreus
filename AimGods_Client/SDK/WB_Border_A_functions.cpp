#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_Border_A.WB_Border_A_C
// (None)

class UClass* UWB_Border_A_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_Border_A_C");

	return Clss;
}


// WB_Border_A_C WB_Border_A.Default__WB_Border_A_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_Border_A_C* UWB_Border_A_C::GetDefaultObj()
{
	static class UWB_Border_A_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_Border_A_C*>(UWB_Border_A_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_Border_A.WB_Border_A_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_Border_A_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Border_A_C", "PreConstruct");

	Params::UWB_Border_A_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Border_A.WB_Border_A_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWB_Border_A_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Border_A_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Border_A.WB_Border_A_C.ExecuteUbergraph_WB_Border_A
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_Border_A_C::ExecuteUbergraph_WB_Border_A(int32 EntryPoint, bool K2Node_Event_IsDesignTime, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Border_A_C", "ExecuteUbergraph_WB_Border_A");

	Params::UWB_Border_A_C_ExecuteUbergraph_WB_Border_A_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


