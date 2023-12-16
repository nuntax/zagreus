#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x258 - 0x230)
// WidgetBlueprintGeneratedClass WB_Incoming_CustomGames_Invite_List.WB_Incoming_CustomGames_Invite_List_C
class UWB_Incoming_CustomGames_Invite_List_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UScrollBox*                            SB_IncomingCustomGameInvites;                      // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_Invites;                                        // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastInlineDelegateProperty_            CustomGame_WeHaveSomething;                        // 0x248(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWB_Incoming_CustomGames_Invite_List_C* GetDefaultObj();

	void Construct();
	void OnGetIncomingInvites(TArray<struct FIncomingCustomGameInvite>& CustomGameInvites);
	void OnCustomGameInviteReceivedWs(struct FIncomingCustomGameInvite& CustomGameInvite);
	void UpdateCustomGameNotifications();
	void OnAcceptInvite(struct FCustomGame& CurrentGame);
	void OnCustomGameInviteCancelledWs(const class FString& InviteId);
	void ClearOutInvites();
	void ExecuteUbergraph_WB_Incoming_CustomGames_Invite_List(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWB_Incoming_CustomGames_Invite_C* K2Node_DynamicCast_AsWB_Incoming_Custom_Games_Invite, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FIncomingCustomGameInvite>& K2Node_CustomEvent_CustomGameInvites, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FIncomingCustomGameInvite& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UWB_Incoming_CustomGames_Invite_C* CallFunc_Create_ReturnValue, const struct FIncomingCustomGameInvite& K2Node_CustomEvent_CustomGameInvite, class UPanelSlot* CallFunc_AddChild_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UAGCustomGameSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UWB_Incoming_CustomGames_Invite_C* CallFunc_Create_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, int32 CallFunc_GetChildrenCount_ReturnValue, class UAGCustomGameSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, const struct FCustomGame& K2Node_CustomEvent_CurrentGame, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UAGCustomGameSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, const class FString& K2Node_CustomEvent_InviteId, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UAGCustomGameSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_3, class UAGCustomGameSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_4, int32 CallFunc_GetChildrenCount_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue);
	void CustomGame_WeHaveSomething__DelegateSignature(int32 Quantity);
};

}


