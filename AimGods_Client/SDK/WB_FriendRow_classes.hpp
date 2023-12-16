#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8A (0x2BA - 0x230)
// WidgetBlueprintGeneratedClass WB_FriendRow.WB_FriendRow_C
class UWB_FriendRow_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetSwitcher*                       BlockOrRemove;                                     // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Btn_AddToCustomGame;                               // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Btn_AddToParty;                                    // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Btn_BlockPlayer;                                   // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Btn_Row;                                           // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               ForgiveFriend;                                     // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_HasNewMessage;                                 // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              MessageBox;                                        // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               RemoveFriendButton;                                // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_Username;                                      // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WS_CustomGame;                                     // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FAGFriend                             Friend;                                            // 0x290(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                         bIsCustomGame;                                     // 0x2B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         bIsBlocked;                                        // 0x2B9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UWB_FriendRow_C* GetDefaultObj();

	void Check_Online(bool Online_);
	void BndEvt__AddToParty_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Btn_Row_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void OnMessageReceived(const class FString& OtherPlayerId, const class FString& OtherPlayerUsername, const class FString& ChatConversationId, const class FString& SenderPlayerId);
	void OnRemoveFriend(bool Success, const class FString& Response, const struct FAGFriendError& Error);
	void BndEvt__Button_144_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Btn_AddToCustomGame_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Btn_BlockPlayer_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void BndEvt__ForgiveFriend_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_WB_FriendRow(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UFriendsLibrary* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UFriendsLibrary* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, class UFriendsLibrary* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, class UAGCustomGameSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_3, bool Temp_bool_Variable_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const class FString& K2Node_CustomEvent_OtherPlayerId, const class FString& K2Node_CustomEvent_OtherPlayerUsername, const class FString& K2Node_CustomEvent_ChatConversationId, const class FString& K2Node_CustomEvent_SenderPlayerId, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, class UAGGameInstance* K2Node_DynamicCast_AsAGGame_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, bool K2Node_CustomEvent_Success, const class FString& K2Node_CustomEvent_Response, const struct FAGFriendError& K2Node_CustomEvent_Error, class UFriendsLibrary* CallFunc_GetGameInstanceSubsystem_ReturnValue_4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FText CallFunc_Conv_StringToText_ReturnValue, class UWidget* K2Node_Select_Default, class UFriendsLibrary* CallFunc_GetGameInstanceSubsystem_ReturnValue_5, enum class ESlateVisibility K2Node_Select_Default_1, class UWidget* K2Node_Select_Default_2, class UAGChatSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_6, class UAGChatSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_7, class UAGPartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_8);
};

}


