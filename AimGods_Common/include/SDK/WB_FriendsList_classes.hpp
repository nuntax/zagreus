#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x79 (0x2A9 - 0x230)
// WidgetBlueprintGeneratedClass WB_FriendsList.WB_FriendsList_C
class UWB_FriendsList_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UExpandableArea*                       BlockedArea;                                       // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          BlockedFriendsBox;                                 // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UExpandableArea*                       ExpandableArea_875;                                // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       LoadSwitcher;                                      // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UExpandableArea*                       OfflineArea;                                       // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          OfflineFriendsBox;                                 // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          OnlineFriendsBox;                                  // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            SB_FriendsList;                                    // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock;                                         // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_1;                                       // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UThrobber*                             Throbber_107;                                      // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_FriendRow_C*                       WB_FriendRow;                                      // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_FriendRow_C*                       WB_FriendRow_1;                                    // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_FriendRow_C*                       WB_FriendRow_201;                                  // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         bIsCustomGame;                                     // 0x2A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UWB_FriendsList_C* GetDefaultObj();

	void OnGetFriendsList(bool Success, const class FString& Response, struct FAGFriendError& Error, TArray<struct FAGFriend>& Friends);
	void Load_Friends();
	void Construct();
	void OnFriendOnlineStatusChangedWs(const class FString& PlayerId, bool IsOnline);
	void OnRemoveFriend(bool Success, const class FString& Response, const struct FAGFriendError& Error);
	void OnAcceptFriendRequest(bool Success, const class FString& Response, const struct FAGFriendError& Error);
	void OnOutgoingFriendRequestAcceptedWs(const class FString& RequestId);
	void OnPlayerUnfriendedYou(const class FString& Username);
	void OnBlockPlayer(bool Success, const class FString& Response, const struct FAGFriendError& Error);
	void OnGetBlockedPlayers(bool Success, const class FString& Response, struct FAGFriendError& Error, TArray<struct FAGFriend>& Friends);
	void OnUnblockPlayer(bool Success, const class FString& Response, const struct FAGFriendError& Error);
	void ExecuteUbergraph_WB_FriendsList(int32 EntryPoint, class UFriendsLibrary* CallFunc_GetGameInstanceSubsystem_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, bool K2Node_CustomEvent_Success_5, const class FString& K2Node_CustomEvent_Response_5, const struct FAGFriendError& K2Node_CustomEvent_Error_5, TArray<struct FAGFriend>& K2Node_CustomEvent_Friends_1, const struct FAGFriend& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWB_FriendRow_C* CallFunc_Create_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_1, class UFriendsLibrary* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, const class FString& K2Node_CustomEvent_PlayerId, bool K2Node_CustomEvent_IsOnline, class UFriendsLibrary* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, class UFriendsLibrary* CallFunc_GetGameInstanceSubsystem_ReturnValue_3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UFriendsLibrary* CallFunc_GetGameInstanceSubsystem_ReturnValue_4, bool K2Node_CustomEvent_Success_4, const class FString& K2Node_CustomEvent_Response_4, const struct FAGFriendError& K2Node_CustomEvent_Error_4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool K2Node_CustomEvent_Success_3, const class FString& K2Node_CustomEvent_Response_3, const struct FAGFriendError& K2Node_CustomEvent_Error_3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const class FString& K2Node_CustomEvent_RequestId, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const class FString& K2Node_CustomEvent_Username, const class FString& CallFunc_Concat_StrStr_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UFriendsLibrary* CallFunc_GetGameInstanceSubsystem_ReturnValue_5, class UFriendsLibrary* CallFunc_GetGameInstanceSubsystem_ReturnValue_6, class UFriendsLibrary* CallFunc_GetGameInstanceSubsystem_ReturnValue_7, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class UWB_NotificationItem_C* CallFunc_Create_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool K2Node_CustomEvent_Success_2, const class FString& K2Node_CustomEvent_Response_2, const struct FAGFriendError& K2Node_CustomEvent_Error_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class UFriendsLibrary* CallFunc_GetGameInstanceSubsystem_ReturnValue_8, bool K2Node_CustomEvent_Success_1, const class FString& K2Node_CustomEvent_Response_1, const struct FAGFriendError& K2Node_CustomEvent_Error_1, TArray<struct FAGFriend>& K2Node_CustomEvent_Friends, const struct FAGFriend& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, class UWB_FriendRow_C* CallFunc_Create_ReturnValue_2, class UFriendsLibrary* CallFunc_GetGameInstanceSubsystem_ReturnValue_9, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_2, class UFriendsLibrary* CallFunc_GetGameInstanceSubsystem_ReturnValue_10, class UFriendsLibrary* CallFunc_GetGameInstanceSubsystem_ReturnValue_11, class UFriendsLibrary* CallFunc_GetGameInstanceSubsystem_ReturnValue_12, class UFriendsLibrary* CallFunc_GetGameInstanceSubsystem_ReturnValue_13, class UFriendsLibrary* CallFunc_GetGameInstanceSubsystem_ReturnValue_14, bool K2Node_CustomEvent_Success, const class FString& K2Node_CustomEvent_Response, const struct FAGFriendError& K2Node_CustomEvent_Error, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8);
};

}


