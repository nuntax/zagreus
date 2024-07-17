#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_Button_Base.WB_Button_Base_C
// (None)

class UClass* UWB_Button_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_Button_Base_C");

	return Clss;
}


// WB_Button_Base_C WB_Button_Base.Default__WB_Button_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_Button_Base_C* UWB_Button_Base_C::GetDefaultObj()
{
	static class UWB_Button_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_Button_Base_C*>(UWB_Button_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_Button_Base.WB_Button_Base_C.B03_GetSliderValueNormalized
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              ValueNormalized                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button_Base_C::B03_GetSliderValueNormalized(float* ValueNormalized)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Base_C", "B03_GetSliderValueNormalized");

	Params::UWB_Button_Base_C_B03_GetSliderValueNormalized_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ValueNormalized != nullptr)
		*ValueNormalized = Parms.ValueNormalized;

}


// Function WB_Button_Base.WB_Button_Base_C.B03_GetSliderValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button_Base_C::B03_GetSliderValue(float* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Base_C", "B03_GetSliderValue");

	Params::UWB_Button_Base_C_B03_GetSliderValue_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function WB_Button_Base.WB_Button_Base_C.B03_GetKeyEscapeKeys
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESelectedKey            Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FKey>                EscapeKeys                                                       (Parm, OutParm, ZeroConstructor)

void UWB_Button_Base_C::B03_GetKeyEscapeKeys(enum class ESelectedKey Key, TArray<struct FKey>* EscapeKeys)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Base_C", "B03_GetKeyEscapeKeys");

	Params::UWB_Button_Base_C_B03_GetKeyEscapeKeys_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

	if (EscapeKeys != nullptr)
		*EscapeKeys = std::move(Parms.EscapeKeys);

}


// Function WB_Button_Base.WB_Button_Base_C.B03_GetAllowModifierKeys
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESelectedKey            Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bAllowModifierKeys                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_Button_Base_C::B03_GetAllowModifierKeys(enum class ESelectedKey Key, bool* bAllowModifierKeys)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Base_C", "B03_GetAllowModifierKeys");

	Params::UWB_Button_Base_C_B03_GetAllowModifierKeys_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

	if (bAllowModifierKeys != nullptr)
		*bAllowModifierKeys = Parms.bAllowModifierKeys;

}


// Function WB_Button_Base.WB_Button_Base_C.B03_GetAllowGamepadKeys
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESelectedKey            Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bAllowGamepadKeys                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_Button_Base_C::B03_GetAllowGamepadKeys(enum class ESelectedKey Key, bool* bAllowGamepadKeys)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Base_C", "B03_GetAllowGamepadKeys");

	Params::UWB_Button_Base_C_B03_GetAllowGamepadKeys_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

	if (bAllowGamepadKeys != nullptr)
		*bAllowGamepadKeys = Parms.bAllowGamepadKeys;

}


// Function WB_Button_Base.WB_Button_Base_C.B03_GetKeySelectionText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESelectedKey            Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        KeySelectionText                                                 (Parm, OutParm)

void UWB_Button_Base_C::B03_GetKeySelectionText(enum class ESelectedKey Key, class FText* KeySelectionText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Base_C", "B03_GetKeySelectionText");

	Params::UWB_Button_Base_C_B03_GetKeySelectionText_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

	if (KeySelectionText != nullptr)
		*KeySelectionText = Parms.KeySelectionText;

}


// Function WB_Button_Base.WB_Button_Base_C.B03_GetSelectedKey
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESelectedKey            Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputChord                 SelectedKey                                                      (Parm, OutParm, HasGetValueTypeHash)

void UWB_Button_Base_C::B03_GetSelectedKey(enum class ESelectedKey Key, struct FInputChord* SelectedKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Base_C", "B03_GetSelectedKey");

	Params::UWB_Button_Base_C_B03_GetSelectedKey_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

	if (SelectedKey != nullptr)
		*SelectedKey = std::move(Parms.SelectedKey);

}


// Function WB_Button_Base.WB_Button_Base_C.B03_GetKeyEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESelectedKey            Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bEnabled                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_Button_Base_C::B03_GetKeyEnabled(enum class ESelectedKey Key, bool* bEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Base_C", "B03_GetKeyEnabled");

	Params::UWB_Button_Base_C_B03_GetKeyEnabled_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

	if (bEnabled != nullptr)
		*bEnabled = Parms.bEnabled;

}


// Function WB_Button_Base.WB_Button_Base_C.B03_GetStateByIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              State                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button_Base_C::B03_GetStateByIndex(int32* State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Base_C", "B03_GetStateByIndex");

	Params::UWB_Button_Base_C_B03_GetStateByIndex_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (State != nullptr)
		*State = Parms.State;

}


// Function WB_Button_Base.WB_Button_Base_C.B03_GetStateByName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        State                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button_Base_C::B03_GetStateByName(class FName* State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Base_C", "B03_GetStateByName");

	Params::UWB_Button_Base_C_B03_GetStateByName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (State != nullptr)
		*State = Parms.State;

}


// Function WB_Button_Base.WB_Button_Base_C.B04_GetScale_Clicked
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Scale                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button_Base_C::B04_GetScale_Clicked(float* Scale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Base_C", "B04_GetScale_Clicked");

	Params::UWB_Button_Base_C_B04_GetScale_Clicked_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Scale != nullptr)
		*Scale = Parms.Scale;

}


// Function WB_Button_Base.WB_Button_Base_C.B04_GetScale_Hovered
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Scale                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button_Base_C::B04_GetScale_Hovered(float* Scale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Base_C", "B04_GetScale_Hovered");

	Params::UWB_Button_Base_C_B04_GetScale_Hovered_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Scale != nullptr)
		*Scale = Parms.Scale;

}


// Function WB_Button_Base.WB_Button_Base_C.B04_GetImage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Image_Brush                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Image_Translation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button_Base_C::B04_GetImage(class UObject** Image_Brush, struct FVector2D* Image_Translation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Base_C", "B04_GetImage");

	Params::UWB_Button_Base_C_B04_GetImage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Image_Brush != nullptr)
		*Image_Brush = Parms.Image_Brush;

	if (Image_Translation != nullptr)
		*Image_Translation = std::move(Parms.Image_Translation);

}


// Function WB_Button_Base.WB_Button_Base_C.GetButtonJustification
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EJustification          EJustification                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button_Base_C::GetButtonJustification(enum class EJustification* EJustification)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Base_C", "GetButtonJustification");

	Params::UWB_Button_Base_C_GetButtonJustification_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EJustification != nullptr)
		*EJustification = Parms.EJustification;

}


// Function WB_Button_Base.WB_Button_Base_C.GetUserFocus
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               HasFocus                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_Button_Base_C::GetUserFocus(class APlayerController* Player, bool* HasFocus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Base_C", "GetUserFocus");

	Params::UWB_Button_Base_C_GetUserFocus_Params Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

	if (HasFocus != nullptr)
		*HasFocus = Parms.HasFocus;

}


// Function WB_Button_Base.WB_Button_Base_C.GetButtonFontInfo_Clicked
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFont*                       Font                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFontFace*                   Typeface                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Integer                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Color                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button_Base_C::GetButtonFontInfo_Clicked(class UFont** Font, class UFontFace** Typeface, int32* Integer, struct FLinearColor* Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Base_C", "GetButtonFontInfo_Clicked");

	Params::UWB_Button_Base_C_GetButtonFontInfo_Clicked_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Font != nullptr)
		*Font = Parms.Font;

	if (Typeface != nullptr)
		*Typeface = Parms.Typeface;

	if (Integer != nullptr)
		*Integer = Parms.Integer;

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

}


