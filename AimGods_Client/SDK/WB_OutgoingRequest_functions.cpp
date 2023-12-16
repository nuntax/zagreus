#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_OutgoingRequest.WB_OutgoingRequest_C
// (None)

class UClass* UWB_OutgoingRequest_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_OutgoingRequest_C");

	return Clss;
}


// WB_OutgoingRequest_C WB_OutgoingRequest.Default__WB_OutgoingRequest_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_OutgoingRequest_C* UWB_OutgoingRequest_C::GetDefaultObj()
{
	static class UWB_OutgoingRequest_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_OutgoingRequest_C*>(UWB_OutgoingRequest_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_OutgoingRequest.WB_OutgoingRequest_C.OnCancelOutgoingFriendshipRequest
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Response                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FAGFriendError              Error                                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UWB_OutgoingRequest_C::OnCancelOutgoingFriendshipRequest(bool Success, const class FString& Response, const struct FAGFriendError& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_OutgoingRequest_C", "OnCancelOutgoingFriendshipRequest");

	Params::UWB_OutgoingRequest_C_OnCancelOutgoingFriendshipRequest_Params Parms{};

	Parms.Success = Success;
	Parms.Response = Response;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_OutgoingRequest.WB_OutgoingRequest_C.OnOutgoingFriendRequestAcceptedWs
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      RequestId                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWB_OutgoingRequest_C::OnOutgoingFriendRequestAcceptedWs(const class FString& RequestId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_OutgoingRequest_C", "OnOutgoingFriendRequestAcceptedWs");

	Params::UWB_OutgoingRequest_C_OnOutgoingFriendRequestAcceptedWs_Params Parms{};

	Parms.RequestId = RequestId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_OutgoingRequest.WB_OutgoingRequest_C.OnIncomingFriendRequestCancelledWs
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      RequestId                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWB_OutgoingRequest_C::OnIncomingFriendRequestCancelledWs(const class FString& RequestId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_OutgoingRequest_C", "OnIncomingFriendRequestCancelledWs");

	Params::UWB_OutgoingRequest_C_OnIncomingFriendRequestCancelledWs_Params Parms{};

	Parms.RequestId = RequestId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_OutgoingRequest.WB_OutgoingRequest_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWB_OutgoingRequest_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_OutgoingRequest_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_OutgoingRequest.WB_OutgoingRequest_C.BndEvt__DeclinePartyInvite_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_OutgoingRequest_C::BndEvt__DeclinePartyInvite_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_OutgoingRequest_C", "BndEvt__DeclinePartyInvite_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_OutgoingRequest.WB_OutgoingRequest_C.RemoveRequest
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_OutgoingRequest_C::RemoveRequest()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_OutgoingRequest_C", "RemoveRequest");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_OutgoingRequest.WB_OutgoingRequest_C.ExecuteUbergraph_WB_OutgoingRequest
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFriendsLibrary*             CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFriendsLibrary*             CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFriendsLibrary*             CallFunc_GetGameInstanceSubsystem_ReturnValue_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFriendsLibrary*             CallFunc_GetGameInstanceSubsystem_ReturnValue_3                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Success                                       (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_CustomEvent_Response                                      (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// struct FAGFriendError              K2Node_CustomEvent_Error                                         (None)
// class FString                      K2Node_CustomEvent_RequestId_1                                   (ZeroConstructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class FString                      K2Node_CustomEvent_RequestId                                     (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)

void UWB_OutgoingRequest_C::ExecuteUbergraph_WB_OutgoingRequest(int32 EntryPoint, class UFriendsLibrary* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UFriendsLibrary* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, class UFriendsLibrary* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, class UFriendsLibrary* CallFunc_GetGameInstanceSubsystem_ReturnValue_3, bool K2Node_CustomEvent_Success, const class FString& K2Node_CustomEvent_Response, const struct FAGFriendError& K2Node_CustomEvent_Error, const class FString& K2Node_CustomEvent_RequestId_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const class FString& K2Node_CustomEvent_RequestId, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_OutgoingRequest_C", "ExecuteUbergraph_WB_OutgoingRequest");

	Params::UWB_OutgoingRequest_C_ExecuteUbergraph_WB_OutgoingRequest_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_2 = CallFunc_GetGameInstanceSubsystem_ReturnValue_2;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_3 = CallFunc_GetGameInstanceSubsystem_ReturnValue_3;
	Parms.K2Node_CustomEvent_Success = K2Node_CustomEvent_Success;
	Parms.K2Node_CustomEvent_Response = K2Node_CustomEvent_Response;
	Parms.K2Node_CustomEvent_Error = K2Node_CustomEvent_Error;
	Parms.K2Node_CustomEvent_RequestId_1 = K2Node_CustomEvent_RequestId_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_RequestId = K2Node_CustomEvent_RequestId;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_1 = CallFunc_EqualEqual_StrStr_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


