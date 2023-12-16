#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_FriendRow.WB_FriendRow_C
// (None)

class UClass* UWB_FriendRow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_FriendRow_C");

	return Clss;
}


// WB_FriendRow_C WB_FriendRow.Default__WB_FriendRow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_FriendRow_C* UWB_FriendRow_C::GetDefaultObj()
{
	static class UWB_FriendRow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_FriendRow_C*>(UWB_FriendRow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_FriendRow.WB_FriendRow_C.Check_Online
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Online_                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_FriendRow_C::Check_Online(bool Online_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_FriendRow_C", "Check_Online");

	Params::UWB_FriendRow_C_Check_Online_Params Parms{};

	Parms.Online_ = Online_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_FriendRow.WB_FriendRow_C.BndEvt__AddToParty_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_FriendRow_C::BndEvt__AddToParty_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_FriendRow_C", "BndEvt__AddToParty_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_FriendRow.WB_FriendRow_C.BndEvt__Btn_Row_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_FriendRow_C::BndEvt__Btn_Row_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_FriendRow_C", "BndEvt__Btn_Row_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_FriendRow.WB_FriendRow_C.OnMessageReceived
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      OtherPlayerId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      OtherPlayerUsername                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      ChatConversationId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      SenderPlayerId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWB_FriendRow_C::OnMessageReceived(const class FString& OtherPlayerId, const class FString& OtherPlayerUsername, const class FString& ChatConversationId, const class FString& SenderPlayerId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_FriendRow_C", "OnMessageReceived");

	Params::UWB_FriendRow_C_OnMessageReceived_Params Parms{};

	Parms.OtherPlayerId = OtherPlayerId;
	Parms.OtherPlayerUsername = OtherPlayerUsername;
	Parms.ChatConversationId = ChatConversationId;
	Parms.SenderPlayerId = SenderPlayerId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_FriendRow.WB_FriendRow_C.OnRemoveFriend
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Response                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FAGFriendError              Error                                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UWB_FriendRow_C::OnRemoveFriend(bool Success, const class FString& Response, const struct FAGFriendError& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_FriendRow_C", "OnRemoveFriend");

	Params::UWB_FriendRow_C_OnRemoveFriend_Params Parms{};

	Parms.Success = Success;
	Parms.Response = Response;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_FriendRow.WB_FriendRow_C.BndEvt__Button_144_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_FriendRow_C::BndEvt__Button_144_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_FriendRow_C", "BndEvt__Button_144_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_FriendRow.WB_FriendRow_C.BndEvt__Btn_AddToCustomGame_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_FriendRow_C::BndEvt__Btn_AddToCustomGame_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_FriendRow_C", "BndEvt__Btn_AddToCustomGame_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_FriendRow.WB_FriendRow_C.BndEvt__Btn_BlockPlayer_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_FriendRow_C::BndEvt__Btn_BlockPlayer_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_FriendRow_C", "BndEvt__Btn_BlockPlayer_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_FriendRow.WB_FriendRow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWB_FriendRow_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_FriendRow_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_FriendRow.WB_FriendRow_C.BndEvt__ForgiveFriend_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_FriendRow_C::BndEvt__ForgiveFriend_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_FriendRow_C", "BndEvt__ForgiveFriend_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_FriendRow.WB_FriendRow_C.ExecuteUbergraph_WB_FriendRow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFriendsLibrary*             CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFriendsLibrary*             CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFriendsLibrary*             CallFunc_GetGameInstanceSubsystem_ReturnValue_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAGCustomGameSubsystem*      CallFunc_GetGameInstanceSubsystem_ReturnValue_3                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FString                      K2Node_CustomEvent_OtherPlayerId                                 (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_OtherPlayerUsername                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_ChatConversationId                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_SenderPlayerId                                (ZeroConstructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAGGameInstance*             K2Node_DynamicCast_AsAGGame_Instance                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Success                                       (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_CustomEvent_Response                                      (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// struct FAGFriendError              K2Node_CustomEvent_Error                                         (None)
// class UFriendsLibrary*             CallFunc_GetGameInstanceSubsystem_ReturnValue_4                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFriendsLibrary*             CallFunc_GetGameInstanceSubsystem_ReturnValue_5                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select_Default_2                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAGChatSubsystem*            CallFunc_GetGameInstanceSubsystem_ReturnValue_6                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAGChatSubsystem*            CallFunc_GetGameInstanceSubsystem_ReturnValue_7                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAGPartySubsystem*           CallFunc_GetGameInstanceSubsystem_ReturnValue_8                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_FriendRow_C::ExecuteUbergraph_WB_FriendRow(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UFriendsLibrary* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UFriendsLibrary* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, class UFriendsLibrary* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, class UAGCustomGameSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_3, bool Temp_bool_Variable_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const class FString& K2Node_CustomEvent_OtherPlayerId, const class FString& K2Node_CustomEvent_OtherPlayerUsername, const class FString& K2Node_CustomEvent_ChatConversationId, const class FString& K2Node_CustomEvent_SenderPlayerId, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, class UAGGameInstance* K2Node_DynamicCast_AsAGGame_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, bool K2Node_CustomEvent_Success, const class FString& K2Node_CustomEvent_Response, const struct FAGFriendError& K2Node_CustomEvent_Error, class UFriendsLibrary* CallFunc_GetGameInstanceSubsystem_ReturnValue_4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FText CallFunc_Conv_StringToText_ReturnValue, class UWidget* K2Node_Select_Default, class UFriendsLibrary* CallFunc_GetGameInstanceSubsystem_ReturnValue_5, enum class ESlateVisibility K2Node_Select_Default_1, class UWidget* K2Node_Select_Default_2, class UAGChatSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_6, class UAGChatSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_7, class UAGPartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_8)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_FriendRow_C", "ExecuteUbergraph_WB_FriendRow");

	Params::UWB_FriendRow_C_ExecuteUbergraph_WB_FriendRow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_2 = CallFunc_GetGameInstanceSubsystem_ReturnValue_2;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_3 = CallFunc_GetGameInstanceSubsystem_ReturnValue_3;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_OtherPlayerId = K2Node_CustomEvent_OtherPlayerId;
	Parms.K2Node_CustomEvent_OtherPlayerUsername = K2Node_CustomEvent_OtherPlayerUsername;
	Parms.K2Node_CustomEvent_ChatConversationId = K2Node_CustomEvent_ChatConversationId;
	Parms.K2Node_CustomEvent_SenderPlayerId = K2Node_CustomEvent_SenderPlayerId;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.K2Node_DynamicCast_AsAGGame_Instance = K2Node_DynamicCast_AsAGGame_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_1 = CallFunc_EqualEqual_StrStr_ReturnValue_1;
	Parms.K2Node_CustomEvent_Success = K2Node_CustomEvent_Success;
	Parms.K2Node_CustomEvent_Response = K2Node_CustomEvent_Response;
	Parms.K2Node_CustomEvent_Error = K2Node_CustomEvent_Error;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_4 = CallFunc_GetGameInstanceSubsystem_ReturnValue_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_5 = CallFunc_GetGameInstanceSubsystem_ReturnValue_5;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_6 = CallFunc_GetGameInstanceSubsystem_ReturnValue_6;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_7 = CallFunc_GetGameInstanceSubsystem_ReturnValue_7;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_8 = CallFunc_GetGameInstanceSubsystem_ReturnValue_8;

	UObject::ProcessEvent(Func, &Parms);

}

}


