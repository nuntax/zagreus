#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x278 - 0x230)
// WidgetBlueprintGeneratedClass WB_FriendRequestsList.WB_FriendRequestsList_C
class UWB_FriendRequestsList_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UScrollBox*                            VB_FriendRequest;                                  // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         IncomingRequestsSucceeded;                         // 0x240(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         OutgoingRequestsSucceeded;                         // 0x241(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_48D[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastInlineDelegateProperty_            WeHaveSomething;                                   // 0x248(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastInlineDelegateProperty_            WeHaveNothing;                                     // 0x258(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastInlineDelegateProperty_            UpdateFriendsList;                                 // 0x268(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWB_FriendRequestsList_C* GetDefaultObj();

	void Load_Requests();
	void Construct();
	void OnGetIncomingFriendRequests(bool Success, const class FString& Response, struct FAGFriendError& Error, TArray<struct FAGPendingFriendRequest>& FriendRequests);
	void OnGetOutgoingFriendRequests(bool Success, const class FString& Response, struct FAGFriendError& Error, TArray<struct FAGPendingFriendRequest>& FriendRequests);
	void OnFriendRequestReceivedWs(const class FString& RequestId, const class FString& Username);
	void AcceptFriend();
	void OnSendFriendRequest(bool Success, const class FString& Response, const struct FAGFriendError& Error);
	void OnOutgoingFriendRequestAcceptedWs(const class FString& RequestId);
	void OnAcceptFriendRequest(bool Success, const class FString& Response, const struct FAGFriendError& Error);
	void UpdateFriendNotifications();
	void OnCancelOutgoingFriendshipRequest(bool Success, const class FString& Response, const struct FAGFriendError& Error);
	void OnIncomingFriendRequestCancelledWs(const class FString& RequestId);
	void RemoveFriendRequests();
	void ExecuteUbergraph_WB_FriendRequestsList(int32 EntryPoint, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_CustomEvent_Success_4, const class FString& K2Node_CustomEvent_Response_4, const struct FAGFriendError& K2Node_CustomEvent_Error_4, TArray<struct FAGPendingFriendRequest>& K2Node_CustomEvent_FriendRequests_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_CustomEvent_Success_3, const class FString& K2Node_CustomEvent_Response_3, const struct FAGFriendError& K2Node_CustomEvent_Error_3, TArray<struct FAGPendingFriendRequest>& K2Node_CustomEvent_FriendRequests, const struct FAGPendingFriendRequest& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWB_IncomingRequest_C* CallFunc_Create_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class UPanelSlot* CallFunc_AddChild_ReturnValue, const struct FAGPendingFriendRequest& CallFunc_Array_Get_Item_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class UWB_OutgoingRequest_C* CallFunc_Create_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, class UFriendsLibrary* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, const class FString& K2Node_CustomEvent_RequestId_2, const class FString& K2Node_CustomEvent_Username, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FAGPendingFriendRequest& K2Node_MakeStruct_AGPendingFriendRequest, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, class UWB_IncomingRequest_C* CallFunc_Create_ReturnValue_2, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue_2, class UFriendsLibrary* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool K2Node_CustomEvent_Success_2, const class FString& K2Node_CustomEvent_Response_2, const struct FAGFriendError& K2Node_CustomEvent_Error_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const class FString& K2Node_CustomEvent_RequestId_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool K2Node_CustomEvent_Success_1, const class FString& K2Node_CustomEvent_Response_1, const struct FAGFriendError& K2Node_CustomEvent_Error_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, int32 CallFunc_GetChildrenCount_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, bool K2Node_CustomEvent_Success, const class FString& K2Node_CustomEvent_Response, const struct FAGFriendError& K2Node_CustomEvent_Error, const class FString& K2Node_CustomEvent_RequestId, int32 CallFunc_GetChildrenCount_ReturnValue_1, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UWB_IncomingRequest_C* K2Node_DynamicCast_AsWB_Incoming_Request, bool K2Node_DynamicCast_bSuccess);
	void UpdateFriendsList__DelegateSignature();
	void WeHaveNothing__DelegateSignature();
	void WeHaveSomething__DelegateSignature(int32 Quantity);
};

}


