#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_HitEffect.WB_HitEffect_C
// (None)

class UClass* UWB_HitEffect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_HitEffect_C");

	return Clss;
}


// WB_HitEffect_C WB_HitEffect.Default__WB_HitEffect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_HitEffect_C* UWB_HitEffect_C::GetDefaultObj()
{
	static class UWB_HitEffect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_HitEffect_C*>(UWB_HitEffect_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_HitEffect.WB_HitEffect_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWB_HitEffect_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_HitEffect_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_HitEffect.WB_HitEffect_C.ExecuteUbergraph_WB_HitEffect
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_HitEffect_C::ExecuteUbergraph_WB_HitEffect(int32 EntryPoint, class UPanelSlot* CallFunc_AddChild_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_HitEffect_C", "ExecuteUbergraph_WB_HitEffect");

	Params::UWB_HitEffect_C_ExecuteUbergraph_WB_HitEffect_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


