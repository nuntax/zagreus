#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_Login.WB_Login_C
// (None)

class UClass* UWB_Login_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_Login_C");

	return Clss;
}


// WB_Login_C WB_Login.Default__WB_Login_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_Login_C* UWB_Login_C::GetDefaultObj()
{
	static class UWB_Login_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_Login_C*>(UWB_Login_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_Login.WB_Login_C.DisableOnLoggingIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsLoggingIn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_Login_C::DisableOnLoggingIn(bool bIsLoggingIn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Login_C", "DisableOnLoggingIn");

	Params::UWB_Login_C_DisableOnLoggingIn_Params Parms{};

	Parms.bIsLoggingIn = bIsLoggingIn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Login.WB_Login_C.Finished_29AFE36048D8C87FEF83DBBB11D802BB
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Login_C::Finished_29AFE36048D8C87FEF83DBBB11D802BB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Login_C", "Finished_29AFE36048D8C87FEF83DBBB11D802BB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Login.WB_Login_C.BndEvt__Txt_Password_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class ETextCommit             CommitMethod                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Login_C::BndEvt__Txt_Password_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Login_C", "BndEvt__Txt_Password_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature");

	Params::UWB_Login_C_BndEvt__Txt_Password_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Login.WB_Login_C.BndEvt__Txt_Username_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWB_Login_C::BndEvt__Txt_Username_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature(class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Login_C", "BndEvt__Txt_Username_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature");

	Params::UWB_Login_C_BndEvt__Txt_Username_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Login.WB_Login_C.BndEvt__Txt_Password_K2Node_ComponentBoundEvent_5_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWB_Login_C::BndEvt__Txt_Password_K2Node_ComponentBoundEvent_5_OnEditableTextBoxChangedEvent__DelegateSignature(class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Login_C", "BndEvt__Txt_Password_K2Node_ComponentBoundEvent_5_OnEditableTextBoxChangedEvent__DelegateSignature");

	Params::UWB_Login_C_BndEvt__Txt_Password_K2Node_ComponentBoundEvent_5_OnEditableTextBoxChangedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Login.WB_Login_C.BndEvt__WB_Btn_BIG_Login_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_Login_C::BndEvt__WB_Btn_BIG_Login_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Login_C", "BndEvt__WB_Btn_BIG_Login_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Login.WB_Login_C.BndEvt__WB_Btn_Generic_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_Login_C::BndEvt__WB_Btn_Generic_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Login_C", "BndEvt__WB_Btn_Generic_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Login.WB_Login_C.BndEvt__WB_Btn_Generic_253_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_Login_C::BndEvt__WB_Btn_Generic_253_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Login_C", "BndEvt__WB_Btn_Generic_253_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Login.WB_Login_C.OnPlayerAlreadyLoggedIn
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Login_C::OnPlayerAlreadyLoggedIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Login_C", "OnPlayerAlreadyLoggedIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Login.WB_Login_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWB_Login_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Login_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Login.WB_Login_C.OnLogin_Event
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FAuthError                  AuthError                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAuthData                   AuthData                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWB_Login_C::OnLogin_Event(bool Success, struct FAuthError& AuthError, struct FAuthData& AuthData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Login_C", "OnLogin_Event");

	Params::UWB_Login_C_OnLogin_Event_Params Parms{};

	Parms.Success = Success;
	Parms.AuthError = AuthError;
	Parms.AuthData = AuthData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Login.WB_Login_C.ExecuteUbergraph_WB_Login
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAwsHttpRequestLibrary*      CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAGAuthSubsystem*            CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAGAuthSubsystem*            CallFunc_GetGameInstanceSubsystem_ReturnValue_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAGAuthSubsystem*            CallFunc_GetGameInstanceSubsystem_ReturnValue_3                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_LoginErrorMessage_C*     CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAGGameInstance*             K2Node_DynamicCast_AsAGGame_Instance                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_ComponentBoundEvent_Text_2                                (ConstParm)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FText                        K2Node_ComponentBoundEvent_Text_1                                (ConstParm)
// class FText                        K2Node_ComponentBoundEvent_Text                                  (ConstParm)
// class FText                        CallFunc_Truncate_Text_Box_TruncatedText                         (None)
// class FText                        CallFunc_Truncate_Text_Box_TruncatedText_1                       (None)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class FText                        CallFunc_GetText_ReturnValue_1                                   (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// bool                               K2Node_CustomEvent_Success                                       (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FAuthError                  K2Node_CustomEvent_AuthError                                     (ConstParm)
// struct FAuthData                   K2Node_CustomEvent_AuthData                                      (ConstParm)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Login_C::ExecuteUbergraph_WB_Login(int32 EntryPoint, class UAwsHttpRequestLibrary* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UAGAuthSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, class UAGAuthSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, class UAGAuthSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_3, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UWB_LoginErrorMessage_C* CallFunc_Create_ReturnValue, class UAGGameInstance* K2Node_DynamicCast_AsAGGame_Instance, bool K2Node_DynamicCast_bSuccess, class FText K2Node_ComponentBoundEvent_Text_2, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, bool K2Node_SwitchEnum_CmpSuccess, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FText K2Node_ComponentBoundEvent_Text_1, class FText K2Node_ComponentBoundEvent_Text, class FText CallFunc_Truncate_Text_Box_TruncatedText, class FText CallFunc_Truncate_Text_Box_TruncatedText_1, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FText CallFunc_GetText_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool K2Node_CustomEvent_Success, const struct FAuthError& K2Node_CustomEvent_AuthError, const struct FAuthData& K2Node_CustomEvent_AuthData, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Login_C", "ExecuteUbergraph_WB_Login");

	Params::UWB_Login_C_ExecuteUbergraph_WB_Login_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_2 = CallFunc_GetGameInstanceSubsystem_ReturnValue_2;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_3 = CallFunc_GetGameInstanceSubsystem_ReturnValue_3;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_DynamicCast_AsAGGame_Instance = K2Node_DynamicCast_AsAGGame_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_ComponentBoundEvent_Text_2 = K2Node_ComponentBoundEvent_Text_2;
	Parms.K2Node_ComponentBoundEvent_CommitMethod = K2Node_ComponentBoundEvent_CommitMethod;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Text_1 = K2Node_ComponentBoundEvent_Text_1;
	Parms.K2Node_ComponentBoundEvent_Text = K2Node_ComponentBoundEvent_Text;
	Parms.CallFunc_Truncate_Text_Box_TruncatedText = CallFunc_Truncate_Text_Box_TruncatedText;
	Parms.CallFunc_Truncate_Text_Box_TruncatedText_1 = CallFunc_Truncate_Text_Box_TruncatedText_1;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result = CallFunc_CreatePlayAnimationProxyObject_Result;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue = CallFunc_CreatePlayAnimationProxyObject_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetText_ReturnValue_1 = CallFunc_GetText_ReturnValue_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_Success = K2Node_CustomEvent_Success;
	Parms.K2Node_CustomEvent_AuthError = K2Node_CustomEvent_AuthError;
	Parms.K2Node_CustomEvent_AuthData = K2Node_CustomEvent_AuthData;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


