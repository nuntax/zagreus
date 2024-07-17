#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_NotificationBox.WB_NotificationBox_C
// (None)

class UClass* UWB_NotificationBox_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_NotificationBox_C");

	return Clss;
}


// WB_NotificationBox_C WB_NotificationBox.Default__WB_NotificationBox_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_NotificationBox_C* UWB_NotificationBox_C::GetDefaultObj()
{
	static class UWB_NotificationBox_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_NotificationBox_C*>(UWB_NotificationBox_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_NotificationBox.WB_NotificationBox_C.BndEvt__ButtonLeave_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_NotificationBox_C::BndEvt__ButtonLeave_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_NotificationBox_C", "BndEvt__ButtonLeave_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_NotificationBox.WB_NotificationBox_C.BndEvt__WB_FriendRequestsList_K2Node_ComponentBoundEvent_1_WeHaveSomething__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Quantity                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_NotificationBox_C::BndEvt__WB_FriendRequestsList_K2Node_ComponentBoundEvent_1_WeHaveSomething__DelegateSignature(int32 Quantity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_NotificationBox_C", "BndEvt__WB_FriendRequestsList_K2Node_ComponentBoundEvent_1_WeHaveSomething__DelegateSignature");

	Params::UWB_NotificationBox_C_BndEvt__WB_FriendRequestsList_K2Node_ComponentBoundEvent_1_WeHaveSomething__DelegateSignature_Params Parms{};

	Parms.Quantity = Quantity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_NotificationBox.WB_NotificationBox_C.Switch Notification Box
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              WidgetID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_NotificationBox_C::Switch_Notification_Box(int32 WidgetID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_NotificationBox_C", "Switch Notification Box");

	Params::UWB_NotificationBox_C_Switch_Notification_Box_Params Parms{};

	Parms.WidgetID = WidgetID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_NotificationBox.WB_NotificationBox_C.BndEvt__WB_FriendRequestsList_K2Node_ComponentBoundEvent_3_UpdateFriendsList__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_NotificationBox_C::BndEvt__WB_FriendRequestsList_K2Node_ComponentBoundEvent_3_UpdateFriendsList__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_NotificationBox_C", "BndEvt__WB_FriendRequestsList_K2Node_ComponentBoundEvent_3_UpdateFriendsList__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_NotificationBox.WB_NotificationBox_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWB_NotificationBox_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_NotificationBox_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_NotificationBox.WB_NotificationBox_C.BndEvt__Party_Invites_List_K2Node_ComponentBoundEvent_4_Party_WeHaveSomething__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Quantity                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_NotificationBox_C::BndEvt__Party_Invites_List_K2Node_ComponentBoundEvent_4_Party_WeHaveSomething__DelegateSignature(int32 Quantity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_NotificationBox_C", "BndEvt__Party_Invites_List_K2Node_ComponentBoundEvent_4_Party_WeHaveSomething__DelegateSignature");

	Params::UWB_NotificationBox_C_BndEvt__Party_Invites_List_K2Node_ComponentBoundEvent_4_Party_WeHaveSomething__DelegateSignature_Params Parms{};

	Parms.Quantity = Quantity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_NotificationBox.WB_NotificationBox_C.BndEvt__Custom_Invites_List_K2Node_ComponentBoundEvent_2_CustomGame_WeHaveSomething__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Quantity                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_NotificationBox_C::BndEvt__Custom_Invites_List_K2Node_ComponentBoundEvent_2_CustomGame_WeHaveSomething__DelegateSignature(int32 Quantity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_NotificationBox_C", "BndEvt__Custom_Invites_List_K2Node_ComponentBoundEvent_2_CustomGame_WeHaveSomething__DelegateSignature");

	Params::UWB_NotificationBox_C_BndEvt__Custom_Invites_List_K2Node_ComponentBoundEvent_2_CustomGame_WeHaveSomething__DelegateSignature_Params Parms{};

	Parms.Quantity = Quantity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_NotificationBox.WB_NotificationBox_C.BndEvt__ClearAllNotificationsBtn_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_NotificationBox_C::BndEvt__ClearAllNotificationsBtn_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_NotificationBox_C", "BndEvt__ClearAllNotificationsBtn_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_NotificationBox.WB_NotificationBox_C.ExecuteUbergraph_WB_NotificationBox
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        Temp_text_Variable_2                                             (None)
// int32                              K2Node_ComponentBoundEvent_Quantity_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_WidgetID                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)
// int32                              K2Node_ComponentBoundEvent_Quantity_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Quantity                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_NotificationBox_C::ExecuteUbergraph_WB_NotificationBox(int32 EntryPoint, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, int32 K2Node_ComponentBoundEvent_Quantity_2, int32 K2Node_CustomEvent_WidgetID, int32 Temp_int_Variable, class FText K2Node_Select_Default, int32 K2Node_ComponentBoundEvent_Quantity_1, int32 K2Node_ComponentBoundEvent_Quantity, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_NotificationBox_C", "ExecuteUbergraph_WB_NotificationBox");

	Params::UWB_NotificationBox_C_ExecuteUbergraph_WB_NotificationBox_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.K2Node_ComponentBoundEvent_Quantity_2 = K2Node_ComponentBoundEvent_Quantity_2;
	Parms.K2Node_CustomEvent_WidgetID = K2Node_CustomEvent_WidgetID;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_ComponentBoundEvent_Quantity_1 = K2Node_ComponentBoundEvent_Quantity_1;
	Parms.K2Node_ComponentBoundEvent_Quantity = K2Node_ComponentBoundEvent_Quantity;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_NotificationBox.WB_NotificationBox_C.Notification_CustomGameRequest_Pop__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Quantity                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_NotificationBox_C::Notification_CustomGameRequest_Pop__DelegateSignature(int32 Quantity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_NotificationBox_C", "Notification_CustomGameRequest_Pop__DelegateSignature");

	Params::UWB_NotificationBox_C_Notification_CustomGameRequest_Pop__DelegateSignature_Params Parms{};

	Parms.Quantity = Quantity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_NotificationBox.WB_NotificationBox_C.Notification_PartyRequest_Pop__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Quantity                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_NotificationBox_C::Notification_PartyRequest_Pop__DelegateSignature(int32 Quantity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_NotificationBox_C", "Notification_PartyRequest_Pop__DelegateSignature");

	Params::UWB_NotificationBox_C_Notification_PartyRequest_Pop__DelegateSignature_Params Parms{};

	Parms.Quantity = Quantity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_NotificationBox.WB_NotificationBox_C.Update Friends List__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_NotificationBox_C::Update_Friends_List__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_NotificationBox_C", "Update Friends List__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_NotificationBox.WB_NotificationBox_C.Notification_FriendRequest_Pop__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Quantity                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_NotificationBox_C::Notification_FriendRequest_Pop__DelegateSignature(int32 Quantity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_NotificationBox_C", "Notification_FriendRequest_Pop__DelegateSignature");

	Params::UWB_NotificationBox_C_Notification_FriendRequest_Pop__DelegateSignature_Params Parms{};

	Parms.Quantity = Quantity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_NotificationBox.WB_NotificationBox_C.CloseWindow__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_NotificationBox_C::CloseWindow__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_NotificationBox_C", "CloseWindow__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


