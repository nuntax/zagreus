#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_FriendChatWindow.WB_FriendChatWindow_C
// (None)

class UClass* UWB_FriendChatWindow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_FriendChatWindow_C");

	return Clss;
}


// WB_FriendChatWindow_C WB_FriendChatWindow.Default__WB_FriendChatWindow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_FriendChatWindow_C* UWB_FriendChatWindow_C::GetDefaultObj()
{
	static class UWB_FriendChatWindow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_FriendChatWindow_C*>(UWB_FriendChatWindow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_FriendChatWindow.WB_FriendChatWindow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWB_FriendChatWindow_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_FriendChatWindow_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_FriendChatWindow.WB_FriendChatWindow_C.BndEvt__Btn_Close_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_FriendChatWindow_C::BndEvt__Btn_Close_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_FriendChatWindow_C", "BndEvt__Btn_Close_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_FriendChatWindow.WB_FriendChatWindow_C.BndEvt__TB_ChatEntry_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class ETextCommit             CommitMethod                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_FriendChatWindow_C::BndEvt__TB_ChatEntry_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_FriendChatWindow_C", "BndEvt__TB_ChatEntry_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature");

	Params::UWB_FriendChatWindow_C_BndEvt__TB_ChatEntry_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_FriendChatWindow.WB_FriendChatWindow_C.OnShowChatBox
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      OtherPlayerId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      OtherPlayerUsername                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      ChatConversationId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWB_FriendChatWindow_C::OnShowChatBox(const class FString& OtherPlayerId, const class FString& OtherPlayerUsername, const class FString& ChatConversationId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_FriendChatWindow_C", "OnShowChatBox");

	Params::UWB_FriendChatWindow_C_OnShowChatBox_Params Parms{};

	Parms.OtherPlayerId = OtherPlayerId;
	Parms.OtherPlayerUsername = OtherPlayerUsername;
	Parms.ChatConversationId = ChatConversationId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_FriendChatWindow.WB_FriendChatWindow_C.OnMessageReceived
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      OtherPlayerId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      OtherPlayerUsername                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      ChatConversationId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      SenderPlayerId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWB_FriendChatWindow_C::OnMessageReceived(const class FString& OtherPlayerId, const class FString& OtherPlayerUsername, const class FString& ChatConversationId, const class FString& SenderPlayerId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_FriendChatWindow_C", "OnMessageReceived");

	Params::UWB_FriendChatWindow_C_OnMessageReceived_Params Parms{};

	Parms.OtherPlayerId = OtherPlayerId;
	Parms.OtherPlayerUsername = OtherPlayerUsername;
	Parms.ChatConversationId = ChatConversationId;
	Parms.SenderPlayerId = SenderPlayerId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_FriendChatWindow.WB_FriendChatWindow_C.BndEvt__TB_ChatEntry_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWB_FriendChatWindow_C::BndEvt__TB_ChatEntry_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature(class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_FriendChatWindow_C", "BndEvt__TB_ChatEntry_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature");

	Params::UWB_FriendChatWindow_C_BndEvt__TB_ChatEntry_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_FriendChatWindow.WB_FriendChatWindow_C.ExecuteUbergraph_WB_FriendChatWindow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAGChatSubsystem*            CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAGChatSubsystem*            CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAGChatSubsystem*            CallFunc_GetGameInstanceSubsystem_ReturnValue_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_FriendChatText_C*        CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_ComponentBoundEvent_Text_1                                (ConstParm)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FString                      K2Node_CustomEvent_OtherPlayerId_1                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_OtherPlayerUsername_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_ChatConversationId_1                          (ZeroConstructor, HasGetValueTypeHash)
// class UAGChatSubsystem*            CallFunc_GetGameInstanceSubsystem_ReturnValue_3                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FChatConversation           CallFunc_GetChatConversationById_ReturnValue                     (None)
// struct FChatMessage                CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class FString                      K2Node_CustomEvent_OtherPlayerId                                 (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_OtherPlayerUsername                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_ChatConversationId                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_SenderPlayerId                                (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_ComponentBoundEvent_Text                                  (ConstParm)
// class FText                        CallFunc_Truncate_Text_Box_TruncatedText                         (None)

void UWB_FriendChatWindow_C::ExecuteUbergraph_WB_FriendChatWindow(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, class UAGChatSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UAGChatSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, class UAGChatSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, class FText CallFunc_Conv_StringToText_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UWB_FriendChatText_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class FText K2Node_ComponentBoundEvent_Text_1, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, bool K2Node_SwitchEnum_CmpSuccess, const class FString& CallFunc_Conv_TextToString_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const class FString& K2Node_CustomEvent_OtherPlayerId_1, const class FString& K2Node_CustomEvent_OtherPlayerUsername_1, const class FString& K2Node_CustomEvent_ChatConversationId_1, class UAGChatSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_3, const struct FChatConversation& CallFunc_GetChatConversationById_ReturnValue, const struct FChatMessage& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const class FString& K2Node_CustomEvent_OtherPlayerId, const class FString& K2Node_CustomEvent_OtherPlayerUsername, const class FString& K2Node_CustomEvent_ChatConversationId, const class FString& K2Node_CustomEvent_SenderPlayerId, bool CallFunc_EqualEqual_StrStr_ReturnValue, class FText K2Node_ComponentBoundEvent_Text, class FText CallFunc_Truncate_Text_Box_TruncatedText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_FriendChatWindow_C", "ExecuteUbergraph_WB_FriendChatWindow");

	Params::UWB_FriendChatWindow_C_ExecuteUbergraph_WB_FriendChatWindow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_2 = CallFunc_GetGameInstanceSubsystem_ReturnValue_2;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Text_1 = K2Node_ComponentBoundEvent_Text_1;
	Parms.K2Node_ComponentBoundEvent_CommitMethod = K2Node_ComponentBoundEvent_CommitMethod;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_OtherPlayerId_1 = K2Node_CustomEvent_OtherPlayerId_1;
	Parms.K2Node_CustomEvent_OtherPlayerUsername_1 = K2Node_CustomEvent_OtherPlayerUsername_1;
	Parms.K2Node_CustomEvent_ChatConversationId_1 = K2Node_CustomEvent_ChatConversationId_1;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_3 = CallFunc_GetGameInstanceSubsystem_ReturnValue_3;
	Parms.CallFunc_GetChatConversationById_ReturnValue = CallFunc_GetChatConversationById_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_OtherPlayerId = K2Node_CustomEvent_OtherPlayerId;
	Parms.K2Node_CustomEvent_OtherPlayerUsername = K2Node_CustomEvent_OtherPlayerUsername;
	Parms.K2Node_CustomEvent_ChatConversationId = K2Node_CustomEvent_ChatConversationId;
	Parms.K2Node_CustomEvent_SenderPlayerId = K2Node_CustomEvent_SenderPlayerId;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Text = K2Node_ComponentBoundEvent_Text;
	Parms.CallFunc_Truncate_Text_Box_TruncatedText = CallFunc_Truncate_Text_Box_TruncatedText;

	UObject::ProcessEvent(Func, &Parms);

}

}


