#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x288 - 0x230)
// WidgetBlueprintGeneratedClass WB_Notification_Icon_Section.WB_Notification_Icon_Section_C
class UWB_Notification_Icon_Section_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      OpenCloseAnimation;                                // 0x238(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                BG;                                                // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Notification_Button_C*             ChatNotification;                                  // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Notification_Button_C*             CustomGameNotification;                            // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Notification_Button_C*             FriendNotification;                                // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Notification_Button_C*             ImportantInformation;                              // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Notification_Button_C*             PartyNotification;                                 // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_NotificationBox_C*                 WB_NotificationBox;                                // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastInlineDelegateProperty_            UpdateFriendsList;                                 // 0x278(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWB_Notification_Icon_Section_C* GetDefaultObj();

	void BndEvt__WB_NotificationBox_K2Node_ComponentBoundEvent_2_Notification_FriendRequest_Pop__DelegateSignature(int32 Quantity);
	void BndEvt__FriendNotification_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature();
	void BndEvt__WB_NotificationBox_K2Node_ComponentBoundEvent_7_Update_Friends_List__DelegateSignature();
	void BndEvt__PartyNotification_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature();
	void BndEvt__WB_NotificationBox_K2Node_ComponentBoundEvent_0_CloseWindow__DelegateSignature();
	void BndEvt__WB_NotificationBox_K2Node_ComponentBoundEvent_1_Notification_PartyRequest_Pop__DelegateSignature(int32 Quantity);
	void Construct();
	void BndEvt__CustomGameNotification_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature();
	void BndEvt__WB_NotificationBox_K2Node_ComponentBoundEvent_5_Notification_CustomGameRequest_Pop__DelegateSignature(int32 Quantity);
	void ExecuteUbergraph_WB_Notification_Icon_Section(int32 EntryPoint, int32 K2Node_ComponentBoundEvent_Quantity_2, bool CallFunc_Greater_IntInt_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, int32 K2Node_ComponentBoundEvent_Quantity_1, bool CallFunc_Greater_IntInt_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_2, int32 K2Node_ComponentBoundEvent_Quantity, bool CallFunc_Greater_IntInt_ReturnValue_2);
	void UpdateFriendsList__DelegateSignature();
};

}


