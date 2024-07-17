#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_Shop_Tooltip.WB_Shop_Tooltip_C
// (None)

class UClass* UWB_Shop_Tooltip_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_Shop_Tooltip_C");

	return Clss;
}


// WB_Shop_Tooltip_C WB_Shop_Tooltip.Default__WB_Shop_Tooltip_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_Shop_Tooltip_C* UWB_Shop_Tooltip_C::GetDefaultObj()
{
	static class UWB_Shop_Tooltip_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_Shop_Tooltip_C*>(UWB_Shop_Tooltip_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_Shop_Tooltip.WB_Shop_Tooltip_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_ReplaceTableReferenceStringsWithCorrespondingValue_ReturnValue(None)

void UWB_Shop_Tooltip_C::Initialize(class FText CallFunc_ReplaceTableReferenceStringsWithCorrespondingValue_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Shop_Tooltip_C", "Initialize");

	Params::UWB_Shop_Tooltip_C_Initialize_Params Parms{};

	Parms.CallFunc_ReplaceTableReferenceStringsWithCorrespondingValue_ReturnValue = CallFunc_ReplaceTableReferenceStringsWithCorrespondingValue_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Shop_Tooltip.WB_Shop_Tooltip_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWB_Shop_Tooltip_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Shop_Tooltip_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Shop_Tooltip.WB_Shop_Tooltip_C.ExecuteUbergraph_WB_Shop_Tooltip
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Shop_Tooltip_C::ExecuteUbergraph_WB_Shop_Tooltip(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Shop_Tooltip_C", "ExecuteUbergraph_WB_Shop_Tooltip");

	Params::UWB_Shop_Tooltip_C_ExecuteUbergraph_WB_Shop_Tooltip_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


