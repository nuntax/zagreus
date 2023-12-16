#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_Setting_Divider.WB_Setting_Divider_C
// (None)

class UClass* UWB_Setting_Divider_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_Setting_Divider_C");

	return Clss;
}


// WB_Setting_Divider_C WB_Setting_Divider.Default__WB_Setting_Divider_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_Setting_Divider_C* UWB_Setting_Divider_C::GetDefaultObj()
{
	static class UWB_Setting_Divider_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_Setting_Divider_C*>(UWB_Setting_Divider_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_Setting_Divider.WB_Setting_Divider_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_Setting_Divider_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Setting_Divider_C", "PreConstruct");

	Params::UWB_Setting_Divider_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Setting_Divider.WB_Setting_Divider_C.ExecuteUbergraph_WB_Setting_Divider
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_Setting_Divider_C::ExecuteUbergraph_WB_Setting_Divider(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Setting_Divider_C", "ExecuteUbergraph_WB_Setting_Divider");

	Params::UWB_Setting_Divider_C_ExecuteUbergraph_WB_Setting_Divider_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


