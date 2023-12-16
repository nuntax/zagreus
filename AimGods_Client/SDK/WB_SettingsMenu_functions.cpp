#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_SettingsMenu.WB_SettingsMenu_C
// (None)

class UClass* UWB_SettingsMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_SettingsMenu_C");

	return Clss;
}


// WB_SettingsMenu_C WB_SettingsMenu.Default__WB_SettingsMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_SettingsMenu_C* UWB_SettingsMenu_C::GetDefaultObj()
{
	static class UWB_SettingsMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_SettingsMenu_C*>(UWB_SettingsMenu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_SettingsMenu.WB_SettingsMenu_C.Get_ResetDefaultsButton_bIsEnabled_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UWB_SettingsMenu_C::Get_ResetDefaultsButton_bIsEnabled_0(int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "Get_ResetDefaultsButton_bIsEnabled_0");

	Params::UWB_SettingsMenu_C_Get_ResetDefaultsButton_bIsEnabled_0_Params Parms{};

	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.GetViewDistance
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetViewDistanceQuality_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetSettingLevelText_SettingLevelText                    (None)

class FText UWB_SettingsMenu_C::GetViewDistance(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetViewDistanceQuality_ReturnValue, class FText CallFunc_GetSettingLevelText_SettingLevelText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "GetViewDistance");

	Params::UWB_SettingsMenu_C_GetViewDistance_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetViewDistanceQuality_ReturnValue = CallFunc_GetViewDistanceQuality_ReturnValue;
	Parms.CallFunc_GetSettingLevelText_SettingLevelText = CallFunc_GetSettingLevelText_SettingLevelText;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                   InKeyEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (HasGetValueTypeHash)
// class FText                        CallFunc_Key_GetDisplayName_ReturnValue                          (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)

struct FEventReply UWB_SettingsMenu_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FKey& CallFunc_GetKey_ReturnValue, class FText CallFunc_Key_GetDisplayName_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "OnKeyDown");

	Params::UWB_SettingsMenu_C_OnKeyDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_GetKey_ReturnValue = CallFunc_GetKey_ReturnValue;
	Parms.CallFunc_Key_GetDisplayName_ReturnValue = CallFunc_Key_GetDisplayName_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.GetMouseSnsitivitySliderToolTipText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            (None)

class FText UWB_SettingsMenu_C::GetMouseSnsitivitySliderToolTipText(class FText CallFunc_Conv_FloatToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "GetMouseSnsitivitySliderToolTipText");

	Params::UWB_SettingsMenu_C_GetMouseSnsitivitySliderToolTipText_Params Parms{};

	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.GetResolutionWindowVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UWB_SettingsMenu_C::GetResolutionWindowVisibility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "GetResolutionWindowVisibility");

	Params::UWB_SettingsMenu_C_GetResolutionWindowVisibility_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.GetHDRHBToolTipText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SupportsHDRDisplayOutput_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)

class FText UWB_SettingsMenu_C::GetHDRHBToolTipText(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool CallFunc_SupportsHDRDisplayOutput_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "GetHDRHBToolTipText");

	Params::UWB_SettingsMenu_C_GetHDRHBToolTipText_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_SupportsHDRDisplayOutput_ReturnValue = CallFunc_SupportsHDRDisplayOutput_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.GetHDRHBIsEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SupportsHDRDisplayOutput_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UWB_SettingsMenu_C::GetHDRHBIsEnabled(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool CallFunc_SupportsHDRDisplayOutput_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "GetHDRHBIsEnabled");

	Params::UWB_SettingsMenu_C_GetHDRHBIsEnabled_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_SupportsHDRDisplayOutput_ReturnValue = CallFunc_SupportsHDRDisplayOutput_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.GetLessOverallQualityIsEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetOverallScalabilityLevel_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UWB_SettingsMenu_C::GetLessOverallQualityIsEnabled(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetOverallScalabilityLevel_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "GetLessOverallQualityIsEnabled");

	Params::UWB_SettingsMenu_C_GetLessOverallQualityIsEnabled_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetOverallScalabilityLevel_ReturnValue = CallFunc_GetOverallScalabilityLevel_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.GetMoreOverallQualityIsEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetOverallScalabilityLevel_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UWB_SettingsMenu_C::GetMoreOverallQualityIsEnabled(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetOverallScalabilityLevel_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "GetMoreOverallQualityIsEnabled");

	Params::UWB_SettingsMenu_C_GetMoreOverallQualityIsEnabled_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetOverallScalabilityLevel_ReturnValue = CallFunc_GetOverallScalabilityLevel_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.GetOverallQuality
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetOverallScalabilityLevel_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetSettingLevelText_SettingLevelText                    (None)

