#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_Outgoing_CustomGames_Invite.WB_Outgoing_CustomGames_Invite_C
// (None)

class UClass* UWB_Outgoing_CustomGames_Invite_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_Outgoing_CustomGames_Invite_C");

	return Clss;
}


// WB_Outgoing_CustomGames_Invite_C WB_Outgoing_CustomGames_Invite.Default__WB_Outgoing_CustomGames_Invite_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_Outgoing_CustomGames_Invite_C* UWB_Outgoing_CustomGames_Invite_C::GetDefaultObj()
{
	static class UWB_Outgoing_CustomGames_Invite_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_Outgoing_CustomGames_Invite_C*>(UWB_Outgoing_CustomGames_Invite_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_Outgoing_CustomGames_Invite.WB_Outgoing_CustomGames_Invite_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWB_Outgoing_CustomGames_Invite_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Outgoing_CustomGames_Invite_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Outgoing_CustomGames_Invite.WB_Outgoing_CustomGames_Invite_C.BndEvt__Btn_Cancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_Outgoing_CustomGames_Invite_C::BndEvt__Btn_Cancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Outgoing_CustomGames_Invite_C", "BndEvt__Btn_Cancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Outgoing_CustomGames_Invite.WB_Outgoing_CustomGames_Invite_C.OnCustomGameInviteCancelledWs
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      InviteId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWB_Outgoing_CustomGames_Invite_C::OnCustomGameInviteCancelledWs(const class FString& InviteId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Outgoing_CustomGames_Invite_C", "OnCustomGameInviteCancelledWs");

	Params::UWB_Outgoing_CustomGames_Invite_C_OnCustomGameInviteCancelledWs_Params Parms{};

	Parms.InviteId = InviteId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Outgoing_CustomGames_Invite.WB_Outgoing_CustomGames_Invite_C.RemoveInvite
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Outgoing_CustomGames_Invite_C::RemoveInvite()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Outgoing_CustomGames_Invite_C", "RemoveInvite");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Outgoing_CustomGames_Invite.WB_Outgoing_CustomGames_Invite_C.ExecuteUbergraph_WB_Outgoing_CustomGames_Invite
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAGCustomGameSubsystem*      CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAGCustomGameSubsystem*      CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FString                      K2Node_CustomEvent_InviteId                                      (ZeroConstructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UAGCustomGameSubsystem*      CallFunc_GetGameInstanceSubsystem_ReturnValue_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAGCustomGameSubsystem*      CallFunc_GetGameInstanceSubsystem_ReturnValue_3                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Outgoing_CustomGames_Invite_C::ExecuteUbergraph_WB_Outgoing_CustomGames_Invite(int32 EntryPoint, class UAGCustomGameSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UAGCustomGameSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& K2Node_CustomEvent_InviteId, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAGCustomGameSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, bool CallFunc_EqualEqual_StrStr_ReturnValue, class UAGCustomGameSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Outgoing_CustomGames_Invite_C", "ExecuteUbergraph_WB_Outgoing_CustomGames_Invite");

	Params::UWB_Outgoing_CustomGames_Invite_C_ExecuteUbergraph_WB_Outgoing_CustomGames_Invite_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_CustomEvent_InviteId = K2Node_CustomEvent_InviteId;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_2 = CallFunc_GetGameInstanceSubsystem_ReturnValue_2;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_3 = CallFunc_GetGameInstanceSubsystem_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


