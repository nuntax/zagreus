#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_SeasonCalendar_Box.WB_SeasonCalendar_Box_C
// (None)

class UClass* UWB_SeasonCalendar_Box_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_SeasonCalendar_Box_C");

	return Clss;
}


// WB_SeasonCalendar_Box_C WB_SeasonCalendar_Box.Default__WB_SeasonCalendar_Box_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_SeasonCalendar_Box_C* UWB_SeasonCalendar_Box_C::GetDefaultObj()
{
	static class UWB_SeasonCalendar_Box_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_SeasonCalendar_Box_C*>(UWB_SeasonCalendar_Box_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_SeasonCalendar_Box.WB_SeasonCalendar_Box_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_SeasonCalendar_Box_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SeasonCalendar_Box_C", "PreConstruct");

	Params::UWB_SeasonCalendar_Box_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_SeasonCalendar_Box.WB_SeasonCalendar_Box_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWB_SeasonCalendar_Box_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SeasonCalendar_Box_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SeasonCalendar_Box.WB_SeasonCalendar_Box_C.UpdateNumber
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        NewNumber                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UWB_SeasonCalendar_Box_C::UpdateNumber(class FText NewNumber)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SeasonCalendar_Box_C", "UpdateNumber");

	Params::UWB_SeasonCalendar_Box_C_UpdateNumber_Params Parms{};

	Parms.NewNumber = NewNumber;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_SeasonCalendar_Box.WB_SeasonCalendar_Box_C.ExecuteUbergraph_WB_SeasonCalendar_Box
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_CustomEvent_NewNumber                                     (None)

void UWB_SeasonCalendar_Box_C::ExecuteUbergraph_WB_SeasonCalendar_Box(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class FText K2Node_CustomEvent_NewNumber)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SeasonCalendar_Box_C", "ExecuteUbergraph_WB_SeasonCalendar_Box");

	Params::UWB_SeasonCalendar_Box_C_ExecuteUbergraph_WB_SeasonCalendar_Box_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CustomEvent_NewNumber = K2Node_CustomEvent_NewNumber;

	UObject::ProcessEvent(Func, &Parms);

}

}


