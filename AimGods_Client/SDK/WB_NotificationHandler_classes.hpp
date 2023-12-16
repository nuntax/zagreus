#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x240 - 0x230)
// WidgetBlueprintGeneratedClass WB_NotificationHandler.WB_NotificationHandler_C
class UWB_NotificationHandler_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                          NotificationsBox;                                  // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWB_NotificationHandler_C* GetDefaultObj();

	void AddTextNotification(enum class ENotificationType Notification_Type, const class FString& Notification_Text, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWB_NotificationItem_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue);
	void OnRemoveFriend(bool Success, const class FString& Response, const struct FAGFriendError& Error);
	void OnOutgoingFriendRequestAccepted(const class FString& RequestId);
	void OnBlockPlayer(bool Success, const class FString& Response, const struct FAGFriendError& Error);
	void OnFriendOnlineStatusChanged(const class FString& PlayerId, bool IsOnline);
	void OnCustomGameInviteReceived(struct FIncomingCustomGameInvite& CustomGameInvite);
	void OnUnblockPlayer(bool Success, const class FString& Response, const struct FAGFriendError& Error);
	void OnSendFriendRequest(bool Success, const class FString& Response, const struct FAGFriendError& Error);
	void OnFriendRequestReceived(const class FString& RequestId, const class FString& Username);
	void Construct();
	void OnSendPartyInvite(bool Success, const class FString& Response, struct FPartyError& Error, struct FOutgoingPartyInvite& OutgoingInvite);
	void OnPartyInviteReceieved(const class FString& PartyInviteId, const class FString& Username, int64 InviteExpiresAt);
	void OnPartyDisbanded(const class FString& PartyId);
	void OnLeaveParty(bool Success, const class FString& Response, struct FPartyError& Error);
	void OnAcceptPartyInvite(bool Success, struct FPartyError& Error, struct FCurrentParty& CurrentParty);
	void OnOutgoingPartyInviteAcceptedWs(const class FString& PartyId, const class FString& UserId, const class FString& Username);
	void ExecuteUbergraph_WB_NotificationHandler(int32 EntryPoint, const class FString& K2Node_CustomEvent_PartyId, const class FString& K2Node_CustomEvent_UserId, const class FString& K2Node_CustomEvent_Username, class UAGPartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool K2Node_CustomEvent_Success_6, const class FString& K2Node_CustomEvent_Response_5, const struct FAGFriendError& K2Node_CustomEvent_Error_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const class FString& K2Node_CustomEvent_RequestId_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UAGPartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, bool K2Node_CustomEvent_Success_5, const class FString& K2Node_CustomEvent_Response_4, const struct FAGFriendError& K2Node_CustomEvent_Error_5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, class UAGPartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, class UAGPartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const class FString& K2Node_CustomEvent_PlayerId, bool K2Node_CustomEvent_IsOnline, const struct FIncomingCustomGameInvite& K2Node_CustomEvent_CustomGameInvite, class UAGPartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, bool K2Node_CustomEvent_Success_4, const class FString& K2Node_CustomEvent_Response_3, const struct FAGFriendError& K2Node_CustomEvent_Error_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UAGPartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_5, class UFriendsLibrary* CallFunc_GetGameInstanceSubsystem_ReturnValue_6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, bool K2Node_CustomEvent_Success_3, const class FString& K2Node_CustomEvent_Response_2, const struct FAGFriendError& K2Node_CustomEvent_Error_3, const class FString& K2Node_CustomEvent_RequestId, const class FString& K2Node_CustomEvent_Username_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, class UFriendsLibrary* CallFunc_GetGameInstanceSubsystem_ReturnValue_7, class UFriendsLibrary* CallFunc_GetGameInstanceSubsystem_ReturnValue_8, class UFriendsLibrary* CallFunc_GetGameInstanceSubsystem_ReturnValue_9, class UAGCustomGameSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_10, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, bool K2Node_CustomEvent_Success_2, const class FString& K2Node_CustomEvent_Response_1, const struct FPartyError& K2Node_CustomEvent_Error_2, const struct FOutgoingPartyInvite& K2Node_CustomEvent_OutgoingInvite, const class FString& K2Node_CustomEvent_PartyInviteId, const class FString& K2Node_CustomEvent_Username_1, int64 K2Node_CustomEvent_InviteExpiresAt, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, const class FString& K2Node_CustomEvent_PartyId_1, bool K2Node_CustomEvent_Success_1, const class FString& K2Node_CustomEvent_Response, const struct FPartyError& K2Node_CustomEvent_Error_1, class UFriendsLibrary* CallFunc_GetGameInstanceSubsystem_ReturnValue_11, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, const class FString& CallFunc_GetFriendNameByPlayerId_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_9, const class FString& CallFunc_Concat_StrStr_ReturnValue_10, bool K2Node_CustomEvent_Success, const struct FPartyError& K2Node_CustomEvent_Error, const struct FCurrentParty& K2Node_CustomEvent_CurrentParty, class UFriendsLibrary* CallFunc_GetGameInstanceSubsystem_ReturnValue_12, const class FString& CallFunc_Concat_StrStr_ReturnValue_11, const class FString& CallFunc_Concat_StrStr_ReturnValue_12, const class FString& CallFunc_Concat_StrStr_ReturnValue_13, class UFriendsLibrary* CallFunc_GetGameInstanceSubsystem_ReturnValue_13, class UFriendsLibrary* CallFunc_GetGameInstanceSubsystem_ReturnValue_14, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13);
};

}


