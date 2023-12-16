#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_ShopItemCategory.WB_ShopItemCategory_C
// (None)

class UClass* UWB_ShopItemCategory_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_ShopItemCategory_C");

	return Clss;
}


// WB_ShopItemCategory_C WB_ShopItemCategory.Default__WB_ShopItemCategory_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_ShopItemCategory_C* UWB_ShopItemCategory_C::GetDefaultObj()
{
	static class UWB_ShopItemCategory_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_ShopItemCategory_C*>(UWB_ShopItemCategory_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_ShopItemCategory.WB_ShopItemCategory_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWB_ShopItemCategory_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_ShopItemCategory_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_ShopItemCategory.WB_ShopItemCategory_C.Add Item To Category Box
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWB_ShopItem_C*              Shop_Item                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ShopItemCategory_C::Add_Item_To_Category_Box(class UWB_ShopItem_C* Shop_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_ShopItemCategory_C", "Add Item To Category Box");

	Params::UWB_ShopItemCategory_C_Add_Item_To_Category_Box_Params Parms{};

	Parms.Shop_Item = Shop_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_ShopItemCategory.WB_ShopItemCategory_C.ExecuteUbergraph_WB_ShopItemCategory
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_ShopItem_C*              K2Node_CustomEvent_Shop_Item                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWrapBoxSlot*                CallFunc_AddChildToWrapBox_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_ShopItemCategory_C::ExecuteUbergraph_WB_ShopItemCategory(int32 EntryPoint, class UWB_ShopItem_C* K2Node_CustomEvent_Shop_Item, class UWrapBoxSlot* CallFunc_AddChildToWrapBox_ReturnValue, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_ShopItemCategory_C", "ExecuteUbergraph_WB_ShopItemCategory");

	Params::UWB_ShopItemCategory_C_ExecuteUbergraph_WB_ShopItemCategory_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Shop_Item = K2Node_CustomEvent_Shop_Item;
	Parms.CallFunc_AddChildToWrapBox_ReturnValue = CallFunc_AddChildToWrapBox_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


