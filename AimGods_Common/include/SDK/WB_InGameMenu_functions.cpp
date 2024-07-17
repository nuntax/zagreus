#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_InGameMenu.WB_InGameMenu_C
// (None)

class UClass* UWB_InGameMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_InGameMenu_C");

	return Clss;
}


// WB_InGameMenu_C WB_InGameMenu.Default__WB_InGameMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_InGameMenu_C* UWB_InGameMenu_C::GetDefaultObj()
{
	static class UWB_InGameMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_InGameMenu_C*>(UWB_InGameMenu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_InGameMenu.WB_InGameMenu_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                   InKeyEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (HasGetValueTypeHash)
// class FText                        CallFunc_Key_GetDisplayName_ReturnValue                          (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)

struct FEventReply UWB_InGameMenu_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FKey& CallFunc_GetKey_ReturnValue, class FText CallFunc_Key_GetDisplayName_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_InGameMenu_C", "OnKeyDown");

	Params::UWB_InGameMenu_C_OnKeyDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_GetKey_ReturnValue = CallFunc_GetKey_ReturnValue;
	Parms.CallFunc_Key_GetDisplayName_ReturnValue = CallFunc_Key_GetDisplayName_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_InGameMenu.WB_InGameMenu_C.ReturnToGame
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_InGameMenu_C::ReturnToGame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_InGameMenu_C", "ReturnToGame");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_InGameMenu.WB_InGameMenu_C.OnKeyPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWB_InGameMenu_C::OnKeyPressed(const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_InGameMenu_C", "OnKeyPressed");

	Params::UWB_InGameMenu_C_OnKeyPressed_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_InGameMenu.WB_InGameMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWB_InGameMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_InGameMenu_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_InGameMenu.WB_InGameMenu_C.OnButtonHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UButton*                     Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*                  Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_InGameMenu_C::OnButtonHovered(class UButton* Button, class UTextBlock* Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_InGameMenu_C", "OnButtonHovered");

	Params::UWB_InGameMenu_C_OnButtonHovered_Params Parms{};

	Parms.Button = Button;
	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_InGameMenu.WB_InGameMenu_C.OnButtonUnhovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UButton*                     Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*                  Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_InGameMenu_C::OnButtonUnhovered(class UButton* Button, class UTextBlock* Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_InGameMenu_C", "OnButtonUnhovered");

	Params::UWB_InGameMenu_C_OnButtonUnhovered_Params Parms{};

	Parms.Button = Button;
	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_InGameMenu.WB_InGameMenu_C.BndEvt__WB_Btn_Return_K2Node_ComponentBoundEvent_15_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_InGameMenu_C::BndEvt__WB_Btn_Return_K2Node_ComponentBoundEvent_15_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_InGameMenu_C", "BndEvt__WB_Btn_Return_K2Node_ComponentBoundEvent_15_Clicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_InGameMenu.WB_InGameMenu_C.BndEvt__WB_Btn_Report_K2Node_ComponentBoundEvent_16_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_InGameMenu_C::BndEvt__WB_Btn_Report_K2Node_ComponentBoundEvent_16_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_InGameMenu_C", "BndEvt__WB_Btn_Report_K2Node_ComponentBoundEvent_16_Clicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_InGameMenu.WB_InGameMenu_C.BndEvt__WB_Btn_MainMenu_K2Node_ComponentBoundEvent_17_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_InGameMenu_C::BndEvt__WB_Btn_MainMenu_K2Node_ComponentBoundEvent_17_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_InGameMenu_C", "BndEvt__WB_Btn_MainMenu_K2Node_ComponentBoundEvent_17_Clicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_InGameMenu.WB_InGameMenu_C.BndEvt__WB_Btn_Quit_K2Node_ComponentBoundEvent_18_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_InGameMenu_C::BndEvt__WB_Btn_Quit_K2Node_ComponentBoundEvent_18_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_InGameMenu_C", "BndEvt__WB_Btn_Quit_K2Node_ComponentBoundEvent_18_Clicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_InGameMenu.WB_InGameMenu_C.BndEvt__WB_Btn_Settings_K2Node_ComponentBoundEvent_19_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_InGameMenu_C::BndEvt__WB_Btn_Settings_K2Node_ComponentBoundEvent_19_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_InGameMenu_C", "BndEvt__WB_Btn_Settings_K2Node_ComponentBoundEvent_19_Clicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_InGameMenu.WB_InGameMenu_C.ExecuteUbergraph_WB_InGameMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_CustomEvent_Key                                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UButton*                     K2Node_CustomEvent_Button_1                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*                  K2Node_CustomEvent_Text_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// class UButton*                     K2Node_CustomEvent_Button                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*                  K2Node_CustomEvent_Text                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_AGPlayerController_C*    K2Node_DynamicCast_AsBP_AGPlayer_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_AGGameInstance_C*        K2Node_DynamicCast_AsBP_AGGame_Instance                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_PlayerReportPopup_C*     CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_InGameMenu_C::ExecuteUbergraph_WB_InGameMenu(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, const class FString& K2Node_CustomEvent_Key, bool K2Node_SwitchString_CmpSuccess, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UButton* K2Node_CustomEvent_Button_1, class UTextBlock* K2Node_CustomEvent_Text_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor, class UButton* K2Node_CustomEvent_Button, class UTextBlock* K2Node_CustomEvent_Text, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ABP_AGPlayerController_C* K2Node_DynamicCast_AsBP_AGPlayer_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_AGGameInstance_C* K2Node_DynamicCast_AsBP_AGGame_Instance, bool K2Node_DynamicCast_bSuccess_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UWB_PlayerReportPopup_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_InGameMenu_C", "ExecuteUbergraph_WB_InGameMenu");

	Params::UWB_InGameMenu_C_ExecuteUbergraph_WB_InGameMenu_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_Key = K2Node_CustomEvent_Key;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_CustomEvent_Button_1 = K2Node_CustomEvent_Button_1;
	Parms.K2Node_CustomEvent_Text_1 = K2Node_CustomEvent_Text_1;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_CustomEvent_Button = K2Node_CustomEvent_Button;
	Parms.K2Node_CustomEvent_Text = K2Node_CustomEvent_Text;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_AGPlayer_Controller = K2Node_DynamicCast_AsBP_AGPlayer_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_AGGame_Instance = K2Node_DynamicCast_AsBP_AGGame_Instance;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