// Function WB_Button_Base.WB_Button_Base_C.GetButtonFontInfo_Disabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFont*                       Font                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFontFace*                   Typeface                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              FontSize                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Color                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button_Base_C::GetButtonFontInfo_Disabled(class UFont** Font, class UFontFace** Typeface, int32* FontSize, struct FLinearColor* Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Base_C", "GetButtonFontInfo_Disabled");

	Params::UWB_Button_Base_C_GetButtonFontInfo_Disabled_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Font != nullptr)
		*Font = Parms.Font;

	if (Typeface != nullptr)
		*Typeface = Parms.Typeface;

	if (FontSize != nullptr)
		*FontSize = Parms.FontSize;

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

}


// Function WB_Button_Base.WB_Button_Base_C.GetButtonFontInfo_Hovered
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFont*                       Font                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFontFace*                   Typeface                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              FontSize                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Color                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button_Base_C::GetButtonFontInfo_Hovered(class UFont** Font, class UFontFace** Typeface, int32* FontSize, struct FLinearColor* Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Base_C", "GetButtonFontInfo_Hovered");

	Params::UWB_Button_Base_C_GetButtonFontInfo_Hovered_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Font != nullptr)
		*Font = Parms.Font;

	if (Typeface != nullptr)
		*Typeface = Parms.Typeface;

	if (FontSize != nullptr)
		*FontSize = Parms.FontSize;

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

}


// Function WB_Button_Base.WB_Button_Base_C.GetButtonFontInfo_Normal
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFont*                       Font                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFontFace*                   Typeface                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              FontSize                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Color                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button_Base_C::GetButtonFontInfo_Normal(class UFont** Font, class UFontFace** Typeface, int32* FontSize, struct FLinearColor* Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Base_C", "GetButtonFontInfo_Normal");

	Params::UWB_Button_Base_C_GetButtonFontInfo_Normal_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Font != nullptr)
		*Font = Parms.Font;

	if (Typeface != nullptr)
		*Typeface = Parms.Typeface;

	if (FontSize != nullptr)
		*FontSize = Parms.FontSize;

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

}


// Function WB_Button_Base.WB_Button_Base_C.GetButtonText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ButtonText                                                       (Parm, OutParm)

void UWB_Button_Base_C::GetButtonText(class FText* ButtonText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Base_C", "GetButtonText");

	Params::UWB_Button_Base_C_GetButtonText_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ButtonText != nullptr)
		*ButtonText = Parms.ButtonText;

}


// Function WB_Button_Base.WB_Button_Base_C.GetButtonEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsEnabled                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_Button_Base_C::GetButtonEnabled(bool* bIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Base_C", "GetButtonEnabled");

	Params::UWB_Button_Base_C_GetButtonEnabled_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bIsEnabled != nullptr)
		*bIsEnabled = Parms.bIsEnabled;

}


