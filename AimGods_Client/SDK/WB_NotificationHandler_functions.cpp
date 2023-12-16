#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_NotificationHandler.WB_NotificationHandler_C
// (None)

class UClass* UWB_NotificationHandler_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_NotificationHandler_C");

	return Clss;
}


// WB_NotificationHandler_C WB_NotificationHandler.Default__WB_NotificationHandler_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_NotificationHandler_C* UWB_NotificationHandler_C::GetDefaultObj()
{
	static class UWB_NotificationHandler_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_NotificationHandler_C*>(UWB_NotificationHandler_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_NotificationHandler.WB_NotificationHandler_C.AddTextNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ENotificationType       Notification_Type                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Notification_Text                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_NotificationItem_C*      CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_NotificationHandler_C::AddTextNotification(enum class ENotificationType Notification_Type, const class FString& Notification_Text, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWB_NotificationItem_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_NotificationHandler_C", "AddTextNotification");

	Params::UWB_NotificationHandler_C_AddTextNotification_Params Parms{};

	Parms.Notification_Type = Notification_Type;
	Parms.Notification_Text = Notification_Text;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_NotificationHandler.WB_NotificationHandler_C.OnRemoveFriend
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Response                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FAGFriendError              Error                                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UWB_NotificationHandler_C::OnRemoveFriend(bool Success, const class FString& Response, const struct FAGFriendError& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_NotificationHandler_C", "OnRemoveFriend");

	Params::UWB_NotificationHandler_C_OnRemoveFriend_Params Parms{};

	Parms.Success = Success;
	Parms.Response = Response;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_NotificationHandler.WB_NotificationHandler_C.OnOutgoingFriendRequestAccepted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      RequestId                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWB_NotificationHandler_C::OnOutgoingFriendRequestAccepted(const class FString& RequestId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_NotificationHandler_C", "OnOutgoingFriendRequestAccepted");

	Params::UWB_NotificationHandler_C_OnOutgoingFriendRequestAccepted_Params Parms{};

	Parms.RequestId = RequestId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_NotificationHandler.WB_NotificationHandler_C.OnBlockPlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Response                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FAGFriendError              Error                                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UWB_NotificationHandler_C::OnBlockPlayer(bool Success, const class FString& Response, const struct FAGFriendError& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_NotificationHandler_C", "OnBlockPlayer");

	Params::UWB_NotificationHandler_C_OnBlockPlayer_Params Parms{};

	Parms.Success = Success;
	Parms.Response = Response;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_NotificationHandler.WB_NotificationHandler_C.OnFriendOnlineStatusChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      PlayerId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               IsOnline                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_NotificationHandler_C::OnFriendOnlineStatusChanged(const class FString& PlayerId, bool IsOnline)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_NotificationHandler_C", "OnFriendOnlineStatusChanged");

	Params::UWB_NotificationHandler_C_OnFriendOnlineStatusChanged_Params Parms{};

	Parms.PlayerId = PlayerId;
	Parms.IsOnline = IsOnline;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_NotificationHandler.WB_NotificationHandler_C.OnCustomGameInviteReceived
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FIncomingCustomGameInvite   CustomGameInvite                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWB_NotificationHandler_C::OnCustomGameInviteReceived(struct FIncomingCustomGameInvite& CustomGameInvite)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_NotificationHandler_C", "OnCustomGameInviteReceived");

	Params::UWB_NotificationHandler_C_OnCustomGameInviteReceived_Params Parms{};

	Parms.CustomGameInvite = CustomGameInvite;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_NotificationHandler.WB_NotificationHandler_C.OnUnblockPlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Response                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FAGFriendError              Error                                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UWB_NotificationHandler_C::OnUnblockPlayer(bool Success, const class FString& Response, const struct FAGFriendError& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_NotificationHandler_C", "OnUnblockPlayer");

	Params::UWB_NotificationHandler_C_OnUnblockPlayer_Params Parms{};

	Parms.Success = Success;
	Parms.Response = Response;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_NotificationHandler.WB_NotificationHandler_C.OnSendFriendRequest
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Response                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FAGFriendError              Error                                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UWB_NotificationHandler_C::OnSendFriendRequest(bool Success, const class FString& Response, const struct FAGFriendError& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_NotificationHandler_C", "OnSendFriendRequest");

	Params::UWB_NotificationHandler_C_OnSendFriendRequest_Params Parms{};

	Parms.Success = Success;
	Parms.Response = Response;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_NotificationHandler.WB_NotificationHandler_C.OnFriendRequestReceived
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      RequestId                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Username                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWB_NotificationHandler_C::OnFriendRequestReceived(const class FString& RequestId, const class FString& Username)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_NotificationHandler_C", "OnFriendRequestReceived");

	Params::UWB_NotificationHandler_C_OnFriendRequestReceived_Params Parms{};

	Parms.RequestId = RequestId;
	Parms.Username = Username;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_NotificationHandler.WB_NotificationHandler_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWB_NotificationHandler_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_NotificationHandler_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_NotificationHandler.WB_NotificationHandler_C.OnSendPartyInvite
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Response                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FPartyError                 Error                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FOutgoingPartyInvite        OutgoingInvite                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWB_NotificationHandler_C::OnSendPartyInvite(bool Success, const class FString& Response, struct FPartyError& Error, struct FOutgoingPartyInvite& OutgoingInvite)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_NotificationHandler_C", "OnSendPartyInvite");

	Params::UWB_NotificationHandler_C_OnSendPartyInvite_Params Parms{};

	Parms.Success = Success;
	Parms.Response = Response;
	Parms.Error = Error;
	Parms.OutgoingInvite = OutgoingInvite;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_NotificationHandler.WB_NotificationHandler_C.OnPartyInviteReceieved
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      PartyInviteId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Username                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int64                              InviteExpiresAt                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_NotificationHandler_C::OnPartyInviteReceieved(const class FString& PartyInviteId, const class FString& Username, int64 InviteExpiresAt)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_NotificationHandler_C", "OnPartyInviteReceieved");

	Params::UWB_NotificationHandler_C_OnPartyInviteReceieved_Params Parms{};

	Parms.PartyInviteId = PartyInviteId;
	Parms.Username = Username;
	Parms.InviteExpiresAt = InviteExpiresAt;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_NotificationHandler.WB_NotificationHandler_C.OnPartyDisbanded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      PartyId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWB_NotificationHandler_C::OnPartyDisbanded(const class FString& PartyId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_NotificationHandler_C", "OnPartyDisbanded");

	Params::UWB_NotificationHandler_C_OnPartyDisbanded_Params Parms{};

	Parms.PartyId = PartyId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_NotificationHandler.WB_NotificationHandler_C.OnLeaveParty
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Response                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FPartyError                 Error                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWB_NotificationHandler_C::OnLeaveParty(bool Success, const class FString& Response, struct FPartyError& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_NotificationHandler_C", "OnLeaveParty");

	Params::UWB_NotificationHandler_C_OnLeaveParty_Params Parms{};

	Parms.Success = Success;
	Parms.Response = Response;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_NotificationHandler.WB_NotificationHandler_C.OnAcceptPartyInvite
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPartyError                 Error                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FCurrentParty               CurrentParty                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWB_NotificationHandler_C::OnAcceptPartyInvite(bool Success, struct FPartyError& Error, struct FCurrentParty& CurrentParty)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_NotificationHandler_C", "OnAcceptPartyInvite");

	Params::UWB_NotificationHandler_C_OnAcceptPartyInvite_Params Parms{};

	Parms.Success = Success;
	Parms.Error = Error;
	Parms.CurrentParty = CurrentParty;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_NotificationHandler.WB_NotificationHandler_C.OnOutgoingPartyInviteAcceptedWs
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      PartyId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      UserId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Username                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWB_NotificationHandler_C::OnOutgoingPartyInviteAcceptedWs(const class FString& PartyId, const class FString& UserId, const class FString& Username)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_NotificationHandler_C", "OnOutgoingPartyInviteAcceptedWs");

	Params::UWB_NotificationHandler_C_OnOutgoingPartyInviteAcceptedWs_Params Parms{};

	Parms.PartyId = PartyId;
	Parms.UserId = UserId;
	Parms.Username = Username;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_NotificationHandler.WB_NotificationHandler_C.ExecuteUbergraph_WB_NotificationHandler
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_PartyId                                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_UserId                                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_Username                                      (ZeroConstructor, HasGetValueTypeHash)
// class UAGPartySubsystem*           CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Success_6                                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_CustomEvent_Response_5                                    (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// struct FAGFriendError              K2Node_CustomEvent_Error_6                                       (None)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FString                      K2Node_CustomEvent_RequestId_1                                   (ZeroConstructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UAGPartySubsystem*           CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Success_5                                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_CustomEvent_Response_4                                    (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// struct FAGFriendError              K2Node_CustomEvent_Error_5                                       (None)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class UAGPartySubsystem*           CallFunc_GetGameInstanceSubsystem_ReturnValue_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAGPartySubsystem*           CallFunc_GetGameInstanceSubsystem_ReturnValue_3                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// class FString                      K2Node_CustomEvent_PlayerId                                      (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsOnline                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FIncomingCustomGameInvite   K2Node_CustomEvent_CustomGameInvite                              (ConstParm)
// class UAGPartySubsystem*           CallFunc_GetGameInstanceSubsystem_ReturnValue_4                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Success_4                                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_CustomEvent_Response_3                                    (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// struct FAGFriendError              K2Node_CustomEvent_Error_4                                       (None)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// class UAGPartySubsystem*           CallFunc_GetGameInstanceSubsystem_ReturnValue_5                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFriendsLibrary*             CallFunc_GetGameInstanceSubsystem_ReturnValue_6                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// bool                               K2Node_CustomEvent_Success_3                                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_CustomEvent_Response_2                                    (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// struct FAGFriendError              K2Node_CustomEvent_Error_3                                       (None)
// class FString                      K2Node_CustomEvent_RequestId                                     (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_Username_2                                    (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (ZeroConstructor, HasGetValueTypeHash)
// class UFriendsLibrary*             CallFunc_GetGameInstanceSubsystem_ReturnValue_7                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFriendsLibrary*             CallFunc_GetGameInstanceSubsystem_ReturnValue_8                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFriendsLibrary*             CallFunc_GetGameInstanceSubsystem_ReturnValue_9                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAGCustomGameSubsystem*      CallFunc_GetGameInstanceSubsystem_ReturnValue_10                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor)
// bool                               K2Node_CustomEvent_Success_2                                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_CustomEvent_Response_1                                    (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// struct FPartyError                 K2Node_CustomEvent_Error_2                                       (ConstParm)
// struct FOutgoingPartyInvite        K2Node_CustomEvent_OutgoingInvite                                (ConstParm)
// class FString                      K2Node_CustomEvent_PartyInviteId                                 (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_Username_1                                    (ZeroConstructor, HasGetValueTypeHash)
// int64                              K2Node_CustomEvent_InviteExpiresAt                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_8                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_PartyId_1                                     (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Success_1                                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_CustomEvent_Response                                      (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// struct FPartyError                 K2Node_CustomEvent_Error_1                                       (ConstParm)
// class UFriendsLibrary*             CallFunc_GetGameInstanceSubsystem_ReturnValue_11                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (ZeroConstructor, NoDestructor)
// class FString                      CallFunc_GetFriendNameByPlayerId_ReturnValue                     (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_9                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_10                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Success                                       (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPartyError                 K2Node_CustomEvent_Error                                         (ConstParm)
// struct FCurrentParty               K2Node_CustomEvent_CurrentParty                                  (ConstParm)
// class UFriendsLibrary*             CallFunc_GetGameInstanceSubsystem_ReturnValue_12                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_11                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_12                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_13                            (ZeroConstructor, HasGetValueTypeHash)
// class UFriendsLibrary*             CallFunc_GetGameInstanceSubsystem_ReturnValue_13                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFriendsLibrary*             CallFunc_GetGameInstanceSubsystem_ReturnValue_14                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_13                          (ZeroConstructor, NoDestructor)

void UWB_NotificationHandler_C::ExecuteUbergraph_WB_NotificationHandler(int32 EntryPoint, const class FString& K2Node_CustomEvent_PartyId, const class FString& K2Node_CustomEvent_UserId, const class FString& K2Node_CustomEvent_Username, class UAGPartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool K2Node_CustomEvent_Success_6, const class FString& K2Node_CustomEvent_Response_5, const struct FAGFriendError& K2Node_CustomEvent_Error_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const class FString& K2Node_CustomEvent_RequestId_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UAGPartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, bool K2Node_CustomEvent_Success_5, const class FString& K2Node_CustomEvent_Response_4, const struct FAGFriendError& K2Node_CustomEvent_Error_5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, class UAGPartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, class UAGPartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const class FString& K2Node_CustomEvent_PlayerId, bool K2Node_CustomEvent_IsOnline, const struct FIncomingCustomGameInvite& K2Node_CustomEvent_CustomGameInvite, class UAGPartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, bool K2Node_CustomEvent_Success_4, const class FString& K2Node_CustomEvent_Response_3, const struct FAGFriendError& K2Node_CustomEvent_Error_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UAGPartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_5, class UFriendsLibrary* CallFunc_GetGameInstanceSubsystem_ReturnValue_6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, bool K2Node_CustomEvent_Success_3, const class FString& K2Node_CustomEvent_Response_2, const struct FAGFriendError& K2Node_CustomEvent_Error_3, const class FString& K2Node_CustomEvent_RequestId, const class FString& K2Node_CustomEvent_Username_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, class UFriendsLibrary* CallFunc_GetGameInstanceSubsystem_ReturnValue_7, class UFriendsLibrary* CallFunc_GetGameInstanceSubsystem_ReturnValue_8, class UFriendsLibrary* CallFunc_GetGameInstanceSubsystem_ReturnValue_9, class UAGCustomGameSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_10, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, bool K2Node_CustomEvent_Success_2, const class FString& K2Node_CustomEvent_Response_1, const struct FPartyError& K2Node_CustomEvent_Error_2, const struct FOutgoingPartyInvite& K2Node_CustomEvent_OutgoingInvite, const class FString& K2Node_CustomEvent_PartyInviteId, const class FString& K2Node_CustomEvent_Username_1, int64 K2Node_CustomEvent_InviteExpiresAt, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, const class FString& K2Node_CustomEvent_PartyId_1, bool K2Node_CustomEvent_Success_1, const class FString& K2Node_CustomEvent_Response, const struct FPartyError& K2Node_CustomEvent_Error_1, class UFriendsLibrary* CallFunc_GetGameInstanceSubsystem_ReturnValue_11, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, const class FString& CallFunc_GetFriendNameByPlayerId_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_9, const class FString& CallFunc_Concat_StrStr_ReturnValue_10, bool K2Node_CustomEvent_Success, const struct FPartyError& K2Node_CustomEvent_Error, const struct FCurrentParty& K2Node_CustomEvent_CurrentParty, class UFriendsLibrary* CallFunc_GetGameInstanceSubsystem_ReturnValue_12, const class FString& CallFunc_Concat_StrStr_ReturnValue_11, const class FString& CallFunc_Concat_StrStr_ReturnValue_12, const class FString& CallFunc_Concat_StrStr_ReturnValue_13, class UFriendsLibrary* CallFunc_GetGameInstanceSubsystem_ReturnValue_13, class UFriendsLibrary* CallFunc_GetGameInstanceSubsystem_ReturnValue_14, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_NotificationHandler_C", "ExecuteUbergraph_WB_NotificationHandler");

	Params::UWB_NotificationHandler_C_ExecuteUbergraph_WB_NotificationHandler_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_PartyId = K2Node_CustomEvent_PartyId;
	Parms.K2Node_CustomEvent_UserId = K2Node_CustomEvent_UserId;
	Parms.K2Node_CustomEvent_Username = K2Node_CustomEvent_Username;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.K2Node_CustomEvent_Success_6 = K2Node_CustomEvent_Success_6;
	Parms.K2Node_CustomEvent_Response_5 = K2Node_CustomEvent_Response_5;
	Parms.K2Node_CustomEvent_Error_6 = K2Node_CustomEvent_Error_6;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_RequestId_1 = K2Node_CustomEvent_RequestId_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
	Parms.K2Node_CustomEvent_Success_5 = K2Node_CustomEvent_Success_5;
	Parms.K2Node_CustomEvent_Response_4 = K2Node_CustomEvent_Response_4;
	Parms.K2Node_CustomEvent_Error_5 = K2Node_CustomEvent_Error_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_2 = CallFunc_GetGameInstanceSubsystem_ReturnValue_2;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_3 = CallFunc_GetGameInstanceSubsystem_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CustomEvent_PlayerId = K2Node_CustomEvent_PlayerId;
	Parms.K2Node_CustomEvent_IsOnline = K2Node_CustomEvent_IsOnline;
	Parms.K2Node_CustomEvent_CustomGameInvite = K2Node_CustomEvent_CustomGameInvite;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_4 = CallFunc_GetGameInstanceSubsystem_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.K2Node_CustomEvent_Success_4 = K2Node_CustomEvent_Success_4;
	Parms.K2Node_CustomEvent_Response_3 = K2Node_CustomEvent_Response_3;
	Parms.K2Node_CustomEvent_Error_4 = K2Node_CustomEvent_Error_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_5 = CallFunc_GetGameInstanceSubsystem_ReturnValue_5;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_6 = CallFunc_GetGameInstanceSubsystem_ReturnValue_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CustomEvent_Success_3 = K2Node_CustomEvent_Success_3;
	Parms.K2Node_CustomEvent_Response_2 = K2Node_CustomEvent_Response_2;
	Parms.K2Node_CustomEvent_Error_3 = K2Node_CustomEvent_Error_3;
	Parms.K2Node_CustomEvent_RequestId = K2Node_CustomEvent_RequestId;
	Parms.K2Node_CustomEvent_Username_2 = K2Node_CustomEvent_Username_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.CallFunc_Concat_StrStr_ReturnValue_7 = CallFunc_Concat_StrStr_ReturnValue_7;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_7 = CallFunc_GetGameInstanceSubsystem_ReturnValue_7;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_8 = CallFunc_GetGameInstanceSubsystem_ReturnValue_8;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_9 = CallFunc_GetGameInstanceSubsystem_ReturnValue_9;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_10 = CallFunc_GetGameInstanceSubsystem_ReturnValue_10;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.K2Node_CustomEvent_Success_2 = K2Node_CustomEvent_Success_2;
	Parms.K2Node_CustomEvent_Response_1 = K2Node_CustomEvent_Response_1;
	Parms.K2Node_CustomEvent_Error_2 = K2Node_CustomEvent_Error_2;
	Parms.K2Node_CustomEvent_OutgoingInvite = K2Node_CustomEvent_OutgoingInvite;
	Parms.K2Node_CustomEvent_PartyInviteId = K2Node_CustomEvent_PartyInviteId;
	Parms.K2Node_CustomEvent_Username_1 = K2Node_CustomEvent_Username_1;
	Parms.K2Node_CustomEvent_InviteExpiresAt = K2Node_CustomEvent_InviteExpiresAt;
	Parms.CallFunc_Concat_StrStr_ReturnValue_8 = CallFunc_Concat_StrStr_ReturnValue_8;
	Parms.K2Node_CustomEvent_PartyId_1 = K2Node_CustomEvent_PartyId_1;
	Parms.K2Node_CustomEvent_Success_1 = K2Node_CustomEvent_Success_1;
	Parms.K2Node_CustomEvent_Response = K2Node_CustomEvent_Response;
	Parms.K2Node_CustomEvent_Error_1 = K2Node_CustomEvent_Error_1;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_11 = CallFunc_GetGameInstanceSubsystem_ReturnValue_11;
	Parms.K2Node_CreateDelegate_OutputDelegate_12 = K2Node_CreateDelegate_OutputDelegate_12;
	Parms.CallFunc_GetFriendNameByPlayerId_ReturnValue = CallFunc_GetFriendNameByPlayerId_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_9 = CallFunc_Concat_StrStr_ReturnValue_9;
	Parms.CallFunc_Concat_StrStr_ReturnValue_10 = CallFunc_Concat_StrStr_ReturnValue_10;
	Parms.K2Node_CustomEvent_Success = K2Node_CustomEvent_Success;
	Parms.K2Node_CustomEvent_Error = K2Node_CustomEvent_Error;
	Parms.K2Node_CustomEvent_CurrentParty = K2Node_CustomEvent_CurrentParty;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_12 = CallFunc_GetGameInstanceSubsystem_ReturnValue_12;
	Parms.CallFunc_Concat_StrStr_ReturnValue_11 = CallFunc_Concat_StrStr_ReturnValue_11;
	Parms.CallFunc_Concat_StrStr_ReturnValue_12 = CallFunc_Concat_StrStr_ReturnValue_12;
	Parms.CallFunc_Concat_StrStr_ReturnValue_13 = CallFunc_Concat_StrStr_ReturnValue_13;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_13 = CallFunc_GetGameInstanceSubsystem_ReturnValue_13;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_14 = CallFunc_GetGameInstanceSubsystem_ReturnValue_14;
	Parms.K2Node_CreateDelegate_OutputDelegate_13 = K2Node_CreateDelegate_OutputDelegate_13;

	UObject::ProcessEvent(Func, &Parms);

}

}


