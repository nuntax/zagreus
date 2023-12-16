#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_MainMenu.WB_MainMenu_C
// (None)

class UClass* UWB_MainMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_MainMenu_C");

	return Clss;
}


// WB_MainMenu_C WB_MainMenu.Default__WB_MainMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_MainMenu_C* UWB_MainMenu_C::GetDefaultObj()
{
	static class UWB_MainMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_MainMenu_C*>(UWB_MainMenu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_MainMenu.WB_MainMenu_C.UpdatePreviousSeasonInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPreviousSeasonInfo         Previous_Season_Info                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               bError                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            (None)

void UWB_MainMenu_C::UpdatePreviousSeasonInfo(const struct FPreviousSeasonInfo& Previous_Season_Info, bool bError, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_MainMenu_C", "UpdatePreviousSeasonInfo");

	Params::UWB_MainMenu_C_UpdatePreviousSeasonInfo_Params Parms{};

	Parms.Previous_Season_Info = Previous_Season_Info;
	Parms.bError = bError;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_MainMenu.WB_MainMenu_C.UpdateEloInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameStatsPayload           Stats                                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_StrStr_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

void UWB_MainMenu_C::UpdateEloInfo(const struct FGameStatsPayload& Stats, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_NotEqual_StrStr_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_MainMenu_C", "UpdateEloInfo");

	Params::UWB_MainMenu_C_UpdateEloInfo_Params Parms{};

	Parms.Stats = Stats;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_NotEqual_StrStr_ReturnValue = CallFunc_NotEqual_StrStr_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_MainMenu.WB_MainMenu_C.UpdateMainScreen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAGGameliftSubsystem*        CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_QueuePopup_C*            CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAGGameliftSubsystem*        CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_MainMenu_C::UpdateMainScreen(class UAGGameliftSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UWB_QueuePopup_C* CallFunc_Create_ReturnValue, class UAGGameliftSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_MainMenu_C", "UpdateMainScreen");

	Params::UWB_MainMenu_C_UpdateMainScreen_Params Parms{};

	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_MainMenu.WB_MainMenu_C.UpdateButtons
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_MainMenu_C::UpdateButtons()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_MainMenu_C", "UpdateButtons");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_MainMenu.WB_MainMenu_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_MainMenu_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_MainMenu_C", "PreConstruct");

	Params::UWB_MainMenu_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_MainMenu.WB_MainMenu_C.PlaySoundEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_MainMenu_C::PlaySoundEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_MainMenu_C", "PlaySoundEffect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_MainMenu.WB_MainMenu_C.OnAcceptPartyInvite
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPartyError                 Error                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FCurrentParty               CurrentParty                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWB_MainMenu_C::OnAcceptPartyInvite(bool Success, struct FPartyError& Error, struct FCurrentParty& CurrentParty)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_MainMenu_C", "OnAcceptPartyInvite");

	Params::UWB_MainMenu_C_OnAcceptPartyInvite_Params Parms{};

	Parms.Success = Success;
	Parms.Error = Error;
	Parms.CurrentParty = CurrentParty;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_MainMenu.WB_MainMenu_C.OnPartyDisbandedWs
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      PartyId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWB_MainMenu_C::OnPartyDisbandedWs(const class FString& PartyId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_MainMenu_C", "OnPartyDisbandedWs");

	Params::UWB_MainMenu_C_OnPartyDisbandedWs_Params Parms{};

	Parms.PartyId = PartyId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_MainMenu.WB_MainMenu_C.OnLeaveCurrentParty
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Response                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FPartyError                 Error                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWB_MainMenu_C::OnLeaveCurrentParty(bool Success, const class FString& Response, struct FPartyError& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_MainMenu_C", "OnLeaveCurrentParty");

	Params::UWB_MainMenu_C_OnLeaveCurrentParty_Params Parms{};

	Parms.Success = Success;
	Parms.Response = Response;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_MainMenu.WB_MainMenu_C.OnOutgoingPartyInviteAcceptedWs
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      PartyId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      UserId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Username                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWB_MainMenu_C::OnOutgoingPartyInviteAcceptedWs(const class FString& PartyId, const class FString& UserId, const class FString& Username)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_MainMenu_C", "OnOutgoingPartyInviteAcceptedWs");

	Params::UWB_MainMenu_C_OnOutgoingPartyInviteAcceptedWs_Params Parms{};

	Parms.PartyId = PartyId;
	Parms.UserId = UserId;
	Parms.Username = Username;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_MainMenu.WB_MainMenu_C.OnMatchmakingStatusChanged
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMatchmakingStatus      NewStatus                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_MainMenu_C::OnMatchmakingStatusChanged(enum class EMatchmakingStatus& NewStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_MainMenu_C", "OnMatchmakingStatusChanged");

	Params::UWB_MainMenu_C_OnMatchmakingStatusChanged_Params Parms{};

	Parms.NewStatus = NewStatus;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_MainMenu.WB_MainMenu_C.OnGetPlayerStatsFromServer
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStatsError                 StatError                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameStatsPayload           Stats                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWB_MainMenu_C::OnGetPlayerStatsFromServer(bool Success, struct FStatsError& StatError, struct FGameStatsPayload& Stats)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_MainMenu_C", "OnGetPlayerStatsFromServer");

	Params::UWB_MainMenu_C_OnGetPlayerStatsFromServer_Params Parms{};

	Parms.Success = Success;
	Parms.StatError = StatError;
	Parms.Stats = Stats;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_MainMenu.WB_MainMenu_C.OnWebSocketError
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Message                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWB_MainMenu_C::OnWebSocketError(const class FString& Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_MainMenu_C", "OnWebSocketError");

	Params::UWB_MainMenu_C_OnWebSocketError_Params Parms{};

	Parms.Message = Message;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_MainMenu.WB_MainMenu_C.OnGetSeasonInfo
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStatsError                 StatError                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FSeasonInfo                 SeasonInfo                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWB_MainMenu_C::OnGetSeasonInfo(bool Success, struct FStatsError& StatError, struct FSeasonInfo& SeasonInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_MainMenu_C", "OnGetSeasonInfo");

	Params::UWB_MainMenu_C_OnGetSeasonInfo_Params Parms{};

	Parms.Success = Success;
	Parms.StatError = StatError;
	Parms.SeasonInfo = SeasonInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_MainMenu.WB_MainMenu_C.MainMenuEloUpdate
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_MainMenu_C::MainMenuEloUpdate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_MainMenu_C", "MainMenuEloUpdate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_MainMenu.WB_MainMenu_C.UpdateScreenData
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_MainMenu_C::UpdateScreenData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_MainMenu_C", "UpdateScreenData");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_MainMenu.WB_MainMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWB_MainMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_MainMenu_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_MainMenu.WB_MainMenu_C.LeaveCustomGame
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_MainMenu_C::LeaveCustomGame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_MainMenu_C", "LeaveCustomGame");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_MainMenu.WB_MainMenu_C.JoinCustomGame
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_MainMenu_C::JoinCustomGame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_MainMenu_C", "JoinCustomGame");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_MainMenu.WB_MainMenu_C.BndEvt__WB_LoadoutActionBar_K2Node_ComponentBoundEvent_7_ClickedAnySlot__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_MainMenu_C::BndEvt__WB_LoadoutActionBar_K2Node_ComponentBoundEvent_7_ClickedAnySlot__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_MainMenu_C", "BndEvt__WB_LoadoutActionBar_K2Node_ComponentBoundEvent_7_ClickedAnySlot__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_MainMenu.WB_MainMenu_C.BndEvt__SettingsBtn_K2Node_ComponentBoundEvent_8_ClickedBtn__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_MainMenu_C::BndEvt__SettingsBtn_K2Node_ComponentBoundEvent_8_ClickedBtn__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_MainMenu_C", "BndEvt__SettingsBtn_K2Node_ComponentBoundEvent_8_ClickedBtn__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_MainMenu.WB_MainMenu_C.BndEvt__QuitBtn_K2Node_ComponentBoundEvent_9_ClickedBtn__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_MainMenu_C::BndEvt__QuitBtn_K2Node_ComponentBoundEvent_9_ClickedBtn__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_MainMenu_C", "BndEvt__QuitBtn_K2Node_ComponentBoundEvent_9_ClickedBtn__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_MainMenu.WB_MainMenu_C.BndEvt__WB_MainMenu_PlayButton_K2Node_ComponentBoundEvent_10_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_MainMenu_C::BndEvt__WB_MainMenu_PlayButton_K2Node_ComponentBoundEvent_10_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_MainMenu_C", "BndEvt__WB_MainMenu_PlayButton_K2Node_ComponentBoundEvent_10_Clicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_MainMenu.WB_MainMenu_C.BndEvt__WB_MainMenu_CustomMatch_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_MainMenu_C::BndEvt__WB_MainMenu_CustomMatch_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_MainMenu_C", "BndEvt__WB_MainMenu_CustomMatch_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_MainMenu.WB_MainMenu_C.BndEvt__WB_LoadoutSelection_K2Node_ComponentBoundEvent_1_CloseWindow__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_MainMenu_C::BndEvt__WB_LoadoutSelection_K2Node_ComponentBoundEvent_1_CloseWindow__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_MainMenu_C", "BndEvt__WB_LoadoutSelection_K2Node_ComponentBoundEvent_1_CloseWindow__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_MainMenu.WB_MainMenu_C.UpdateSeasonCounter
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_MainMenu_C::UpdateSeasonCounter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_MainMenu_C", "UpdateSeasonCounter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_MainMenu.WB_MainMenu_C.OnUpdateSeasonCounter
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_MainMenu_C::OnUpdateSeasonCounter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_MainMenu_C", "OnUpdateSeasonCounter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_MainMenu.WB_MainMenu_C.BndEvt__WB_Notification_Icon_Section_K2Node_ComponentBoundEvent_0_UpdateFriendsList__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_MainMenu_C::BndEvt__WB_Notification_Icon_Section_K2Node_ComponentBoundEvent_0_UpdateFriendsList__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_MainMenu_C", "BndEvt__WB_Notification_Icon_Section_K2Node_ComponentBoundEvent_0_UpdateFriendsList__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_MainMenu.WB_MainMenu_C.CustomGameLoadFriends
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_MainMenu_C::CustomGameLoadFriends()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_MainMenu_C", "CustomGameLoadFriends");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_MainMenu.WB_MainMenu_C.BadQueueHandler
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_MainMenu_C::BadQueueHandler()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_MainMenu_C", "BadQueueHandler");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_MainMenu.WB_MainMenu_C.BndEvt__WB_Btn_Keys_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_MainMenu_C::BndEvt__WB_Btn_Keys_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_MainMenu_C", "BndEvt__WB_Btn_Keys_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_MainMenu.WB_MainMenu_C.BndEvt__RedeemKeyBtn_K2Node_ComponentBoundEvent_4_ClickedBtn__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_MainMenu_C::BndEvt__RedeemKeyBtn_K2Node_ComponentBoundEvent_4_ClickedBtn__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_MainMenu_C", "BndEvt__RedeemKeyBtn_K2Node_ComponentBoundEvent_4_ClickedBtn__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_MainMenu.WB_MainMenu_C.BndEvt__AccountBtn_K2Node_ComponentBoundEvent_5_ClickedBtn__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_MainMenu_C::BndEvt__AccountBtn_K2Node_ComponentBoundEvent_5_ClickedBtn__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_MainMenu_C", "BndEvt__AccountBtn_K2Node_ComponentBoundEvent_5_ClickedBtn__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_MainMenu.WB_MainMenu_C.ClearOutCustomGameMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_MainMenu_C::ClearOutCustomGameMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_MainMenu_C", "ClearOutCustomGameMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_MainMenu.WB_MainMenu_C.OnGetPreviousSeasonInfo
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStatsError                 StatError                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FPreviousSeasonInfo         SeasonInfo                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWB_MainMenu_C::OnGetPreviousSeasonInfo(bool Success, struct FStatsError& StatError, struct FPreviousSeasonInfo& SeasonInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_MainMenu_C", "OnGetPreviousSeasonInfo");

	Params::UWB_MainMenu_C_OnGetPreviousSeasonInfo_Params Parms{};

	Parms.Success = Success;
	Parms.StatError = StatError;
	Parms.SeasonInfo = SeasonInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_MainMenu.WB_MainMenu_C.ExecuteUbergraph_WB_MainMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_AGGameInstance_C*        K2Node_DynamicCast_AsBP_AGGame_Instance                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               K2Node_CustomEvent_Success_4                                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPartyError                 K2Node_CustomEvent_Error_1                                       (ConstParm)
// struct FCurrentParty               K2Node_CustomEvent_CurrentParty                                  (ConstParm)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_PartyId_1                                     (ZeroConstructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               K2Node_CustomEvent_Success_3                                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_CustomEvent_Response                                      (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// struct FPartyError                 K2Node_CustomEvent_Error                                         (ConstParm)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class FString                      K2Node_CustomEvent_PartyId                                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_UserId                                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_Username                                      (ZeroConstructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMatchmakingStatus      K2Node_CustomEvent_NewStatus                                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_AGGameInstance_C*        K2Node_DynamicCast_AsBP_AGGame_Instance_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Success_2                                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStatsError                 K2Node_CustomEvent_StatError_2                                   (ConstParm)
// struct FGameStatsPayload           K2Node_CustomEvent_Stats                                         (ConstParm)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// class UAGStatsSubsystem*           CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_Message                                       (ZeroConstructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// class UAGPartySubsystem*           CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_ErrorPopUp_C*            CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAGGameliftSubsystem*        CallFunc_GetGameInstanceSubsystem_ReturnValue_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Success_1                                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStatsError                 K2Node_CustomEvent_StatError_1                                   (ConstParm)
// struct FSeasonInfo                 K2Node_CustomEvent_SeasonInfo_1                                  (ConstParm)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAGGameliftSubsystem*        CallFunc_GetGameInstanceSubsystem_ReturnValue_3                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_2                       (NoDestructor, HasGetValueTypeHash)
// class UAGStatsSubsystem*           CallFunc_GetGameInstanceSubsystem_ReturnValue_4                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_CustomGamesScreen_C*     CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDateTime                   CallFunc_UtcNow_ReturnValue                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   CallFunc_Subtract_DateTimeDateTime_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakTimespan_Days                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakTimespan_Hours                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakTimespan_Minutes                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakTimespan_Seconds                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakTimespan_Milliseconds                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Abs_Int_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Abs_Int_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_2                            (None)
// int32                              CallFunc_Abs_Int_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Abs_Int_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_3                            (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_4                            (None)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_3                       (NoDestructor, HasGetValueTypeHash)
// class UOverlaySlot*                CallFunc_SlotAsOverlaySlot_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue_1                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAGStatsSubsystem*           CallFunc_GetGameInstanceSubsystem_ReturnValue_5                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class UAGStatsSubsystem*           CallFunc_GetGameInstanceSubsystem_ReturnValue_6                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetTimeLeftInCurrentSeason_ReturnValue                  (ZeroConstructor, HasGetValueTypeHash)
// class UAGStatsSubsystem*           CallFunc_GetGameInstanceSubsystem_ReturnValue_7                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (ZeroConstructor, NoDestructor)
// class UWebSocketManager*           CallFunc_GetGameInstanceSubsystem_ReturnValue_8                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAGStatsSubsystem*           CallFunc_GetGameInstanceSubsystem_ReturnValue_9                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAGGameliftSubsystem*        CallFunc_GetGameInstanceSubsystem_ReturnValue_10                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAGGameliftSubsystem*        CallFunc_GetGameInstanceSubsystem_ReturnValue_11                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWebSocketManager*           CallFunc_GetGameInstanceSubsystem_ReturnValue_12                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAwsHttpRequestLibrary*      CallFunc_GetGameInstanceSubsystem_ReturnValue_13                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAGPartySubsystem*           CallFunc_GetGameInstanceSubsystem_ReturnValue_14                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLoggedIn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAGPartySubsystem*           CallFunc_GetGameInstanceSubsystem_ReturnValue_15                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Success                                       (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStatsError                 K2Node_CustomEvent_StatError                                     (ConstParm)
// struct FPreviousSeasonInfo         K2Node_CustomEvent_SeasonInfo                                    (ConstParm)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_13                          (ZeroConstructor, NoDestructor)
// class UAGPartySubsystem*           CallFunc_GetGameInstanceSubsystem_ReturnValue_16                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_AGGameInstance_C*        K2Node_DynamicCast_AsBP_AGGame_Instance_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_AGGameInstance_C*        K2Node_DynamicCast_AsBP_AGGame_Instance_3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_MainMenu_C::ExecuteUbergraph_WB_MainMenu(int32 EntryPoint, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_AGGameInstance_C* K2Node_DynamicCast_AsBP_AGGame_Instance, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_CustomEvent_Success_4, const struct FPartyError& K2Node_CustomEvent_Error_1, const struct FCurrentParty& K2Node_CustomEvent_CurrentParty, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const class FString& K2Node_CustomEvent_PartyId_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_CustomEvent_Success_3, const class FString& K2Node_CustomEvent_Response, const struct FPartyError& K2Node_CustomEvent_Error, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const class FString& K2Node_CustomEvent_PartyId, const class FString& K2Node_CustomEvent_UserId, const class FString& K2Node_CustomEvent_Username, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, enum class EMatchmakingStatus K2Node_CustomEvent_NewStatus, class UBP_AGGameInstance_C* K2Node_DynamicCast_AsBP_AGGame_Instance_1, bool K2Node_DynamicCast_bSuccess_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_Event_IsDesignTime, bool K2Node_CustomEvent_Success_2, const struct FStatsError& K2Node_CustomEvent_StatError_2, const struct FGameStatsPayload& K2Node_CustomEvent_Stats, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UAGStatsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, const class FString& K2Node_CustomEvent_Message, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class UAGPartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UWB_ErrorPopUp_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UAGGameliftSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, bool K2Node_CustomEvent_Success_1, const struct FStatsError& K2Node_CustomEvent_StatError_1, const struct FSeasonInfo& K2Node_CustomEvent_SeasonInfo_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, float CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue, class UAGGameliftSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_3, int32 CallFunc_FTrunc_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_2, class UAGStatsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_4, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class UWB_CustomGamesScreen_C* CallFunc_Create_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, const struct FDateTime& CallFunc_UtcNow_ReturnValue, const struct FTimespan& CallFunc_Subtract_DateTimeDateTime_ReturnValue, int32 CallFunc_BreakTimespan_Days, int32 CallFunc_BreakTimespan_Hours, int32 CallFunc_BreakTimespan_Minutes, int32 CallFunc_BreakTimespan_Seconds, int32 CallFunc_BreakTimespan_Milliseconds, int32 CallFunc_Abs_Int_ReturnValue, int32 CallFunc_Abs_Int_ReturnValue_1, class FText CallFunc_Conv_IntToText_ReturnValue_1, class FText CallFunc_Conv_IntToText_ReturnValue_2, int32 CallFunc_Abs_Int_ReturnValue_2, int32 CallFunc_Abs_Int_ReturnValue_3, class FText CallFunc_Conv_IntToText_ReturnValue_3, class FText CallFunc_Conv_IntToText_ReturnValue_4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_3, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, class UAGStatsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_5, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_EqualEqual_StrStr_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class UAGStatsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_6, const class FString& CallFunc_GetTimeLeftInCurrentSeason_ReturnValue, class UAGStatsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_7, class FText CallFunc_Conv_StringToText_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, class UWebSocketManager* CallFunc_GetGameInstanceSubsystem_ReturnValue_8, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UAGStatsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_9, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, class UAGGameliftSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_10, bool CallFunc_BooleanOR_ReturnValue, class UAGGameliftSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_11, class UWebSocketManager* CallFunc_GetGameInstanceSubsystem_ReturnValue_12, bool CallFunc_IsValid_ReturnValue_2, class UAwsHttpRequestLibrary* CallFunc_GetGameInstanceSubsystem_ReturnValue_13, class UAGPartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_14, bool CallFunc_IsLoggedIn_ReturnValue, class UAGPartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_15, bool K2Node_CustomEvent_Success, const struct FStatsError& K2Node_CustomEvent_StatError, const struct FPreviousSeasonInfo& K2Node_CustomEvent_SeasonInfo, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, class UAGPartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_16, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_3, class UBP_AGGameInstance_C* K2Node_DynamicCast_AsBP_AGGame_Instance_2, bool K2Node_DynamicCast_bSuccess_2, class UBP_AGGameInstance_C* K2Node_DynamicCast_AsBP_AGGame_Instance_3, bool K2Node_DynamicCast_bSuccess_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_MainMenu_C", "ExecuteUbergraph_WB_MainMenu");

	Params::UWB_MainMenu_C_ExecuteUbergraph_WB_MainMenu_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_AGGame_Instance = K2Node_DynamicCast_AsBP_AGGame_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Success_4 = K2Node_CustomEvent_Success_4;
	Parms.K2Node_CustomEvent_Error_1 = K2Node_CustomEvent_Error_1;
	Parms.K2Node_CustomEvent_CurrentParty = K2Node_CustomEvent_CurrentParty;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_CustomEvent_PartyId_1 = K2Node_CustomEvent_PartyId_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_Success_3 = K2Node_CustomEvent_Success_3;
	Parms.K2Node_CustomEvent_Response = K2Node_CustomEvent_Response;
	Parms.K2Node_CustomEvent_Error = K2Node_CustomEvent_Error;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_PartyId = K2Node_CustomEvent_PartyId;
	Parms.K2Node_CustomEvent_UserId = K2Node_CustomEvent_UserId;
	Parms.K2Node_CustomEvent_Username = K2Node_CustomEvent_Username;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.K2Node_CustomEvent_NewStatus = K2Node_CustomEvent_NewStatus;
	Parms.K2Node_DynamicCast_AsBP_AGGame_Instance_1 = K2Node_DynamicCast_AsBP_AGGame_Instance_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CustomEvent_Success_2 = K2Node_CustomEvent_Success_2;
	Parms.K2Node_CustomEvent_StatError_2 = K2Node_CustomEvent_StatError_2;
	Parms.K2Node_CustomEvent_Stats = K2Node_CustomEvent_Stats;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.K2Node_CustomEvent_Message = K2Node_CustomEvent_Message;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_2 = CallFunc_GetGameInstanceSubsystem_ReturnValue_2;
	Parms.K2Node_CustomEvent_Success_1 = K2Node_CustomEvent_Success_1;
	Parms.K2Node_CustomEvent_StatError_1 = K2Node_CustomEvent_StatError_1;
	Parms.K2Node_CustomEvent_SeasonInfo_1 = K2Node_CustomEvent_SeasonInfo_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue = CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_3 = CallFunc_GetGameInstanceSubsystem_ReturnValue_3;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_2 = CallFunc_K2_SetTimerDelegate_ReturnValue_2;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_4 = CallFunc_GetGameInstanceSubsystem_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_UtcNow_ReturnValue = CallFunc_UtcNow_ReturnValue;
	Parms.CallFunc_Subtract_DateTimeDateTime_ReturnValue = CallFunc_Subtract_DateTimeDateTime_ReturnValue;
	Parms.CallFunc_BreakTimespan_Days = CallFunc_BreakTimespan_Days;
	Parms.CallFunc_BreakTimespan_Hours = CallFunc_BreakTimespan_Hours;
	Parms.CallFunc_BreakTimespan_Minutes = CallFunc_BreakTimespan_Minutes;
	Parms.CallFunc_BreakTimespan_Seconds = CallFunc_BreakTimespan_Seconds;
	Parms.CallFunc_BreakTimespan_Milliseconds = CallFunc_BreakTimespan_Milliseconds;
	Parms.CallFunc_Abs_Int_ReturnValue = CallFunc_Abs_Int_ReturnValue;
	Parms.CallFunc_Abs_Int_ReturnValue_1 = CallFunc_Abs_Int_ReturnValue_1;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;
	Parms.CallFunc_Conv_IntToText_ReturnValue_2 = CallFunc_Conv_IntToText_ReturnValue_2;
	Parms.CallFunc_Abs_Int_ReturnValue_2 = CallFunc_Abs_Int_ReturnValue_2;
	Parms.CallFunc_Abs_Int_ReturnValue_3 = CallFunc_Abs_Int_ReturnValue_3;
	Parms.CallFunc_Conv_IntToText_ReturnValue_3 = CallFunc_Conv_IntToText_ReturnValue_3;
	Parms.CallFunc_Conv_IntToText_ReturnValue_4 = CallFunc_Conv_IntToText_ReturnValue_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_3 = CallFunc_K2_SetTimerDelegate_ReturnValue_3;
	Parms.CallFunc_SlotAsOverlaySlot_ReturnValue = CallFunc_SlotAsOverlaySlot_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue_1 = CallFunc_AddChild_ReturnValue_1;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_5 = CallFunc_GetGameInstanceSubsystem_ReturnValue_5;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_6 = CallFunc_GetGameInstanceSubsystem_ReturnValue_6;
	Parms.CallFunc_GetTimeLeftInCurrentSeason_ReturnValue = CallFunc_GetTimeLeftInCurrentSeason_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_7 = CallFunc_GetGameInstanceSubsystem_ReturnValue_7;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_12 = K2Node_CreateDelegate_OutputDelegate_12;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_8 = CallFunc_GetGameInstanceSubsystem_ReturnValue_8;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_9 = CallFunc_GetGameInstanceSubsystem_ReturnValue_9;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_10 = CallFunc_GetGameInstanceSubsystem_ReturnValue_10;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_11 = CallFunc_GetGameInstanceSubsystem_ReturnValue_11;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_12 = CallFunc_GetGameInstanceSubsystem_ReturnValue_12;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_13 = CallFunc_GetGameInstanceSubsystem_ReturnValue_13;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_14 = CallFunc_GetGameInstanceSubsystem_ReturnValue_14;
	Parms.CallFunc_IsLoggedIn_ReturnValue = CallFunc_IsLoggedIn_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_15 = CallFunc_GetGameInstanceSubsystem_ReturnValue_15;
	Parms.K2Node_CustomEvent_Success = K2Node_CustomEvent_Success;
	Parms.K2Node_CustomEvent_StatError = K2Node_CustomEvent_StatError;
	Parms.K2Node_CustomEvent_SeasonInfo = K2Node_CustomEvent_SeasonInfo;
	Parms.K2Node_CreateDelegate_OutputDelegate_13 = K2Node_CreateDelegate_OutputDelegate_13;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_16 = CallFunc_GetGameInstanceSubsystem_ReturnValue_16;
	Parms.CallFunc_GetGameInstance_ReturnValue_2 = CallFunc_GetGameInstance_ReturnValue_2;
	Parms.CallFunc_GetGameInstance_ReturnValue_3 = CallFunc_GetGameInstance_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsBP_AGGame_Instance_2 = K2Node_DynamicCast_AsBP_AGGame_Instance_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsBP_AGGame_Instance_3 = K2Node_DynamicCast_AsBP_AGGame_Instance_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


