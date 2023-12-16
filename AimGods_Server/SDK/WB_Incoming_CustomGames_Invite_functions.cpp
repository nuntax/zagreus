#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_Incoming_CustomGames_Invite.WB_Incoming_CustomGames_Invite_C
// (None)

class UClass* UWB_Incoming_CustomGames_Invite_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_Incoming_CustomGames_Invite_C");

	return Clss;
}


// WB_Incoming_CustomGames_Invite_C WB_Incoming_CustomGames_Invite.Default__WB_Incoming_CustomGames_Invite_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_Incoming_CustomGames_Invite_C* UWB_Incoming_CustomGames_Invite_C::GetDefaultObj()
{
	static class UWB_Incoming_CustomGames_Invite_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_Incoming_CustomGames_Invite_C*>(UWB_Incoming_CustomGames_Invite_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_Incoming_CustomGames_Invite.WB_Incoming_CustomGames_Invite_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWB_Incoming_CustomGames_Invite_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Incoming_CustomGames_Invite_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Incoming_CustomGames_Invite.WB_Incoming_CustomGames_Invite_C.BndEvt__Btn_Cancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_Incoming_CustomGames_Invite_C::BndEvt__Btn_Cancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Incoming_CustomGames_Invite_C", "BndEvt__Btn_Cancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Incoming_CustomGames_Invite.WB_Incoming_CustomGames_Invite_C.BndEvt__Btn_Accept_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_Incoming_CustomGames_Invite_C::BndEvt__Btn_Accept_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Incoming_CustomGames_Invite_C", "BndEvt__Btn_Accept_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Incoming_CustomGames_Invite.WB_Incoming_CustomGames_Invite_C.OnCustomGameInviteCancelledWs
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      InviteId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWB_Incoming_CustomGames_Invite_C::OnCustomGameInviteCancelledWs(const class FString& InviteId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Incoming_CustomGames_Invite_C", "OnCustomGameInviteCancelledWs");

	Params::UWB_Incoming_CustomGames_Invite_C_OnCustomGameInviteCancelledWs_Params Parms{};

	Parms.InviteId = InviteId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Incoming_CustomGames_Invite.WB_Incoming_CustomGames_Invite_C.RemoveInvite
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Incoming_CustomGames_Invite_C::RemoveInvite()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Incoming_CustomGames_Invite_C", "RemoveInvite");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Incoming_CustomGames_Invite.WB_Incoming_CustomGames_Invite_C.ExecuteUbergraph_WB_Incoming_CustomGames_Invite
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAGCustomGameSubsystem*      CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAGCustomGameSubsystem*      CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FString                      K2Node_CustomEvent_InviteId                                      (ZeroConstructor, HasGetValueTypeHash)
// class UAGCustomGameSubsystem*      CallFunc_GetGameInstanceSubsystem_ReturnValue_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAGCustomGameSubsystem*      CallFunc_GetGameInstanceSubsystem_ReturnValue_3                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAGCustomGameSubsystem*      CallFunc_GetGameInstanceSubsystem_ReturnValue_4                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAGCustomGameSubsystem*      CallFunc_GetGameInstanceSubsystem_ReturnValue_5                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_AGGameInstance_C*        K2Node_DynamicCast_AsBP_AGGame_Instance                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_Incoming_CustomGames_Invite_C::ExecuteUbergraph_WB_Incoming_CustomGames_Invite(int32 EntryPoint, class UAGCustomGameSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UAGCustomGameSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& K2Node_CustomEvent_InviteId, class UAGCustomGameSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_EqualEqual_StrStr_ReturnValue, class UAGCustomGameSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_3, class UAGCustomGameSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_4, class UAGCustomGameSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_5, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_AGGameInstance_C* K2Node_DynamicCast_AsBP_AGGame_Instance, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Incoming_CustomGames_Invite_C", "ExecuteUbergraph_WB_Incoming_CustomGames_Invite");

	Params::UWB_Incoming_CustomGames_Invite_C_ExecuteUbergraph_WB_Incoming_CustomGames_Invite_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_CustomEvent_InviteId = K2Node_CustomEvent_InviteId;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_2 = CallFunc_GetGameInstanceSubsystem_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_3 = CallFunc_GetGameInstanceSubsystem_ReturnValue_3;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_4 = CallFunc_GetGameInstanceSubsystem_ReturnValue_4;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_5 = CallFunc_GetGameInstanceSubsystem_ReturnValue_5;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_AGGame_Instance = K2Node_DynamicCast_AsBP_AGGame_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


