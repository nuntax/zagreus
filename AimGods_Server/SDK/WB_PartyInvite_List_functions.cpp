#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_PartyInvite_List.WB_PartyInvite_List_C
// (None)

class UClass* UWB_PartyInvite_List_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_PartyInvite_List_C");

	return Clss;
}


// WB_PartyInvite_List_C WB_PartyInvite_List.Default__WB_PartyInvite_List_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_PartyInvite_List_C* UWB_PartyInvite_List_C::GetDefaultObj()
{
	static class UWB_PartyInvite_List_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_PartyInvite_List_C*>(UWB_PartyInvite_List_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_PartyInvite_List.WB_PartyInvite_List_C.Load Requests
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_PartyInvite_List_C::Load_Requests()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PartyInvite_List_C", "Load Requests");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_PartyInvite_List.WB_PartyInvite_List_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWB_PartyInvite_List_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PartyInvite_List_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_PartyInvite_List.WB_PartyInvite_List_C.OnGetPartyInvites
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Response                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FPartyError                 Error                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FPartyInvites               Invites                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWB_PartyInvite_List_C::OnGetPartyInvites(bool Success, const class FString& Response, struct FPartyError& Error, struct FPartyInvites& Invites)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PartyInvite_List_C", "OnGetPartyInvites");

	Params::UWB_PartyInvite_List_C_OnGetPartyInvites_Params Parms{};

	Parms.Success = Success;
	Parms.Response = Response;
	Parms.Error = Error;
	Parms.Invites = Invites;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_PartyInvite_List.WB_PartyInvite_List_C.OnPartyInviteReceivedWs_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      PartyInviteId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Username                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int64                              InviteExpiresAt                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PartyInvite_List_C::OnPartyInviteReceivedWs_Event(const class FString& PartyInviteId, const class FString& Username, int64 InviteExpiresAt)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PartyInvite_List_C", "OnPartyInviteReceivedWs_Event");

	Params::UWB_PartyInvite_List_C_OnPartyInviteReceivedWs_Event_Params Parms{};

	Parms.PartyInviteId = PartyInviteId;
	Parms.Username = Username;
	Parms.InviteExpiresAt = InviteExpiresAt;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_PartyInvite_List.WB_PartyInvite_List_C.OnIncomingPartyInviteCancelledWs
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      PartyInviteId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWB_PartyInvite_List_C::OnIncomingPartyInviteCancelledWs(const class FString& PartyInviteId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PartyInvite_List_C", "OnIncomingPartyInviteCancelledWs");

	Params::UWB_PartyInvite_List_C_OnIncomingPartyInviteCancelledWs_Params Parms{};

	Parms.PartyInviteId = PartyInviteId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_PartyInvite_List.WB_PartyInvite_List_C.OnOutgoingPartyInviteAccepted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      PartyInviteId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      UserId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Username                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWB_PartyInvite_List_C::OnOutgoingPartyInviteAccepted(const class FString& PartyInviteId, const class FString& UserId, const class FString& Username)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PartyInvite_List_C", "OnOutgoingPartyInviteAccepted");

	Params::UWB_PartyInvite_List_C_OnOutgoingPartyInviteAccepted_Params Parms{};

	Parms.PartyInviteId = PartyInviteId;
	Parms.UserId = UserId;
	Parms.Username = Username;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_PartyInvite_List.WB_PartyInvite_List_C.UpdatePartyNotification
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_PartyInvite_List_C::UpdatePartyNotification()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PartyInvite_List_C", "UpdatePartyNotification");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_PartyInvite_List.WB_PartyInvite_List_C.OnSendPartyInvite
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Response                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FPartyError                 Error                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FOutgoingPartyInvite        OutgoingInvite                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWB_PartyInvite_List_C::OnSendPartyInvite(bool Success, const class FString& Response, struct FPartyError& Error, struct FOutgoingPartyInvite& OutgoingInvite)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PartyInvite_List_C", "OnSendPartyInvite");

	Params::UWB_PartyInvite_List_C_OnSendPartyInvite_Params Parms{};

	Parms.Success = Success;
	Parms.Response = Response;
	Parms.Error = Error;
	Parms.OutgoingInvite = OutgoingInvite;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_PartyInvite_List.WB_PartyInvite_List_C.OnCancelPartyInvite
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Response                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FPartyError                 Error                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWB_PartyInvite_List_C::OnCancelPartyInvite(bool Success, const class FString& Response, struct FPartyError& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PartyInvite_List_C", "OnCancelPartyInvite");

	Params::UWB_PartyInvite_List_C_OnCancelPartyInvite_Params Parms{};

	Parms.Success = Success;
	Parms.Response = Response;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_PartyInvite_List.WB_PartyInvite_List_C.OnAcceptPartyInvite
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPartyError                 Error                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FCurrentParty               CurrentParty                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWB_PartyInvite_List_C::OnAcceptPartyInvite(bool Success, struct FPartyError& Error, struct FCurrentParty& CurrentParty)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PartyInvite_List_C", "OnAcceptPartyInvite");

	Params::UWB_PartyInvite_List_C_OnAcceptPartyInvite_Params Parms{};

	Parms.Success = Success;
	Parms.Error = Error;
	Parms.CurrentParty = CurrentParty;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_PartyInvite_List.WB_PartyInvite_List_C.ClearOutPartyInvites
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_PartyInvite_List_C::ClearOutPartyInvites()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PartyInvite_List_C", "ClearOutPartyInvites");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_PartyInvite_List.WB_PartyInvite_List_C.ExecuteUbergraph_WB_PartyInvite_List
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAGPartySubsystem*           CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_PartyInvite_C*           K2Node_DynamicCast_AsWB_Party_Invite                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_AGGameInstance_C*        K2Node_DynamicCast_AsBP_AGGame_Instance                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Success_3                                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_CustomEvent_Response_2                                    (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// struct FPartyError                 K2Node_CustomEvent_Error_3                                       (ConstParm)
// struct FPartyInvites               K2Node_CustomEvent_Invites                                       (ConstParm)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOutgoingPartyInvite        CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIncomingPartyInvite        CallFunc_Array_Get_Item_1                                        (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_PartyInvite_C*           CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_OutgoingPartyInvite_C*   CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue_1                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_PartyInviteId_2                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_Username_1                                    (ZeroConstructor, HasGetValueTypeHash)
// int64                              K2Node_CustomEvent_InviteExpiresAt                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIncomingPartyInvite        K2Node_MakeStruct_IncomingPartyInvite                            (None)
// class UWB_PartyInvite_C*           CallFunc_Create_ReturnValue_2                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue_2                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_PartyInviteId_1                               (ZeroConstructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ZeroConstructor, ReferenceParm, ContainsInstancedReference)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UWidget*                     CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_OutgoingPartyInvite_C*   K2Node_DynamicCast_AsWB_Outgoing_Party_Invite                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWB_PartyInvite_C*           K2Node_DynamicCast_AsWB_Party_Invite_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAGPartySubsystem*           CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAGPartySubsystem*           CallFunc_GetGameInstanceSubsystem_ReturnValue_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class UAGPartySubsystem*           CallFunc_GetGameInstanceSubsystem_ReturnValue_3                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue_1                            (ZeroConstructor, ReferenceParm, ContainsInstancedReference)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class UWidget*                     CallFunc_Array_Get_Item_3                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_OutgoingPartyInvite_C*   K2Node_DynamicCast_AsWB_Outgoing_Party_Invite_1                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_CustomEvent_PartyInviteId                                 (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_UserId                                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_Username                                      (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAGPartySubsystem*           CallFunc_GetGameInstanceSubsystem_ReturnValue_4                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Success_2                                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_CustomEvent_Response_1                                    (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// struct FPartyError                 K2Node_CustomEvent_Error_2                                       (ConstParm)
// struct FOutgoingPartyInvite        K2Node_CustomEvent_OutgoingInvite                                (ConstParm)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// class UAGPartySubsystem*           CallFunc_GetGameInstanceSubsystem_ReturnValue_5                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAGPartySubsystem*           CallFunc_GetGameInstanceSubsystem_ReturnValue_6                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Success_1                                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_CustomEvent_Response                                      (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// struct FPartyError                 K2Node_CustomEvent_Error_1                                       (ConstParm)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// class UAGPartySubsystem*           CallFunc_GetGameInstanceSubsystem_ReturnValue_7                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Success                                       (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPartyError                 K2Node_CustomEvent_Error                                         (ConstParm)
// struct FCurrentParty               K2Node_CustomEvent_CurrentParty                                  (ConstParm)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// class UAGPartySubsystem*           CallFunc_GetGameInstanceSubsystem_ReturnValue_8                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_PartyInvite_List_C::ExecuteUbergraph_WB_PartyInvite_List(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Array_Index_Variable_2, class UAGPartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, int32 Temp_int_Variable, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWB_PartyInvite_C* K2Node_DynamicCast_AsWB_Party_Invite, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue_4, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_AGGameInstance_C* K2Node_DynamicCast_AsBP_AGGame_Instance, bool K2Node_DynamicCast_bSuccess_1, bool K2Node_CustomEvent_Success_3, const class FString& K2Node_CustomEvent_Response_2, const struct FPartyError& K2Node_CustomEvent_Error_3, const struct FPartyInvites& K2Node_CustomEvent_Invites, int32 Temp_int_Array_Index_Variable_3, const struct FOutgoingPartyInvite& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FIncomingPartyInvite& CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWB_PartyInvite_C* CallFunc_Create_ReturnValue, class UWB_OutgoingPartyInvite_C* CallFunc_Create_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, const class FString& K2Node_CustomEvent_PartyInviteId_2, const class FString& K2Node_CustomEvent_Username_1, int64 K2Node_CustomEvent_InviteExpiresAt, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, const struct FIncomingPartyInvite& K2Node_MakeStruct_IncomingPartyInvite, class UWB_PartyInvite_C* CallFunc_Create_ReturnValue_2, class UPanelSlot* CallFunc_AddChild_ReturnValue_2, const class FString& K2Node_CustomEvent_PartyInviteId_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UWidget* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, class UWB_OutgoingPartyInvite_C* K2Node_DynamicCast_AsWB_Outgoing_Party_Invite, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_Less_IntInt_ReturnValue_2, class UWB_PartyInvite_C* K2Node_DynamicCast_AsWB_Party_Invite_1, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_EqualEqual_StrStr_ReturnValue, class UAGPartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, class UAGPartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UAGPartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_3, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UWidget* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_3, class UWB_OutgoingPartyInvite_C* K2Node_DynamicCast_AsWB_Outgoing_Party_Invite_1, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_Less_IntInt_ReturnValue_3, const class FString& K2Node_CustomEvent_PartyInviteId, const class FString& K2Node_CustomEvent_UserId, const class FString& K2Node_CustomEvent_Username, bool CallFunc_EqualEqual_StrStr_ReturnValue_2, int32 CallFunc_GetChildrenCount_ReturnValue, class UAGPartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_4, bool K2Node_CustomEvent_Success_2, const class FString& K2Node_CustomEvent_Response_1, const struct FPartyError& K2Node_CustomEvent_Error_2, const struct FOutgoingPartyInvite& K2Node_CustomEvent_OutgoingInvite, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UAGPartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_5, class UAGPartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_6, bool K2Node_CustomEvent_Success_1, const class FString& K2Node_CustomEvent_Response, const struct FPartyError& K2Node_CustomEvent_Error_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UAGPartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_7, bool K2Node_CustomEvent_Success, const struct FPartyError& K2Node_CustomEvent_Error, const struct FCurrentParty& K2Node_CustomEvent_CurrentParty, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class UAGPartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_8, int32 CallFunc_GetChildrenCount_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PartyInvite_List_C", "ExecuteUbergraph_WB_PartyInvite_List");

	Params::UWB_PartyInvite_List_C_ExecuteUbergraph_WB_PartyInvite_List_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsWB_Party_Invite = K2Node_DynamicCast_AsWB_Party_Invite;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_AGGame_Instance = K2Node_DynamicCast_AsBP_AGGame_Instance;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CustomEvent_Success_3 = K2Node_CustomEvent_Success_3;
	Parms.K2Node_CustomEvent_Response_2 = K2Node_CustomEvent_Response_2;
	Parms.K2Node_CustomEvent_Error_3 = K2Node_CustomEvent_Error_3;
	Parms.K2Node_CustomEvent_Invites = K2Node_CustomEvent_Invites;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue_1 = CallFunc_AddChild_ReturnValue_1;
	Parms.K2Node_CustomEvent_PartyInviteId_2 = K2Node_CustomEvent_PartyInviteId_2;
	Parms.K2Node_CustomEvent_Username_1 = K2Node_CustomEvent_Username_1;
	Parms.K2Node_CustomEvent_InviteExpiresAt = K2Node_CustomEvent_InviteExpiresAt;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_1 = CallFunc_GetOwningPlayer_ReturnValue_1;
	Parms.K2Node_MakeStruct_IncomingPartyInvite = K2Node_MakeStruct_IncomingPartyInvite;
	Parms.CallFunc_Create_ReturnValue_2 = CallFunc_Create_ReturnValue_2;
	Parms.CallFunc_AddChild_ReturnValue_2 = CallFunc_AddChild_ReturnValue_2;
	Parms.K2Node_CustomEvent_PartyInviteId_1 = K2Node_CustomEvent_PartyInviteId_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsWB_Outgoing_Party_Invite = K2Node_DynamicCast_AsWB_Outgoing_Party_Invite;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsWB_Party_Invite_1 = K2Node_DynamicCast_AsWB_Party_Invite_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_1 = CallFunc_EqualEqual_StrStr_ReturnValue_1;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_2 = CallFunc_GetGameInstanceSubsystem_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_3 = CallFunc_GetGameInstanceSubsystem_ReturnValue_3;
	Parms.CallFunc_GetAllChildren_ReturnValue_1 = CallFunc_GetAllChildren_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsWB_Outgoing_Party_Invite_1 = K2Node_DynamicCast_AsWB_Outgoing_Party_Invite_1;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.K2Node_CustomEvent_PartyInviteId = K2Node_CustomEvent_PartyInviteId;
	Parms.K2Node_CustomEvent_UserId = K2Node_CustomEvent_UserId;
	Parms.K2Node_CustomEvent_Username = K2Node_CustomEvent_Username;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_2 = CallFunc_EqualEqual_StrStr_ReturnValue_2;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_4 = CallFunc_GetGameInstanceSubsystem_ReturnValue_4;
	Parms.K2Node_CustomEvent_Success_2 = K2Node_CustomEvent_Success_2;
	Parms.K2Node_CustomEvent_Response_1 = K2Node_CustomEvent_Response_1;
	Parms.K2Node_CustomEvent_Error_2 = K2Node_CustomEvent_Error_2;
	Parms.K2Node_CustomEvent_OutgoingInvite = K2Node_CustomEvent_OutgoingInvite;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_5 = CallFunc_GetGameInstanceSubsystem_ReturnValue_5;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_6 = CallFunc_GetGameInstanceSubsystem_ReturnValue_6;
	Parms.K2Node_CustomEvent_Success_1 = K2Node_CustomEvent_Success_1;
	Parms.K2Node_CustomEvent_Response = K2Node_CustomEvent_Response;
	Parms.K2Node_CustomEvent_Error_1 = K2Node_CustomEvent_Error_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_7 = CallFunc_GetGameInstanceSubsystem_ReturnValue_7;
	Parms.K2Node_CustomEvent_Success = K2Node_CustomEvent_Success;
	Parms.K2Node_CustomEvent_Error = K2Node_CustomEvent_Error;
	Parms.K2Node_CustomEvent_CurrentParty = K2Node_CustomEvent_CurrentParty;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_8 = CallFunc_GetGameInstanceSubsystem_ReturnValue_8;
	Parms.CallFunc_GetChildrenCount_ReturnValue_1 = CallFunc_GetChildrenCount_ReturnValue_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_PartyInvite_List.WB_PartyInvite_List_C.Party_WeHaveSomething__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Quantity                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PartyInvite_List_C::Party_WeHaveSomething__DelegateSignature(int32 Quantity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PartyInvite_List_C", "Party_WeHaveSomething__DelegateSignature");

	Params::UWB_PartyInvite_List_C_Party_WeHaveSomething__DelegateSignature_Params Parms{};

	Parms.Quantity = Quantity;

	UObject::ProcessEvent(Func, &Parms);

}

}


