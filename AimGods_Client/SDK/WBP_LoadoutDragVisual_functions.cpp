#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_LoadoutDragVisual.WBP_LoadoutDragVisual_C
// (None)

class UClass* UWBP_LoadoutDragVisual_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_LoadoutDragVisual_C");

	return Clss;
}


// WBP_LoadoutDragVisual_C WBP_LoadoutDragVisual.Default__WBP_LoadoutDragVisual_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_LoadoutDragVisual_C* UWBP_LoadoutDragVisual_C::GetDefaultObj()
{
	static class UWBP_LoadoutDragVisual_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_LoadoutDragVisual_C*>(UWBP_LoadoutDragVisual_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_LoadoutDragVisual.WBP_LoadoutDragVisual_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_LoadoutDragVisual_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LoadoutDragVisual_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_LoadoutDragVisual.WBP_LoadoutDragVisual_C.On Hover Ability
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_LoadoutDragVisual_C::On_Hover_Ability()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LoadoutDragVisual_C", "On Hover Ability");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_LoadoutDragVisual.WBP_LoadoutDragVisual_C.On Leave Hover Ability
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_LoadoutDragVisual_C::On_Leave_Hover_Ability()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LoadoutDragVisual_C", "On Leave Hover Ability");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_LoadoutDragVisual.WBP_LoadoutDragVisual_C.ExecuteUbergraph_WBP_LoadoutDragVisual
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_LoadoutDragVisual_C::ExecuteUbergraph_WBP_LoadoutDragVisual(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LoadoutDragVisual_C", "ExecuteUbergraph_WBP_LoadoutDragVisual");

	Params::UWBP_LoadoutDragVisual_C_ExecuteUbergraph_WBP_LoadoutDragVisual_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


