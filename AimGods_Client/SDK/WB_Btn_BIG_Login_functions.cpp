#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_Btn_BIG_Login.WB_Btn_BIG_Login_C
// (None)

class UClass* UWB_Btn_BIG_Login_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_Btn_BIG_Login_C");

	return Clss;
}


// WB_Btn_BIG_Login_C WB_Btn_BIG_Login.Default__WB_Btn_BIG_Login_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_Btn_BIG_Login_C* UWB_Btn_BIG_Login_C::GetDefaultObj()
{
	static class UWB_Btn_BIG_Login_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_Btn_BIG_Login_C*>(UWB_Btn_BIG_Login_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_Btn_BIG_Login.WB_Btn_BIG_Login_C.Btn_Change_Status
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Leader                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsReady_                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               AllPlayersReady_                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EMatchmakingStatus      CurrentStatus                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo                                  (HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo_1                                (HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_2                                   (None)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo_2                                (HasGetValueTypeHash)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo_3                                (HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_3                                   (None)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo_4                                (HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_4                                   (None)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo_5                                (HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_5                                   (None)

void UWB_Btn_BIG_Login_C::Btn_Change_Status(bool Leader, bool IsReady_, bool AllPlayersReady_, enum class EMatchmakingStatus CurrentStatus, const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool K2Node_SwitchEnum_CmpSuccess, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo_2, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo_3, const struct FSlateColor& K2Node_MakeStruct_SlateColor_3, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo_4, const struct FSlateColor& K2Node_MakeStruct_SlateColor_4, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo_5, const struct FSlateColor& K2Node_MakeStruct_SlateColor_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Btn_BIG_Login_C", "Btn_Change_Status");

	Params::UWB_Btn_BIG_Login_C_Btn_Change_Status_Params Parms{};

	Parms.Leader = Leader;
	Parms.IsReady_ = IsReady_;
	Parms.AllPlayersReady_ = AllPlayersReady_;
	Parms.CurrentStatus = CurrentStatus;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_MakeStruct_SlateFontInfo = K2Node_MakeStruct_SlateFontInfo;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.K2Node_MakeStruct_SlateFontInfo_1 = K2Node_MakeStruct_SlateFontInfo_1;
	Parms.K2Node_MakeStruct_SlateColor_2 = K2Node_MakeStruct_SlateColor_2;
	Parms.K2Node_MakeStruct_SlateFontInfo_2 = K2Node_MakeStruct_SlateFontInfo_2;
	Parms.K2Node_MakeStruct_SlateFontInfo_3 = K2Node_MakeStruct_SlateFontInfo_3;
	Parms.K2Node_MakeStruct_SlateColor_3 = K2Node_MakeStruct_SlateColor_3;
	Parms.K2Node_MakeStruct_SlateFontInfo_4 = K2Node_MakeStruct_SlateFontInfo_4;
	Parms.K2Node_MakeStruct_SlateColor_4 = K2Node_MakeStruct_SlateColor_4;
	Parms.K2Node_MakeStruct_SlateFontInfo_5 = K2Node_MakeStruct_SlateFontInfo_5;
	Parms.K2Node_MakeStruct_SlateColor_5 = K2Node_MakeStruct_SlateColor_5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Btn_BIG_Login.WB_Btn_BIG_Login_C.BndEvt__Button_55_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_Btn_BIG_Login_C::BndEvt__Button_55_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Btn_BIG_Login_C", "BndEvt__Button_55_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Btn_BIG_Login.WB_Btn_BIG_Login_C.BndEvt__Button_55_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_Btn_BIG_Login_C::BndEvt__Button_55_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Btn_BIG_Login_C", "BndEvt__Button_55_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Btn_BIG_Login.WB_Btn_BIG_Login_C.BndEvt__Button_55_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_Btn_BIG_Login_C::BndEvt__Button_55_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Btn_BIG_Login_C", "BndEvt__Button_55_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Btn_BIG_Login.WB_Btn_BIG_Login_C.ChangeOfStatus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMatchmakingStatus      Status                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Btn_BIG_Login_C::ChangeOfStatus(enum class EMatchmakingStatus Status)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Btn_BIG_Login_C", "ChangeOfStatus");

	Params::UWB_Btn_BIG_Login_C_ChangeOfStatus_Params Parms{};

	Parms.Status = Status;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Btn_BIG_Login.WB_Btn_BIG_Login_C.ExecuteUbergraph_WB_Btn_BIG_Login
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMatchmakingStatus      K2Node_CustomEvent_Status                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Btn_BIG_Login_C::ExecuteUbergraph_WB_Btn_BIG_Login(int32 EntryPoint, enum class EMatchmakingStatus K2Node_CustomEvent_Status, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Btn_BIG_Login_C", "ExecuteUbergraph_WB_Btn_BIG_Login");

	Params::UWB_Btn_BIG_Login_C_ExecuteUbergraph_WB_Btn_BIG_Login_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Status = K2Node_CustomEvent_Status;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_1 = CallFunc_PlayAnimationForward_ReturnValue_1;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Btn_BIG_Login.WB_Btn_BIG_Login_C.LeaveParty__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Btn_BIG_Login_C::LeaveParty__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Btn_BIG_Login_C", "LeaveParty__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Btn_BIG_Login.WB_Btn_BIG_Login_C.Clicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Btn_BIG_Login_C::Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Btn_BIG_Login_C", "Clicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


