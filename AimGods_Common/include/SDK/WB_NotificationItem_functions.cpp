#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_NotificationItem.WB_NotificationItem_C
// (None)

class UClass* UWB_NotificationItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_NotificationItem_C");

	return Clss;
}


// WB_NotificationItem_C WB_NotificationItem.Default__WB_NotificationItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_NotificationItem_C* UWB_NotificationItem_C::GetDefaultObj()
{
	static class UWB_NotificationItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_NotificationItem_C*>(UWB_NotificationItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_NotificationItem.WB_NotificationItem_C.OnDisplayWidgetTimerEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_NotificationItem_C::OnDisplayWidgetTimerEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_NotificationItem_C", "OnDisplayWidgetTimerEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_NotificationItem.WB_NotificationItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWB_NotificationItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_NotificationItem_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_NotificationItem.WB_NotificationItem_C.FillWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ENotificationType       Notification_Type                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Notification_Text                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWB_NotificationItem_C::FillWidget(enum class ENotificationType Notification_Type, const class FString& Notification_Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_NotificationItem_C", "FillWidget");

	Params::UWB_NotificationItem_C_FillWidget_Params Parms{};

	Parms.Notification_Type = Notification_Type;
	Parms.Notification_Text = Notification_Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_NotificationItem.WB_NotificationItem_C.ExecuteUbergraph_WB_NotificationItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEndTime_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ENotificationType       K2Node_CustomEvent_Notification_Type                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_Notification_Text                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_NotificationItem_C::ExecuteUbergraph_WB_NotificationItem(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_GetEndTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, enum class ENotificationType K2Node_CustomEvent_Notification_Type, const class FString& K2Node_CustomEvent_Notification_Text, class FText CallFunc_Conv_StringToText_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_NotificationItem_C", "ExecuteUbergraph_WB_NotificationItem");

	Params::UWB_NotificationItem_C_ExecuteUbergraph_WB_NotificationItem_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetEndTime_ReturnValue = CallFunc_GetEndTime_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.K2Node_CustomEvent_Notification_Type = K2Node_CustomEvent_Notification_Type;
	Parms.K2Node_CustomEvent_Notification_Text = K2Node_CustomEvent_Notification_Text;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


