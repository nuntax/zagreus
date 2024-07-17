#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_CheatManager.WB_CheatManager_C
// (None)

class UClass* UWB_CheatManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_CheatManager_C");

	return Clss;
}


// WB_CheatManager_C WB_CheatManager.Default__WB_CheatManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_CheatManager_C* UWB_CheatManager_C::GetDefaultObj()
{
	static class UWB_CheatManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_CheatManager_C*>(UWB_CheatManager_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_CheatManager.WB_CheatManager_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWB_CheatManager_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_CheatManager_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_CheatManager.WB_CheatManager_C.ToggleCheatButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_CheatManager_C::ToggleCheatButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_CheatManager_C", "ToggleCheatButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_CheatManager.WB_CheatManager_C.ExecuteUbergraph_WB_CheatManager
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_CheatManager_C::ExecuteUbergraph_WB_CheatManager(int32 EntryPoint, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_CheatManager_C", "ExecuteUbergraph_WB_CheatManager");

	Params::UWB_CheatManager_C_ExecuteUbergraph_WB_CheatManager_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


