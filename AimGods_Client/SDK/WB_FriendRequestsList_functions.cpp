#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_FriendRequestsList.WB_FriendRequestsList_C
// (None)

class UClass* UWB_FriendRequestsList_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_FriendRequestsList_C");

	return Clss;
}


// WB_FriendRequestsList_C WB_FriendRequestsList.Default__WB_FriendRequestsList_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_FriendRequestsList_C* UWB_FriendRequestsList_C::GetDefaultObj()
{
	static class UWB_FriendRequestsList_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_FriendRequestsList_C*>(UWB_FriendRequestsList_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_FriendRequestsList.WB_FriendRequestsList_C.Load Requests
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_FriendRequestsList_C::Load_Requests()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_FriendRequestsList_C", "Load Requests");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_FriendRequestsList.WB_FriendRequestsList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWB_FriendRequestsList_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_FriendRequestsList_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_FriendRequestsList.WB_FriendRequestsList_C.OnGetIncomingFriendRequests
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Response                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FAGFriendError              Error                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FAGPendingFriendRequest>FriendRequests                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UWB_FriendRequestsList_C::OnGetIncomingFriendRequests(bool Success, const class FString& Response, struct FAGFriendError& Error, TArray<struct FAGPendingFriendRequest>& FriendRequests)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_FriendRequestsList_C", "OnGetIncomingFriendRequests");

	Params::UWB_FriendRequestsList_C_OnGetIncomingFriendRequests_Params Parms{};

	Parms.Success = Success;
	Parms.Response = Response;
	Parms.Error = Error;
	Parms.FriendRequests = FriendRequests;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_FriendRequestsList.WB_FriendRequestsList_C.OnGetOutgoingFriendRequests
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Response                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FAGFriendError              Error                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FAGPendingFriendRequest>FriendRequests                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UWB_FriendRequestsList_C::OnGetOutgoingFriendRequests(bool Success, const class FString& Response, struct FAGFriendError& Error, TArray<struct FAGPendingFriendRequest>& FriendRequests)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_FriendRequestsList_C", "OnGetOutgoingFriendRequests");

	Params::UWB_FriendRequestsList_C_OnGetOutgoingFriendRequests_Params Parms{};

	Parms.Success = Success;
	Parms.Response = Response;
	Parms.Error = Error;
	Parms.FriendRequests = FriendRequests;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_FriendRequestsList.WB_FriendRequestsList_C.OnFriendRequestReceivedWs
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      RequestId                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Username                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWB_FriendRequestsList_C::OnFriendRequestReceivedWs(const class FString& RequestId, const class FString& Username)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_FriendRequestsList_C", "OnFriendRequestReceivedWs");

	Params::UWB_FriendRequestsList_C_OnFriendRequestReceivedWs_Params Parms{};

	Parms.RequestId = RequestId;
	Parms.Username = Username;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_FriendRequestsList.WB_FriendRequestsList_C.AcceptFriend
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_FriendRequestsList_C::AcceptFriend()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_FriendRequestsList_C", "AcceptFriend");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_FriendRequestsList.WB_FriendRequestsList_C.OnSendFriendRequest
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Response                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FAGFriendError              Error                                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UWB_FriendRequestsList_C::OnSendFriendRequest(bool Success, const class FString& Response, const struct FAGFriendError& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_FriendRequestsList_C", "OnSendFriendRequest");

	Params::UWB_FriendRequestsList_C_OnSendFriendRequest_Params Parms{};

	Parms.Success = Success;
	Parms.Response = Response;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_FriendRequestsList.WB_FriendRequestsList_C.OnOutgoingFriendRequestAcceptedWs
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      RequestId                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWB_FriendRequestsList_C::OnOutgoingFriendRequestAcceptedWs(const class FString& RequestId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_FriendRequestsList_C", "OnOutgoingFriendRequestAcceptedWs");

	Params::UWB_FriendRequestsList_C_OnOutgoingFriendRequestAcceptedWs_Params Parms{};

	Parms.RequestId = RequestId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_FriendRequestsList.WB_FriendRequestsList_C.OnAcceptFriendRequest
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Response                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FAGFriendError              Error                                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UWB_FriendRequestsList_C::OnAcceptFriendRequest(bool Success, const class FString& Response, const struct FAGFriendError& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_FriendRequestsList_C", "OnAcceptFriendRequest");

	Params::UWB_FriendRequestsList_C_OnAcceptFriendRequest_Params Parms{};

	Parms.Success = Success;
	Parms.Response = Response;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_FriendRequestsList.WB_FriendRequestsList_C.UpdateFriendNotifications
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_FriendRequestsList_C::UpdateFriendNotifications()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_FriendRequestsList_C", "UpdateFriendNotifications");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_FriendRequestsList.WB_FriendRequestsList_C.OnCancelOutgoingFriendshipRequest
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Response                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FAGFriendError              Error                                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UWB_FriendRequestsList_C::OnCancelOutgoingFriendshipRequest(bool Success, const class FString& Response, const struct FAGFriendError& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_FriendRequestsList_C", "OnCancelOutgoingFriendshipRequest");

	Params::UWB_FriendRequestsList_C_OnCancelOutgoingFriendshipRequest_Params Parms{};

	Parms.Success = Success;
	Parms.Response = Response;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_FriendRequestsList.WB_FriendRequestsList_C.OnIncomingFriendRequestCancelledWs
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      RequestId                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWB_FriendRequestsList_C::OnIncomingFriendRequestCancelledWs(const class FString& RequestId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_FriendRequestsList_C", "OnIncomingFriendRequestCancelledWs");

	Params::UWB_FriendRequestsList_C_OnIncomingFriendRequestCancelledWs_Params Parms{};

	Parms.RequestId = RequestId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_FriendRequestsList.WB_FriendRequestsList_C.RemoveFriendRequests
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_FriendRequestsList_C::RemoveFriendRequests()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_FriendRequestsList_C", "RemoveFriendRequests");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_FriendRequestsList.WB_FriendRequestsList_C.ExecuteUbergraph_WB_FriendRequestsList
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Success_4                                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_CustomEvent_Response_4                                    (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// struct FAGFriendError              K2Node_CustomEvent_Error_4                                       (ConstParm)
// TArray<struct FAGPendingFriendRequest>K2Node_CustomEvent_FriendRequests_1                              (ConstParm, ZeroConstructor, ReferenceParm)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               K2Node_CustomEvent_Success_3                                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_CustomEvent_Response_3                                    (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// struct FAGFriendError              K2Node_CustomEvent_Error_3                                       (ConstParm)
// TArray<struct FAGPendingFriendRequest>K2Node_CustomEvent_FriendRequests                                (ConstParm, ZeroConstructor, ReferenceParm)
// struct FAGPendingFriendRequest     CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_IncomingRequest_C*       CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAGPendingFriendRequest     CallFunc_Array_Get_Item_1                                        (None)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_OutgoingRequest_C*       CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFriendsLibrary*             CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_RequestId_2                                   (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_Username                                      (ZeroConstructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// struct FAGPendingFriendRequest     K2Node_MakeStruct_AGPendingFriendRequest                         (None)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_IncomingRequest_C*       CallFunc_Create_ReturnValue_2                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue_1                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue_2                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFriendsLibrary*             CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// bool                               K2Node_CustomEvent_Success_2                                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_CustomEvent_Response_2                                    (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// struct FAGFriendError              K2Node_CustomEvent_Error_2                                       (None)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// class FString                      K2Node_CustomEvent_RequestId_1                                   (ZeroConstructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// bool                               K2Node_CustomEvent_Success_1                                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_CustomEvent_Response_1                                    (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// struct FAGFriendError              K2Node_CustomEvent_Error_1                                       (None)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// bool                               K2Node_CustomEvent_Success                                       (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_CustomEvent_Response                                      (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// struct FAGFriendError              K2Node_CustomEvent_Error                                         (None)
// class FString                      K2Node_CustomEvent_RequestId                                     (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWB_IncomingRequest_C*       K2Node_DynamicCast_AsWB_Incoming_Request                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_FriendRequestsList_C::ExecuteUbergraph_WB_FriendRequestsList(int32 EntryPoint, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_CustomEvent_Success_4, const class FString& K2Node_CustomEvent_Response_4, const struct FAGFriendError& K2Node_CustomEvent_Error_4, TArray<struct FAGPendingFriendRequest>& K2Node_CustomEvent_FriendRequests_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_CustomEvent_Success_3, const class FString& K2Node_CustomEvent_Response_3, const struct FAGFriendError& K2Node_CustomEvent_Error_3, TArray<struct FAGPendingFriendRequest>& K2Node_CustomEvent_FriendRequests, const struct FAGPendingFriendRequest& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWB_IncomingRequest_C* CallFunc_Create_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class UPanelSlot* CallFunc_AddChild_ReturnValue, const struct FAGPendingFriendRequest& CallFunc_Array_Get_Item_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class UWB_OutgoingRequest_C* CallFunc_Create_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, class UFriendsLibrary* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, const class FString& K2Node_CustomEvent_RequestId_2, const class FString& K2Node_CustomEvent_Username, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FAGPendingFriendRequest& K2Node_MakeStruct_AGPendingFriendRequest, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, class UWB_IncomingRequest_C* CallFunc_Create_ReturnValue_2, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue_2, class UFriendsLibrary* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool K2Node_CustomEvent_Success_2, const class FString& K2Node_CustomEvent_Response_2, const struct FAGFriendError& K2Node_CustomEvent_Error_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const class FString& K2Node_CustomEvent_RequestId_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool K2Node_CustomEvent_Success_1, const class FString& K2Node_CustomEvent_Response_1, const struct FAGFriendError& K2Node_CustomEvent_Error_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, int32 CallFunc_GetChildrenCount_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, bool K2Node_CustomEvent_Success, const class FString& K2Node_CustomEvent_Response, const struct FAGFriendError& K2Node_CustomEvent_Error, const class FString& K2Node_CustomEvent_RequestId, int32 CallFunc_GetChildrenCount_ReturnValue_1, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UWB_IncomingRequest_C* K2Node_DynamicCast_AsWB_Incoming_Request, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_FriendRequestsList_C", "ExecuteUbergraph_WB_FriendRequestsList");

	Params::UWB_FriendRequestsList_C_ExecuteUbergraph_WB_FriendRequestsList_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_Success_4 = K2Node_CustomEvent_Success_4;
	Parms.K2Node_CustomEvent_Response_4 = K2Node_CustomEvent_Response_4;
	Parms.K2Node_CustomEvent_Error_4 = K2Node_CustomEvent_Error_4;
	Parms.K2Node_CustomEvent_FriendRequests_1 = K2Node_CustomEvent_FriendRequests_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_Success_3 = K2Node_CustomEvent_Success_3;
	Parms.K2Node_CustomEvent_Response_3 = K2Node_CustomEvent_Response_3;
	Parms.K2Node_CustomEvent_Error_3 = K2Node_CustomEvent_Error_3;
	Parms.K2Node_CustomEvent_FriendRequests = K2Node_CustomEvent_FriendRequests;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_1 = CallFunc_GetOwningPlayer_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.K2Node_CustomEvent_RequestId_2 = K2Node_CustomEvent_RequestId_2;
	Parms.K2Node_CustomEvent_Username = K2Node_CustomEvent_Username;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_MakeStruct_AGPendingFriendRequest = K2Node_MakeStruct_AGPendingFriendRequest;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_2 = CallFunc_GetOwningPlayer_ReturnValue_2;
	Parms.CallFunc_Create_ReturnValue_2 = CallFunc_Create_ReturnValue_2;
	Parms.CallFunc_AddChild_ReturnValue_1 = CallFunc_AddChild_ReturnValue_1;
	Parms.CallFunc_AddChild_ReturnValue_2 = CallFunc_AddChild_ReturnValue_2;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CustomEvent_Success_2 = K2Node_CustomEvent_Success_2;
	Parms.K2Node_CustomEvent_Response_2 = K2Node_CustomEvent_Response_2;
	Parms.K2Node_CustomEvent_Error_2 = K2Node_CustomEvent_Error_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CustomEvent_RequestId_1 = K2Node_CustomEvent_RequestId_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CustomEvent_Success_1 = K2Node_CustomEvent_Success_1;
	Parms.K2Node_CustomEvent_Response_1 = K2Node_CustomEvent_Response_1;
	Parms.K2Node_CustomEvent_Error_1 = K2Node_CustomEvent_Error_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_CustomEvent_Success = K2Node_CustomEvent_Success;
	Parms.K2Node_CustomEvent_Response = K2Node_CustomEvent_Response;
	Parms.K2Node_CustomEvent_Error = K2Node_CustomEvent_Error;
	Parms.K2Node_CustomEvent_RequestId = K2Node_CustomEvent_RequestId;
	Parms.CallFunc_GetChildrenCount_ReturnValue_1 = CallFunc_GetChildrenCount_ReturnValue_1;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsWB_Incoming_Request = K2Node_DynamicCast_AsWB_Incoming_Request;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_FriendRequestsList.WB_FriendRequestsList_C.UpdateFriendsList__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_FriendRequestsList_C::UpdateFriendsList__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_FriendRequestsList_C", "UpdateFriendsList__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_FriendRequestsList.WB_FriendRequestsList_C.WeHaveNothing__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_FriendRequestsList_C::WeHaveNothing__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_FriendRequestsList_C", "WeHaveNothing__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_FriendRequestsList.WB_FriendRequestsList_C.WeHaveSomething__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Quantity                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_FriendRequestsList_C::WeHaveSomething__DelegateSignature(int32 Quantity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_FriendRequestsList_C", "WeHaveSomething__DelegateSignature");

	Params::UWB_FriendRequestsList_C_WeHaveSomething__DelegateSignature_Params Parms{};

	Parms.Quantity = Quantity;

	UObject::ProcessEvent(Func, &Parms);

}

}


