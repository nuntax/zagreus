#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x2B0 - 0x230)
// WidgetBlueprintGeneratedClass WB_FriendChatWindow.WB_FriendChatWindow_C
class UWB_FriendChatWindow_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               Btn_Close;                                         // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Icon_A;                                            // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_417;                                         // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_786;                                         // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            SB_MsgContainer;                                   // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                      TB_ChatEntry;                                      // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_FriendName;                                    // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_Messages;                                       // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Border_A_C*                        WB_Border_A;                                       // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                CurrentUsername;                                   // 0x280(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                CurrentUserId;                                     // 0x290(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                CurrentChatConversationId;                         // 0x2A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWB_FriendChatWindow_C* GetDefaultObj();

	void Construct();
	void BndEvt__Btn_Close_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__TB_ChatEntry_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod);
	void OnShowChatBox(const class FString& OtherPlayerId, const class FString& OtherPlayerUsername, const class FString& ChatConversationId);
	void OnMessageReceived(const class FString& OtherPlayerId, const class FString& OtherPlayerUsername, const class FString& ChatConversationId, const class FString& SenderPlayerId);
	void BndEvt__TB_ChatEntry_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature(class FText& Text);
	void ExecuteUbergraph_WB_FriendChatWindow(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, class UAGChatSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UAGChatSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, class UAGChatSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, class FText CallFunc_Conv_StringToText_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UWB_FriendChatText_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class FText K2Node_ComponentBoundEvent_Text_1, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, bool K2Node_SwitchEnum_CmpSuccess, const class FString& CallFunc_Conv_TextToString_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const class FString& K2Node_CustomEvent_OtherPlayerId_1, const class FString& K2Node_CustomEvent_OtherPlayerUsername_1, const class FString& K2Node_CustomEvent_ChatConversationId_1, class UAGChatSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_3, const struct FChatConversation& CallFunc_GetChatConversationById_ReturnValue, const struct FChatMessage& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const class FString& K2Node_CustomEvent_OtherPlayerId, const class FString& K2Node_CustomEvent_OtherPlayerUsername, const class FString& K2Node_CustomEvent_ChatConversationId, const class FString& K2Node_CustomEvent_SenderPlayerId, bool CallFunc_EqualEqual_StrStr_ReturnValue, class FText K2Node_ComponentBoundEvent_Text, class FText CallFunc_Truncate_Text_Box_TruncatedText);
};

}


