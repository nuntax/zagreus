#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_ClassicCrosshair.WB_ClassicCrosshair_C
// (None)

class UClass* UWB_ClassicCrosshair_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_ClassicCrosshair_C");

	return Clss;
}


// WB_ClassicCrosshair_C WB_ClassicCrosshair.Default__WB_ClassicCrosshair_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_ClassicCrosshair_C* UWB_ClassicCrosshair_C::GetDefaultObj()
{
	static class UWB_ClassicCrosshair_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_ClassicCrosshair_C*>(UWB_ClassicCrosshair_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_ClassicCrosshair.WB_ClassicCrosshair_C.Set Crosshair Color
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Linear                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ClassicCrosshair_C::Set_Crosshair_Color(const struct FLinearColor& Linear)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_ClassicCrosshair_C", "Set Crosshair Color");

	Params::UWB_ClassicCrosshair_C_Set_Crosshair_Color_Params Parms{};

	Parms.Linear = Linear;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_ClassicCrosshair.WB_ClassicCrosshair_C.ExecuteUbergraph_WB_ClassicCrosshair
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_CustomEvent_Linear                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ClassicCrosshair_C::ExecuteUbergraph_WB_ClassicCrosshair(int32 EntryPoint, const struct FLinearColor& K2Node_CustomEvent_Linear, const struct FLinearColor& K2Node_MakeStruct_LinearColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_ClassicCrosshair_C", "ExecuteUbergraph_WB_ClassicCrosshair");

	Params::UWB_ClassicCrosshair_C_ExecuteUbergraph_WB_ClassicCrosshair_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Linear = K2Node_CustomEvent_Linear;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;

	UObject::ProcessEvent(Func, &Parms);

}

}


