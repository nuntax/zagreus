#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_MainMenu_PlayButton.WB_MainMenu_PlayButton_C
// (None)

class UClass* UWB_MainMenu_PlayButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_MainMenu_PlayButton_C");

	return Clss;
}


// WB_MainMenu_PlayButton_C WB_MainMenu_PlayButton.Default__WB_MainMenu_PlayButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_MainMenu_PlayButton_C* UWB_MainMenu_PlayButton_C::GetDefaultObj()
{
	static class UWB_MainMenu_PlayButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_MainMenu_PlayButton_C*>(UWB_MainMenu_PlayButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_MainMenu_PlayButton.WB_MainMenu_PlayButton_C.PartnerIsOutOfGame
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bPartnerIsOutOfGame                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAGPartySubsystem*           CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_BoolBool_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_MainMenu_PlayButton_C::PartnerIsOutOfGame(bool* bPartnerIsOutOfGame, class UAGPartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_EqualEqual_BoolBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_MainMenu_PlayButton_C", "PartnerIsOutOfGame");

	Params::UWB_MainMenu_PlayButton_C_PartnerIsOutOfGame_Params Parms{};

	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_EqualEqual_BoolBool_ReturnValue = CallFunc_EqualEqual_BoolBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bPartnerIsOutOfGame != nullptr)
		*bPartnerIsOutOfGame = Parms.bPartnerIsOutOfGame;

}


// Function WB_MainMenu_PlayButton.WB_MainMenu_PlayButton_C.Btn_Change_Status
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMatchmakingStatus      CurrentStatus                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsInParty                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bIsPartyLeader                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo                                  (HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo_1                                (HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_2                                   (None)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo_2                                (HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_3                                   (None)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo_3                                (HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_4                                   (None)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo_4                                (HasGetValueTypeHash)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo_5                                (HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_5                                   (None)
// bool                               CallFunc_PartnerIsOutOfGame_bPartnerIsOutOfGame                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo_6                                (HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_6                                   (None)
// class UAGPartySubsystem*           CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInParty_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAGPartySubsystem*           CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPartyLeader_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_MainMenu_PlayButton_C::Btn_Change_Status(enum class EMatchmakingStatus CurrentStatus, bool bIsInParty, bool bIsPartyLeader, const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo_2, const struct FSlateColor& K2Node_MakeStruct_SlateColor_3, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo_3, const struct FSlateColor& K2Node_MakeStruct_SlateColor_4, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo_4, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo_5, const struct FSlateColor& K2Node_MakeStruct_SlateColor_5, bool CallFunc_PartnerIsOutOfGame_bPartnerIsOutOfGame, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo_6, const struct FSlateColor& K2Node_MakeStruct_SlateColor_6, class UAGPartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_IsInParty_ReturnValue, class UAGPartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, bool CallFunc_IsPartyLeader_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_MainMenu_PlayButton_C", "Btn_Change_Status");

	Params::UWB_MainMenu_PlayButton_C_Btn_Change_Status_Params Parms{};

	Parms.CurrentStatus = CurrentStatus;
	Parms.bIsInParty = bIsInParty;
	Parms.bIsPartyLeader = bIsPartyLeader;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.K2Node_MakeStruct_SlateFontInfo = K2Node_MakeStruct_SlateFontInfo;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.K2Node_MakeStruct_SlateFontInfo_1 = K2Node_MakeStruct_SlateFontInfo_1;
	Parms.K2Node_MakeStruct_SlateColor_2 = K2Node_MakeStruct_SlateColor_2;
	Parms.K2Node_MakeStruct_SlateFontInfo_2 = K2Node_MakeStruct_SlateFontInfo_2;
	Parms.K2Node_MakeStruct_SlateColor_3 = K2Node_MakeStruct_SlateColor_3;
	Parms.K2Node_MakeStruct_SlateFontInfo_3 = K2Node_MakeStruct_SlateFontInfo_3;
	Parms.K2Node_MakeStruct_SlateColor_4 = K2Node_MakeStruct_SlateColor_4;
	Parms.K2Node_MakeStruct_SlateFontInfo_4 = K2Node_MakeStruct_SlateFontInfo_4;
	Parms.K2Node_MakeStruct_SlateFontInfo_5 = K2Node_MakeStruct_SlateFontInfo_5;
	Parms.K2Node_MakeStruct_SlateColor_5 = K2Node_MakeStruct_SlateColor_5;
	Parms.CallFunc_PartnerIsOutOfGame_bPartnerIsOutOfGame = CallFunc_PartnerIsOutOfGame_bPartnerIsOutOfGame;
	Parms.K2Node_MakeStruct_SlateFontInfo_6 = K2Node_MakeStruct_SlateFontInfo_6;
	Parms.K2Node_MakeStruct_SlateColor_6 = K2Node_MakeStruct_SlateColor_6;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_IsInParty_ReturnValue = CallFunc_IsInParty_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
	Parms.CallFunc_IsPartyLeader_ReturnValue = CallFunc_IsPartyLeader_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_MainMenu_PlayButton.WB_MainMenu_PlayButton_C.BndEvt__Button_55_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_MainMenu_PlayButton_C::BndEvt__Button_55_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_MainMenu_PlayButton_C", "BndEvt__Button_55_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_MainMenu_PlayButton.WB_MainMenu_PlayButton_C.BndEvt__Button_55_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_MainMenu_PlayButton_C::BndEvt__Button_55_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_MainMenu_PlayButton_C", "BndEvt__Button_55_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_MainMenu_PlayButton.WB_MainMenu_PlayButton_C.BndEvt__Button_55_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_MainMenu_PlayButton_C::BndEvt__Button_55_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_MainMenu_PlayButton_C", "BndEvt__Button_55_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_MainMenu_PlayButton.WB_MainMenu_PlayButton_C.ChangeOfStatus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMatchmakingStatus      Status                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_MainMenu_PlayButton_C::ChangeOfStatus(enum class EMatchmakingStatus Status)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_MainMenu_PlayButton_C", "ChangeOfStatus");

	Params::UWB_MainMenu_PlayButton_C_ChangeOfStatus_Params Parms{};

	Parms.Status = Status;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_MainMenu_PlayButton.WB_MainMenu_PlayButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWB_MainMenu_PlayButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_MainMenu_PlayButton_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_MainMenu_PlayButton.WB_MainMenu_PlayButton_C.OnPartyMemberInMatchStatusChangedWs
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      UserId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               bIsInGame                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_MainMenu_PlayButton_C::OnPartyMemberInMatchStatusChangedWs(const class FString& UserId, bool bIsInGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_MainMenu_PlayButton_C", "OnPartyMemberInMatchStatusChangedWs");

	Params::UWB_MainMenu_PlayButton_C_OnPartyMemberInMatchStatusChangedWs_Params Parms{};

	Parms.UserId = UserId;
	Parms.bIsInGame = bIsInGame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_MainMenu_PlayButton.WB_MainMenu_PlayButton_C.ExecuteUbergraph_WB_MainMenu_PlayButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMatchmakingStatus      K2Node_CustomEvent_Status                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAGPartySubsystem*           CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_UserId                                        (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bIsInGame                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPartyLeader_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInParty_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UAGPartySubsystem*           CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAGPartySubsystem*           CallFunc_GetGameInstanceSubsystem_ReturnValue_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInParty_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPartyLeader_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInParty_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAGPartySubsystem*           CallFunc_GetGameInstanceSubsystem_ReturnValue_3                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_MainMenu_PlayButton_C::ExecuteUbergraph_WB_MainMenu_PlayButton(int32 EntryPoint, enum class EMatchmakingStatus K2Node_CustomEvent_Status, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, class UAGPartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, const class FString& K2Node_CustomEvent_UserId, bool K2Node_CustomEvent_bIsInGame, bool CallFunc_IsPartyLeader_ReturnValue, bool CallFunc_IsInParty_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAGPartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, class UAGPartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, bool CallFunc_IsInParty_ReturnValue_1, bool CallFunc_IsPartyLeader_ReturnValue_1, bool CallFunc_IsInParty_ReturnValue_2, class UAGPartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_MainMenu_PlayButton_C", "ExecuteUbergraph_WB_MainMenu_PlayButton");

	Params::UWB_MainMenu_PlayButton_C_ExecuteUbergraph_WB_MainMenu_PlayButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Status = K2Node_CustomEvent_Status;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_1 = CallFunc_PlayAnimationForward_ReturnValue_1;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.K2Node_CustomEvent_UserId = K2Node_CustomEvent_UserId;
	Parms.K2Node_CustomEvent_bIsInGame = K2Node_CustomEvent_bIsInGame;
	Parms.CallFunc_IsPartyLeader_ReturnValue = CallFunc_IsPartyLeader_ReturnValue;
	Parms.CallFunc_IsInParty_ReturnValue = CallFunc_IsInParty_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_2 = CallFunc_GetGameInstanceSubsystem_ReturnValue_2;
	Parms.CallFunc_IsInParty_ReturnValue_1 = CallFunc_IsInParty_ReturnValue_1;
	Parms.CallFunc_IsPartyLeader_ReturnValue_1 = CallFunc_IsPartyLeader_ReturnValue_1;
	Parms.CallFunc_IsInParty_ReturnValue_2 = CallFunc_IsInParty_ReturnValue_2;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_3 = CallFunc_GetGameInstanceSubsystem_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_MainMenu_PlayButton.WB_MainMenu_PlayButton_C.LeaveParty__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_MainMenu_PlayButton_C::LeaveParty__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_MainMenu_PlayButton_C", "LeaveParty__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_MainMenu_PlayButton.WB_MainMenu_PlayButton_C.Clicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_MainMenu_PlayButton_C::Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_MainMenu_PlayButton_C", "Clicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