class FText UWB_SettingsMenu_C::GetOverallQuality(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetOverallScalabilityLevel_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class FText CallFunc_GetSettingLevelText_SettingLevelText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "GetOverallQuality");

	Params::UWB_SettingsMenu_C_GetOverallQuality_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetOverallScalabilityLevel_ReturnValue = CallFunc_GetOverallScalabilityLevel_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetSettingLevelText_SettingLevelText = CallFunc_GetSettingLevelText_SettingLevelText;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.GenerateSuportedResolutionsComboBox
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>              Options                                                          (Edit, BlueprintVisible, ZeroConstructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   CallFunc_GetScreenResolution_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FIntPoint>           CallFunc_GetSupportedFullscreenResolutions_Resolutions           (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_GetSupportedFullscreenResolutions_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// struct FIntPoint                   CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_2                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_3                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_SettingsMenu_C::GenerateSuportedResolutionsComboBox(const TArray<class FString>& Options, int32 Temp_int_Array_Index_Variable, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct FIntPoint& CallFunc_GetScreenResolution_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, TArray<struct FIntPoint>& CallFunc_GetSupportedFullscreenResolutions_Resolutions, bool CallFunc_GetSupportedFullscreenResolutions_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const struct FIntPoint& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, int32 CallFunc_Array_AddUnique_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "GenerateSuportedResolutionsComboBox");

	Params::UWB_SettingsMenu_C_GenerateSuportedResolutionsComboBox_Params Parms{};

	Parms.Options = Options;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetScreenResolution_ReturnValue = CallFunc_GetScreenResolution_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetSupportedFullscreenResolutions_Resolutions = CallFunc_GetSupportedFullscreenResolutions_Resolutions;
	Parms.CallFunc_GetSupportedFullscreenResolutions_ReturnValue = CallFunc_GetSupportedFullscreenResolutions_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_2 = CallFunc_Conv_IntToString_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_3 = CallFunc_Conv_IntToString_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.GetFullscreenMode
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWindowMode             CallFunc_GetFullscreenMode_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

class FText UWB_SettingsMenu_C::GetFullscreenMode(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, enum class EWindowMode CallFunc_GetFullscreenMode_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "GetFullscreenMode");

	Params::UWB_SettingsMenu_C_GetFullscreenMode_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetFullscreenMode_ReturnValue = CallFunc_GetFullscreenMode_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.GetResolutionScaleSliderToolTipText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetResolutionScaleInformationEx_CurrentScaleNormalized  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetResolutionScaleInformationEx_CurrentScaleValue       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetResolutionScaleInformationEx_MinScaleValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetResolutionScaleInformationEx_MaxScaleValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

class FText UWB_SettingsMenu_C::GetResolutionScaleSliderToolTipText(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, float CallFunc_GetResolutionScaleInformationEx_CurrentScaleNormalized, float CallFunc_GetResolutionScaleInformationEx_CurrentScaleValue, float CallFunc_GetResolutionScaleInformationEx_MinScaleValue, float CallFunc_GetResolutionScaleInformationEx_MaxScaleValue, float CallFunc_Multiply_FloatFloat_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "GetResolutionScaleSliderToolTipText");

	Params::UWB_SettingsMenu_C_GetResolutionScaleSliderToolTipText_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetResolutionScaleInformationEx_CurrentScaleNormalized = CallFunc_GetResolutionScaleInformationEx_CurrentScaleNormalized;
	Parms.CallFunc_GetResolutionScaleInformationEx_CurrentScaleValue = CallFunc_GetResolutionScaleInformationEx_CurrentScaleValue;
	Parms.CallFunc_GetResolutionScaleInformationEx_MinScaleValue = CallFunc_GetResolutionScaleInformationEx_MinScaleValue;
	Parms.CallFunc_GetResolutionScaleInformationEx_MaxScaleValue = CallFunc_GetResolutionScaleInformationEx_MaxScaleValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.GetResolutionScaleSliderValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UWB_SettingsMenu_C::GetResolutionScaleSliderValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "GetResolutionScaleSliderValue");

	Params::UWB_SettingsMenu_C_GetResolutionScaleSliderValue_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.GetLessFrameLimitIsEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFrameRateLimit_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UWB_SettingsMenu_C::GetLessFrameLimitIsEnabled(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, float CallFunc_GetFrameRateLimit_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "GetLessFrameLimitIsEnabled");

	Params::UWB_SettingsMenu_C_GetLessFrameLimitIsEnabled_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetFrameRateLimit_ReturnValue = CallFunc_GetFrameRateLimit_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.GetMoreFrameLimitIsEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFrameRateLimit_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UWB_SettingsMenu_C::GetMoreFrameLimitIsEnabled(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, float CallFunc_GetFrameRateLimit_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "GetMoreFrameLimitIsEnabled");

	Params::UWB_SettingsMenu_C_GetMoreFrameLimitIsEnabled_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetFrameRateLimit_ReturnValue = CallFunc_GetFrameRateLimit_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.GetFrameRateLimit
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFrameRateLimit_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            (None)

class FText UWB_SettingsMenu_C::GetFrameRateLimit(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, float CallFunc_GetFrameRateLimit_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "GetFrameRateLimit");

	Params::UWB_SettingsMenu_C_GetFrameRateLimit_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetFrameRateLimit_ReturnValue = CallFunc_GetFrameRateLimit_ReturnValue;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.GetLessAudioQualityIsEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAudioQualityLevel_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UWB_SettingsMenu_C::GetLessAudioQualityIsEnabled(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetAudioQualityLevel_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "GetLessAudioQualityIsEnabled");

	Params::UWB_SettingsMenu_C_GetLessAudioQualityIsEnabled_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetAudioQualityLevel_ReturnValue = CallFunc_GetAudioQualityLevel_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.GetMoreAudioQualityIsEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAudioQualityLevel_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UWB_SettingsMenu_C::GetMoreAudioQualityIsEnabled(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetAudioQualityLevel_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "GetMoreAudioQualityIsEnabled");

	Params::UWB_SettingsMenu_C_GetMoreAudioQualityIsEnabled_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetAudioQualityLevel_ReturnValue = CallFunc_GetAudioQualityLevel_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.GetAudioQuality
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAudioQualityLevel_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetSettingLevelText_SettingLevelText                    (None)

class FText UWB_SettingsMenu_C::GetAudioQuality(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetAudioQualityLevel_ReturnValue, class FText CallFunc_GetSettingLevelText_SettingLevelText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "GetAudioQuality");

	Params::UWB_SettingsMenu_C_GetAudioQuality_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetAudioQualityLevel_ReturnValue = CallFunc_GetAudioQualityLevel_ReturnValue;
	Parms.CallFunc_GetSettingLevelText_SettingLevelText = CallFunc_GetSettingLevelText_SettingLevelText;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.GetMoreVisualEffectsIsEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetVisualEffectQuality_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UWB_SettingsMenu_C::GetMoreVisualEffectsIsEnabled(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetVisualEffectQuality_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "GetMoreVisualEffectsIsEnabled");

	Params::UWB_SettingsMenu_C_GetMoreVisualEffectsIsEnabled_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetVisualEffectQuality_ReturnValue = CallFunc_GetVisualEffectQuality_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.GetLessVisualEffectsIsEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetVisualEffectQuality_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UWB_SettingsMenu_C::GetLessVisualEffectsIsEnabled(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetVisualEffectQuality_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "GetLessVisualEffectsIsEnabled");

	Params::UWB_SettingsMenu_C_GetLessVisualEffectsIsEnabled_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetVisualEffectQuality_ReturnValue = CallFunc_GetVisualEffectQuality_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.GetVisualEffectsQuality
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetVisualEffectQuality_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetSettingLevelText_SettingLevelText                    (None)

class FText UWB_SettingsMenu_C::GetVisualEffectsQuality(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetVisualEffectQuality_ReturnValue, class FText CallFunc_GetSettingLevelText_SettingLevelText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "GetVisualEffectsQuality");

	Params::UWB_SettingsMenu_C_GetVisualEffectsQuality_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetVisualEffectQuality_ReturnValue = CallFunc_GetVisualEffectQuality_ReturnValue;
	Parms.CallFunc_GetSettingLevelText_SettingLevelText = CallFunc_GetSettingLevelText_SettingLevelText;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.GetLessViewDistanceIsEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetViewDistanceQuality_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UWB_SettingsMenu_C::GetLessViewDistanceIsEnabled(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetViewDistanceQuality_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "GetLessViewDistanceIsEnabled");

	Params::UWB_SettingsMenu_C_GetLessViewDistanceIsEnabled_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetViewDistanceQuality_ReturnValue = CallFunc_GetViewDistanceQuality_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.GetMoreViewDistancebIsEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetViewDistanceQuality_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UWB_SettingsMenu_C::GetMoreViewDistancebIsEnabled(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetViewDistanceQuality_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "GetMoreViewDistancebIsEnabled");

	Params::UWB_SettingsMenu_C_GetMoreViewDistancebIsEnabled_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetViewDistanceQuality_ReturnValue = CallFunc_GetViewDistanceQuality_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.GetFoliageQuality
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetFoliageQuality_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetSettingLevelText_SettingLevelText                    (None)

class FText UWB_SettingsMenu_C::GetFoliageQuality(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetFoliageQuality_ReturnValue, class FText CallFunc_GetSettingLevelText_SettingLevelText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "GetFoliageQuality");

	Params::UWB_SettingsMenu_C_GetFoliageQuality_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetFoliageQuality_ReturnValue = CallFunc_GetFoliageQuality_ReturnValue;
	Parms.CallFunc_GetSettingLevelText_SettingLevelText = CallFunc_GetSettingLevelText_SettingLevelText;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.GetLessFoliageIsEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetFoliageQuality_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UWB_SettingsMenu_C::GetLessFoliageIsEnabled(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetFoliageQuality_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "GetLessFoliageIsEnabled");

	Params::UWB_SettingsMenu_C_GetLessFoliageIsEnabled_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetFoliageQuality_ReturnValue = CallFunc_GetFoliageQuality_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.GetMoreFoliageIsEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetFoliageQuality_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UWB_SettingsMenu_C::GetMoreFoliageIsEnabled(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetFoliageQuality_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "GetMoreFoliageIsEnabled");

	Params::UWB_SettingsMenu_C_GetMoreFoliageIsEnabled_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetFoliageQuality_ReturnValue = CallFunc_GetFoliageQuality_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.GetLessPostProcessingIsEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPostProcessingQuality_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UWB_SettingsMenu_C::GetLessPostProcessingIsEnabled(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetPostProcessingQuality_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "GetLessPostProcessingIsEnabled");

	Params::UWB_SettingsMenu_C_GetLessPostProcessingIsEnabled_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetPostProcessingQuality_ReturnValue = CallFunc_GetPostProcessingQuality_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.GetMorePostProcessingIsEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPostProcessingQuality_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UWB_SettingsMenu_C::GetMorePostProcessingIsEnabled(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetPostProcessingQuality_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "GetMorePostProcessingIsEnabled");

	Params::UWB_SettingsMenu_C_GetMorePostProcessingIsEnabled_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetPostProcessingQuality_ReturnValue = CallFunc_GetPostProcessingQuality_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.GetPostProcessingQuality
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPostProcessingQuality_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetSettingLevelText_SettingLevelText                    (None)

class FText UWB_SettingsMenu_C::GetPostProcessingQuality(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetPostProcessingQuality_ReturnValue, class FText CallFunc_GetSettingLevelText_SettingLevelText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "GetPostProcessingQuality");

	Params::UWB_SettingsMenu_C_GetPostProcessingQuality_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetPostProcessingQuality_ReturnValue = CallFunc_GetPostProcessingQuality_ReturnValue;
	Parms.CallFunc_GetSettingLevelText_SettingLevelText = CallFunc_GetSettingLevelText_SettingLevelText;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.GetAntiAliasingQuality
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAntiAliasingQuality_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetSettingLevelText_SettingLevelText                    (None)

class FText UWB_SettingsMenu_C::GetAntiAliasingQuality(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetAntiAliasingQuality_ReturnValue, class FText CallFunc_GetSettingLevelText_SettingLevelText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "GetAntiAliasingQuality");

	Params::UWB_SettingsMenu_C_GetAntiAliasingQuality_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetAntiAliasingQuality_ReturnValue = CallFunc_GetAntiAliasingQuality_ReturnValue;
	Parms.CallFunc_GetSettingLevelText_SettingLevelText = CallFunc_GetSettingLevelText_SettingLevelText;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.GetLessAntiAliasingIsEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAntiAliasingQuality_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UWB_SettingsMenu_C::GetLessAntiAliasingIsEnabled(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetAntiAliasingQuality_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "GetLessAntiAliasingIsEnabled");

	Params::UWB_SettingsMenu_C_GetLessAntiAliasingIsEnabled_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetAntiAliasingQuality_ReturnValue = CallFunc_GetAntiAliasingQuality_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.GetMoreAntiAliasingIsEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAntiAliasingQuality_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UWB_SettingsMenu_C::GetMoreAntiAliasingIsEnabled(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetAntiAliasingQuality_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "GetMoreAntiAliasingIsEnabled");

	Params::UWB_SettingsMenu_C_GetMoreAntiAliasingIsEnabled_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetAntiAliasingQuality_ReturnValue = CallFunc_GetAntiAliasingQuality_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.GetLessTextureQualityIsEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTextureQuality_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UWB_SettingsMenu_C::GetLessTextureQualityIsEnabled(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetTextureQuality_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "GetLessTextureQualityIsEnabled");

	Params::UWB_SettingsMenu_C_GetLessTextureQualityIsEnabled_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetTextureQuality_ReturnValue = CallFunc_GetTextureQuality_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.GetMoreTextureQualityIsEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTextureQuality_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UWB_SettingsMenu_C::GetMoreTextureQualityIsEnabled(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetTextureQuality_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "GetMoreTextureQualityIsEnabled");

	Params::UWB_SettingsMenu_C_GetMoreTextureQualityIsEnabled_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetTextureQuality_ReturnValue = CallFunc_GetTextureQuality_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.GetTextureQuality
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTextureQuality_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetSettingLevelText_SettingLevelText                    (None)

class FText UWB_SettingsMenu_C::GetTextureQuality(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetTextureQuality_ReturnValue, class FText CallFunc_GetSettingLevelText_SettingLevelText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "GetTextureQuality");

	Params::UWB_SettingsMenu_C_GetTextureQuality_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetTextureQuality_ReturnValue = CallFunc_GetTextureQuality_ReturnValue;
	Parms.CallFunc_GetSettingLevelText_SettingLevelText = CallFunc_GetSettingLevelText_SettingLevelText;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.GetLessShadowQualityIsEnable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetShadowQuality_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UWB_SettingsMenu_C::GetLessShadowQualityIsEnable(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetShadowQuality_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "GetLessShadowQualityIsEnable");

	Params::UWB_SettingsMenu_C_GetLessShadowQualityIsEnable_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetShadowQuality_ReturnValue = CallFunc_GetShadowQuality_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.GetMoreShadowQualityIsEnable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetShadowQuality_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UWB_SettingsMenu_C::GetMoreShadowQualityIsEnable(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetShadowQuality_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "GetMoreShadowQualityIsEnable");

	Params::UWB_SettingsMenu_C_GetMoreShadowQualityIsEnable_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetShadowQuality_ReturnValue = CallFunc_GetShadowQuality_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.GetSettingLevelText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SettingLevel                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        SettingLevelText                                                 (Parm, OutParm)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_SettingsMenu_C::GetSettingLevelText(int32 SettingLevel, class FText* SettingLevelText, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "GetSettingLevelText");

	Params::UWB_SettingsMenu_C_GetSettingLevelText_Params Parms{};

	Parms.SettingLevel = SettingLevel;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (SettingLevelText != nullptr)
		*SettingLevelText = Parms.SettingLevelText;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.GetShadowQuality
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetShadowQuality_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetSettingLevelText_SettingLevelText                    (None)

class FText UWB_SettingsMenu_C::GetShadowQuality(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetShadowQuality_ReturnValue, class FText CallFunc_GetSettingLevelText_SettingLevelText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "GetShadowQuality");

	Params::UWB_SettingsMenu_C_GetShadowQuality_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetShadowQuality_ReturnValue = CallFunc_GetShadowQuality_ReturnValue;
	Parms.CallFunc_GetSettingLevelText_SettingLevelText = CallFunc_GetSettingLevelText_SettingLevelText;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.SetButtonBackGround
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UButton*                     Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bPressed                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_SettingsMenu_C::SetButtonBackGround(class UButton* Button, bool bPressed, const struct FLinearColor& CallFunc_SelectColor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "SetButtonBackGround");

	Params::UWB_SettingsMenu_C_SetButtonBackGround_Params Parms{};

	Parms.Button = Button;
	Parms.bPressed = bPressed;
	Parms.CallFunc_SelectColor_ReturnValue = CallFunc_SelectColor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__ShowFpsCB_K2Node_ComponentBoundEvent_11_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bIsChecked                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_SettingsMenu_C::BndEvt__ShowFpsCB_K2Node_ComponentBoundEvent_11_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "BndEvt__ShowFpsCB_K2Node_ComponentBoundEvent_11_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::UWB_SettingsMenu_C_BndEvt__ShowFpsCB_K2Node_ComponentBoundEvent_11_OnCheckBoxComponentStateChanged__DelegateSignature_Params Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWB_SettingsMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.InitialSetup
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_SettingsMenu_C::InitialSetup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "InitialSetup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__ApplyResolutionSettingsButton_K2Node_ComponentBoundEvent_33_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_SettingsMenu_C::BndEvt__ApplyResolutionSettingsButton_K2Node_ComponentBoundEvent_33_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "BndEvt__ApplyResolutionSettingsButton_K2Node_ComponentBoundEvent_33_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.ApplyNoResolutionSettingsOnly
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_SettingsMenu_C::ApplyNoResolutionSettingsOnly()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "ApplyNoResolutionSettingsOnly");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.ApplySettings
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_SettingsMenu_C::ApplySettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "ApplySettings");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__DontApplyResolutionSettings_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_SettingsMenu_C::BndEvt__DontApplyResolutionSettings_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "BndEvt__DontApplyResolutionSettings_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.ReturnToGame
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_SettingsMenu_C::ReturnToGame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "ReturnToGame");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.LoadInputSettings
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_SettingsMenu_C::LoadInputSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "LoadInputSettings");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.LoadSettings
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_SettingsMenu_C::LoadSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "LoadSettings");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.SetVolumeSliders
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_SettingsMenu_C::SetVolumeSliders()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "SetVolumeSliders");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.SetPlayerSettings
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_SettingsMenu_C::SetPlayerSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "SetPlayerSettings");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__AmbientVolumeSlider_K2Node_ComponentBoundEvent_48_OnMouseCaptureEndEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_SettingsMenu_C::BndEvt__AmbientVolumeSlider_K2Node_ComponentBoundEvent_48_OnMouseCaptureEndEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "BndEvt__AmbientVolumeSlider_K2Node_ComponentBoundEvent_48_OnMouseCaptureEndEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__CharacterVolumeSlider_K2Node_ComponentBoundEvent_49_OnMouseCaptureEndEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_SettingsMenu_C::BndEvt__CharacterVolumeSlider_K2Node_ComponentBoundEvent_49_OnMouseCaptureEndEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "BndEvt__CharacterVolumeSlider_K2Node_ComponentBoundEvent_49_OnMouseCaptureEndEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__MasterVolumeSlider_K2Node_ComponentBoundEvent_50_OnMouseCaptureEndEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_SettingsMenu_C::BndEvt__MasterVolumeSlider_K2Node_ComponentBoundEvent_50_OnMouseCaptureEndEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "BndEvt__MasterVolumeSlider_K2Node_ComponentBoundEvent_50_OnMouseCaptureEndEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__MusicVolumeSlider_K2Node_ComponentBoundEvent_52_OnMouseCaptureEndEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_SettingsMenu_C::BndEvt__MusicVolumeSlider_K2Node_ComponentBoundEvent_52_OnMouseCaptureEndEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "BndEvt__MusicVolumeSlider_K2Node_ComponentBoundEvent_52_OnMouseCaptureEndEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WeaponVolumeSlider_K2Node_ComponentBoundEvent_53_OnMouseCaptureEndEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_SettingsMenu_C::BndEvt__WeaponVolumeSlider_K2Node_ComponentBoundEvent_53_OnMouseCaptureEndEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "BndEvt__WeaponVolumeSlider_K2Node_ComponentBoundEvent_53_OnMouseCaptureEndEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.OnKeyPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWB_SettingsMenu_C::OnKeyPressed(const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "OnKeyPressed");

	Params::UWB_SettingsMenu_C_OnKeyPressed_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.LoadSettingsWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_SettingsMenu_C::LoadSettingsWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "LoadSettingsWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.UpdateAxisMapping
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_SettingsMenu_C::UpdateAxisMapping()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "UpdateAxisMapping");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.OnButtonHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UButton*                     Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*                  Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_SettingsMenu_C::OnButtonHovered(class UButton* Button, class UTextBlock* Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "OnButtonHovered");

	Params::UWB_SettingsMenu_C_OnButtonHovered_Params Parms{};

	Parms.Button = Button;
	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.OnButtonUnhovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UButton*                     Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*                  Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_SettingsMenu_C::OnButtonUnhovered(class UButton* Button, class UTextBlock* Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "OnButtonUnhovered");

	Params::UWB_SettingsMenu_C_OnButtonUnhovered_Params Parms{};

	Parms.Button = Button;
	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.Update Selected
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_SettingsMenu_C::Update_Selected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "Update Selected");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWB_SettingsMenu_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Btn_Video_K2Node_ComponentBoundEvent_70_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_SettingsMenu_C::BndEvt__WB_Btn_Video_K2Node_ComponentBoundEvent_70_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "BndEvt__WB_Btn_Video_K2Node_ComponentBoundEvent_70_Clicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Btn_MnK_K2Node_ComponentBoundEvent_71_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_SettingsMenu_C::BndEvt__WB_Btn_MnK_K2Node_ComponentBoundEvent_71_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "BndEvt__WB_Btn_MnK_K2Node_ComponentBoundEvent_71_Clicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Btn_Audio_K2Node_ComponentBoundEvent_72_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_SettingsMenu_C::BndEvt__WB_Btn_Audio_K2Node_ComponentBoundEvent_72_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "BndEvt__WB_Btn_Audio_K2Node_ComponentBoundEvent_72_Clicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Btn_Crosshair_K2Node_ComponentBoundEvent_73_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_SettingsMenu_C::BndEvt__WB_Btn_Crosshair_K2Node_ComponentBoundEvent_73_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "BndEvt__WB_Btn_Crosshair_K2Node_ComponentBoundEvent_73_Clicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Btn_Back_K2Node_ComponentBoundEvent_74_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_SettingsMenu_C::BndEvt__WB_Btn_Back_K2Node_ComponentBoundEvent_74_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "BndEvt__WB_Btn_Back_K2Node_ComponentBoundEvent_74_Clicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Btn_Reset_K2Node_ComponentBoundEvent_75_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_SettingsMenu_C::BndEvt__WB_Btn_Reset_K2Node_ComponentBoundEvent_75_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "BndEvt__WB_Btn_Reset_K2Node_ComponentBoundEvent_75_Clicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Btn_Apply_K2Node_ComponentBoundEvent_76_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_SettingsMenu_C::BndEvt__WB_Btn_Apply_K2Node_ComponentBoundEvent_76_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "BndEvt__WB_Btn_Apply_K2Node_ComponentBoundEvent_76_Clicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Btn_Accept_K2Node_ComponentBoundEvent_77_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_SettingsMenu_C::BndEvt__WB_Btn_Accept_K2Node_ComponentBoundEvent_77_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "BndEvt__WB_Btn_Accept_K2Node_ComponentBoundEvent_77_Clicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_DropMenu_Resolution_K2Node_ComponentBoundEvent_1_DropBox_SelectionChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// enum class ESelectInfo             SelectionType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_SettingsMenu_C::BndEvt__WB_Setting_DropMenu_Resolution_K2Node_ComponentBoundEvent_1_DropBox_SelectionChange__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "BndEvt__WB_Setting_DropMenu_Resolution_K2Node_ComponentBoundEvent_1_DropBox_SelectionChange__DelegateSignature");

	Params::UWB_SettingsMenu_C_BndEvt__WB_Setting_DropMenu_Resolution_K2Node_ComponentBoundEvent_1_DropBox_SelectionChange__DelegateSignature_Params Parms{};

	Parms.SelectedItem = SelectedItem;
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_DropMenu_DisplayMode_K2Node_ComponentBoundEvent_3_DropBox_SelectionChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// enum class ESelectInfo             SelectionType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_SettingsMenu_C::BndEvt__WB_Setting_DropMenu_DisplayMode_K2Node_ComponentBoundEvent_3_DropBox_SelectionChange__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "BndEvt__WB_Setting_DropMenu_DisplayMode_K2Node_ComponentBoundEvent_3_DropBox_SelectionChange__DelegateSignature");

	Params::UWB_SettingsMenu_C_BndEvt__WB_Setting_DropMenu_DisplayMode_K2Node_ComponentBoundEvent_3_DropBox_SelectionChange__DelegateSignature_Params Parms{};

	Parms.SelectedItem = SelectedItem;
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Binary_Vsync_K2Node_ComponentBoundEvent_7_Binary_On__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_SettingsMenu_C::BndEvt__WB_Setting_Binary_Vsync_K2Node_ComponentBoundEvent_7_Binary_On__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "BndEvt__WB_Setting_Binary_Vsync_K2Node_ComponentBoundEvent_7_Binary_On__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Binary_Vsync_K2Node_ComponentBoundEvent_9_Binary_Off__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_SettingsMenu_C::BndEvt__WB_Setting_Binary_Vsync_K2Node_ComponentBoundEvent_9_Binary_Off__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "BndEvt__WB_Setting_Binary_Vsync_K2Node_ComponentBoundEvent_9_Binary_Off__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Binary_ShowFPS_K2Node_ComponentBoundEvent_12_Binary_On__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_SettingsMenu_C::BndEvt__WB_Setting_Binary_ShowFPS_K2Node_ComponentBoundEvent_12_Binary_On__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "BndEvt__WB_Setting_Binary_ShowFPS_K2Node_ComponentBoundEvent_12_Binary_On__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Binary_ShowFPS_K2Node_ComponentBoundEvent_13_Binary_Off__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_SettingsMenu_C::BndEvt__WB_Setting_Binary_ShowFPS_K2Node_ComponentBoundEvent_13_Binary_Off__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "BndEvt__WB_Setting_Binary_ShowFPS_K2Node_ComponentBoundEvent_13_Binary_Off__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Binary_DynamicRes_K2Node_ComponentBoundEvent_14_Binary_On__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_SettingsMenu_C::BndEvt__WB_Setting_Binary_DynamicRes_K2Node_ComponentBoundEvent_14_Binary_On__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "BndEvt__WB_Setting_Binary_DynamicRes_K2Node_ComponentBoundEvent_14_Binary_On__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Binary_DynamicRes_K2Node_ComponentBoundEvent_27_Binary_Off__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_SettingsMenu_C::BndEvt__WB_Setting_Binary_DynamicRes_K2Node_ComponentBoundEvent_27_Binary_Off__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "BndEvt__WB_Setting_Binary_DynamicRes_K2Node_ComponentBoundEvent_27_Binary_Off__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Selector_FrameLimit_K2Node_ComponentBoundEvent_34_Selector_Left__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_SettingsMenu_C::BndEvt__WB_Setting_Selector_FrameLimit_K2Node_ComponentBoundEvent_34_Selector_Left__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "BndEvt__WB_Setting_Selector_FrameLimit_K2Node_ComponentBoundEvent_34_Selector_Left__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Selector_FrameLimit_K2Node_ComponentBoundEvent_35_Selector_Right__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_SettingsMenu_C::BndEvt__WB_Setting_Selector_FrameLimit_K2Node_ComponentBoundEvent_35_Selector_Right__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "BndEvt__WB_Setting_Selector_FrameLimit_K2Node_ComponentBoundEvent_35_Selector_Right__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Slider_ResScale_K2Node_ComponentBoundEvent_56_Slider_OnValueChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_SettingsMenu_C::BndEvt__WB_Setting_Slider_ResScale_K2Node_ComponentBoundEvent_56_Slider_OnValueChange__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "BndEvt__WB_Setting_Slider_ResScale_K2Node_ComponentBoundEvent_56_Slider_OnValueChange__DelegateSignature");

	Params::UWB_SettingsMenu_C_BndEvt__WB_Setting_Slider_ResScale_K2Node_ComponentBoundEvent_56_Slider_OnValueChange__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Selector_Overall_K2Node_ComponentBoundEvent_57_Selector_Left__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_SettingsMenu_C::BndEvt__WB_Setting_Selector_Overall_K2Node_ComponentBoundEvent_57_Selector_Left__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "BndEvt__WB_Setting_Selector_Overall_K2Node_ComponentBoundEvent_57_Selector_Left__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Selector_Overall_K2Node_ComponentBoundEvent_58_Selector_Right__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_SettingsMenu_C::BndEvt__WB_Setting_Selector_Overall_K2Node_ComponentBoundEvent_58_Selector_Right__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "BndEvt__WB_Setting_Selector_Overall_K2Node_ComponentBoundEvent_58_Selector_Right__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Selector_FrameLimit_1_K2Node_ComponentBoundEvent_59_Selector_Left__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_SettingsMenu_C::BndEvt__WB_Setting_Selector_FrameLimit_1_K2Node_ComponentBoundEvent_59_Selector_Left__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "BndEvt__WB_Setting_Selector_FrameLimit_1_K2Node_ComponentBoundEvent_59_Selector_Left__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Selector_FrameLimit_1_K2Node_ComponentBoundEvent_60_Selector_Right__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_SettingsMenu_C::BndEvt__WB_Setting_Selector_FrameLimit_1_K2Node_ComponentBoundEvent_60_Selector_Right__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "BndEvt__WB_Setting_Selector_FrameLimit_1_K2Node_ComponentBoundEvent_60_Selector_Right__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.RefreshWidgets
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_SettingsMenu_C::RefreshWidgets()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "RefreshWidgets");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Selector_Effects_K2Node_ComponentBoundEvent_61_Selector_Left__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_SettingsMenu_C::BndEvt__WB_Setting_Selector_Effects_K2Node_ComponentBoundEvent_61_Selector_Left__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "BndEvt__WB_Setting_Selector_Effects_K2Node_ComponentBoundEvent_61_Selector_Left__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Selector_Effects_K2Node_ComponentBoundEvent_62_Selector_Right__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_SettingsMenu_C::BndEvt__WB_Setting_Selector_Effects_K2Node_ComponentBoundEvent_62_Selector_Right__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "BndEvt__WB_Setting_Selector_Effects_K2Node_ComponentBoundEvent_62_Selector_Right__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Selector_AntiAlias_K2Node_ComponentBoundEvent_63_Selector_Left__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_SettingsMenu_C::BndEvt__WB_Setting_Selector_AntiAlias_K2Node_ComponentBoundEvent_63_Selector_Left__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "BndEvt__WB_Setting_Selector_AntiAlias_K2Node_ComponentBoundEvent_63_Selector_Left__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Selector_AntiAlias_K2Node_ComponentBoundEvent_64_Selector_Right__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_SettingsMenu_C::BndEvt__WB_Setting_Selector_AntiAlias_K2Node_ComponentBoundEvent_64_Selector_Right__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "BndEvt__WB_Setting_Selector_AntiAlias_K2Node_ComponentBoundEvent_64_Selector_Right__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Selector_PostProcessing_K2Node_ComponentBoundEvent_65_Selector_Left__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_SettingsMenu_C::BndEvt__WB_Setting_Selector_PostProcessing_K2Node_ComponentBoundEvent_65_Selector_Left__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "BndEvt__WB_Setting_Selector_PostProcessing_K2Node_ComponentBoundEvent_65_Selector_Left__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Selector_PostProcessing_K2Node_ComponentBoundEvent_66_Selector_Right__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_SettingsMenu_C::BndEvt__WB_Setting_Selector_PostProcessing_K2Node_ComponentBoundEvent_66_Selector_Right__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "BndEvt__WB_Setting_Selector_PostProcessing_K2Node_ComponentBoundEvent_66_Selector_Right__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Selector_Shadow_K2Node_ComponentBoundEvent_67_Selector_Right__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_SettingsMenu_C::BndEvt__WB_Setting_Selector_Shadow_K2Node_ComponentBoundEvent_67_Selector_Right__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "BndEvt__WB_Setting_Selector_Shadow_K2Node_ComponentBoundEvent_67_Selector_Right__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Selector_Shadow_K2Node_ComponentBoundEvent_68_Selector_Left__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_SettingsMenu_C::BndEvt__WB_Setting_Selector_Shadow_K2Node_ComponentBoundEvent_68_Selector_Left__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "BndEvt__WB_Setting_Selector_Shadow_K2Node_ComponentBoundEvent_68_Selector_Left__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Binary_DynamicRes_1_K2Node_ComponentBoundEvent_69_Binary_On__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_SettingsMenu_C::BndEvt__WB_Setting_Binary_DynamicRes_1_K2Node_ComponentBoundEvent_69_Binary_On__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "BndEvt__WB_Setting_Binary_DynamicRes_1_K2Node_ComponentBoundEvent_69_Binary_On__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Binary_HDR_K2Node_ComponentBoundEvent_78_Binary_Off__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_SettingsMenu_C::BndEvt__WB_Setting_Binary_HDR_K2Node_ComponentBoundEvent_78_Binary_Off__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "BndEvt__WB_Setting_Binary_HDR_K2Node_ComponentBoundEvent_78_Binary_Off__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Selector_Foliage_K2Node_ComponentBoundEvent_79_Selector_Right__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_SettingsMenu_C::BndEvt__WB_Setting_Selector_Foliage_K2Node_ComponentBoundEvent_79_Selector_Right__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "BndEvt__WB_Setting_Selector_Foliage_K2Node_ComponentBoundEvent_79_Selector_Right__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Selector_Foliage_K2Node_ComponentBoundEvent_80_Selector_Left__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_SettingsMenu_C::BndEvt__WB_Setting_Selector_Foliage_K2Node_ComponentBoundEvent_80_Selector_Left__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "BndEvt__WB_Setting_Selector_Foliage_K2Node_ComponentBoundEvent_80_Selector_Left__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Selector_ViewDistance_K2Node_ComponentBoundEvent_81_Selector_Right__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_SettingsMenu_C::BndEvt__WB_Setting_Selector_ViewDistance_K2Node_ComponentBoundEvent_81_Selector_Right__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "BndEvt__WB_Setting_Selector_ViewDistance_K2Node_ComponentBoundEvent_81_Selector_Right__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Selector_ViewDistance_K2Node_ComponentBoundEvent_82_Selector_Left__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_SettingsMenu_C::BndEvt__WB_Setting_Selector_ViewDistance_K2Node_ComponentBoundEvent_82_Selector_Left__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "BndEvt__WB_Setting_Selector_ViewDistance_K2Node_ComponentBoundEvent_82_Selector_Left__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Slider_ResScale_1_K2Node_ComponentBoundEvent_83_Slider_CaptureEnd__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_SettingsMenu_C::BndEvt__WB_Setting_Slider_ResScale_1_K2Node_ComponentBoundEvent_83_Slider_CaptureEnd__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "BndEvt__WB_Setting_Slider_ResScale_1_K2Node_ComponentBoundEvent_83_Slider_CaptureEnd__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Slider_MouseSensitivity_K2Node_ComponentBoundEvent_84_Slider_OnValueChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_SettingsMenu_C::BndEvt__WB_Setting_Slider_MouseSensitivity_K2Node_ComponentBoundEvent_84_Slider_OnValueChange__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "BndEvt__WB_Setting_Slider_MouseSensitivity_K2Node_ComponentBoundEvent_84_Slider_OnValueChange__DelegateSignature");

	Params::UWB_SettingsMenu_C_BndEvt__WB_Setting_Slider_MouseSensitivity_K2Node_ComponentBoundEvent_84_Slider_OnValueChange__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Binary_Vsync_1_K2Node_ComponentBoundEvent_85_Binary_On__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_SettingsMenu_C::BndEvt__WB_Setting_Binary_Vsync_1_K2Node_ComponentBoundEvent_85_Binary_On__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "BndEvt__WB_Setting_Binary_Vsync_1_K2Node_ComponentBoundEvent_85_Binary_On__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Binary_Vsync_1_K2Node_ComponentBoundEvent_86_Binary_Off__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_SettingsMenu_C::BndEvt__WB_Setting_Binary_Vsync_1_K2Node_ComponentBoundEvent_86_Binary_Off__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "BndEvt__WB_Setting_Binary_Vsync_1_K2Node_ComponentBoundEvent_86_Binary_Off__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Binary_VerticalAxis_1_K2Node_ComponentBoundEvent_87_Binary_On__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_SettingsMenu_C::BndEvt__WB_Setting_Binary_VerticalAxis_1_K2Node_ComponentBoundEvent_87_Binary_On__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "BndEvt__WB_Setting_Binary_VerticalAxis_1_K2Node_ComponentBoundEvent_87_Binary_On__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Binary_VerticalAxis_1_K2Node_ComponentBoundEvent_88_Binary_Off__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_SettingsMenu_C::BndEvt__WB_Setting_Binary_VerticalAxis_1_K2Node_ComponentBoundEvent_88_Binary_Off__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "BndEvt__WB_Setting_Binary_VerticalAxis_1_K2Node_ComponentBoundEvent_88_Binary_Off__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.SaveSoundSettings
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_SettingsMenu_C::SaveSoundSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "SaveSoundSettings");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Slider_MasterVolume_K2Node_ComponentBoundEvent_89_Slider_OnValueChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_SettingsMenu_C::BndEvt__WB_Setting_Slider_MasterVolume_K2Node_ComponentBoundEvent_89_Slider_OnValueChange__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "BndEvt__WB_Setting_Slider_MasterVolume_K2Node_ComponentBoundEvent_89_Slider_OnValueChange__DelegateSignature");

	Params::UWB_SettingsMenu_C_BndEvt__WB_Setting_Slider_MasterVolume_K2Node_ComponentBoundEvent_89_Slider_OnValueChange__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Selector_AudioQuality_K2Node_ComponentBoundEvent_94_Selector_Right__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_SettingsMenu_C::BndEvt__WB_Setting_Selector_AudioQuality_K2Node_ComponentBoundEvent_94_Selector_Right__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "BndEvt__WB_Setting_Selector_AudioQuality_K2Node_ComponentBoundEvent_94_Selector_Right__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Selector_AudioQuality_K2Node_ComponentBoundEvent_95_Selector_Left__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_SettingsMenu_C::BndEvt__WB_Setting_Selector_AudioQuality_K2Node_ComponentBoundEvent_95_Selector_Left__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "BndEvt__WB_Setting_Selector_AudioQuality_K2Node_ComponentBoundEvent_95_Selector_Left__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.Initialize Remappings
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_SettingsMenu_C::Initialize_Remappings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "Initialize Remappings");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.Clear Mapping at Key
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWB_SettingsMenu_C::Clear_Mapping_at_Key(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "Clear Mapping at Key");

	Params::UWB_SettingsMenu_C_Clear_Mapping_at_Key_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__CrosshairSelectorBox_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// enum class ESelectInfo             SelectionType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_SettingsMenu_C::BndEvt__CrosshairSelectorBox_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "BndEvt__CrosshairSelectorBox_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature");

	Params::UWB_SettingsMenu_C_BndEvt__CrosshairSelectorBox_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature_Params Parms{};

	Parms.SelectedItem = SelectedItem;
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_DropMenu_DisplayMode_1_K2Node_ComponentBoundEvent_0_DropBox_SelectionChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// enum class ESelectInfo             SelectionType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_SettingsMenu_C::BndEvt__WB_Setting_DropMenu_DisplayMode_1_K2Node_ComponentBoundEvent_0_DropBox_SelectionChange__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "BndEvt__WB_Setting_DropMenu_DisplayMode_1_K2Node_ComponentBoundEvent_0_DropBox_SelectionChange__DelegateSignature");

	Params::UWB_SettingsMenu_C_BndEvt__WB_Setting_DropMenu_DisplayMode_1_K2Node_ComponentBoundEvent_0_DropBox_SelectionChange__DelegateSignature_Params Parms{};

	Parms.SelectedItem = SelectedItem;
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.ExecuteUbergraph_WB_SettingsMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem                          (ZeroConstructor, HasGetValueTypeHash)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SupportsHDRDisplayOutput_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsHDREnabled_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EWindowMode             CallFunc_GetFullscreenMode_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDynamicResolutionEnabled_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVSyncEnabled_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsScreenResolutionDirty_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsFullscreenModeDirty_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputAxisKeyMapping        K2Node_MakeStruct_InputAxisKeyMapping                            (None)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_8                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputAxisKeyMapping        K2Node_MakeStruct_InputAxisKeyMapping_1                          (None)
// int32                              CallFunc_GetShadowQuality_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_9                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetShadowQuality_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_10                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTextureQuality_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_AGPlayerController_C*    K2Node_DynamicCast_AsBP_AGPlayer_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bIsChecked                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_11                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetTextureQuality_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_12                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAntiAliasingQuality_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_13                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAntiAliasingQuality_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_14                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPostProcessingQuality_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_6                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue_5                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue_6                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_15                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPostProcessingQuality_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_7                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue_7                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_16                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetFoliageQuality_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_17                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetFoliageQuality_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_8                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_9                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue_8                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue_9                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInputAxisKeyMapping        K2Node_MakeStruct_InputAxisKeyMapping_2                          (None)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_18                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetViewDistanceQuality_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_19                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetViewDistanceQuality_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_10                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_11                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue_10                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue_11                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_20                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetVisualEffectQuality_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_21                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_7                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetVisualEffectQuality_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_12                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_6                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_13                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue_12                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue_13                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputAxisKeyMapping        K2Node_MakeStruct_InputAxisKeyMapping_3                          (None)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_22                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_23                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_24                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAudioQualityLevel_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAudioQualityLevel_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_8                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_7                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_14                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue_14                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_15                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue_15                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_25                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFrameRateLimit_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_26                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_27                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFrameRateLimit_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_28                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_29                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_30                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_31                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetOverallScalabilityLevel_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_9                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_16                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue_16                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetOverallScalabilityLevel_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_8                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_17                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue_17                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_32                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_33                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_34                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_35                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_5                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_6                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1             (ZeroConstructor, HasGetValueTypeHash)
// class USaveGame*                   CallFunc_LoadGameFromSlot_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAGSaveGame*                 K2Node_DynamicCast_AsAGSave_Game                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveGameToSlot_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveGameToSlot_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_7                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveGameToSlot_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_8                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_Key_1                                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_AGGameInstance_C*        K2Node_DynamicCast_AsBP_AGGame_Instance                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_9                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UButton*                     K2Node_CustomEvent_Button_1                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*                  K2Node_CustomEvent_Text_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// class UButton*                     K2Node_CustomEvent_Button                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*                  K2Node_CustomEvent_Text                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)
// bool                               CallFunc_SaveGameToSlot_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_10                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputAxisKeyMapping        K2Node_MakeStruct_InputAxisKeyMapping_4                          (None)
// struct FInputAxisKeyMapping        K2Node_MakeStruct_InputAxisKeyMapping_5                          (None)
// struct FInputAxisKeyMapping        K2Node_MakeStruct_InputAxisKeyMapping_6                          (None)
// struct FInputAxisKeyMapping        K2Node_MakeStruct_InputAxisKeyMapping_7                          (None)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_AGGameInstance_C*        K2Node_DynamicCast_AsBP_AGGame_Instance_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_AGGameInstance_C*        K2Node_DynamicCast_AsBP_AGGame_Instance_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_AGGameInstance_C*        K2Node_DynamicCast_AsBP_AGGame_Instance_3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_AGGameInstance_C*        K2Node_DynamicCast_AsBP_AGGame_Instance_4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_3                        (ZeroConstructor, HasGetValueTypeHash)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_2                        (ZeroConstructor, HasGetValueTypeHash)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Split_LeftS                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Split_RightS                                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Split_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FIntPoint                   K2Node_MakeStruct_IntPoint                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetFrameRateLimit_ReturnValue_2                         (None)
// class FText                        CallFunc_GetFrameRateLimit_ReturnValue_3                         (None)
// float                              K2Node_ComponentBoundEvent_Value_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetOverallQuality_ReturnValue                           (None)
// class FText                        CallFunc_GetOverallQuality_ReturnValue_1                         (None)
// class FText                        CallFunc_GetTextureQuality_ReturnValue_2                         (None)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_KeyRemap_C*              CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetTextureQuality_ReturnValue_3                         (None)
// class FText                        CallFunc_GetVisualEffectsQuality_ReturnValue                     (None)
// class FText                        CallFunc_GetVisualEffectsQuality_ReturnValue_1                   (None)
// class FText                        CallFunc_GetAntiAliasingQuality_ReturnValue_2                    (None)
// class FText                        CallFunc_GetAntiAliasingQuality_ReturnValue_3                    (None)
// class FText                        CallFunc_GetPostProcessingQuality_ReturnValue_2                  (None)
// class FText                        CallFunc_GetPostProcessingQuality_ReturnValue_3                  (None)
// class FText                        CallFunc_GetShadowQuality_ReturnValue_2                          (None)
// class FText                        CallFunc_GetShadowQuality_ReturnValue_3                          (None)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_18                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_10                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetFoliageQuality_ReturnValue_2                         (None)
// class FText                        CallFunc_GetFoliageQuality_ReturnValue_3                         (None)
// class FText                        CallFunc_GetViewDistance_ReturnValue                             (None)
// class FText                        CallFunc_GetViewDistance_ReturnValue_1                           (None)
// float                              K2Node_ComponentBoundEvent_Value_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_Value                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetAudioQuality_ReturnValue                             (None)
// class FText                        CallFunc_GetAudioQuality_ReturnValue_1                           (None)
// int32                              Temp_int_Variable_11                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_12                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_13                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_14                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ZeroConstructor, ReferenceParm, ContainsInstancedReference)
// int32                              Temp_int_Variable_15                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_InputRemapping_C*        K2Node_DynamicCast_AsWB_Input_Remapping                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FInputActionKeyMapping>CallFunc_GetActionMappingByName_OutMappings                      (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputActionKeyMapping      CallFunc_Array_Get_Item_2                                        (None)
// bool                               CallFunc_Less_IntInt_ReturnValue_19                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_16                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_CustomEvent_Key                                           (HasGetValueTypeHash)
// int32                              Temp_int_Variable_17                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Remove_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWB_InputRemapping_C*        CallFunc_Map_Find_Value                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_Map_Find_Value_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_AGPlayerController_C*    K2Node_DynamicCast_AsBP_AGPlayer_Controller_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_1                        (ZeroConstructor, HasGetValueTypeHash)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_AGGameInstance_C*        K2Node_DynamicCast_AsBP_AGGame_Instance_5                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SaveGameToSlot_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_SettingsMenu_C::ExecuteUbergraph_WB_SettingsMenu(int32 EntryPoint, const class FString& K2Node_ComponentBoundEvent_SelectedItem, enum class ESelectInfo K2Node_ComponentBoundEvent_SelectionType, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_1, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_2, bool CallFunc_SupportsHDRDisplayOutput_ReturnValue, bool CallFunc_IsHDREnabled_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, enum class EWindowMode CallFunc_GetFullscreenMode_ReturnValue, bool CallFunc_IsDynamicResolutionEnabled_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, bool CallFunc_IsVSyncEnabled_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_3, int32 Temp_int_Variable, bool CallFunc_IsScreenResolutionDirty_ReturnValue, bool CallFunc_IsFullscreenModeDirty_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_4, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_5, const struct FInputAxisKeyMapping& K2Node_MakeStruct_InputAxisKeyMapping, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_6, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_7, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_8, const struct FInputAxisKeyMapping& K2Node_MakeStruct_InputAxisKeyMapping_1, int32 CallFunc_GetShadowQuality_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_9, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetShadowQuality_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_10, int32 CallFunc_GetTextureQuality_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class ABP_AGPlayerController_C* K2Node_DynamicCast_AsBP_AGPlayer_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue_2, bool K2Node_ComponentBoundEvent_bIsChecked, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_11, bool Temp_bool_Variable, int32 CallFunc_GetTextureQuality_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_3, bool CallFunc_Greater_IntInt_ReturnValue_3, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_12, int32 Temp_int_Array_Index_Variable, int32 CallFunc_GetAntiAliasingQuality_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_4, bool CallFunc_Greater_IntInt_ReturnValue_4, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_13, int32 CallFunc_GetAntiAliasingQuality_ReturnValue_1, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_14, int32 CallFunc_Subtract_IntInt_ReturnValue_2, int32 CallFunc_GetPostProcessingQuality_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_5, int32 CallFunc_Add_IntInt_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_6, bool CallFunc_Greater_IntInt_ReturnValue_5, bool CallFunc_Greater_IntInt_ReturnValue_6, int32 Temp_int_Variable_1, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_15, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_GetPostProcessingQuality_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_7, bool CallFunc_Greater_IntInt_ReturnValue_7, int32 CallFunc_Add_IntInt_ReturnValue_4, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_16, bool Temp_bool_Variable_1, int32 CallFunc_GetFoliageQuality_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_17, int32 CallFunc_Subtract_IntInt_ReturnValue_4, int32 CallFunc_GetFoliageQuality_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_8, int32 CallFunc_Add_IntInt_ReturnValue_5, bool CallFunc_Less_IntInt_ReturnValue_9, bool CallFunc_Greater_IntInt_ReturnValue_8, bool CallFunc_Greater_IntInt_ReturnValue_9, const struct FInputAxisKeyMapping& K2Node_MakeStruct_InputAxisKeyMapping_2, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_18, int32 CallFunc_GetViewDistanceQuality_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_19, int32 CallFunc_Subtract_IntInt_ReturnValue_5, int32 CallFunc_GetViewDistanceQuality_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_10, int32 CallFunc_Add_IntInt_ReturnValue_6, bool CallFunc_Less_IntInt_ReturnValue_11, bool CallFunc_Greater_IntInt_ReturnValue_10, bool CallFunc_Greater_IntInt_ReturnValue_11, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_20, int32 CallFunc_GetVisualEffectQuality_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_21, int32 CallFunc_Add_IntInt_ReturnValue_7, int32 CallFunc_GetVisualEffectQuality_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_12, int32 CallFunc_Subtract_IntInt_ReturnValue_6, bool CallFunc_Less_IntInt_ReturnValue_13, bool CallFunc_Greater_IntInt_ReturnValue_12, bool CallFunc_Greater_IntInt_ReturnValue_13, int32 Temp_int_Variable_2, const struct FInputAxisKeyMapping& K2Node_MakeStruct_InputAxisKeyMapping_3, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_22, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_23, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_24, int32 CallFunc_GetAudioQualityLevel_ReturnValue, int32 CallFunc_GetAudioQualityLevel_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_8, int32 CallFunc_Subtract_IntInt_ReturnValue_7, bool CallFunc_Less_IntInt_ReturnValue_14, bool CallFunc_Greater_IntInt_ReturnValue_14, bool CallFunc_Less_IntInt_ReturnValue_15, bool CallFunc_Greater_IntInt_ReturnValue_15, int32 Temp_int_Variable_3, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_25, float CallFunc_GetFrameRateLimit_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_26, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_27, float CallFunc_GetFrameRateLimit_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, int32 Temp_int_Variable_4, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_28, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_29, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_30, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_31, int32 CallFunc_GetOverallScalabilityLevel_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_9, bool CallFunc_Less_IntInt_ReturnValue_16, bool CallFunc_Greater_IntInt_ReturnValue_16, int32 CallFunc_GetOverallScalabilityLevel_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_8, bool CallFunc_Less_IntInt_ReturnValue_17, bool CallFunc_Greater_IntInt_ReturnValue_17, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_32, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_33, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_34, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_35, int32 Temp_int_Variable_5, uint8 CallFunc_MakeLiteralByte_ReturnValue, int32 Temp_int_Variable_6, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1, class USaveGame* CallFunc_LoadGameFromSlot_ReturnValue, class UAGSaveGame* K2Node_DynamicCast_AsAGSave_Game, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_FClamp_ReturnValue, bool CallFunc_SaveGameToSlot_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, bool CallFunc_SaveGameToSlot_ReturnValue_1, int32 Temp_int_Variable_7, bool CallFunc_SaveGameToSlot_ReturnValue_2, int32 Temp_int_Variable_8, const class FString& K2Node_CustomEvent_Key_1, bool K2Node_SwitchString_CmpSuccess, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_AGGameInstance_C* K2Node_DynamicCast_AsBP_AGGame_Instance, bool K2Node_DynamicCast_bSuccess_2, int32 CallFunc_Array_Length_ReturnValue, class UInputSettings* CallFunc_GetInputSettings_ReturnValue, int32 Temp_int_Variable_9, class UButton* K2Node_CustomEvent_Button_1, class UTextBlock* K2Node_CustomEvent_Text_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor, class UButton* K2Node_CustomEvent_Button, class UTextBlock* K2Node_CustomEvent_Text, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, bool CallFunc_SaveGameToSlot_ReturnValue_3, int32 Temp_int_Variable_10, float CallFunc_Multiply_FloatFloat_ReturnValue, float K2Node_Select_Default, float K2Node_Select_Default_1, const struct FInputAxisKeyMapping& K2Node_MakeStruct_InputAxisKeyMapping_4, const struct FInputAxisKeyMapping& K2Node_MakeStruct_InputAxisKeyMapping_5, const struct FInputAxisKeyMapping& K2Node_MakeStruct_InputAxisKeyMapping_6, const struct FInputAxisKeyMapping& K2Node_MakeStruct_InputAxisKeyMapping_7, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_EqualEqual_StrStr_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class UBP_AGGameInstance_C* K2Node_DynamicCast_AsBP_AGGame_Instance_1, bool K2Node_DynamicCast_bSuccess_3, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, class UBP_AGGameInstance_C* K2Node_DynamicCast_AsBP_AGGame_Instance_2, bool K2Node_DynamicCast_bSuccess_4, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_3, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_4, class UBP_AGGameInstance_C* K2Node_DynamicCast_AsBP_AGGame_Instance_3, bool K2Node_DynamicCast_bSuccess_5, class UBP_AGGameInstance_C* K2Node_DynamicCast_AsBP_AGGame_Instance_4, bool K2Node_DynamicCast_bSuccess_6, const class FString& K2Node_ComponentBoundEvent_SelectedItem_3, enum class ESelectInfo K2Node_ComponentBoundEvent_SelectionType_3, const class FString& K2Node_ComponentBoundEvent_SelectedItem_2, enum class ESelectInfo K2Node_ComponentBoundEvent_SelectionType_2, const class FString& CallFunc_Split_LeftS, const class FString& CallFunc_Split_RightS, bool CallFunc_Split_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, int32 CallFunc_Conv_StringToInt_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue_2, const struct FIntPoint& K2Node_MakeStruct_IntPoint, class FText CallFunc_GetFrameRateLimit_ReturnValue_2, class FText CallFunc_GetFrameRateLimit_ReturnValue_3, float K2Node_ComponentBoundEvent_Value_2, class FText CallFunc_GetOverallQuality_ReturnValue, class FText CallFunc_GetOverallQuality_ReturnValue_1, class FText CallFunc_GetTextureQuality_ReturnValue_2, int32 Temp_int_Array_Index_Variable_1, class UWB_KeyRemap_C* CallFunc_Array_Get_Item, class FText CallFunc_GetTextureQuality_ReturnValue_3, class FText CallFunc_GetVisualEffectsQuality_ReturnValue, class FText CallFunc_GetVisualEffectsQuality_ReturnValue_1, class FText CallFunc_GetAntiAliasingQuality_ReturnValue_2, class FText CallFunc_GetAntiAliasingQuality_ReturnValue_3, class FText CallFunc_GetPostProcessingQuality_ReturnValue_2, class FText CallFunc_GetPostProcessingQuality_ReturnValue_3, class FText CallFunc_GetShadowQuality_ReturnValue_2, class FText CallFunc_GetShadowQuality_ReturnValue_3, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_18, int32 CallFunc_Add_IntInt_ReturnValue_10, class FText CallFunc_GetFoliageQuality_ReturnValue_2, class FText CallFunc_GetFoliageQuality_ReturnValue_3, class FText CallFunc_GetViewDistance_ReturnValue, class FText CallFunc_GetViewDistance_ReturnValue_1, float K2Node_ComponentBoundEvent_Value_1, float K2Node_ComponentBoundEvent_Value, class FText CallFunc_GetAudioQuality_ReturnValue, class FText CallFunc_GetAudioQuality_ReturnValue_1, int32 Temp_int_Variable_11, int32 Temp_int_Variable_12, int32 Temp_int_Variable_13, int32 Temp_int_Variable_14, class UInputSettings* CallFunc_GetInputSettings_ReturnValue_1, class UInputSettings* CallFunc_GetInputSettings_ReturnValue_2, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 Temp_int_Variable_15, class UWidget* CallFunc_Array_Get_Item_1, class UWB_InputRemapping_C* K2Node_DynamicCast_AsWB_Input_Remapping, bool K2Node_DynamicCast_bSuccess_7, TArray<struct FInputActionKeyMapping>& CallFunc_GetActionMappingByName_OutMappings, int32 CallFunc_Array_Length_ReturnValue_1, const struct FInputActionKeyMapping& CallFunc_Array_Get_Item_2, bool CallFunc_Less_IntInt_ReturnValue_19, int32 Temp_int_Variable_16, const struct FKey& K2Node_CustomEvent_Key, int32 Temp_int_Variable_17, bool CallFunc_Map_Remove_ReturnValue, class UWB_InputRemapping_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FLinearColor& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class ABP_AGPlayerController_C* K2Node_DynamicCast_AsBP_AGPlayer_Controller_1, bool K2Node_DynamicCast_bSuccess_8, const class FString& K2Node_ComponentBoundEvent_SelectedItem_1, enum class ESelectInfo K2Node_ComponentBoundEvent_SelectionType_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_5, class UBP_AGGameInstance_C* K2Node_DynamicCast_AsBP_AGGame_Instance_5, bool K2Node_DynamicCast_bSuccess_9, bool CallFunc_SaveGameToSlot_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsMenu_C", "ExecuteUbergraph_WB_SettingsMenu");

	Params::UWB_SettingsMenu_C_ExecuteUbergraph_WB_SettingsMenu_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_SelectedItem = K2Node_ComponentBoundEvent_SelectedItem;
	Parms.K2Node_ComponentBoundEvent_SelectionType = K2Node_ComponentBoundEvent_SelectionType;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_1 = CallFunc_GetGameUserSettings_ReturnValue_1;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_2 = CallFunc_GetGameUserSettings_ReturnValue_2;
	Parms.CallFunc_SupportsHDRDisplayOutput_ReturnValue = CallFunc_SupportsHDRDisplayOutput_ReturnValue;
	Parms.CallFunc_IsHDREnabled_ReturnValue = CallFunc_IsHDREnabled_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetFullscreenMode_ReturnValue = CallFunc_GetFullscreenMode_ReturnValue;
	Parms.CallFunc_IsDynamicResolutionEnabled_ReturnValue = CallFunc_IsDynamicResolutionEnabled_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_IsVSyncEnabled_ReturnValue = CallFunc_IsVSyncEnabled_ReturnValue;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_3 = CallFunc_GetGameUserSettings_ReturnValue_3;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_IsScreenResolutionDirty_ReturnValue = CallFunc_IsScreenResolutionDirty_ReturnValue;
	Parms.CallFunc_IsFullscreenModeDirty_ReturnValue = CallFunc_IsFullscreenModeDirty_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_4 = CallFunc_GetGameUserSettings_ReturnValue_4;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_5 = CallFunc_GetGameUserSettings_ReturnValue_5;
	Parms.K2Node_MakeStruct_InputAxisKeyMapping = K2Node_MakeStruct_InputAxisKeyMapping;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_6 = CallFunc_GetGameUserSettings_ReturnValue_6;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_7 = CallFunc_GetGameUserSettings_ReturnValue_7;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_8 = CallFunc_GetGameUserSettings_ReturnValue_8;
	Parms.K2Node_MakeStruct_InputAxisKeyMapping_1 = K2Node_MakeStruct_InputAxisKeyMapping_1;
	Parms.CallFunc_GetShadowQuality_ReturnValue = CallFunc_GetShadowQuality_ReturnValue;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_9 = CallFunc_GetGameUserSettings_ReturnValue_9;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetShadowQuality_ReturnValue_1 = CallFunc_GetShadowQuality_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_10 = CallFunc_GetGameUserSettings_ReturnValue_10;
	Parms.CallFunc_GetTextureQuality_ReturnValue = CallFunc_GetTextureQuality_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_AGPlayer_Controller = K2Node_DynamicCast_AsBP_AGPlayer_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Greater_IntInt_ReturnValue_2 = CallFunc_Greater_IntInt_ReturnValue_2;
	Parms.K2Node_ComponentBoundEvent_bIsChecked = K2Node_ComponentBoundEvent_bIsChecked;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_11 = CallFunc_GetGameUserSettings_ReturnValue_11;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetTextureQuality_ReturnValue_1 = CallFunc_GetTextureQuality_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_Greater_IntInt_ReturnValue_3 = CallFunc_Greater_IntInt_ReturnValue_3;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_12 = CallFunc_GetGameUserSettings_ReturnValue_12;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetAntiAliasingQuality_ReturnValue = CallFunc_GetAntiAliasingQuality_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_4 = CallFunc_Less_IntInt_ReturnValue_4;
	Parms.CallFunc_Greater_IntInt_ReturnValue_4 = CallFunc_Greater_IntInt_ReturnValue_4;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_13 = CallFunc_GetGameUserSettings_ReturnValue_13;
	Parms.CallFunc_GetAntiAliasingQuality_ReturnValue_1 = CallFunc_GetAntiAliasingQuality_ReturnValue_1;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_14 = CallFunc_GetGameUserSettings_ReturnValue_14;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_2 = CallFunc_Subtract_IntInt_ReturnValue_2;
	Parms.CallFunc_GetPostProcessingQuality_ReturnValue = CallFunc_GetPostProcessingQuality_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_5 = CallFunc_Less_IntInt_ReturnValue_5;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_6 = CallFunc_Less_IntInt_ReturnValue_6;
	Parms.CallFunc_Greater_IntInt_ReturnValue_5 = CallFunc_Greater_IntInt_ReturnValue_5;
	Parms.CallFunc_Greater_IntInt_ReturnValue_6 = CallFunc_Greater_IntInt_ReturnValue_6;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_15 = CallFunc_GetGameUserSettings_ReturnValue_15;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetPostProcessingQuality_ReturnValue_1 = CallFunc_GetPostProcessingQuality_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_3 = CallFunc_Subtract_IntInt_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_7 = CallFunc_Less_IntInt_ReturnValue_7;
	Parms.CallFunc_Greater_IntInt_ReturnValue_7 = CallFunc_Greater_IntInt_ReturnValue_7;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_16 = CallFunc_GetGameUserSettings_ReturnValue_16;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_GetFoliageQuality_ReturnValue = CallFunc_GetFoliageQuality_ReturnValue;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_17 = CallFunc_GetGameUserSettings_ReturnValue_17;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_4 = CallFunc_Subtract_IntInt_ReturnValue_4;
	Parms.CallFunc_GetFoliageQuality_ReturnValue_1 = CallFunc_GetFoliageQuality_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_8 = CallFunc_Less_IntInt_ReturnValue_8;
	Parms.CallFunc_Add_IntInt_ReturnValue_5 = CallFunc_Add_IntInt_ReturnValue_5;
	Parms.CallFunc_Less_IntInt_ReturnValue_9 = CallFunc_Less_IntInt_ReturnValue_9;
	Parms.CallFunc_Greater_IntInt_ReturnValue_8 = CallFunc_Greater_IntInt_ReturnValue_8;
	Parms.CallFunc_Greater_IntInt_ReturnValue_9 = CallFunc_Greater_IntInt_ReturnValue_9;
	Parms.K2Node_MakeStruct_InputAxisKeyMapping_2 = K2Node_MakeStruct_InputAxisKeyMapping_2;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_18 = CallFunc_GetGameUserSettings_ReturnValue_18;
	Parms.CallFunc_GetViewDistanceQuality_ReturnValue = CallFunc_GetViewDistanceQuality_ReturnValue;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_19 = CallFunc_GetGameUserSettings_ReturnValue_19;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_5 = CallFunc_Subtract_IntInt_ReturnValue_5;
	Parms.CallFunc_GetViewDistanceQuality_ReturnValue_1 = CallFunc_GetViewDistanceQuality_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_10 = CallFunc_Less_IntInt_ReturnValue_10;
	Parms.CallFunc_Add_IntInt_ReturnValue_6 = CallFunc_Add_IntInt_ReturnValue_6;
	Parms.CallFunc_Less_IntInt_ReturnValue_11 = CallFunc_Less_IntInt_ReturnValue_11;
	Parms.CallFunc_Greater_IntInt_ReturnValue_10 = CallFunc_Greater_IntInt_ReturnValue_10;
	Parms.CallFunc_Greater_IntInt_ReturnValue_11 = CallFunc_Greater_IntInt_ReturnValue_11;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_20 = CallFunc_GetGameUserSettings_ReturnValue_20;
	Parms.CallFunc_GetVisualEffectQuality_ReturnValue = CallFunc_GetVisualEffectQuality_ReturnValue;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_21 = CallFunc_GetGameUserSettings_ReturnValue_21;
	Parms.CallFunc_Add_IntInt_ReturnValue_7 = CallFunc_Add_IntInt_ReturnValue_7;
	Parms.CallFunc_GetVisualEffectQuality_ReturnValue_1 = CallFunc_GetVisualEffectQuality_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_12 = CallFunc_Less_IntInt_ReturnValue_12;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_6 = CallFunc_Subtract_IntInt_ReturnValue_6;
	Parms.CallFunc_Less_IntInt_ReturnValue_13 = CallFunc_Less_IntInt_ReturnValue_13;
	Parms.CallFunc_Greater_IntInt_ReturnValue_12 = CallFunc_Greater_IntInt_ReturnValue_12;
	Parms.CallFunc_Greater_IntInt_ReturnValue_13 = CallFunc_Greater_IntInt_ReturnValue_13;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.K2Node_MakeStruct_InputAxisKeyMapping_3 = K2Node_MakeStruct_InputAxisKeyMapping_3;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_22 = CallFunc_GetGameUserSettings_ReturnValue_22;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_23 = CallFunc_GetGameUserSettings_ReturnValue_23;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_24 = CallFunc_GetGameUserSettings_ReturnValue_24;
	Parms.CallFunc_GetAudioQualityLevel_ReturnValue = CallFunc_GetAudioQualityLevel_ReturnValue;
	Parms.CallFunc_GetAudioQualityLevel_ReturnValue_1 = CallFunc_GetAudioQualityLevel_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_8 = CallFunc_Add_IntInt_ReturnValue_8;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_7 = CallFunc_Subtract_IntInt_ReturnValue_7;
	Parms.CallFunc_Less_IntInt_ReturnValue_14 = CallFunc_Less_IntInt_ReturnValue_14;
	Parms.CallFunc_Greater_IntInt_ReturnValue_14 = CallFunc_Greater_IntInt_ReturnValue_14;
	Parms.CallFunc_Less_IntInt_ReturnValue_15 = CallFunc_Less_IntInt_ReturnValue_15;
	Parms.CallFunc_Greater_IntInt_ReturnValue_15 = CallFunc_Greater_IntInt_ReturnValue_15;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_25 = CallFunc_GetGameUserSettings_ReturnValue_25;
	Parms.CallFunc_GetFrameRateLimit_ReturnValue = CallFunc_GetFrameRateLimit_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_26 = CallFunc_GetGameUserSettings_ReturnValue_26;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_27 = CallFunc_GetGameUserSettings_ReturnValue_27;
	Parms.CallFunc_GetFrameRateLimit_ReturnValue_1 = CallFunc_GetFrameRateLimit_ReturnValue_1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.Temp_int_Variable_4 = Temp_int_Variable_4;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_28 = CallFunc_GetGameUserSettings_ReturnValue_28;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_29 = CallFunc_GetGameUserSettings_ReturnValue_29;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_30 = CallFunc_GetGameUserSettings_ReturnValue_30;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_31 = CallFunc_GetGameUserSettings_ReturnValue_31;
	Parms.CallFunc_GetOverallScalabilityLevel_ReturnValue = CallFunc_GetOverallScalabilityLevel_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_9 = CallFunc_Add_IntInt_ReturnValue_9;
	Parms.CallFunc_Less_IntInt_ReturnValue_16 = CallFunc_Less_IntInt_ReturnValue_16;
	Parms.CallFunc_Greater_IntInt_ReturnValue_16 = CallFunc_Greater_IntInt_ReturnValue_16;
	Parms.CallFunc_GetOverallScalabilityLevel_ReturnValue_1 = CallFunc_GetOverallScalabilityLevel_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_8 = CallFunc_Subtract_IntInt_ReturnValue_8;
	Parms.CallFunc_Less_IntInt_ReturnValue_17 = CallFunc_Less_IntInt_ReturnValue_17;
	Parms.CallFunc_Greater_IntInt_ReturnValue_17 = CallFunc_Greater_IntInt_ReturnValue_17;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_32 = CallFunc_GetGameUserSettings_ReturnValue_32;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_33 = CallFunc_GetGameUserSettings_ReturnValue_33;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_34 = CallFunc_GetGameUserSettings_ReturnValue_34;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_35 = CallFunc_GetGameUserSettings_ReturnValue_35;
	Parms.Temp_int_Variable_5 = Temp_int_Variable_5;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.Temp_int_Variable_6 = Temp_int_Variable_6;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1 = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1;
	Parms.CallFunc_LoadGameFromSlot_ReturnValue = CallFunc_LoadGameFromSlot_ReturnValue;
	Parms.K2Node_DynamicCast_AsAGSave_Game = K2Node_DynamicCast_AsAGSave_Game;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_SaveGameToSlot_ReturnValue = CallFunc_SaveGameToSlot_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_SaveGameToSlot_ReturnValue_1 = CallFunc_SaveGameToSlot_ReturnValue_1;
	Parms.Temp_int_Variable_7 = Temp_int_Variable_7;
	Parms.CallFunc_SaveGameToSlot_ReturnValue_2 = CallFunc_SaveGameToSlot_ReturnValue_2;
	Parms.Temp_int_Variable_8 = Temp_int_Variable_8;
	Parms.K2Node_CustomEvent_Key_1 = K2Node_CustomEvent_Key_1;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_AGGame_Instance = K2Node_DynamicCast_AsBP_AGGame_Instance;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetInputSettings_ReturnValue = CallFunc_GetInputSettings_ReturnValue;
	Parms.Temp_int_Variable_9 = Temp_int_Variable_9;
	Parms.K2Node_CustomEvent_Button_1 = K2Node_CustomEvent_Button_1;
	Parms.K2Node_CustomEvent_Text_1 = K2Node_CustomEvent_Text_1;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_CustomEvent_Button = K2Node_CustomEvent_Button;
	Parms.K2Node_CustomEvent_Text = K2Node_CustomEvent_Text;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.CallFunc_SaveGameToSlot_ReturnValue_3 = CallFunc_SaveGameToSlot_ReturnValue_3;
	Parms.Temp_int_Variable_10 = Temp_int_Variable_10;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_MakeStruct_InputAxisKeyMapping_4 = K2Node_MakeStruct_InputAxisKeyMapping_4;
	Parms.K2Node_MakeStruct_InputAxisKeyMapping_5 = K2Node_MakeStruct_InputAxisKeyMapping_5;
	Parms.K2Node_MakeStruct_InputAxisKeyMapping_6 = K2Node_MakeStruct_InputAxisKeyMapping_6;
	Parms.K2Node_MakeStruct_InputAxisKeyMapping_7 = K2Node_MakeStruct_InputAxisKeyMapping_7;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_AGGame_Instance_1 = K2Node_DynamicCast_AsBP_AGGame_Instance_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetGameInstance_ReturnValue_2 = CallFunc_GetGameInstance_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBP_AGGame_Instance_2 = K2Node_DynamicCast_AsBP_AGGame_Instance_2;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_GetGameInstance_ReturnValue_3 = CallFunc_GetGameInstance_ReturnValue_3;
	Parms.CallFunc_GetGameInstance_ReturnValue_4 = CallFunc_GetGameInstance_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsBP_AGGame_Instance_3 = K2Node_DynamicCast_AsBP_AGGame_Instance_3;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.K2Node_DynamicCast_AsBP_AGGame_Instance_4 = K2Node_DynamicCast_AsBP_AGGame_Instance_4;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.K2Node_ComponentBoundEvent_SelectedItem_3 = K2Node_ComponentBoundEvent_SelectedItem_3;
	Parms.K2Node_ComponentBoundEvent_SelectionType_3 = K2Node_ComponentBoundEvent_SelectionType_3;
	Parms.K2Node_ComponentBoundEvent_SelectedItem_2 = K2Node_ComponentBoundEvent_SelectedItem_2;
	Parms.K2Node_ComponentBoundEvent_SelectionType_2 = K2Node_ComponentBoundEvent_SelectionType_2;
	Parms.CallFunc_Split_LeftS = CallFunc_Split_LeftS;
	Parms.CallFunc_Split_RightS = CallFunc_Split_RightS;
	Parms.CallFunc_Split_ReturnValue = CallFunc_Split_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_1 = CallFunc_EqualEqual_StrStr_ReturnValue_1;
	Parms.CallFunc_Conv_StringToInt_ReturnValue = CallFunc_Conv_StringToInt_ReturnValue;
	Parms.CallFunc_Conv_StringToInt_ReturnValue_1 = CallFunc_Conv_StringToInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_2 = CallFunc_EqualEqual_StrStr_ReturnValue_2;
	Parms.K2Node_MakeStruct_IntPoint = K2Node_MakeStruct_IntPoint;
	Parms.CallFunc_GetFrameRateLimit_ReturnValue_2 = CallFunc_GetFrameRateLimit_ReturnValue_2;
	Parms.CallFunc_GetFrameRateLimit_ReturnValue_3 = CallFunc_GetFrameRateLimit_ReturnValue_3;
	Parms.K2Node_ComponentBoundEvent_Value_2 = K2Node_ComponentBoundEvent_Value_2;
	Parms.CallFunc_GetOverallQuality_ReturnValue = CallFunc_GetOverallQuality_ReturnValue;
	Parms.CallFunc_GetOverallQuality_ReturnValue_1 = CallFunc_GetOverallQuality_ReturnValue_1;
	Parms.CallFunc_GetTextureQuality_ReturnValue_2 = CallFunc_GetTextureQuality_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetTextureQuality_ReturnValue_3 = CallFunc_GetTextureQuality_ReturnValue_3;
	Parms.CallFunc_GetVisualEffectsQuality_ReturnValue = CallFunc_GetVisualEffectsQuality_ReturnValue;
	Parms.CallFunc_GetVisualEffectsQuality_ReturnValue_1 = CallFunc_GetVisualEffectsQuality_ReturnValue_1;
	Parms.CallFunc_GetAntiAliasingQuality_ReturnValue_2 = CallFunc_GetAntiAliasingQuality_ReturnValue_2;
	Parms.CallFunc_GetAntiAliasingQuality_ReturnValue_3 = CallFunc_GetAntiAliasingQuality_ReturnValue_3;
	Parms.CallFunc_GetPostProcessingQuality_ReturnValue_2 = CallFunc_GetPostProcessingQuality_ReturnValue_2;
	Parms.CallFunc_GetPostProcessingQuality_ReturnValue_3 = CallFunc_GetPostProcessingQuality_ReturnValue_3;
	Parms.CallFunc_GetShadowQuality_ReturnValue_2 = CallFunc_GetShadowQuality_ReturnValue_2;
	Parms.CallFunc_GetShadowQuality_ReturnValue_3 = CallFunc_GetShadowQuality_ReturnValue_3;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_18 = CallFunc_Less_IntInt_ReturnValue_18;
	Parms.CallFunc_Add_IntInt_ReturnValue_10 = CallFunc_Add_IntInt_ReturnValue_10;
	Parms.CallFunc_GetFoliageQuality_ReturnValue_2 = CallFunc_GetFoliageQuality_ReturnValue_2;
	Parms.CallFunc_GetFoliageQuality_ReturnValue_3 = CallFunc_GetFoliageQuality_ReturnValue_3;
	Parms.CallFunc_GetViewDistance_ReturnValue = CallFunc_GetViewDistance_ReturnValue;
	Parms.CallFunc_GetViewDistance_ReturnValue_1 = CallFunc_GetViewDistance_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_Value_1 = K2Node_ComponentBoundEvent_Value_1;
	Parms.K2Node_ComponentBoundEvent_Value = K2Node_ComponentBoundEvent_Value;
	Parms.CallFunc_GetAudioQuality_ReturnValue = CallFunc_GetAudioQuality_ReturnValue;
	Parms.CallFunc_GetAudioQuality_ReturnValue_1 = CallFunc_GetAudioQuality_ReturnValue_1;
	Parms.Temp_int_Variable_11 = Temp_int_Variable_11;
	Parms.Temp_int_Variable_12 = Temp_int_Variable_12;
	Parms.Temp_int_Variable_13 = Temp_int_Variable_13;
	Parms.Temp_int_Variable_14 = Temp_int_Variable_14;
	Parms.CallFunc_GetInputSettings_ReturnValue_1 = CallFunc_GetInputSettings_ReturnValue_1;
	Parms.CallFunc_GetInputSettings_ReturnValue_2 = CallFunc_GetInputSettings_ReturnValue_2;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.Temp_int_Variable_15 = Temp_int_Variable_15;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_DynamicCast_AsWB_Input_Remapping = K2Node_DynamicCast_AsWB_Input_Remapping;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.CallFunc_GetActionMappingByName_OutMappings = CallFunc_GetActionMappingByName_OutMappings;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_19 = CallFunc_Less_IntInt_ReturnValue_19;
	Parms.Temp_int_Variable_16 = Temp_int_Variable_16;
	Parms.K2Node_CustomEvent_Key = K2Node_CustomEvent_Key;
	Parms.Temp_int_Variable_17 = Temp_int_Variable_17;
	Parms.CallFunc_Map_Remove_ReturnValue = CallFunc_Map_Remove_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_AGPlayer_Controller_1 = K2Node_DynamicCast_AsBP_AGPlayer_Controller_1;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.K2Node_ComponentBoundEvent_SelectedItem_1 = K2Node_ComponentBoundEvent_SelectedItem_1;
	Parms.K2Node_ComponentBoundEvent_SelectionType_1 = K2Node_ComponentBoundEvent_SelectionType_1;
	Parms.CallFunc_GetGameInstance_ReturnValue_5 = CallFunc_GetGameInstance_ReturnValue_5;
	Parms.K2Node_DynamicCast_AsBP_AGGame_Instance_5 = K2Node_DynamicCast_AsBP_AGGame_Instance_5;
	Parms.K2Node_DynamicCast_bSuccess_9 = K2Node_DynamicCast_bSuccess_9;
	Parms.CallFunc_SaveGameToSlot_ReturnValue_4 = CallFunc_SaveGameToSlot_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

}

}


