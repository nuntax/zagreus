#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x260 - 0x230)
// WidgetBlueprintGeneratedClass WB_PartyInvite_List.WB_PartyInvite_List_C
class UWB_PartyInvite_List_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UScrollBox*                            VB_PartyRequests;                                  // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFriendsLibrary*                       Friends;                                           // 0x240(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IncomingRequestsSucceeded;                         // 0x248(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         OutgoingRequestsSucceeded;                         // 0x249(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1335[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastInlineDelegateProperty_            Party_WeHaveSomething;                             // 0x250(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWB_PartyInvite_List_C* GetDefaultObj();

	void Load_Requests();
	void Construct();
	void OnGetPartyInvites(bool Success, const class FString& Response, struct FPartyError& Error, struct FPartyInvites& Invites);
	void OnPartyInviteReceivedWs_Event(const class FString& PartyInviteId, const class FString& Username, int64 InviteExpiresAt);
	void OnIncomingPartyInviteCancelledWs(const class FString& PartyInviteId);
	void OnOutgoingPartyInviteAccepted(const class FString& PartyInviteId, const class FString& UserId, const class FString& Username);
	void UpdatePartyNotification();
	void OnSendPartyInvite(bool Success, const class FString& Response, struct FPartyError& Error, struct FOutgoingPartyInvite& OutgoingInvite);
	void OnCancelPartyInvite(bool Success, const class FString& Response, struct FPartyError& Error);
	void OnAcceptPartyInvite(bool Success, struct FPartyError& Error, struct FCurrentParty& CurrentParty);
	void ClearOutPartyInvites();
	void ExecuteUbergraph_WB_PartyInvite_List(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Array_Index_Variable_2, class UAGPartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, int32 Temp_int_Variable, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWB_PartyInvite_C* K2Node_DynamicCast_AsWB_Party_Invite, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue_4, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_AGGameInstance_C* K2Node_DynamicCast_AsBP_AGGame_Instance, bool K2Node_DynamicCast_bSuccess_1, bool K2Node_CustomEvent_Success_3, const class FString& K2Node_CustomEvent_Response_2, const struct FPartyError& K2Node_CustomEvent_Error_3, const struct FPartyInvites& K2Node_CustomEvent_Invites, int32 Temp_int_Array_Index_Variable_3, const struct FOutgoingPartyInvite& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FIncomingPartyInvite& CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWB_PartyInvite_C* CallFunc_Create_ReturnValue, class UWB_OutgoingPartyInvite_C* CallFunc_Create_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, const class FString& K2Node_CustomEvent_PartyInviteId_2, const class FString& K2Node_CustomEvent_Username_1, int64 K2Node_CustomEvent_InviteExpiresAt, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, const struct FIncomingPartyInvite& K2Node_MakeStruct_IncomingPartyInvite, class UWB_PartyInvite_C* CallFunc_Create_ReturnValue_2, class UPanelSlot* CallFunc_AddChild_ReturnValue_2, const class FString& K2Node_CustomEvent_PartyInviteId_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UWidget* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, class UWB_OutgoingPartyInvite_C* K2Node_DynamicCast_AsWB_Outgoing_Party_Invite, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_Less_IntInt_ReturnValue_2, class UWB_PartyInvite_C* K2Node_DynamicCast_AsWB_Party_Invite_1, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_EqualEqual_StrStr_ReturnValue, class UAGPartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, class UAGPartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UAGPartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_3, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UWidget* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_3, class UWB_OutgoingPartyInvite_C* K2Node_DynamicCast_AsWB_Outgoing_Party_Invite_1, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_Less_IntInt_ReturnValue_3, const class FString& K2Node_CustomEvent_PartyInviteId, const class FString& K2Node_CustomEvent_UserId, const class FString& K2Node_CustomEvent_Username, bool CallFunc_EqualEqual_StrStr_ReturnValue_2, int32 CallFunc_GetChildrenCount_ReturnValue, class UAGPartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_4, bool K2Node_CustomEvent_Success_2, const class FString& K2Node_CustomEvent_Response_1, const struct FPartyError& K2Node_CustomEvent_Error_2, const struct FOutgoingPartyInvite& K2Node_CustomEvent_OutgoingInvite, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UAGPartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_5, class UAGPartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_6, bool K2Node_CustomEvent_Success_1, const class FString& K2Node_CustomEvent_Response, const struct FPartyError& K2Node_CustomEvent_Error_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UAGPartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_7, bool K2Node_CustomEvent_Success, const struct FPartyError& K2Node_CustomEvent_Error, const struct FCurrentParty& K2Node_CustomEvent_CurrentParty, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class UAGPartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_8, int32 CallFunc_GetChildrenCount_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue);
	void Party_WeHaveSomething__DelegateSignature(int32 Quantity);
};

}


