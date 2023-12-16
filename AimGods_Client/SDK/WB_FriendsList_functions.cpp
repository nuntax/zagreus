#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_FriendsList.WB_FriendsList_C
// (None)

class UClass* UWB_FriendsList_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_FriendsList_C");

	return Clss;
}


// WB_FriendsList_C WB_FriendsList.Default__WB_FriendsList_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_FriendsList_C* UWB_FriendsList_C::GetDefaultObj()
{
	static class UWB_FriendsList_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_FriendsList_C*>(UWB_FriendsList_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_FriendsList.WB_FriendsList_C.OnGetFriendsList
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Response                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FAGFriendError              Error                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FAGFriend>           Friends                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UWB_FriendsList_C::OnGetFriendsList(bool Success, const class FString& Response, struct FAGFriendError& Error, TArray<struct FAGFriend>& Friends)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_FriendsList_C", "OnGetFriendsList");

	Params::UWB_FriendsList_C_OnGetFriendsList_Params Parms{};

	Parms.Success = Success;
	Parms.Response = Response;
	Parms.Error = Error;
	Parms.Friends = Friends;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_FriendsList.WB_FriendsList_C.Load Friends
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_FriendsList_C::Load_Friends()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_FriendsList_C", "Load Friends");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_FriendsList.WB_FriendsList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWB_FriendsList_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_FriendsList_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_FriendsList.WB_FriendsList_C.OnFriendOnlineStatusChangedWs
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      PlayerId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               IsOnline                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_FriendsList_C::OnFriendOnlineStatusChangedWs(const class FString& PlayerId, bool IsOnline)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_FriendsList_C", "OnFriendOnlineStatusChangedWs");

	Params::UWB_FriendsList_C_OnFriendOnlineStatusChangedWs_Params Parms{};

	Parms.PlayerId = PlayerId;
	Parms.IsOnline = IsOnline;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_FriendsList.WB_FriendsList_C.OnRemoveFriend
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Response                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FAGFriendError              Error                                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UWB_FriendsList_C::OnRemoveFriend(bool Success, const class FString& Response, const struct FAGFriendError& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_FriendsList_C", "OnRemoveFriend");

	Params::UWB_FriendsList_C_OnRemoveFriend_Params Parms{};

	Parms.Success = Success;
	Parms.Response = Response;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_FriendsList.WB_FriendsList_C.OnAcceptFriendRequest
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Response                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FAGFriendError              Error                                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UWB_FriendsList_C::OnAcceptFriendRequest(bool Success, const class FString& Response, const struct FAGFriendError& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_FriendsList_C", "OnAcceptFriendRequest");

	Params::UWB_FriendsList_C_OnAcceptFriendRequest_Params Parms{};

	Parms.Success = Success;
	Parms.Response = Response;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_FriendsList.WB_FriendsList_C.OnOutgoingFriendRequestAcceptedWs
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      RequestId                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWB_FriendsList_C::OnOutgoingFriendRequestAcceptedWs(const class FString& RequestId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_FriendsList_C", "OnOutgoingFriendRequestAcceptedWs");

	Params::UWB_FriendsList_C_OnOutgoingFriendRequestAcceptedWs_Params Parms{};

	Parms.RequestId = RequestId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_FriendsList.WB_FriendsList_C.OnPlayerUnfriendedYou
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Username                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWB_FriendsList_C::OnPlayerUnfriendedYou(const class FString& Username)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_FriendsList_C", "OnPlayerUnfriendedYou");

	Params::UWB_FriendsList_C_OnPlayerUnfriendedYou_Params Parms{};

	Parms.Username = Username;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_FriendsList.WB_FriendsList_C.OnBlockPlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Response                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FAGFriendError              Error                                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UWB_FriendsList_C::OnBlockPlayer(bool Success, const class FString& Response, const struct FAGFriendError& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_FriendsList_C", "OnBlockPlayer");

	Params::UWB_FriendsList_C_OnBlockPlayer_Params Parms{};

	Parms.Success = Success;
	Parms.Response = Response;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_FriendsList.WB_FriendsList_C.OnGetBlockedPlayers
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Response                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FAGFriendError              Error                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FAGFriend>           Friends                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UWB_FriendsList_C::OnGetBlockedPlayers(bool Success, const class FString& Response, struct FAGFriendError& Error, TArray<struct FAGFriend>& Friends)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_FriendsList_C", "OnGetBlockedPlayers");

	Params::UWB_FriendsList_C_OnGetBlockedPlayers_Params Parms{};

	Parms.Success = Success;
	Parms.Response = Response;
	Parms.Error = Error;
	Parms.Friends = Friends;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_FriendsList.WB_FriendsList_C.OnUnblockPlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Response                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FAGFriendError              Error                                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UWB_FriendsList_C::OnUnblockPlayer(bool Success, const class FString& Response, const struct FAGFriendError& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_FriendsList_C", "OnUnblockPlayer");

	Params::UWB_FriendsList_C_OnUnblockPlayer_Params Parms{};

	Parms.Success = Success;
	Parms.Response = Response;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_FriendsList.WB_FriendsList_C.ExecuteUbergraph_WB_FriendsList
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFriendsLibrary*             CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Success_5                                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_CustomEvent_Response_5                                    (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// struct FAGFriendError              K2Node_CustomEvent_Error_5                                       (ConstParm)
// TArray<struct FAGFriend>           K2Node_CustomEvent_Friends_1                                     (ConstParm, ZeroConstructor, ReferenceParm)
// struct FAGFriend                   CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_FriendRow_C*             CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue_1                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFriendsLibrary*             CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_PlayerId                                      (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsOnline                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFriendsLibrary*             CallFunc_GetGameInstanceSubsystem_ReturnValue_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFriendsLibrary*             CallFunc_GetGameInstanceSubsystem_ReturnValue_3                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UFriendsLibrary*             CallFunc_GetGameInstanceSubsystem_ReturnValue_4                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Success_4                                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_CustomEvent_Response_4                                    (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// struct FAGFriendError              K2Node_CustomEvent_Error_4                                       (None)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// bool                               K2Node_CustomEvent_Success_3                                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_CustomEvent_Response_3                                    (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// struct FAGFriendError              K2Node_CustomEvent_Error_3                                       (None)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class FString                      K2Node_CustomEvent_RequestId                                     (ZeroConstructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// class FString                      K2Node_CustomEvent_Username                                      (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// class UFriendsLibrary*             CallFunc_GetGameInstanceSubsystem_ReturnValue_5                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFriendsLibrary*             CallFunc_GetGameInstanceSubsystem_ReturnValue_6                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFriendsLibrary*             CallFunc_GetGameInstanceSubsystem_ReturnValue_7                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_NotificationItem_C*      CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Success_2                                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_CustomEvent_Response_2                                    (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// struct FAGFriendError              K2Node_CustomEvent_Error_2                                       (None)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// class UFriendsLibrary*             CallFunc_GetGameInstanceSubsystem_ReturnValue_8                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Success_1                                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_CustomEvent_Response_1                                    (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// struct FAGFriendError              K2Node_CustomEvent_Error_1                                       (ConstParm)
// TArray<struct FAGFriend>           K2Node_CustomEvent_Friends                                       (ConstParm, ZeroConstructor, ReferenceParm)
// struct FAGFriend                   CallFunc_Array_Get_Item_1                                        (None)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_FriendRow_C*             CallFunc_Create_ReturnValue_2                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFriendsLibrary*             CallFunc_GetGameInstanceSubsystem_ReturnValue_9                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue_2                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFriendsLibrary*             CallFunc_GetGameInstanceSubsystem_ReturnValue_10                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFriendsLibrary*             CallFunc_GetGameInstanceSubsystem_ReturnValue_11                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFriendsLibrary*             CallFunc_GetGameInstanceSubsystem_ReturnValue_12                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFriendsLibrary*             CallFunc_GetGameInstanceSubsystem_ReturnValue_13                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFriendsLibrary*             CallFunc_GetGameInstanceSubsystem_ReturnValue_14                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Success                                       (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_CustomEvent_Response                                      (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// struct FAGFriendError              K2Node_CustomEvent_Error                                         (None)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)

void UWB_FriendsList_C::ExecuteUbergraph_WB_FriendsList(int32 EntryPoint, class UFriendsLibrary* CallFunc_GetGameInstanceSubsystem_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, bool K2Node_CustomEvent_Success_5, const class FString& K2Node_CustomEvent_Response_5, const struct FAGFriendError& K2Node_CustomEvent_Error_5, TArray<struct FAGFriend>& K2Node_CustomEvent_Friends_1, const struct FAGFriend& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWB_FriendRow_C* CallFunc_Create_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_1, class UFriendsLibrary* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, const class FString& K2Node_CustomEvent_PlayerId, bool K2Node_CustomEvent_IsOnline, class UFriendsLibrary* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, class UFriendsLibrary* CallFunc_GetGameInstanceSubsystem_ReturnValue_3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UFriendsLibrary* CallFunc_GetGameInstanceSubsystem_ReturnValue_4, bool K2Node_CustomEvent_Success_4, const class FString& K2Node_CustomEvent_Response_4, const struct FAGFriendError& K2Node_CustomEvent_Error_4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool K2Node_CustomEvent_Success_3, const class FString& K2Node_CustomEvent_Response_3, const struct FAGFriendError& K2Node_CustomEvent_Error_3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const class FString& K2Node_CustomEvent_RequestId, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const class FString& K2Node_CustomEvent_Username, const class FString& CallFunc_Concat_StrStr_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UFriendsLibrary* CallFunc_GetGameInstanceSubsystem_ReturnValue_5, class UFriendsLibrary* CallFunc_GetGameInstanceSubsystem_ReturnValue_6, class UFriendsLibrary* CallFunc_GetGameInstanceSubsystem_ReturnValue_7, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class UWB_NotificationItem_C* CallFunc_Create_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool K2Node_CustomEvent_Success_2, const class FString& K2Node_CustomEvent_Response_2, const struct FAGFriendError& K2Node_CustomEvent_Error_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class UFriendsLibrary* CallFunc_GetGameInstanceSubsystem_ReturnValue_8, bool K2Node_CustomEvent_Success_1, const class FString& K2Node_CustomEvent_Response_1, const struct FAGFriendError& K2Node_CustomEvent_Error_1, TArray<struct FAGFriend>& K2Node_CustomEvent_Friends, const struct FAGFriend& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, class UWB_FriendRow_C* CallFunc_Create_ReturnValue_2, class UFriendsLibrary* CallFunc_GetGameInstanceSubsystem_ReturnValue_9, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_2, class UFriendsLibrary* CallFunc_GetGameInstanceSubsystem_ReturnValue_10, class UFriendsLibrary* CallFunc_GetGameInstanceSubsystem_ReturnValue_11, class UFriendsLibrary* CallFunc_GetGameInstanceSubsystem_ReturnValue_12, class UFriendsLibrary* CallFunc_GetGameInstanceSubsystem_ReturnValue_13, class UFriendsLibrary* CallFunc_GetGameInstanceSubsystem_ReturnValue_14, bool K2Node_CustomEvent_Success, const class FString& K2Node_CustomEvent_Response, const struct FAGFriendError& K2Node_CustomEvent_Error, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_FriendsList_C", "ExecuteUbergraph_WB_FriendsList");

	Params::UWB_FriendsList_C_ExecuteUbergraph_WB_FriendsList_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.K2Node_CustomEvent_Success_5 = K2Node_CustomEvent_Success_5;
	Parms.K2Node_CustomEvent_Response_5 = K2Node_CustomEvent_Response_5;
	Parms.K2Node_CustomEvent_Error_5 = K2Node_CustomEvent_Error_5;
	Parms.K2Node_CustomEvent_Friends_1 = K2Node_CustomEvent_Friends_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue_1 = CallFunc_AddChildToVerticalBox_ReturnValue_1;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
	Parms.K2Node_CustomEvent_PlayerId = K2Node_CustomEvent_PlayerId;
	Parms.K2Node_CustomEvent_IsOnline = K2Node_CustomEvent_IsOnline;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_2 = CallFunc_GetGameInstanceSubsystem_ReturnValue_2;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_3 = CallFunc_GetGameInstanceSubsystem_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_4 = CallFunc_GetGameInstanceSubsystem_ReturnValue_4;
	Parms.K2Node_CustomEvent_Success_4 = K2Node_CustomEvent_Success_4;
	Parms.K2Node_CustomEvent_Response_4 = K2Node_CustomEvent_Response_4;
	Parms.K2Node_CustomEvent_Error_4 = K2Node_CustomEvent_Error_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_Success_3 = K2Node_CustomEvent_Success_3;
	Parms.K2Node_CustomEvent_Response_3 = K2Node_CustomEvent_Response_3;
	Parms.K2Node_CustomEvent_Error_3 = K2Node_CustomEvent_Error_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CustomEvent_RequestId = K2Node_CustomEvent_RequestId;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CustomEvent_Username = K2Node_CustomEvent_Username;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_5 = CallFunc_GetGameInstanceSubsystem_ReturnValue_5;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_6 = CallFunc_GetGameInstanceSubsystem_ReturnValue_6;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_7 = CallFunc_GetGameInstanceSubsystem_ReturnValue_7;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_1 = CallFunc_GetOwningPlayer_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.K2Node_CustomEvent_Success_2 = K2Node_CustomEvent_Success_2;
	Parms.K2Node_CustomEvent_Response_2 = K2Node_CustomEvent_Response_2;
	Parms.K2Node_CustomEvent_Error_2 = K2Node_CustomEvent_Error_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_8 = CallFunc_GetGameInstanceSubsystem_ReturnValue_8;
	Parms.K2Node_CustomEvent_Success_1 = K2Node_CustomEvent_Success_1;
	Parms.K2Node_CustomEvent_Response_1 = K2Node_CustomEvent_Response_1;
	Parms.K2Node_CustomEvent_Error_1 = K2Node_CustomEvent_Error_1;
	Parms.K2Node_CustomEvent_Friends = K2Node_CustomEvent_Friends;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_2 = CallFunc_GetOwningPlayer_ReturnValue_2;
	Parms.CallFunc_Create_ReturnValue_2 = CallFunc_Create_ReturnValue_2;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_9 = CallFunc_GetGameInstanceSubsystem_ReturnValue_9;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue_2 = CallFunc_AddChildToVerticalBox_ReturnValue_2;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_10 = CallFunc_GetGameInstanceSubsystem_ReturnValue_10;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_11 = CallFunc_GetGameInstanceSubsystem_ReturnValue_11;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_12 = CallFunc_GetGameInstanceSubsystem_ReturnValue_12;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_13 = CallFunc_GetGameInstanceSubsystem_ReturnValue_13;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_14 = CallFunc_GetGameInstanceSubsystem_ReturnValue_14;
	Parms.K2Node_CustomEvent_Success = K2Node_CustomEvent_Success;
	Parms.K2Node_CustomEvent_Response = K2Node_CustomEvent_Response;
	Parms.K2Node_CustomEvent_Error = K2Node_CustomEvent_Error;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;

	UObject::ProcessEvent(Func, &Parms);

}

}


