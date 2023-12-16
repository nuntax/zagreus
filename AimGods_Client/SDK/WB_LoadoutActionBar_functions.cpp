#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_LoadoutActionBar.WB_LoadoutActionBar_C
// (None)

class UClass* UWB_LoadoutActionBar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_LoadoutActionBar_C");

	return Clss;
}


// WB_LoadoutActionBar_C WB_LoadoutActionBar.Default__WB_LoadoutActionBar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_LoadoutActionBar_C* UWB_LoadoutActionBar_C::GetDefaultObj()
{
	static class UWB_LoadoutActionBar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_LoadoutActionBar_C*>(UWB_LoadoutActionBar_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_LoadoutActionBar.WB_LoadoutActionBar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWB_LoadoutActionBar_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_LoadoutActionBar_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_LoadoutActionBar.WB_LoadoutActionBar_C.On Loadout Ability Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAGAbilityInputID       InputID                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Ability                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_LoadoutActionBar_C::On_Loadout_Ability_Changed(enum class EAGAbilityInputID InputID, class UClass* Ability)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_LoadoutActionBar_C", "On Loadout Ability Changed");

	Params::UWB_LoadoutActionBar_C_On_Loadout_Ability_Changed_Params Parms{};

	Parms.InputID = InputID;
	Parms.Ability = Ability;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_LoadoutActionBar.WB_LoadoutActionBar_C.BndEvt__WB_LoadoutActionBarSlot_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_LoadoutActionBar_C::BndEvt__WB_LoadoutActionBarSlot_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_LoadoutActionBar_C", "BndEvt__WB_LoadoutActionBarSlot_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_LoadoutActionBar.WB_LoadoutActionBar_C.BndEvt__WB_LoadoutActionBarSlot_1_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_LoadoutActionBar_C::BndEvt__WB_LoadoutActionBarSlot_1_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_LoadoutActionBar_C", "BndEvt__WB_LoadoutActionBarSlot_1_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_LoadoutActionBar.WB_LoadoutActionBar_C.BndEvt__WB_LoadoutActionBarSlot_2_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_LoadoutActionBar_C::BndEvt__WB_LoadoutActionBarSlot_2_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_LoadoutActionBar_C", "BndEvt__WB_LoadoutActionBarSlot_2_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_LoadoutActionBar.WB_LoadoutActionBar_C.BndEvt__WB_LoadoutActionBarSlot_3_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_LoadoutActionBar_C::BndEvt__WB_LoadoutActionBarSlot_3_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_LoadoutActionBar_C", "BndEvt__WB_LoadoutActionBarSlot_3_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_LoadoutActionBar.WB_LoadoutActionBar_C.BndEvt__WB_LoadoutActionBarSlot_4_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_LoadoutActionBar_C::BndEvt__WB_LoadoutActionBarSlot_4_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_LoadoutActionBar_C", "BndEvt__WB_LoadoutActionBarSlot_4_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_LoadoutActionBar.WB_LoadoutActionBar_C.BndEvt__WB_LoadoutActionBarSlot_5_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_LoadoutActionBar_C::BndEvt__WB_LoadoutActionBarSlot_5_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_LoadoutActionBar_C", "BndEvt__WB_LoadoutActionBarSlot_5_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_LoadoutActionBar.WB_LoadoutActionBar_C.BndEvt__WB_LoadoutActionBarSlot_6_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_LoadoutActionBar_C::BndEvt__WB_LoadoutActionBarSlot_6_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_LoadoutActionBar_C", "BndEvt__WB_LoadoutActionBarSlot_6_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_LoadoutActionBar.WB_LoadoutActionBar_C.ExecuteUbergraph_WB_LoadoutActionBar
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ZeroConstructor, ReferenceParm, ContainsInstancedReference)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_LoadoutActionBarSlot_C*  K2Node_DynamicCast_AsWB_Loadout_Action_Bar_Slot                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAGAbilityInputID       K2Node_CustomEvent_InputID                                       (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_CustomEvent_Ability                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_AGGameInstance_C*        K2Node_DynamicCast_AsBP_AGGame_Instance                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWB_LoadoutActionBarSlot_C*  CallFunc_Map_Find_Value                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLoadoutAbility             CallFunc_Array_Get_Item_1                                        (NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWB_LoadoutActionBarSlot_C*  CallFunc_Map_Find_Value_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_LoadoutActionBar_C::ExecuteUbergraph_WB_LoadoutActionBar(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UWB_LoadoutActionBarSlot_C* K2Node_DynamicCast_AsWB_Loadout_Action_Bar_Slot, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, enum class EAGAbilityInputID K2Node_CustomEvent_InputID, class UClass* K2Node_CustomEvent_Ability, class UBP_AGGameInstance_C* K2Node_DynamicCast_AsBP_AGGame_Instance, bool K2Node_DynamicCast_bSuccess_1, class UWB_LoadoutActionBarSlot_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FLoadoutAbility& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class UWB_LoadoutActionBarSlot_C* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_LoadoutActionBar_C", "ExecuteUbergraph_WB_LoadoutActionBar");

	Params::UWB_LoadoutActionBar_C_ExecuteUbergraph_WB_LoadoutActionBar_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsWB_Loadout_Action_Bar_Slot = K2Node_DynamicCast_AsWB_Loadout_Action_Bar_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_CustomEvent_InputID = K2Node_CustomEvent_InputID;
	Parms.K2Node_CustomEvent_Ability = K2Node_CustomEvent_Ability;
	Parms.K2Node_DynamicCast_AsBP_AGGame_Instance = K2Node_DynamicCast_AsBP_AGGame_Instance;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_LoadoutActionBar.WB_LoadoutActionBar_C.ClickedAnySlot__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_LoadoutActionBar_C::ClickedAnySlot__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_LoadoutActionBar_C", "ClickedAnySlot__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