// Function WB_Button_Base.WB_Button_Base_C.SetButtonText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ButtonText                                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UWB_Button_Base_C::SetButtonText(class FText ButtonText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Base_C", "SetButtonText");

	Params::UWB_Button_Base_C_SetButtonText_Params Parms{};

	Parms.ButtonText = ButtonText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button_Base.WB_Button_Base_C.SetButtonFontInfo_Current
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFont*                       Font                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFontFace*                   Typeface                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              FontSize                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button_Base_C::SetButtonFontInfo_Current(class UFont* Font, class UFontFace* Typeface, int32 FontSize, const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Base_C", "SetButtonFontInfo_Current");

	Params::UWB_Button_Base_C_SetButtonFontInfo_Current_Params Parms{};

	Parms.Font = Font;
	Parms.Typeface = Typeface;
	Parms.FontSize = FontSize;
	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button_Base.WB_Button_Base_C.SetButtonEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsEnabled                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_Button_Base_C::SetButtonEnabled(bool bIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Base_C", "SetButtonEnabled");

	Params::UWB_Button_Base_C_SetButtonEnabled_Params Parms{};

	Parms.bIsEnabled = bIsEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button_Base.WB_Button_Base_C.SetButtonFontInfo_Normal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFont*                       Font                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFontFace*                   Typeface                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              FontSize                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button_Base_C::SetButtonFontInfo_Normal(class UFont* Font, class UFontFace* Typeface, int32 FontSize, const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Base_C", "SetButtonFontInfo_Normal");

	Params::UWB_Button_Base_C_SetButtonFontInfo_Normal_Params Parms{};

	Parms.Font = Font;
	Parms.Typeface = Typeface;
	Parms.FontSize = FontSize;
	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button_Base.WB_Button_Base_C.SetButtonFontInfo_Hovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFont*                       Font                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFontFace*                   Typeface                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              FontSize                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button_Base_C::SetButtonFontInfo_Hovered(class UFont* Font, class UFontFace* Typeface, int32 FontSize, const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Base_C", "SetButtonFontInfo_Hovered");

	Params::UWB_Button_Base_C_SetButtonFontInfo_Hovered_Params Parms{};

	Parms.Font = Font;
	Parms.Typeface = Typeface;
	Parms.FontSize = FontSize;
	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button_Base.WB_Button_Base_C.SetButtonFontInfo_Clicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFont*                       Font                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFontFace*                   Typeface                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              FontSize                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button_Base_C::SetButtonFontInfo_Clicked(class UFont* Font, class UFontFace* Typeface, int32 FontSize, const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Base_C", "SetButtonFontInfo_Clicked");

	Params::UWB_Button_Base_C_SetButtonFontInfo_Clicked_Params Parms{};

	Parms.Font = Font;
	Parms.Typeface = Typeface;
	Parms.FontSize = FontSize;
	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button_Base.WB_Button_Base_C.SetButtonFontInfo_Disabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFont*                       Font                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFontFace*                   Typeface                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              FontSize                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button_Base_C::SetButtonFontInfo_Disabled(class UFont* Font, class UFontFace* Typeface, int32 FontSize, const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Base_C", "SetButtonFontInfo_Disabled");

	Params::UWB_Button_Base_C_SetButtonFontInfo_Disabled_Params Parms{};

	Parms.Font = Font;
	Parms.Typeface = Typeface;
	Parms.FontSize = FontSize;
	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button_Base.WB_Button_Base_C.SetUser_Focus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button_Base_C::SetUser_Focus(class APlayerController* Player)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Base_C", "SetUser_Focus");

	Params::UWB_Button_Base_C_SetUser_Focus_Params Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button_Base.WB_Button_Base_C.SetHintIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      HintIcon                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button_Base_C::SetHintIcon(class UClass* HintIcon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Base_C", "SetHintIcon");

	Params::UWB_Button_Base_C_SetHintIcon_Params Parms{};

	Parms.HintIcon = HintIcon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button_Base.WB_Button_Base_C.SetButtonSound_OnClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*                  ClickedSound                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button_Base_C::SetButtonSound_OnClicked(class USoundBase* ClickedSound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Base_C", "SetButtonSound_OnClicked");

	Params::UWB_Button_Base_C_SetButtonSound_OnClicked_Params Parms{};

	Parms.ClickedSound = ClickedSound;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button_Base.WB_Button_Base_C.SetButtonSound_OnHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*                  HoveredSound                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button_Base_C::SetButtonSound_OnHovered(class USoundBase* HoveredSound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Base_C", "SetButtonSound_OnHovered");

	Params::UWB_Button_Base_C_SetButtonSound_OnHovered_Params Parms{};

	Parms.HoveredSound = HoveredSound;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button_Base.WB_Button_Base_C.B01_SetColor_HoveredFX_01
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color_HoveredFX_01                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button_Base_C::B01_SetColor_HoveredFX_01(const struct FLinearColor& Color_HoveredFX_01)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Base_C", "B01_SetColor_HoveredFX_01");

	Params::UWB_Button_Base_C_B01_SetColor_HoveredFX_01_Params Parms{};

	Parms.Color_HoveredFX_01 = Color_HoveredFX_01;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button_Base.WB_Button_Base_C.B01_SetColor_HoveredFX_02
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color_HoveredFX_02                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button_Base_C::B01_SetColor_HoveredFX_02(const struct FLinearColor& Color_HoveredFX_02)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Base_C", "B01_SetColor_HoveredFX_02");

	Params::UWB_Button_Base_C_B01_SetColor_HoveredFX_02_Params Parms{};

	Parms.Color_HoveredFX_02 = Color_HoveredFX_02;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button_Base.WB_Button_Base_C.B01_SetColor_ClickedFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color_ClickedFX                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button_Base_C::B01_SetColor_ClickedFX(const struct FLinearColor& Color_ClickedFX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Base_C", "B01_SetColor_ClickedFX");

	Params::UWB_Button_Base_C_B01_SetColor_ClickedFX_Params Parms{};

	Parms.Color_ClickedFX = Color_ClickedFX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button_Base.WB_Button_Base_C.B01_SetColor_ClickedFX_Text
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color_ClickedFX_Text                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button_Base_C::B01_SetColor_ClickedFX_Text(const struct FLinearColor& Color_ClickedFX_Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Base_C", "B01_SetColor_ClickedFX_Text");

	Params::UWB_Button_Base_C_B01_SetColor_ClickedFX_Text_Params Parms{};

	Parms.Color_ClickedFX_Text = Color_ClickedFX_Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button_Base.WB_Button_Base_C.SetButtonJustification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EJustification          EJustification                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button_Base_C::SetButtonJustification(enum class EJustification EJustification)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Base_C", "SetButtonJustification");

	Params::UWB_Button_Base_C_SetButtonJustification_Params Parms{};

	Parms.EJustification = EJustification;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button_Base.WB_Button_Base_C.B02_SetFrameColor_Normal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                FrameColor_Normal                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button_Base_C::B02_SetFrameColor_Normal(const struct FLinearColor& FrameColor_Normal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Base_C", "B02_SetFrameColor_Normal");

	Params::UWB_Button_Base_C_B02_SetFrameColor_Normal_Params Parms{};

	Parms.FrameColor_Normal = FrameColor_Normal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button_Base.WB_Button_Base_C.B02_SetFrameColor_Hovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                FrameColor_Hovered                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button_Base_C::B02_SetFrameColor_Hovered(const struct FLinearColor& FrameColor_Hovered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Base_C", "B02_SetFrameColor_Hovered");

	Params::UWB_Button_Base_C_B02_SetFrameColor_Hovered_Params Parms{};

	Parms.FrameColor_Hovered = FrameColor_Hovered;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button_Base.WB_Button_Base_C.B02_SetFrameColor_Clicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                FrameColor_Clicked                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button_Base_C::B02_SetFrameColor_Clicked(const struct FLinearColor& FrameColor_Clicked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Base_C", "B02_SetFrameColor_Clicked");

	Params::UWB_Button_Base_C_B02_SetFrameColor_Clicked_Params Parms{};

	Parms.FrameColor_Clicked = FrameColor_Clicked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button_Base.WB_Button_Base_C.B02_SetFrameColor_Disabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                FrameColor_Disabled                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button_Base_C::B02_SetFrameColor_Disabled(const struct FLinearColor& FrameColor_Disabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Base_C", "B02_SetFrameColor_Disabled");

	Params::UWB_Button_Base_C_B02_SetFrameColor_Disabled_Params Parms{};

	Parms.FrameColor_Disabled = FrameColor_Disabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button_Base.WB_Button_Base_C.B02_SetFrameColor_Current
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                FrameColor_Current                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button_Base_C::B02_SetFrameColor_Current(const struct FLinearColor& FrameColor_Current)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Base_C", "B02_SetFrameColor_Current");

	Params::UWB_Button_Base_C_B02_SetFrameColor_Current_Params Parms{};

	Parms.FrameColor_Current = FrameColor_Current;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button_Base.WB_Button_Base_C.B02_SetFillColor_Normal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                FillColor_Normal                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button_Base_C::B02_SetFillColor_Normal(const struct FLinearColor& FillColor_Normal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Base_C", "B02_SetFillColor_Normal");

	Params::UWB_Button_Base_C_B02_SetFillColor_Normal_Params Parms{};

	Parms.FillColor_Normal = FillColor_Normal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button_Base.WB_Button_Base_C.B02_SetFillColor_Hovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                FillColor_Hovered                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button_Base_C::B02_SetFillColor_Hovered(const struct FLinearColor& FillColor_Hovered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Base_C", "B02_SetFillColor_Hovered");

	Params::UWB_Button_Base_C_B02_SetFillColor_Hovered_Params Parms{};

	Parms.FillColor_Hovered = FillColor_Hovered;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button_Base.WB_Button_Base_C.B02_SetFillColor_Clicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                FillColor_Clicked                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button_Base_C::B02_SetFillColor_Clicked(const struct FLinearColor& FillColor_Clicked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Base_C", "B02_SetFillColor_Clicked");

	Params::UWB_Button_Base_C_B02_SetFillColor_Clicked_Params Parms{};

	Parms.FillColor_Clicked = FillColor_Clicked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button_Base.WB_Button_Base_C.B02_SetFillColor_Disabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                FillColor_Disabled                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button_Base_C::B02_SetFillColor_Disabled(const struct FLinearColor& FillColor_Disabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Base_C", "B02_SetFillColor_Disabled");

	Params::UWB_Button_Base_C_B02_SetFillColor_Disabled_Params Parms{};

	Parms.FillColor_Disabled = FillColor_Disabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button_Base.WB_Button_Base_C.B02_SetFillColor_Current
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                FillColor_Current                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button_Base_C::B02_SetFillColor_Current(const struct FLinearColor& FillColor_Current)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Base_C", "B02_SetFillColor_Current");

	Params::UWB_Button_Base_C_B02_SetFillColor_Current_Params Parms{};

	Parms.FillColor_Current = FillColor_Current;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button_Base.WB_Button_Base_C.B02_SetUseDynamicShine
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bUseDynamicShine                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_Button_Base_C::B02_SetUseDynamicShine(bool bUseDynamicShine)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Base_C", "B02_SetUseDynamicShine");

	Params::UWB_Button_Base_C_B02_SetUseDynamicShine_Params Parms{};

	Parms.bUseDynamicShine = bUseDynamicShine;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button_Base.WB_Button_Base_C.B02_SetDynamicShineColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                InColor                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button_Base_C::B02_SetDynamicShineColor(const struct FLinearColor& InColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Base_C", "B02_SetDynamicShineColor");

	Params::UWB_Button_Base_C_B02_SetDynamicShineColor_Params Parms{};

	Parms.InColor = InColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button_Base.WB_Button_Base_C.B02_SetBlurShineColor_Hovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                InColor                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button_Base_C::B02_SetBlurShineColor_Hovered(const struct FLinearColor& InColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Base_C", "B02_SetBlurShineColor_Hovered");

	Params::UWB_Button_Base_C_B02_SetBlurShineColor_Hovered_Params Parms{};

	Parms.InColor = InColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button_Base.WB_Button_Base_C.B02_SetBlurShineColor_Clicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                InColor                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button_Base_C::B02_SetBlurShineColor_Clicked(const struct FLinearColor& InColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Base_C", "B02_SetBlurShineColor_Clicked");

	Params::UWB_Button_Base_C_B02_SetBlurShineColor_Clicked_Params Parms{};

	Parms.InColor = InColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button_Base.WB_Button_Base_C.B02_Create_ContentWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      ContentWidget                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button_Base_C::B02_Create_ContentWidget(class UClass* ContentWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Base_C", "B02_Create_ContentWidget");

	Params::UWB_Button_Base_C_B02_Create_ContentWidget_Params Parms{};

	Parms.ContentWidget = ContentWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button_Base.WB_Button_Base_C.B02_RemoveContentWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Button_Base_C::B02_RemoveContentWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Base_C", "B02_RemoveContentWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Button_Base.WB_Button_Base_C.B03_SetStateByName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button_Base_C::B03_SetStateByName(class FName State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Base_C", "B03_SetStateByName");

	Params::UWB_Button_Base_C_B03_SetStateByName_Params Parms{};

	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button_Base.WB_Button_Base_C.B03_SetStateByIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button_Base_C::B03_SetStateByIndex(int32 State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Base_C", "B03_SetStateByIndex");

	Params::UWB_Button_Base_C_B03_SetStateByIndex_Params Parms{};

	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button_Base.WB_Button_Base_C.B03_SetStateButtonIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Icon                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button_Base_C::B03_SetStateButtonIcon(class UObject* Icon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Base_C", "B03_SetStateButtonIcon");

	Params::UWB_Button_Base_C_B03_SetStateButtonIcon_Params Parms{};

	Parms.Icon = Icon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button_Base.WB_Button_Base_C.B03_SetStateButtonIconColor_Normal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button_Base_C::B03_SetStateButtonIconColor_Normal(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Base_C", "B03_SetStateButtonIconColor_Normal");

	Params::UWB_Button_Base_C_B03_SetStateButtonIconColor_Normal_Params Parms{};

	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button_Base.WB_Button_Base_C.B03_SetStateButtonIconColor_Hovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button_Base_C::B03_SetStateButtonIconColor_Hovered(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Base_C", "B03_SetStateButtonIconColor_Hovered");

	Params::UWB_Button_Base_C_B03_SetStateButtonIconColor_Hovered_Params Parms{};

	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button_Base.WB_Button_Base_C.B03_SetStateButtonIconColor_Clicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button_Base_C::B03_SetStateButtonIconColor_Clicked(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Base_C", "B03_SetStateButtonIconColor_Clicked");

	Params::UWB_Button_Base_C_B03_SetStateButtonIconColor_Clicked_Params Parms{};

	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button_Base.WB_Button_Base_C.B03_SetSelectedKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESelectedKey            Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputChord                 SelectedKey                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWB_Button_Base_C::B03_SetSelectedKey(enum class ESelectedKey Key, const struct FInputChord& SelectedKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Base_C", "B03_SetSelectedKey");

	Params::UWB_Button_Base_C_B03_SetSelectedKey_Params Parms{};

	Parms.Key = Key;
	Parms.SelectedKey = SelectedKey;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button_Base.WB_Button_Base_C.B03_SetKeyEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESelectedKey            Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bEnabled                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_Button_Base_C::B03_SetKeyEnabled(enum class ESelectedKey Key, bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Base_C", "B03_SetKeyEnabled");

	Params::UWB_Button_Base_C_B03_SetKeyEnabled_Params Parms{};

	Parms.Key = Key;
	Parms.bEnabled = bEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button_Base.WB_Button_Base_C.B03_SetKeySelectionText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESelectedKey            Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        KeySelectionText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UWB_Button_Base_C::B03_SetKeySelectionText(enum class ESelectedKey Key, class FText KeySelectionText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Base_C", "B03_SetKeySelectionText");

	Params::UWB_Button_Base_C_B03_SetKeySelectionText_Params Parms{};

	Parms.Key = Key;
	Parms.KeySelectionText = KeySelectionText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button_Base.WB_Button_Base_C.B03_SetAllowGamepadKeys
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESelectedKey            Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bAllowGamepadKeys                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_Button_Base_C::B03_SetAllowGamepadKeys(enum class ESelectedKey Key, bool bAllowGamepadKeys)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Base_C", "B03_SetAllowGamepadKeys");

	Params::UWB_Button_Base_C_B03_SetAllowGamepadKeys_Params Parms{};

	Parms.Key = Key;
	Parms.bAllowGamepadKeys = bAllowGamepadKeys;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button_Base.WB_Button_Base_C.B03_SetAllowModifierKeys
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESelectedKey            Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bAllowModifierKeys                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_Button_Base_C::B03_SetAllowModifierKeys(enum class ESelectedKey Key, bool bAllowModifierKeys)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Base_C", "B03_SetAllowModifierKeys");

	Params::UWB_Button_Base_C_B03_SetAllowModifierKeys_Params Parms{};

	Parms.Key = Key;
	Parms.bAllowModifierKeys = bAllowModifierKeys;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button_Base.WB_Button_Base_C.B03_SetKeyEscapeKeys
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESelectedKey            Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FKey>                EscapeKeys                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UWB_Button_Base_C::B03_SetKeyEscapeKeys(enum class ESelectedKey Key, TArray<struct FKey>& EscapeKeys)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Base_C", "B03_SetKeyEscapeKeys");

	Params::UWB_Button_Base_C_B03_SetKeyEscapeKeys_Params Parms{};

	Parms.Key = Key;
	Parms.EscapeKeys = EscapeKeys;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button_Base.WB_Button_Base_C.B03_CreateContentWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      ContentWidget                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button_Base_C::B03_CreateContentWidget(class UClass* ContentWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Base_C", "B03_CreateContentWidget");

	Params::UWB_Button_Base_C_B03_CreateContentWidget_Params Parms{};

	Parms.ContentWidget = ContentWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button_Base.WB_Button_Base_C.B03_RemoveContentWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Button_Base_C::B03_RemoveContentWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Base_C", "B03_RemoveContentWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Button_Base.WB_Button_Base_C.B04_SetFrameColor_Normal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                FrameColor1                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                FrameColor2                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                FrameColor_Shine                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                ShineFxColor_Background                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                ShineFxColor_Small                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                ShineFxColor_Big                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button_Base_C::B04_SetFrameColor_Normal(const struct FLinearColor& FrameColor1, const struct FLinearColor& FrameColor2, const struct FLinearColor& FrameColor_Shine, const struct FLinearColor& ShineFxColor_Background, const struct FLinearColor& ShineFxColor_Small, const struct FLinearColor& ShineFxColor_Big)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Base_C", "B04_SetFrameColor_Normal");

	Params::UWB_Button_Base_C_B04_SetFrameColor_Normal_Params Parms{};

	Parms.FrameColor1 = FrameColor1;
	Parms.FrameColor2 = FrameColor2;
	Parms.FrameColor_Shine = FrameColor_Shine;
	Parms.ShineFxColor_Background = ShineFxColor_Background;
	Parms.ShineFxColor_Small = ShineFxColor_Small;
	Parms.ShineFxColor_Big = ShineFxColor_Big;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button_Base.WB_Button_Base_C.B04_SetFrameColor_Hovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                FrameColor1                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                FrameColor2                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                FrameColor_Shine                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                ShineFxColor_Background                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                ShineFxColor_Small                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                ShineFxColor_Big                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button_Base_C::B04_SetFrameColor_Hovered(const struct FLinearColor& FrameColor1, const struct FLinearColor& FrameColor2, const struct FLinearColor& FrameColor_Shine, const struct FLinearColor& ShineFxColor_Background, const struct FLinearColor& ShineFxColor_Small, const struct FLinearColor& ShineFxColor_Big)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Base_C", "B04_SetFrameColor_Hovered");

	Params::UWB_Button_Base_C_B04_SetFrameColor_Hovered_Params Parms{};

	Parms.FrameColor1 = FrameColor1;
	Parms.FrameColor2 = FrameColor2;
	Parms.FrameColor_Shine = FrameColor_Shine;
	Parms.ShineFxColor_Background = ShineFxColor_Background;
	Parms.ShineFxColor_Small = ShineFxColor_Small;
	Parms.ShineFxColor_Big = ShineFxColor_Big;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button_Base.WB_Button_Base_C.B04_SetFrameColor_Clicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                FrameColor1                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                FrameColor2                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                FrameColor_Shine                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                ShineFxColor_Background                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                ShineFxColor_Small                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                ShineFxColor_Big                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button_Base_C::B04_SetFrameColor_Clicked(const struct FLinearColor& FrameColor1, const struct FLinearColor& FrameColor2, const struct FLinearColor& FrameColor_Shine, const struct FLinearColor& ShineFxColor_Background, const struct FLinearColor& ShineFxColor_Small, const struct FLinearColor& ShineFxColor_Big)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Base_C", "B04_SetFrameColor_Clicked");

	Params::UWB_Button_Base_C_B04_SetFrameColor_Clicked_Params Parms{};

	Parms.FrameColor1 = FrameColor1;
	Parms.FrameColor2 = FrameColor2;
	Parms.FrameColor_Shine = FrameColor_Shine;
	Parms.ShineFxColor_Background = ShineFxColor_Background;
	Parms.ShineFxColor_Small = ShineFxColor_Small;
	Parms.ShineFxColor_Big = ShineFxColor_Big;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button_Base.WB_Button_Base_C.B04_SetFrameColor_Disabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                FrameColor1                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                FrameColor2                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                FrameColor_Shine                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button_Base_C::B04_SetFrameColor_Disabled(const struct FLinearColor& FrameColor1, const struct FLinearColor& FrameColor2, const struct FLinearColor& FrameColor_Shine)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Base_C", "B04_SetFrameColor_Disabled");

	Params::UWB_Button_Base_C_B04_SetFrameColor_Disabled_Params Parms{};

	Parms.FrameColor1 = FrameColor1;
	Parms.FrameColor2 = FrameColor2;
	Parms.FrameColor_Shine = FrameColor_Shine;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button_Base.WB_Button_Base_C.B04_SetFrameColor_Current
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                FrameColor1                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                FrameColor2                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                FrameColor_Shine                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                ShineFxColor_Background                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                ShineFxColor_Small                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                ShineFxColor_Big                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button_Base_C::B04_SetFrameColor_Current(const struct FLinearColor& FrameColor1, const struct FLinearColor& FrameColor2, const struct FLinearColor& FrameColor_Shine, const struct FLinearColor& ShineFxColor_Background, const struct FLinearColor& ShineFxColor_Small, const struct FLinearColor& ShineFxColor_Big)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Base_C", "B04_SetFrameColor_Current");

	Params::UWB_Button_Base_C_B04_SetFrameColor_Current_Params Parms{};

	Parms.FrameColor1 = FrameColor1;
	Parms.FrameColor2 = FrameColor2;
	Parms.FrameColor_Shine = FrameColor_Shine;
	Parms.ShineFxColor_Background = ShineFxColor_Background;
	Parms.ShineFxColor_Small = ShineFxColor_Small;
	Parms.ShineFxColor_Big = ShineFxColor_Big;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button_Base.WB_Button_Base_C.B04_SetShineFxEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsEnabled                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_Button_Base_C::B04_SetShineFxEnabled(bool bIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Base_C", "B04_SetShineFxEnabled");

	Params::UWB_Button_Base_C_B04_SetShineFxEnabled_Params Parms{};

	Parms.bIsEnabled = bIsEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button_Base.WB_Button_Base_C.B04_CreateContentWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      ContentWidget                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button_Base_C::B04_CreateContentWidget(class UClass* ContentWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Base_C", "B04_CreateContentWidget");

	Params::UWB_Button_Base_C_B04_CreateContentWidget_Params Parms{};

	Parms.ContentWidget = ContentWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button_Base.WB_Button_Base_C.B04_RemoveContentWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Button_Base_C::B04_RemoveContentWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Base_C", "B04_RemoveContentWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Button_Base.WB_Button_Base_C.B04_SetImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     ImageBrush                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   ImageTranslation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button_Base_C::B04_SetImage(class UObject* ImageBrush, const struct FVector2D& ImageTranslation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Base_C", "B04_SetImage");

	Params::UWB_Button_Base_C_B04_SetImage_Params Parms{};

	Parms.ImageBrush = ImageBrush;
	Parms.ImageTranslation = ImageTranslation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button_Base.WB_Button_Base_C.B04_SetImageColor_Normal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                ImageColor_Normal                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Saturation_Normal                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button_Base_C::B04_SetImageColor_Normal(const struct FLinearColor& ImageColor_Normal, float Saturation_Normal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Base_C", "B04_SetImageColor_Normal");

	Params::UWB_Button_Base_C_B04_SetImageColor_Normal_Params Parms{};

	Parms.ImageColor_Normal = ImageColor_Normal;
	Parms.Saturation_Normal = Saturation_Normal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button_Base.WB_Button_Base_C.B04_SetImageColor_Hovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                ImageColor_Hovered                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Saturation_Hovered                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button_Base_C::B04_SetImageColor_Hovered(const struct FLinearColor& ImageColor_Hovered, float Saturation_Hovered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Base_C", "B04_SetImageColor_Hovered");

	Params::UWB_Button_Base_C_B04_SetImageColor_Hovered_Params Parms{};

	Parms.ImageColor_Hovered = ImageColor_Hovered;
	Parms.Saturation_Hovered = Saturation_Hovered;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button_Base.WB_Button_Base_C.B04_SetImageColor_Clicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                ImageColor_Clicked                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Saturation_Clicked                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button_Base_C::B04_SetImageColor_Clicked(const struct FLinearColor& ImageColor_Clicked, float Saturation_Clicked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Base_C", "B04_SetImageColor_Clicked");

	Params::UWB_Button_Base_C_B04_SetImageColor_Clicked_Params Parms{};

	Parms.ImageColor_Clicked = ImageColor_Clicked;
	Parms.Saturation_Clicked = Saturation_Clicked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button_Base.WB_Button_Base_C.B04_SetImageColor_Disabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                ImageColor_Disabled                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Saturation_Disabled                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button_Base_C::B04_SetImageColor_Disabled(const struct FLinearColor& ImageColor_Disabled, float Saturation_Disabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Base_C", "B04_SetImageColor_Disabled");

	Params::UWB_Button_Base_C_B04_SetImageColor_Disabled_Params Parms{};

	Parms.ImageColor_Disabled = ImageColor_Disabled;
	Parms.Saturation_Disabled = Saturation_Disabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button_Base.WB_Button_Base_C.B04_SetVignetteColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                VignetteColor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button_Base_C::B04_SetVignetteColor(const struct FLinearColor& VignetteColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Base_C", "B04_SetVignetteColor");

	Params::UWB_Button_Base_C_B04_SetVignetteColor_Params Parms{};

	Parms.VignetteColor = VignetteColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button_Base.WB_Button_Base_C.B04_SetScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Scale                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button_Base_C::B04_SetScale(float Scale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Base_C", "B04_SetScale");

	Params::UWB_Button_Base_C_B04_SetScale_Params Parms{};

	Parms.Scale = Scale;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button_Base.WB_Button_Base_C.B03_SetSliderValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button_Base_C::B03_SetSliderValue(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Base_C", "B03_SetSliderValue");

	Params::UWB_Button_Base_C_B03_SetSliderValue_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button_Base.WB_Button_Base_C.B03_SetSliderValueNormalized
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              ValueNormalized                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button_Base_C::B03_SetSliderValueNormalized(float ValueNormalized)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Base_C", "B03_SetSliderValueNormalized");

	Params::UWB_Button_Base_C_B03_SetSliderValueNormalized_Params Parms{};

	Parms.ValueNormalized = ValueNormalized;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button_Base.WB_Button_Base_C.ExecuteUbergraph_WB_Button_Base
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_ValueNormalized                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_ButtonText                                          (None)
// class UFont*                       K2Node_Event_Font_4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFontFace*                   K2Node_Event_TypeFace_4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_FontSize_4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_Color_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsEnabled_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFont*                       K2Node_Event_Font_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFontFace*                   K2Node_Event_TypeFace_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_FontSize_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_Color_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFont*                       K2Node_Event_Font_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFontFace*                   K2Node_Event_TypeFace_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_FontSize_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_Color_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFont*                       K2Node_Event_Font_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFontFace*                   K2Node_Event_TypeFace_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_FontSize_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_Color_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFont*                       K2Node_Event_Font                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFontFace*                   K2Node_Event_TypeFace                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_FontSize                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_Color_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           K2Node_Event_Player                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_Event_HintIcon                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_Event_ClickedSound                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_Event_HoveredSound                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_Color_HoveredFX_01                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_Color_HoveredFX_02                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_Color_ClickedFX                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_Color_ClickedFX_Text                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EJustification          K2Node_Event_EJustification                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_FrameColor_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_FrameColor_Hovered                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_FrameColor_Clicked                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_FrameColor_Disabled                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_FrameColor_Current                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_FillColor_Normal                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_FillColor_Hovered                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_FillColor_Clicked                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_FillColor_Disabled                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_FillColor_Current                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bUseDynamicShine                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_Event_InColor_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_InColor_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_InColor                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_Event_ContentWidget_2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_State_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_State                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Event_Icon                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_Color_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_Color_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_Color                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESelectedKey            K2Node_Event_Key_5                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputChord                 K2Node_Event_SelectedKey                                         (HasGetValueTypeHash)
// enum class ESelectedKey            K2Node_Event_Key_4                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bEnabled                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESelectedKey            K2Node_Event_Key_3                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_KeySelectionText                                    (None)
// enum class ESelectedKey            K2Node_Event_Key_2                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bAllowGamepadKeys                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESelectedKey            K2Node_Event_Key_1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bAllowModifierKeys                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESelectedKey            K2Node_Event_Key                                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FKey>                K2Node_Event_EscapeKeys                                          (ConstParm, ZeroConstructor, ReferenceParm)
// class UClass*                      K2Node_Event_ContentWidget_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_FrameColor1_4                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_FrameColor2_4                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_FrameColor_Shine_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_ShineFxColor_Background_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_ShineFxColor_Small_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_ShineFxColor_Big_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_FrameColor1_3                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_FrameColor2_3                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_FrameColor_Shine_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_ShineFxColor_Background_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_ShineFxColor_Small_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_ShineFxColor_Big_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_FrameColor1_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_FrameColor2_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_FrameColor_Shine_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_ShineFxColor_Background_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_ShineFxColor_Small_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_ShineFxColor_Big_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_FrameColor1_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_FrameColor2_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_FrameColor_Shine_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_FrameColor1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_FrameColor2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_FrameColor_Shine                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_ShineFxColor_Background                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_ShineFxColor_Small                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_ShineFxColor_Big                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsEnabled                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_Event_ContentWidget                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Event_ImageBrush                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   K2Node_Event_ImageTranslation                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_ImageColor_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Saturation_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_ImageColor_Hovered                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Saturation_Hovered                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_ImageColor_Clicked                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Saturation_Clicked                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_ImageColor_Disabled                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Saturation_Disabled                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_VignetteColor                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Scale                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Value                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button_Base_C::ExecuteUbergraph_WB_Button_Base(int32 EntryPoint, float K2Node_Event_ValueNormalized, class FText K2Node_Event_ButtonText, class UFont* K2Node_Event_Font_4, class UFontFace* K2Node_Event_TypeFace_4, int32 K2Node_Event_FontSize_4, const struct FLinearColor& K2Node_Event_Color_7, bool K2Node_Event_bIsEnabled_1, class UFont* K2Node_Event_Font_3, class UFontFace* K2Node_Event_TypeFace_3, int32 K2Node_Event_FontSize_3, const struct FLinearColor& K2Node_Event_Color_6, class UFont* K2Node_Event_Font_2, class UFontFace* K2Node_Event_TypeFace_2, int32 K2Node_Event_FontSize_2, const struct FLinearColor& K2Node_Event_Color_5, class UFont* K2Node_Event_Font_1, class UFontFace* K2Node_Event_TypeFace_1, int32 K2Node_Event_FontSize_1, const struct FLinearColor& K2Node_Event_Color_4, class UFont* K2Node_Event_Font, class UFontFace* K2Node_Event_TypeFace, int32 K2Node_Event_FontSize, const struct FLinearColor& K2Node_Event_Color_3, class APlayerController* K2Node_Event_Player, class UClass* K2Node_Event_HintIcon, class USoundBase* K2Node_Event_ClickedSound, class USoundBase* K2Node_Event_HoveredSound, const struct FLinearColor& K2Node_Event_Color_HoveredFX_01, const struct FLinearColor& K2Node_Event_Color_HoveredFX_02, const struct FLinearColor& K2Node_Event_Color_ClickedFX, const struct FLinearColor& K2Node_Event_Color_ClickedFX_Text, enum class EJustification K2Node_Event_EJustification, const struct FLinearColor& K2Node_Event_FrameColor_Normal, const struct FLinearColor& K2Node_Event_FrameColor_Hovered, const struct FLinearColor& K2Node_Event_FrameColor_Clicked, const struct FLinearColor& K2Node_Event_FrameColor_Disabled, const struct FLinearColor& K2Node_Event_FrameColor_Current, const struct FLinearColor& K2Node_Event_FillColor_Normal, const struct FLinearColor& K2Node_Event_FillColor_Hovered, const struct FLinearColor& K2Node_Event_FillColor_Clicked, const struct FLinearColor& K2Node_Event_FillColor_Disabled, const struct FLinearColor& K2Node_Event_FillColor_Current, bool K2Node_Event_bUseDynamicShine, const struct FLinearColor& K2Node_Event_InColor_2, const struct FLinearColor& K2Node_Event_InColor_1, const struct FLinearColor& K2Node_Event_InColor, class UClass* K2Node_Event_ContentWidget_2, class FName K2Node_Event_State_1, int32 K2Node_Event_State, class UObject* K2Node_Event_Icon, const struct FLinearColor& K2Node_Event_Color_2, const struct FLinearColor& K2Node_Event_Color_1, const struct FLinearColor& K2Node_Event_Color, enum class ESelectedKey K2Node_Event_Key_5, const struct FInputChord& K2Node_Event_SelectedKey, enum class ESelectedKey K2Node_Event_Key_4, bool K2Node_Event_bEnabled, enum class ESelectedKey K2Node_Event_Key_3, class FText K2Node_Event_KeySelectionText, enum class ESelectedKey K2Node_Event_Key_2, bool K2Node_Event_bAllowGamepadKeys, enum class ESelectedKey K2Node_Event_Key_1, bool K2Node_Event_bAllowModifierKeys, enum class ESelectedKey K2Node_Event_Key, TArray<struct FKey>& K2Node_Event_EscapeKeys, class UClass* K2Node_Event_ContentWidget_1, const struct FLinearColor& K2Node_Event_FrameColor1_4, const struct FLinearColor& K2Node_Event_FrameColor2_4, const struct FLinearColor& K2Node_Event_FrameColor_Shine_4, const struct FLinearColor& K2Node_Event_ShineFxColor_Background_3, const struct FLinearColor& K2Node_Event_ShineFxColor_Small_3, const struct FLinearColor& K2Node_Event_ShineFxColor_Big_3, const struct FLinearColor& K2Node_Event_FrameColor1_3, const struct FLinearColor& K2Node_Event_FrameColor2_3, const struct FLinearColor& K2Node_Event_FrameColor_Shine_3, const struct FLinearColor& K2Node_Event_ShineFxColor_Background_2, const struct FLinearColor& K2Node_Event_ShineFxColor_Small_2, const struct FLinearColor& K2Node_Event_ShineFxColor_Big_2, const struct FLinearColor& K2Node_Event_FrameColor1_2, const struct FLinearColor& K2Node_Event_FrameColor2_2, const struct FLinearColor& K2Node_Event_FrameColor_Shine_2, const struct FLinearColor& K2Node_Event_ShineFxColor_Background_1, const struct FLinearColor& K2Node_Event_ShineFxColor_Small_1, const struct FLinearColor& K2Node_Event_ShineFxColor_Big_1, const struct FLinearColor& K2Node_Event_FrameColor1_1, const struct FLinearColor& K2Node_Event_FrameColor2_1, const struct FLinearColor& K2Node_Event_FrameColor_Shine_1, const struct FLinearColor& K2Node_Event_FrameColor1, const struct FLinearColor& K2Node_Event_FrameColor2, const struct FLinearColor& K2Node_Event_FrameColor_Shine, const struct FLinearColor& K2Node_Event_ShineFxColor_Background, const struct FLinearColor& K2Node_Event_ShineFxColor_Small, const struct FLinearColor& K2Node_Event_ShineFxColor_Big, bool K2Node_Event_bIsEnabled, class UClass* K2Node_Event_ContentWidget, class UObject* K2Node_Event_ImageBrush, const struct FVector2D& K2Node_Event_ImageTranslation, const struct FLinearColor& K2Node_Event_ImageColor_Normal, float K2Node_Event_Saturation_Normal, const struct FLinearColor& K2Node_Event_ImageColor_Hovered, float K2Node_Event_Saturation_Hovered, const struct FLinearColor& K2Node_Event_ImageColor_Clicked, float K2Node_Event_Saturation_Clicked, const struct FLinearColor& K2Node_Event_ImageColor_Disabled, float K2Node_Event_Saturation_Disabled, const struct FLinearColor& K2Node_Event_VignetteColor, float K2Node_Event_Scale, float K2Node_Event_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Base_C", "ExecuteUbergraph_WB_Button_Base");

	Params::UWB_Button_Base_C_ExecuteUbergraph_WB_Button_Base_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ValueNormalized = K2Node_Event_ValueNormalized;
	Parms.K2Node_Event_ButtonText = K2Node_Event_ButtonText;
	Parms.K2Node_Event_Font_4 = K2Node_Event_Font_4;
	Parms.K2Node_Event_TypeFace_4 = K2Node_Event_TypeFace_4;
	Parms.K2Node_Event_FontSize_4 = K2Node_Event_FontSize_4;
	Parms.K2Node_Event_Color_7 = K2Node_Event_Color_7;
	Parms.K2Node_Event_bIsEnabled_1 = K2Node_Event_bIsEnabled_1;
	Parms.K2Node_Event_Font_3 = K2Node_Event_Font_3;
	Parms.K2Node_Event_TypeFace_3 = K2Node_Event_TypeFace_3;
	Parms.K2Node_Event_FontSize_3 = K2Node_Event_FontSize_3;
	Parms.K2Node_Event_Color_6 = K2Node_Event_Color_6;
	Parms.K2Node_Event_Font_2 = K2Node_Event_Font_2;
	Parms.K2Node_Event_TypeFace_2 = K2Node_Event_TypeFace_2;
	Parms.K2Node_Event_FontSize_2 = K2Node_Event_FontSize_2;
	Parms.K2Node_Event_Color_5 = K2Node_Event_Color_5;
	Parms.K2Node_Event_Font_1 = K2Node_Event_Font_1;
	Parms.K2Node_Event_TypeFace_1 = K2Node_Event_TypeFace_1;
	Parms.K2Node_Event_FontSize_1 = K2Node_Event_FontSize_1;
	Parms.K2Node_Event_Color_4 = K2Node_Event_Color_4;
	Parms.K2Node_Event_Font = K2Node_Event_Font;
	Parms.K2Node_Event_TypeFace = K2Node_Event_TypeFace;
	Parms.K2Node_Event_FontSize = K2Node_Event_FontSize;
	Parms.K2Node_Event_Color_3 = K2Node_Event_Color_3;
	Parms.K2Node_Event_Player = K2Node_Event_Player;
	Parms.K2Node_Event_HintIcon = K2Node_Event_HintIcon;
	Parms.K2Node_Event_ClickedSound = K2Node_Event_ClickedSound;
	Parms.K2Node_Event_HoveredSound = K2Node_Event_HoveredSound;
	Parms.K2Node_Event_Color_HoveredFX_01 = K2Node_Event_Color_HoveredFX_01;
	Parms.K2Node_Event_Color_HoveredFX_02 = K2Node_Event_Color_HoveredFX_02;
	Parms.K2Node_Event_Color_ClickedFX = K2Node_Event_Color_ClickedFX;
	Parms.K2Node_Event_Color_ClickedFX_Text = K2Node_Event_Color_ClickedFX_Text;
	Parms.K2Node_Event_EJustification = K2Node_Event_EJustification;
	Parms.K2Node_Event_FrameColor_Normal = K2Node_Event_FrameColor_Normal;
	Parms.K2Node_Event_FrameColor_Hovered = K2Node_Event_FrameColor_Hovered;
	Parms.K2Node_Event_FrameColor_Clicked = K2Node_Event_FrameColor_Clicked;
	Parms.K2Node_Event_FrameColor_Disabled = K2Node_Event_FrameColor_Disabled;
	Parms.K2Node_Event_FrameColor_Current = K2Node_Event_FrameColor_Current;
	Parms.K2Node_Event_FillColor_Normal = K2Node_Event_FillColor_Normal;
	Parms.K2Node_Event_FillColor_Hovered = K2Node_Event_FillColor_Hovered;
	Parms.K2Node_Event_FillColor_Clicked = K2Node_Event_FillColor_Clicked;
	Parms.K2Node_Event_FillColor_Disabled = K2Node_Event_FillColor_Disabled;
	Parms.K2Node_Event_FillColor_Current = K2Node_Event_FillColor_Current;
	Parms.K2Node_Event_bUseDynamicShine = K2Node_Event_bUseDynamicShine;
	Parms.K2Node_Event_InColor_2 = K2Node_Event_InColor_2;
	Parms.K2Node_Event_InColor_1 = K2Node_Event_InColor_1;
	Parms.K2Node_Event_InColor = K2Node_Event_InColor;
	Parms.K2Node_Event_ContentWidget_2 = K2Node_Event_ContentWidget_2;
	Parms.K2Node_Event_State_1 = K2Node_Event_State_1;
	Parms.K2Node_Event_State = K2Node_Event_State;
	Parms.K2Node_Event_Icon = K2Node_Event_Icon;
	Parms.K2Node_Event_Color_2 = K2Node_Event_Color_2;
	Parms.K2Node_Event_Color_1 = K2Node_Event_Color_1;
	Parms.K2Node_Event_Color = K2Node_Event_Color;
	Parms.K2Node_Event_Key_5 = K2Node_Event_Key_5;
	Parms.K2Node_Event_SelectedKey = K2Node_Event_SelectedKey;
	Parms.K2Node_Event_Key_4 = K2Node_Event_Key_4;
	Parms.K2Node_Event_bEnabled = K2Node_Event_bEnabled;
	Parms.K2Node_Event_Key_3 = K2Node_Event_Key_3;
	Parms.K2Node_Event_KeySelectionText = K2Node_Event_KeySelectionText;
	Parms.K2Node_Event_Key_2 = K2Node_Event_Key_2;
	Parms.K2Node_Event_bAllowGamepadKeys = K2Node_Event_bAllowGamepadKeys;
	Parms.K2Node_Event_Key_1 = K2Node_Event_Key_1;
	Parms.K2Node_Event_bAllowModifierKeys = K2Node_Event_bAllowModifierKeys;
	Parms.K2Node_Event_Key = K2Node_Event_Key;
	Parms.K2Node_Event_EscapeKeys = K2Node_Event_EscapeKeys;
	Parms.K2Node_Event_ContentWidget_1 = K2Node_Event_ContentWidget_1;
	Parms.K2Node_Event_FrameColor1_4 = K2Node_Event_FrameColor1_4;
	Parms.K2Node_Event_FrameColor2_4 = K2Node_Event_FrameColor2_4;
	Parms.K2Node_Event_FrameColor_Shine_4 = K2Node_Event_FrameColor_Shine_4;
	Parms.K2Node_Event_ShineFxColor_Background_3 = K2Node_Event_ShineFxColor_Background_3;
	Parms.K2Node_Event_ShineFxColor_Small_3 = K2Node_Event_ShineFxColor_Small_3;
	Parms.K2Node_Event_ShineFxColor_Big_3 = K2Node_Event_ShineFxColor_Big_3;
	Parms.K2Node_Event_FrameColor1_3 = K2Node_Event_FrameColor1_3;
	Parms.K2Node_Event_FrameColor2_3 = K2Node_Event_FrameColor2_3;
	Parms.K2Node_Event_FrameColor_Shine_3 = K2Node_Event_FrameColor_Shine_3;
	Parms.K2Node_Event_ShineFxColor_Background_2 = K2Node_Event_ShineFxColor_Background_2;
	Parms.K2Node_Event_ShineFxColor_Small_2 = K2Node_Event_ShineFxColor_Small_2;
	Parms.K2Node_Event_ShineFxColor_Big_2 = K2Node_Event_ShineFxColor_Big_2;
	Parms.K2Node_Event_FrameColor1_2 = K2Node_Event_FrameColor1_2;
	Parms.K2Node_Event_FrameColor2_2 = K2Node_Event_FrameColor2_2;
	Parms.K2Node_Event_FrameColor_Shine_2 = K2Node_Event_FrameColor_Shine_2;
	Parms.K2Node_Event_ShineFxColor_Background_1 = K2Node_Event_ShineFxColor_Background_1;
	Parms.K2Node_Event_ShineFxColor_Small_1 = K2Node_Event_ShineFxColor_Small_1;
	Parms.K2Node_Event_ShineFxColor_Big_1 = K2Node_Event_ShineFxColor_Big_1;
	Parms.K2Node_Event_FrameColor1_1 = K2Node_Event_FrameColor1_1;
	Parms.K2Node_Event_FrameColor2_1 = K2Node_Event_FrameColor2_1;
	Parms.K2Node_Event_FrameColor_Shine_1 = K2Node_Event_FrameColor_Shine_1;
	Parms.K2Node_Event_FrameColor1 = K2Node_Event_FrameColor1;
	Parms.K2Node_Event_FrameColor2 = K2Node_Event_FrameColor2;
	Parms.K2Node_Event_FrameColor_Shine = K2Node_Event_FrameColor_Shine;
	Parms.K2Node_Event_ShineFxColor_Background = K2Node_Event_ShineFxColor_Background;
	Parms.K2Node_Event_ShineFxColor_Small = K2Node_Event_ShineFxColor_Small;
	Parms.K2Node_Event_ShineFxColor_Big = K2Node_Event_ShineFxColor_Big;
	Parms.K2Node_Event_bIsEnabled = K2Node_Event_bIsEnabled;
	Parms.K2Node_Event_ContentWidget = K2Node_Event_ContentWidget;
	Parms.K2Node_Event_ImageBrush = K2Node_Event_ImageBrush;
	Parms.K2Node_Event_ImageTranslation = K2Node_Event_ImageTranslation;
	Parms.K2Node_Event_ImageColor_Normal = K2Node_Event_ImageColor_Normal;
	Parms.K2Node_Event_Saturation_Normal = K2Node_Event_Saturation_Normal;
	Parms.K2Node_Event_ImageColor_Hovered = K2Node_Event_ImageColor_Hovered;
	Parms.K2Node_Event_Saturation_Hovered = K2Node_Event_Saturation_Hovered;
	Parms.K2Node_Event_ImageColor_Clicked = K2Node_Event_ImageColor_Clicked;
	Parms.K2Node_Event_Saturation_Clicked = K2Node_Event_Saturation_Clicked;
	Parms.K2Node_Event_ImageColor_Disabled = K2Node_Event_ImageColor_Disabled;
	Parms.K2Node_Event_Saturation_Disabled = K2Node_Event_Saturation_Disabled;
	Parms.K2Node_Event_VignetteColor = K2Node_Event_VignetteColor;
	Parms.K2Node_Event_Scale = K2Node_Event_Scale;
	Parms.K2Node_Event_Value = K2Node_Event_Value;

	UObject::ProcessEvent(Func, &Parms);

}

}


