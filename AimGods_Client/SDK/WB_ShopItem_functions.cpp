#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_ShopItem.WB_ShopItem_C
// (None)

class UClass* UWB_ShopItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_ShopItem_C");

	return Clss;
}


// WB_ShopItem_C WB_ShopItem.Default__WB_ShopItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_ShopItem_C* UWB_ShopItem_C::GetDefaultObj()
{
	static class UWB_ShopItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_ShopItem_C*>(UWB_ShopItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_ShopItem.WB_ShopItem_C.BndEvt__SelectItemButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_ShopItem_C::BndEvt__SelectItemButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_ShopItem_C", "BndEvt__SelectItemButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_ShopItem.WB_ShopItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWB_ShopItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_ShopItem_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_ShopItem.WB_ShopItem_C.ExecuteUbergraph_WB_ShopItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

void UWB_ShopItem_C::ExecuteUbergraph_WB_ShopItem(int32 EntryPoint, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_ShopItem_C", "ExecuteUbergraph_WB_ShopItem");

	Params::UWB_ShopItem_C_ExecuteUbergraph_WB_ShopItem_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


