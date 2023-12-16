#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_Notification_Icon_Section.WB_Notification_Icon_Section_C
// (None)

class UClass* UWB_Notification_Icon_Section_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_Notification_Icon_Section_C");

	return Clss;
}


// WB_Notification_Icon_Section_C WB_Notification_Icon_Section.Default__WB_Notification_Icon_Section_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_Notification_Icon_Section_C* UWB_Notification_Icon_Section_C::GetDefaultObj()
{
	static class UWB_Notification_Icon_Section_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_Notification_Icon_Section_C*>(UWB_Notification_Icon_Section_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_Notification_Icon_Section.WB_Notification_Icon_Section_C.BndEvt__WB_NotificationBox_K2Node_ComponentBoundEvent_2_Notification_FriendRequest_Pop__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Quantity                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Notification_Icon_Section_C::BndEvt__WB_NotificationBox_K2Node_ComponentBoundEvent_2_Notification_FriendRequest_Pop__DelegateSignature(int32 Quantity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Notification_Icon_Section_C", "BndEvt__WB_NotificationBox_K2Node_ComponentBoundEvent_2_Notification_FriendRequest_Pop__DelegateSignature");

	Params::UWB_Notification_Icon_Section_C_BndEvt__WB_NotificationBox_K2Node_ComponentBoundEvent_2_Notification_FriendRequest_Pop__DelegateSignature_Params Parms{};

	Parms.Quantity = Quantity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Notification_Icon_Section.WB_Notification_Icon_Section_C.BndEvt__FriendNotification_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_Notification_Icon_Section_C::BndEvt__FriendNotification_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Notification_Icon_Section_C", "BndEvt__FriendNotification_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Notification_Icon_Section.WB_Notification_Icon_Section_C.BndEvt__WB_NotificationBox_K2Node_ComponentBoundEvent_7_Update Friends List__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_Notification_Icon_Section_C::BndEvt__WB_NotificationBox_K2Node_ComponentBoundEvent_7_Update_Friends_List__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Notification_Icon_Section_C", "BndEvt__WB_NotificationBox_K2Node_ComponentBoundEvent_7_Update Friends List__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Notification_Icon_Section.WB_Notification_Icon_Section_C.BndEvt__PartyNotification_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_Notification_Icon_Section_C::BndEvt__PartyNotification_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Notification_Icon_Section_C", "BndEvt__PartyNotification_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Notification_Icon_Section.WB_Notification_Icon_Section_C.BndEvt__WB_NotificationBox_K2Node_ComponentBoundEvent_0_CloseWindow__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_Notification_Icon_Section_C::BndEvt__WB_NotificationBox_K2Node_ComponentBoundEvent_0_CloseWindow__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Notification_Icon_Section_C", "BndEvt__WB_NotificationBox_K2Node_ComponentBoundEvent_0_CloseWindow__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Notification_Icon_Section.WB_Notification_Icon_Section_C.BndEvt__WB_NotificationBox_K2Node_ComponentBoundEvent_1_Notification_PartyRequest_Pop__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Quantity                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Notification_Icon_Section_C::BndEvt__WB_NotificationBox_K2Node_ComponentBoundEvent_1_Notification_PartyRequest_Pop__DelegateSignature(int32 Quantity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Notification_Icon_Section_C", "BndEvt__WB_NotificationBox_K2Node_ComponentBoundEvent_1_Notification_PartyRequest_Pop__DelegateSignature");

	Params::UWB_Notification_Icon_Section_C_BndEvt__WB_NotificationBox_K2Node_ComponentBoundEvent_1_Notification_PartyRequest_Pop__DelegateSignature_Params Parms{};

	Parms.Quantity = Quantity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Notification_Icon_Section.WB_Notification_Icon_Section_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWB_Notification_Icon_Section_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Notification_Icon_Section_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Notification_Icon_Section.WB_Notification_Icon_Section_C.BndEvt__CustomGameNotification_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_Notification_Icon_Section_C::BndEvt__CustomGameNotification_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Notification_Icon_Section_C", "BndEvt__CustomGameNotification_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Notification_Icon_Section.WB_Notification_Icon_Section_C.BndEvt__WB_NotificationBox_K2Node_ComponentBoundEvent_5_Notification_CustomGameRequest_Pop__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Quantity                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Notification_Icon_Section_C::BndEvt__WB_NotificationBox_K2Node_ComponentBoundEvent_5_Notification_CustomGameRequest_Pop__DelegateSignature(int32 Quantity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Notification_Icon_Section_C", "BndEvt__WB_NotificationBox_K2Node_ComponentBoundEvent_5_Notification_CustomGameRequest_Pop__DelegateSignature");

	Params::UWB_Notification_Icon_Section_C_BndEvt__WB_NotificationBox_K2Node_ComponentBoundEvent_5_Notification_CustomGameRequest_Pop__DelegateSignature_Params Parms{};

	Parms.Quantity = Quantity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Notification_Icon_Section.WB_Notification_Icon_Section_C.ExecuteUbergraph_WB_Notification_Icon_Section
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Quantity_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Quantity_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Quantity                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_Notification_Icon_Section_C::ExecuteUbergraph_WB_Notification_Icon_Section(int32 EntryPoint, int32 K2Node_ComponentBoundEvent_Quantity_2, bool CallFunc_Greater_IntInt_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, int32 K2Node_ComponentBoundEvent_Quantity_1, bool CallFunc_Greater_IntInt_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_2, int32 K2Node_ComponentBoundEvent_Quantity, bool CallFunc_Greater_IntInt_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Notification_Icon_Section_C", "ExecuteUbergraph_WB_Notification_Icon_Section");

	Params::UWB_Notification_Icon_Section_C_ExecuteUbergraph_WB_Notification_Icon_Section_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Quantity_2 = K2Node_ComponentBoundEvent_Quantity_2;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_1 = CallFunc_PlayAnimationForward_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_Quantity_1 = K2Node_ComponentBoundEvent_Quantity_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_2 = CallFunc_PlayAnimationForward_ReturnValue_2;
	Parms.K2Node_ComponentBoundEvent_Quantity = K2Node_ComponentBoundEvent_Quantity;
	Parms.CallFunc_Greater_IntInt_ReturnValue_2 = CallFunc_Greater_IntInt_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Notification_Icon_Section.WB_Notification_Icon_Section_C.UpdateFriendsList__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Notification_Icon_Section_C::UpdateFriendsList__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Notification_Icon_Section_C", "UpdateFriendsList__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


