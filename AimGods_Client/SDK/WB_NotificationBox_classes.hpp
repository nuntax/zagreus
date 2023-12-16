#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB8 (0x2E8 - 0x230)
// WidgetBlueprintGeneratedClass WB_NotificationBox.WB_NotificationBox_C
class UWB_NotificationBox_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      PopUp;                                             // 0x238(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                            BoxName;                                           // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               ButtonLeave;                                       // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               ClearAllNotificationsBtn;                          // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Incoming_CustomGames_Invite_List_C* Custom_Invites_List;                               // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_FriendRequestsList_C*              Friend_Request_List;                               // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image;                                             // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_141;                                         // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_PartyInvite_List_C*                Party_Invites_List;                                // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Border_A_C*                        WB_Border_A;                                       // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Shadow_C*                          WB_Shadow;                                         // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcher_0;                                  // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastInlineDelegateProperty_            CloseWindow;                                       // 0x298(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastInlineDelegateProperty_            Notification_FriendRequest_Pop;                    // 0x2A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastInlineDelegateProperty_            Update_Friends_List;                               // 0x2B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastInlineDelegateProperty_            Notification_PartyRequest_Pop;                     // 0x2C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastInlineDelegateProperty_            Notification_CustomGameRequest_Pop;                // 0x2D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWB_NotificationBox_C* GetDefaultObj();

	void BndEvt__ButtonLeave_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WB_FriendRequestsList_K2Node_ComponentBoundEvent_1_WeHaveSomething__DelegateSignature(int32 Quantity);
	void Switch_Notification_Box(int32 WidgetID);
	void BndEvt__WB_FriendRequestsList_K2Node_ComponentBoundEvent_3_UpdateFriendsList__DelegateSignature();
	void Construct();
	void BndEvt__Party_Invites_List_K2Node_ComponentBoundEvent_4_Party_WeHaveSomething__DelegateSignature(int32 Quantity);
	void BndEvt__Custom_Invites_List_K2Node_ComponentBoundEvent_2_CustomGame_WeHaveSomething__DelegateSignature(int32 Quantity);
	void BndEvt__ClearAllNotificationsBtn_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_WB_NotificationBox(int32 EntryPoint, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, int32 K2Node_ComponentBoundEvent_Quantity_2, int32 K2Node_CustomEvent_WidgetID, int32 Temp_int_Variable, class FText K2Node_Select_Default, int32 K2Node_ComponentBoundEvent_Quantity_1, int32 K2Node_ComponentBoundEvent_Quantity, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess);
	void Notification_CustomGameRequest_Pop__DelegateSignature(int32 Quantity);
	void Notification_PartyRequest_Pop__DelegateSignature(int32 Quantity);
	void Update_Friends_List__DelegateSignature();
	void Notification_FriendRequest_Pop__DelegateSignature(int32 Quantity);
	void CloseWindow__DelegateSignature();
};

}


