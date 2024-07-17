#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_ActionBarDragVisual.WBP_ActionBarDragVisual_C
// (None)

class UClass* UWBP_ActionBarDragVisual_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_ActionBarDragVisual_C");

	return Clss;
}


// WBP_ActionBarDragVisual_C WBP_ActionBarDragVisual.Default__WBP_ActionBarDragVisual_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_ActionBarDragVisual_C* UWBP_ActionBarDragVisual_C::GetDefaultObj()
{
	static class UWBP_ActionBarDragVisual_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_ActionBarDragVisual_C*>(UWBP_ActionBarDragVisual_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_ActionBarDragVisual.WBP_ActionBarDragVisual_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_ActionBarDragVisual_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ActionBarDragVisual_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ActionBarDragVisual.WBP_ActionBarDragVisual_C.On Hover Ability
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_ActionBarDragVisual_C::On_Hover_Ability()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ActionBarDragVisual_C", "On Hover Ability");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ActionBarDragVisual.WBP_ActionBarDragVisual_C.On Leave Hover Ability
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_ActionBarDragVisual_C::On_Leave_Hover_Ability()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ActionBarDragVisual_C", "On Leave Hover Ability");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ActionBarDragVisual.WBP_ActionBarDragVisual_C.ExecuteUbergraph_WBP_ActionBarDragVisual
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ActionBarDragVisual_C::ExecuteUbergraph_WBP_ActionBarDragVisual(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ActionBarDragVisual_C", "ExecuteUbergraph_WBP_ActionBarDragVisual");

	Params::UWBP_ActionBarDragVisual_C_ExecuteUbergraph_WBP_ActionBarDragVisual_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


