#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_ShopItemDetails.WB_ShopItemDetails_C
// (None)

class UClass* UWB_ShopItemDetails_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_ShopItemDetails_C");

	return Clss;
}


// WB_ShopItemDetails_C WB_ShopItemDetails.Default__WB_ShopItemDetails_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_ShopItemDetails_C* UWB_ShopItemDetails_C::GetDefaultObj()
{
	static class UWB_ShopItemDetails_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_ShopItemDetails_C*>(UWB_ShopItemDetails_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_ShopItemDetails.WB_ShopItemDetails_C.Set Displayed Item
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWB_ShopItem_C*              Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ShopItemDetails_C::Set_Displayed_Item(class UWB_ShopItem_C* Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_ShopItemDetails_C", "Set Displayed Item");

	Params::UWB_ShopItemDetails_C_Set_Displayed_Item_Params Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_ShopItemDetails.WB_ShopItemDetails_C.BndEvt__BuyButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_ShopItemDetails_C::BndEvt__BuyButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_ShopItemDetails_C", "BndEvt__BuyButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_ShopItemDetails.WB_ShopItemDetails_C.ExecuteUbergraph_WB_ShopItemDetails
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_ShopItem_C*              K2Node_CustomEvent_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_AGPlayerState_C*         K2Node_DynamicCast_AsBP_AGPlayer_State                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TryBuyAbility_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_AGPlayerState_C*         K2Node_DynamicCast_AsBP_AGPlayer_State_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UClass*>              CallFunc_Map_Values_Values                                       (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_ShopItemDetails_C::ExecuteUbergraph_WB_ShopItemDetails(int32 EntryPoint, class UWB_ShopItem_C* K2Node_CustomEvent_Item, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class ABP_AGPlayerState_C* K2Node_DynamicCast_AsBP_AGPlayer_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_TryBuyAbility_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class ABP_AGPlayerState_C* K2Node_DynamicCast_AsBP_AGPlayer_State_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, TArray<class UClass*>& CallFunc_Map_Values_Values, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_ShopItemDetails_C", "ExecuteUbergraph_WB_ShopItemDetails");

	Params::UWB_ShopItemDetails_C_ExecuteUbergraph_WB_ShopItemDetails_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Item = K2Node_CustomEvent_Item;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_AGPlayer_State = K2Node_DynamicCast_AsBP_AGPlayer_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_TryBuyAbility_ReturnValue = CallFunc_TryBuyAbility_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_1 = CallFunc_GetOwningPlayer_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_AGPlayer_State_1 = K2Node_DynamicCast_AsBP_AGPlayer_State_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


