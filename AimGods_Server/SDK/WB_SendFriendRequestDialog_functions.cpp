#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_SendFriendRequestDialog.WB_SendFriendRequestDialog_C
// (None)

class UClass* UWB_SendFriendRequestDialog_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_SendFriendRequestDialog_C");

	return Clss;
}


// WB_SendFriendRequestDialog_C WB_SendFriendRequestDialog.Default__WB_SendFriendRequestDialog_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_SendFriendRequestDialog_C* UWB_SendFriendRequestDialog_C::GetDefaultObj()
{
	static class UWB_SendFriendRequestDialog_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_SendFriendRequestDialog_C*>(UWB_SendFriendRequestDialog_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_SendFriendRequestDialog.WB_SendFriendRequestDialog_C.BndEvt__Txt_UsernameToAdd_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class ETextCommit             CommitMethod                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_SendFriendRequestDialog_C::BndEvt__Txt_UsernameToAdd_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SendFriendRequestDialog_C", "BndEvt__Txt_UsernameToAdd_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature");

	Params::UWB_SendFriendRequestDialog_C_BndEvt__Txt_UsernameToAdd_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_SendFriendRequestDialog.WB_SendFriendRequestDialog_C.OnSendFriendRequest
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Response                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FAGFriendError              Error                                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UWB_SendFriendRequestDialog_C::OnSendFriendRequest(bool Success, const class FString& Response, const struct FAGFriendError& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SendFriendRequestDialog_C", "OnSendFriendRequest");

	Params::UWB_SendFriendRequestDialog_C_OnSendFriendRequest_Params Parms{};

	Parms.Success = Success;
	Parms.Response = Response;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_SendFriendRequestDialog.WB_SendFriendRequestDialog_C.BndEvt__Button_140_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_SendFriendRequestDialog_C::BndEvt__Button_140_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SendFriendRequestDialog_C", "BndEvt__Button_140_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SendFriendRequestDialog.WB_SendFriendRequestDialog_C.BndEvt__ButtonLeave_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_SendFriendRequestDialog_C::BndEvt__ButtonLeave_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SendFriendRequestDialog_C", "BndEvt__ButtonLeave_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SendFriendRequestDialog.WB_SendFriendRequestDialog_C.ExecuteUbergraph_WB_SendFriendRequestDialog
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FText                        K2Node_ComponentBoundEvent_Text                                  (ConstParm)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// bool                               K2Node_CustomEvent_Success                                       (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_CustomEvent_Response                                      (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// struct FAGFriendError              K2Node_CustomEvent_Error                                         (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class UFriendsLibrary*             CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFriendsLibrary*             CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_SendFriendRequestDialog_C::ExecuteUbergraph_WB_SendFriendRequestDialog(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText K2Node_ComponentBoundEvent_Text, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, bool K2Node_SwitchEnum_CmpSuccess, class FText CallFunc_GetText_ReturnValue, bool K2Node_CustomEvent_Success, const class FString& K2Node_CustomEvent_Response, const struct FAGFriendError& K2Node_CustomEvent_Error, const class FString& CallFunc_Conv_TextToString_ReturnValue, class UFriendsLibrary* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UFriendsLibrary* CallFunc_GetGameInstanceSubsystem_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SendFriendRequestDialog_C", "ExecuteUbergraph_WB_SendFriendRequestDialog");

	Params::UWB_SendFriendRequestDialog_C_ExecuteUbergraph_WB_SendFriendRequestDialog_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_ComponentBoundEvent_Text = K2Node_ComponentBoundEvent_Text;
	Parms.K2Node_ComponentBoundEvent_CommitMethod = K2Node_ComponentBoundEvent_CommitMethod;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.K2Node_CustomEvent_Success = K2Node_CustomEvent_Success;
	Parms.K2Node_CustomEvent_Response = K2Node_CustomEvent_Response;
	Parms.K2Node_CustomEvent_Error = K2Node_CustomEvent_Error;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = CallFunc_GetGameInstanceSubsystem_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_SendFriendRequestDialog.WB_SendFriendRequestDialog_C.CloseWindow__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_SendFriendRequestDialog_C::CloseWindow__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SendFriendRequestDialog_C", "CloseWindow__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SendFriendRequestDialog.WB_SendFriendRequestDialog_C.FriendSearchOperationDone__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_SendFriendRequestDialog_C::FriendSearchOperationDone__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SendFriendRequestDialog_C", "FriendSearchOperationDone__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


