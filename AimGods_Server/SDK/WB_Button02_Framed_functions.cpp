#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_Button02_Framed.WB_Button02_Framed_C
// (None)

class UClass* UWB_Button02_Framed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_Button02_Framed_C");

	return Clss;
}


// WB_Button02_Framed_C WB_Button02_Framed.Default__WB_Button02_Framed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_Button02_Framed_C* UWB_Button02_Framed_C::GetDefaultObj()
{
	static class UWB_Button02_Framed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_Button02_Framed_C*>(UWB_Button02_Framed_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_Button02_Framed.WB_Button02_Framed_C.RemoveContentWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_HasAnyChildren_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_Button02_Framed_C::RemoveContentWidget(bool CallFunc_HasAnyChildren_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button02_Framed_C", "RemoveContentWidget");

	Params::UWB_Button02_Framed_C_RemoveContentWidget_Params Parms{};

	Parms.CallFunc_HasAnyChildren_ReturnValue = CallFunc_HasAnyChildren_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button02_Framed.WB_Button02_Framed_C.CreateContentWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      ContentWidget                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      LocalContentWidget                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EJustification          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHorizontalAlignment    Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHorizontalAlignment    Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHorizontalAlignment    Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHorizontalAlignment    K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOverlaySlot*                CallFunc_AddChildToOverlay_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button02_Framed_C::CreateContentWidget(class UClass* ContentWidget, class UClass* LocalContentWidget, enum class EJustification Temp_byte_Variable, enum class EHorizontalAlignment Temp_byte_Variable_1, enum class EHorizontalAlignment Temp_byte_Variable_2, enum class EHorizontalAlignment Temp_byte_Variable_3, bool CallFunc_IsValidClass_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, enum class EHorizontalAlignment K2Node_Select_Default, class UUserWidget* CallFunc_Create_ReturnValue, class UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button02_Framed_C", "CreateContentWidget");

	Params::UWB_Button02_Framed_C_CreateContentWidget_Params Parms{};

	Parms.ContentWidget = ContentWidget;
	Parms.LocalContentWidget = LocalContentWidget;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChildToOverlay_ReturnValue = CallFunc_AddChildToOverlay_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button02_Framed.WB_Button02_Framed_C.IsContentWidgetValid
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UWB_Button02_Framed_C::IsContentWidgetValid(bool CallFunc_IsValidClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button02_Framed_C", "IsContentWidgetValid");

	Params::UWB_Button02_Framed_C_IsContentWidgetValid_Params Parms{};

	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_Button02_Framed.WB_Button02_Framed_C.SetLightFX_Scale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_MapRangeClamped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button02_Framed_C::SetLightFX_Scale(float Value, float CallFunc_MapRangeClamped_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button02_Framed_C", "SetLightFX_Scale");

	Params::UWB_Button02_Framed_C_SetLightFX_Scale_Params Parms{};

	Parms.Value = Value;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button02_Framed.WB_Button02_Framed_C.SetBokehFX_Scale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button02_Framed_C::SetBokehFX_Scale(float Value, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button02_Framed_C", "SetBokehFX_Scale");

	Params::UWB_Button02_Framed_C_SetBokehFX_Scale_Params Parms{};

	Parms.Value = Value;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button02_Framed.WB_Button02_Framed_C.SetAllBlurredFrameColors
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color_FX01_Hovered                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Color_FX01_Clicked                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button02_Framed_C::SetAllBlurredFrameColors(const struct FLinearColor& Color_FX01_Hovered, const struct FLinearColor& Color_FX01_Clicked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button02_Framed_C", "SetAllBlurredFrameColors");

	Params::UWB_Button02_Framed_C_SetAllBlurredFrameColors_Params Parms{};

	Parms.Color_FX01_Hovered = Color_FX01_Hovered;
	Parms.Color_FX01_Clicked = Color_FX01_Clicked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button02_Framed.WB_Button02_Framed_C.SetBlurredFrameColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button02_Framed_C::SetBlurredFrameColor(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button02_Framed_C", "SetBlurredFrameColor");

	Params::UWB_Button02_Framed_C_SetBlurredFrameColor_Params Parms{};

	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button02_Framed.WB_Button02_Framed_C.Set_AllFillColors
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                FillColor_Normal                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                FillColor_Hovered                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                FillColor_Clicked                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                FillColor_Disabled                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button02_Framed_C::Set_AllFillColors(const struct FLinearColor& FillColor_Normal, const struct FLinearColor& FillColor_Hovered, const struct FLinearColor& FillColor_Clicked, const struct FLinearColor& FillColor_Disabled, bool Temp_bool_Variable, const struct FLinearColor& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button02_Framed_C", "Set_AllFillColors");

	Params::UWB_Button02_Framed_C_Set_AllFillColors_Params Parms{};

	Parms.FillColor_Normal = FillColor_Normal;
	Parms.FillColor_Hovered = FillColor_Hovered;
	Parms.FillColor_Clicked = FillColor_Clicked;
	Parms.FillColor_Disabled = FillColor_Disabled;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button02_Framed.WB_Button02_Framed_C.Set_FillColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                FillColor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button02_Framed_C::Set_FillColor(const struct FLinearColor& FillColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button02_Framed_C", "Set_FillColor");

	Params::UWB_Button02_Framed_C_Set_FillColor_Params Parms{};

	Parms.FillColor = FillColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button02_Framed.WB_Button02_Framed_C.Set_AllFrameColours
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                FrameColor_Normal                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                FrameColor_Hovered                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                FrameColor_Clicked                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                FrameColor_Disabled                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button02_Framed_C::Set_AllFrameColours(const struct FLinearColor& FrameColor_Normal, const struct FLinearColor& FrameColor_Hovered, const struct FLinearColor& FrameColor_Clicked, const struct FLinearColor& FrameColor_Disabled, bool Temp_bool_Variable, const struct FLinearColor& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button02_Framed_C", "Set_AllFrameColours");

	Params::UWB_Button02_Framed_C_Set_AllFrameColours_Params Parms{};

	Parms.FrameColor_Normal = FrameColor_Normal;
	Parms.FrameColor_Hovered = FrameColor_Hovered;
	Parms.FrameColor_Clicked = FrameColor_Clicked;
	Parms.FrameColor_Disabled = FrameColor_Disabled;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button02_Framed.WB_Button02_Framed_C.Set_FrameColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                FrameColor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button02_Framed_C::Set_FrameColor(const struct FLinearColor& FrameColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button02_Framed_C", "Set_FrameColor");

	Params::UWB_Button02_Framed_C_Set_FrameColor_Params Parms{};

	Parms.FrameColor = FrameColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button02_Framed.WB_Button02_Framed_C.Set_FrameDynamicShineColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                FrameShineColor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button02_Framed_C::Set_FrameDynamicShineColor(const struct FLinearColor& FrameShineColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button02_Framed_C", "Set_FrameDynamicShineColor");

	Params::UWB_Button02_Framed_C_Set_FrameDynamicShineColor_Params Parms{};

	Parms.FrameShineColor = FrameShineColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button02_Framed.WB_Button02_Framed_C.Set_UseFrameDynamicShine
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bUseShine                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_Button02_Framed_C::Set_UseFrameDynamicShine(bool bUseShine)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button02_Framed_C", "Set_UseFrameDynamicShine");

	Params::UWB_Button02_Framed_C_Set_UseFrameDynamicShine_Params Parms{};

	Parms.bUseShine = bUseShine;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button02_Framed.WB_Button02_Framed_C.GetButtonJustification
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EJustification          EJustification                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button02_Framed_C::GetButtonJustification(enum class EJustification* EJustification)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button02_Framed_C", "GetButtonJustification");

	Params::UWB_Button02_Framed_C_GetButtonJustification_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EJustification != nullptr)
		*EJustification = Parms.EJustification;

}


// Function WB_Button02_Framed.WB_Button02_Framed_C.GetUserFocus
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               HasFocus                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UButton*                     CallFunc_GetButton_Base_Button                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasUserFocus_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_Button02_Framed_C::GetUserFocus(class APlayerController* Player, bool* HasFocus, bool CallFunc_IsValid_ReturnValue, class UButton* CallFunc_GetButton_Base_Button, bool CallFunc_HasUserFocus_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button02_Framed_C", "GetUserFocus");

	Params::UWB_Button02_Framed_C_GetUserFocus_Params Parms{};

	Parms.Player = Player;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetButton_Base_Button = CallFunc_GetButton_Base_Button;
	Parms.CallFunc_HasUserFocus_ReturnValue = CallFunc_HasUserFocus_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (HasFocus != nullptr)
		*HasFocus = Parms.HasFocus;

}


// Function WB_Button02_Framed.WB_Button02_Framed_C.GetButtonFontInfo_Disabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFont*                       Font                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFontFace*                   Typeface                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              FontSize                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Color                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button02_Framed_C::GetButtonFontInfo_Disabled(class UFont** Font, class UFontFace** Typeface, int32* FontSize, struct FLinearColor* Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button02_Framed_C", "GetButtonFontInfo_Disabled");

	Params::UWB_Button02_Framed_C_GetButtonFontInfo_Disabled_Params Parms{};


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


// Function WB_Button02_Framed.WB_Button02_Framed_C.GetButtonFontInfo_Clicked
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFont*                       Font                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFontFace*                   Typeface                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Integer                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Color                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button02_Framed_C::GetButtonFontInfo_Clicked(class UFont** Font, class UFontFace** Typeface, int32* Integer, struct FLinearColor* Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button02_Framed_C", "GetButtonFontInfo_Clicked");

	Params::UWB_Button02_Framed_C_GetButtonFontInfo_Clicked_Params Parms{};


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


// Function WB_Button02_Framed.WB_Button02_Framed_C.GetButtonFontInfo_Hovered
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFont*                       Font                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFontFace*                   Typeface                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              FontSize                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Color                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button02_Framed_C::GetButtonFontInfo_Hovered(class UFont** Font, class UFontFace** Typeface, int32* FontSize, struct FLinearColor* Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button02_Framed_C", "GetButtonFontInfo_Hovered");

	Params::UWB_Button02_Framed_C_GetButtonFontInfo_Hovered_Params Parms{};


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


// Function WB_Button02_Framed.WB_Button02_Framed_C.GetButtonFontInfo_Normal
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFont*                       Font                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFontFace*                   Typeface                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              FontSize                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Color                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button02_Framed_C::GetButtonFontInfo_Normal(class UFont** Font, class UFontFace** Typeface, int32* FontSize, struct FLinearColor* Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button02_Framed_C", "GetButtonFontInfo_Normal");

	Params::UWB_Button02_Framed_C_GetButtonFontInfo_Normal_Params Parms{};


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


// Function WB_Button02_Framed.WB_Button02_Framed_C.GetButtonText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ButtonText                                                       (Parm, OutParm)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)

void UWB_Button02_Framed_C::GetButtonText(class FText* ButtonText, class FText CallFunc_GetText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button02_Framed_C", "GetButtonText");

	Params::UWB_Button02_Framed_C_GetButtonText_Params Parms{};

	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ButtonText != nullptr)
		*ButtonText = Parms.ButtonText;

}


// Function WB_Button02_Framed.WB_Button02_Framed_C.GetButtonEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsEnabled                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UButton*                     CallFunc_GetButton_Base_Button                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UButton*                     CallFunc_GetButton_Base_Button_1                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_Button02_Framed_C::GetButtonEnabled(bool* bIsEnabled, class UButton* CallFunc_GetButton_Base_Button, class UButton* CallFunc_GetButton_Base_Button_1, bool CallFunc_GetIsEnabled_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button02_Framed_C", "GetButtonEnabled");

	Params::UWB_Button02_Framed_C_GetButtonEnabled_Params Parms{};

	Parms.CallFunc_GetButton_Base_Button = CallFunc_GetButton_Base_Button;
	Parms.CallFunc_GetButton_Base_Button_1 = CallFunc_GetButton_Base_Button_1;
	Parms.CallFunc_GetIsEnabled_ReturnValue = CallFunc_GetIsEnabled_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bIsEnabled != nullptr)
		*bIsEnabled = Parms.bIsEnabled;

}


// Function WB_Button02_Framed.WB_Button02_Framed_C.UpdateIsEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsEnabled                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UButton*                     CallFunc_GetButton_Base_Button                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UButton*                     CallFunc_GetButton_Base_Button_1                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UButton*                     CallFunc_GetButton_Base_Button_2                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsHovered_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_Button02_Framed_C::UpdateIsEnabled(bool bIsEnabled, class UButton* CallFunc_GetButton_Base_Button, class UButton* CallFunc_GetButton_Base_Button_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class UButton* CallFunc_GetButton_Base_Button_2, bool CallFunc_IsHovered_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button02_Framed_C", "UpdateIsEnabled");

	Params::UWB_Button02_Framed_C_UpdateIsEnabled_Params Parms{};

	Parms.bIsEnabled = bIsEnabled;
	Parms.CallFunc_GetButton_Base_Button = CallFunc_GetButton_Base_Button;
	Parms.CallFunc_GetButton_Base_Button_1 = CallFunc_GetButton_Base_Button_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetButton_Base_Button_2 = CallFunc_GetButton_Base_Button_2;
	Parms.CallFunc_IsHovered_ReturnValue = CallFunc_IsHovered_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button02_Framed.WB_Button02_Framed_C.SetFontInfo_OnDisabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Button02_Framed_C::SetFontInfo_OnDisabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button02_Framed_C", "SetFontInfo_OnDisabled");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Button02_Framed.WB_Button02_Framed_C.SetButtonSizeScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Size                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X_3                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y_3                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X_4                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y_4                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_6                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_7                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_8                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_9                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X_5                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y_5                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X_6                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y_6                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_10                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_11                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_10                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_11                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_12                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_13                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_12                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_13                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X_7                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y_7                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsContentWidgetValid_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_FClamp_ReturnValue_14                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_14                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_15                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_15                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_Button02_Framed_C::SetButtonSizeScale(const struct FVector2D& Size, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, float CallFunc_FClamp_ReturnValue, float CallFunc_FClamp_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_FClamp_ReturnValue_2, float CallFunc_FClamp_ReturnValue_3, float CallFunc_Add_FloatFloat_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue_3, float CallFunc_BreakVector2D_X_2, float CallFunc_BreakVector2D_Y_2, float CallFunc_FClamp_ReturnValue_4, float CallFunc_FClamp_ReturnValue_5, float CallFunc_Add_FloatFloat_ReturnValue_4, float CallFunc_Add_FloatFloat_ReturnValue_5, float CallFunc_BreakVector2D_X_3, float CallFunc_BreakVector2D_Y_3, float CallFunc_BreakVector2D_X_4, float CallFunc_BreakVector2D_Y_4, float CallFunc_FClamp_ReturnValue_6, float CallFunc_FClamp_ReturnValue_7, float CallFunc_Add_FloatFloat_ReturnValue_6, float CallFunc_Add_FloatFloat_ReturnValue_7, float CallFunc_FClamp_ReturnValue_8, float CallFunc_FClamp_ReturnValue_9, float CallFunc_Add_FloatFloat_ReturnValue_8, float CallFunc_Add_FloatFloat_ReturnValue_9, float CallFunc_BreakVector2D_X_5, float CallFunc_BreakVector2D_Y_5, float CallFunc_BreakVector2D_X_6, float CallFunc_BreakVector2D_Y_6, float CallFunc_FClamp_ReturnValue_10, float CallFunc_FClamp_ReturnValue_11, float CallFunc_Add_FloatFloat_ReturnValue_10, float CallFunc_Add_FloatFloat_ReturnValue_11, float CallFunc_FClamp_ReturnValue_12, float CallFunc_FClamp_ReturnValue_13, float CallFunc_Add_FloatFloat_ReturnValue_12, float CallFunc_Add_FloatFloat_ReturnValue_13, float CallFunc_BreakVector2D_X_7, float CallFunc_BreakVector2D_Y_7, bool CallFunc_IsContentWidgetValid_ReturnValue, float CallFunc_FClamp_ReturnValue_14, float CallFunc_Add_FloatFloat_ReturnValue_14, float CallFunc_FClamp_ReturnValue_15, float CallFunc_Add_FloatFloat_ReturnValue_15, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button02_Framed_C", "SetButtonSizeScale");

	Params::UWB_Button02_Framed_C_SetButtonSizeScale_Params Parms{};

	Parms.Size = Size;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_BreakVector2D_X_1 = CallFunc_BreakVector2D_X_1;
	Parms.CallFunc_BreakVector2D_Y_1 = CallFunc_BreakVector2D_Y_1;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue_1 = CallFunc_FClamp_ReturnValue_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_FClamp_ReturnValue_2 = CallFunc_FClamp_ReturnValue_2;
	Parms.CallFunc_FClamp_ReturnValue_3 = CallFunc_FClamp_ReturnValue_3;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_2 = CallFunc_Add_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_3 = CallFunc_Add_FloatFloat_ReturnValue_3;
	Parms.CallFunc_BreakVector2D_X_2 = CallFunc_BreakVector2D_X_2;
	Parms.CallFunc_BreakVector2D_Y_2 = CallFunc_BreakVector2D_Y_2;
	Parms.CallFunc_FClamp_ReturnValue_4 = CallFunc_FClamp_ReturnValue_4;
	Parms.CallFunc_FClamp_ReturnValue_5 = CallFunc_FClamp_ReturnValue_5;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_4 = CallFunc_Add_FloatFloat_ReturnValue_4;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_5 = CallFunc_Add_FloatFloat_ReturnValue_5;
	Parms.CallFunc_BreakVector2D_X_3 = CallFunc_BreakVector2D_X_3;
	Parms.CallFunc_BreakVector2D_Y_3 = CallFunc_BreakVector2D_Y_3;
	Parms.CallFunc_BreakVector2D_X_4 = CallFunc_BreakVector2D_X_4;
	Parms.CallFunc_BreakVector2D_Y_4 = CallFunc_BreakVector2D_Y_4;
	Parms.CallFunc_FClamp_ReturnValue_6 = CallFunc_FClamp_ReturnValue_6;
	Parms.CallFunc_FClamp_ReturnValue_7 = CallFunc_FClamp_ReturnValue_7;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_6 = CallFunc_Add_FloatFloat_ReturnValue_6;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_7 = CallFunc_Add_FloatFloat_ReturnValue_7;
	Parms.CallFunc_FClamp_ReturnValue_8 = CallFunc_FClamp_ReturnValue_8;
	Parms.CallFunc_FClamp_ReturnValue_9 = CallFunc_FClamp_ReturnValue_9;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_8 = CallFunc_Add_FloatFloat_ReturnValue_8;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_9 = CallFunc_Add_FloatFloat_ReturnValue_9;
	Parms.CallFunc_BreakVector2D_X_5 = CallFunc_BreakVector2D_X_5;
	Parms.CallFunc_BreakVector2D_Y_5 = CallFunc_BreakVector2D_Y_5;
	Parms.CallFunc_BreakVector2D_X_6 = CallFunc_BreakVector2D_X_6;
	Parms.CallFunc_BreakVector2D_Y_6 = CallFunc_BreakVector2D_Y_6;
	Parms.CallFunc_FClamp_ReturnValue_10 = CallFunc_FClamp_ReturnValue_10;
	Parms.CallFunc_FClamp_ReturnValue_11 = CallFunc_FClamp_ReturnValue_11;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_10 = CallFunc_Add_FloatFloat_ReturnValue_10;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_11 = CallFunc_Add_FloatFloat_ReturnValue_11;
	Parms.CallFunc_FClamp_ReturnValue_12 = CallFunc_FClamp_ReturnValue_12;
	Parms.CallFunc_FClamp_ReturnValue_13 = CallFunc_FClamp_ReturnValue_13;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_12 = CallFunc_Add_FloatFloat_ReturnValue_12;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_13 = CallFunc_Add_FloatFloat_ReturnValue_13;
	Parms.CallFunc_BreakVector2D_X_7 = CallFunc_BreakVector2D_X_7;
	Parms.CallFunc_BreakVector2D_Y_7 = CallFunc_BreakVector2D_Y_7;
	Parms.CallFunc_IsContentWidgetValid_ReturnValue = CallFunc_IsContentWidgetValid_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue_14 = CallFunc_FClamp_ReturnValue_14;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_14 = CallFunc_Add_FloatFloat_ReturnValue_14;
	Parms.CallFunc_FClamp_ReturnValue_15 = CallFunc_FClamp_ReturnValue_15;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_15 = CallFunc_Add_FloatFloat_ReturnValue_15;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button02_Framed.WB_Button02_Framed_C.SetResponsiveHoveringToNativeButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_Button02_Framed_C::SetResponsiveHoveringToNativeButton(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button02_Framed_C", "SetResponsiveHoveringToNativeButton");

	Params::UWB_Button02_Framed_C_SetResponsiveHoveringToNativeButton_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button02_Framed.WB_Button02_Framed_C.UnhoverAllNativeButtons
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWB_NativeButton_C*>  CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ZeroConstructor, ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWB_NativeButton_C*          CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_Button02_Framed_C::UnhoverAllNativeButtons(int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWB_NativeButton_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, bool CallFunc_Array_IsValidIndex_ReturnValue, class UWB_NativeButton_C* CallFunc_Array_Get_Item, bool CallFunc_GetIsEnabled_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button02_Framed_C", "UnhoverAllNativeButtons");

	Params::UWB_Button02_Framed_C_UnhoverAllNativeButtons_Params Parms{};

	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetIsEnabled_ReturnValue = CallFunc_GetIsEnabled_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button02_Framed.WB_Button02_Framed_C.SetButtonSounds
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*                  OnClicked_Sound                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  OnHovered_Sound                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_Button02_Framed_C::SetButtonSounds(class USoundBase* OnClicked_Sound, class USoundBase* OnHovered_Sound, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button02_Framed_C", "SetButtonSounds");

	Params::UWB_Button02_Framed_C_SetButtonSounds_Params Parms{};

	Parms.OnClicked_Sound = OnClicked_Sound;
	Parms.OnHovered_Sound = OnHovered_Sound;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button02_Framed.WB_Button02_Framed_C.UpdateBaseButtonJustification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EJustification          Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EJustification          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHorizontalAlignment    Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHorizontalAlignment    Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHorizontalAlignment    Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHorizontalAlignment    K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOverlaySlot*                CallFunc_SlotAsOverlaySlot_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOverlaySlot*                CallFunc_SlotAsOverlaySlot_ReturnValue_1                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOverlaySlot*                CallFunc_SlotAsOverlaySlot_ReturnValue_2                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOverlaySlot*                CallFunc_SlotAsOverlaySlot_ReturnValue_3                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button02_Framed_C::UpdateBaseButtonJustification(enum class EJustification Index, enum class EJustification Temp_byte_Variable, enum class EHorizontalAlignment Temp_byte_Variable_1, enum class EHorizontalAlignment Temp_byte_Variable_2, enum class EHorizontalAlignment Temp_byte_Variable_3, enum class EHorizontalAlignment K2Node_Select_Default, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_1, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_2, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button02_Framed_C", "UpdateBaseButtonJustification");

	Params::UWB_Button02_Framed_C_UpdateBaseButtonJustification_Params Parms{};

	Parms.Index = Index;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_SlotAsOverlaySlot_ReturnValue = CallFunc_SlotAsOverlaySlot_ReturnValue;
	Parms.CallFunc_SlotAsOverlaySlot_ReturnValue_1 = CallFunc_SlotAsOverlaySlot_ReturnValue_1;
	Parms.CallFunc_SlotAsOverlaySlot_ReturnValue_2 = CallFunc_SlotAsOverlaySlot_ReturnValue_2;
	Parms.CallFunc_SlotAsOverlaySlot_ReturnValue_3 = CallFunc_SlotAsOverlaySlot_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button02_Framed.WB_Button02_Framed_C.UpdateButtonJustification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EJustification          EJustification                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button02_Framed_C::UpdateButtonJustification(enum class EJustification EJustification)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button02_Framed_C", "UpdateButtonJustification");

	Params::UWB_Button02_Framed_C_UpdateButtonJustification_Params Parms{};

	Parms.EJustification = EJustification;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button02_Framed.WB_Button02_Framed_C.AddHintIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Widget20x20                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_Button02_Framed_C::AddHintIcon(class UClass* Widget20x20, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button02_Framed_C", "AddHintIcon");

	Params::UWB_Button02_Framed_C_AddHintIcon_Params Parms{};

	Parms.Widget20x20 = Widget20x20;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button02_Framed.WB_Button02_Framed_C.GetButton
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UButton*                     Base_Button                                                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button02_Framed_C::GetButton(class UButton** Base_Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button02_Framed_C", "GetButton");

	Params::UWB_Button02_Framed_C_GetButton_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Base_Button != nullptr)
		*Base_Button = Parms.Base_Button;

}


// Function WB_Button02_Framed.WB_Button02_Framed_C.SetFontInfo_OnClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Button02_Framed_C::SetFontInfo_OnClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button02_Framed_C", "SetFontInfo_OnClicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Button02_Framed.WB_Button02_Framed_C.SetFontInfo_OnNormal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Button02_Framed_C::SetFontInfo_OnNormal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button02_Framed_C", "SetFontInfo_OnNormal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Button02_Framed.WB_Button02_Framed_C.SetFontInfo_OnHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Button02_Framed_C::SetFontInfo_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button02_Framed_C", "SetFontInfo_OnHovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Button02_Framed.WB_Button02_Framed_C.SetButtonText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ButtonText                                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UWB_Button02_Framed_C::SetButtonText(class FText ButtonText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button02_Framed_C", "SetButtonText");

	Params::UWB_Button02_Framed_C_SetButtonText_Params Parms{};

	Parms.ButtonText = ButtonText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button02_Framed.WB_Button02_Framed_C.SetButtonFontInfo_Current
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFont*                       Font                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFontFace*                   Typeface                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              FontSize                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button02_Framed_C::SetButtonFontInfo_Current(class UFont* Font, class UFontFace* Typeface, int32 FontSize, const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button02_Framed_C", "SetButtonFontInfo_Current");

	Params::UWB_Button02_Framed_C_SetButtonFontInfo_Current_Params Parms{};

	Parms.Font = Font;
	Parms.Typeface = Typeface;
	Parms.FontSize = FontSize;
	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button02_Framed.WB_Button02_Framed_C.SetButtonEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsEnabled                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_Button02_Framed_C::SetButtonEnabled(bool bIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button02_Framed_C", "SetButtonEnabled");

	Params::UWB_Button02_Framed_C_SetButtonEnabled_Params Parms{};

	Parms.bIsEnabled = bIsEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button02_Framed.WB_Button02_Framed_C.SetButtonFontInfo_Normal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFont*                       Font                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFontFace*                   Typeface                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              FontSize                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button02_Framed_C::SetButtonFontInfo_Normal(class UFont* Font, class UFontFace* Typeface, int32 FontSize, const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button02_Framed_C", "SetButtonFontInfo_Normal");

	Params::UWB_Button02_Framed_C_SetButtonFontInfo_Normal_Params Parms{};

	Parms.Font = Font;
	Parms.Typeface = Typeface;
	Parms.FontSize = FontSize;
	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button02_Framed.WB_Button02_Framed_C.SetButtonFontInfo_Hovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFont*                       Font                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFontFace*                   Typeface                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              FontSize                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button02_Framed_C::SetButtonFontInfo_Hovered(class UFont* Font, class UFontFace* Typeface, int32 FontSize, const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button02_Framed_C", "SetButtonFontInfo_Hovered");

	Params::UWB_Button02_Framed_C_SetButtonFontInfo_Hovered_Params Parms{};

	Parms.Font = Font;
	Parms.Typeface = Typeface;
	Parms.FontSize = FontSize;
	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button02_Framed.WB_Button02_Framed_C.SetButtonFontInfo_Clicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFont*                       Font                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFontFace*                   Typeface                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              FontSize                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button02_Framed_C::SetButtonFontInfo_Clicked(class UFont* Font, class UFontFace* Typeface, int32 FontSize, const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button02_Framed_C", "SetButtonFontInfo_Clicked");

	Params::UWB_Button02_Framed_C_SetButtonFontInfo_Clicked_Params Parms{};

	Parms.Font = Font;
	Parms.Typeface = Typeface;
	Parms.FontSize = FontSize;
	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button02_Framed.WB_Button02_Framed_C.SetButtonFontInfo_Disabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFont*                       Font                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFontFace*                   Typeface                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              FontSize                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button02_Framed_C::SetButtonFontInfo_Disabled(class UFont* Font, class UFontFace* Typeface, int32 FontSize, const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button02_Framed_C", "SetButtonFontInfo_Disabled");

	Params::UWB_Button02_Framed_C_SetButtonFontInfo_Disabled_Params Parms{};

	Parms.Font = Font;
	Parms.Typeface = Typeface;
	Parms.FontSize = FontSize;
	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button02_Framed.WB_Button02_Framed_C.SetUser_Focus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button02_Framed_C::SetUser_Focus(class APlayerController* Player)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button02_Framed_C", "SetUser_Focus");

	Params::UWB_Button02_Framed_C_SetUser_Focus_Params Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button02_Framed.WB_Button02_Framed_C.SetHintIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      HintIcon                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button02_Framed_C::SetHintIcon(class UClass* HintIcon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button02_Framed_C", "SetHintIcon");

	Params::UWB_Button02_Framed_C_SetHintIcon_Params Parms{};

	Parms.HintIcon = HintIcon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button02_Framed.WB_Button02_Framed_C.SetButtonSound_OnClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*                  ClickedSound                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button02_Framed_C::SetButtonSound_OnClicked(class USoundBase* ClickedSound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button02_Framed_C", "SetButtonSound_OnClicked");

	Params::UWB_Button02_Framed_C_SetButtonSound_OnClicked_Params Parms{};

	Parms.ClickedSound = ClickedSound;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button02_Framed.WB_Button02_Framed_C.SetButtonSound_OnHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*                  HoveredSound                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button02_Framed_C::SetButtonSound_OnHovered(class USoundBase* HoveredSound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button02_Framed_C", "SetButtonSound_OnHovered");

	Params::UWB_Button02_Framed_C_SetButtonSound_OnHovered_Params Parms{};

	Parms.HoveredSound = HoveredSound;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button02_Framed.WB_Button02_Framed_C.SetButtonJustification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EJustification          EJustification                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button02_Framed_C::SetButtonJustification(enum class EJustification EJustification)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button02_Framed_C", "SetButtonJustification");

	Params::UWB_Button02_Framed_C_SetButtonJustification_Params Parms{};

	Parms.EJustification = EJustification;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button02_Framed.WB_Button02_Framed_C.B02_SetFrameColor_Normal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                FrameColor_Normal                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button02_Framed_C::B02_SetFrameColor_Normal(const struct FLinearColor& FrameColor_Normal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button02_Framed_C", "B02_SetFrameColor_Normal");

	Params::UWB_Button02_Framed_C_B02_SetFrameColor_Normal_Params Parms{};

	Parms.FrameColor_Normal = FrameColor_Normal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button02_Framed.WB_Button02_Framed_C.B02_SetFrameColor_Hovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                FrameColor_Hovered                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button02_Framed_C::B02_SetFrameColor_Hovered(const struct FLinearColor& FrameColor_Hovered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button02_Framed_C", "B02_SetFrameColor_Hovered");

	Params::UWB_Button02_Framed_C_B02_SetFrameColor_Hovered_Params Parms{};

	Parms.FrameColor_Hovered = FrameColor_Hovered;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button02_Framed.WB_Button02_Framed_C.B02_SetFrameColor_Clicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                FrameColor_Clicked                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button02_Framed_C::B02_SetFrameColor_Clicked(const struct FLinearColor& FrameColor_Clicked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button02_Framed_C", "B02_SetFrameColor_Clicked");

	Params::UWB_Button02_Framed_C_B02_SetFrameColor_Clicked_Params Parms{};

	Parms.FrameColor_Clicked = FrameColor_Clicked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button02_Framed.WB_Button02_Framed_C.B02_SetFrameColor_Disabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                FrameColor_Disabled                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button02_Framed_C::B02_SetFrameColor_Disabled(const struct FLinearColor& FrameColor_Disabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button02_Framed_C", "B02_SetFrameColor_Disabled");

	Params::UWB_Button02_Framed_C_B02_SetFrameColor_Disabled_Params Parms{};

	Parms.FrameColor_Disabled = FrameColor_Disabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button02_Framed.WB_Button02_Framed_C.B02_SetFrameColor_Current
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                FrameColor_Current                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button02_Framed_C::B02_SetFrameColor_Current(const struct FLinearColor& FrameColor_Current)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button02_Framed_C", "B02_SetFrameColor_Current");

	Params::UWB_Button02_Framed_C_B02_SetFrameColor_Current_Params Parms{};

	Parms.FrameColor_Current = FrameColor_Current;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button02_Framed.WB_Button02_Framed_C.B02_SetFillColor_Normal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                FillColor_Normal                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button02_Framed_C::B02_SetFillColor_Normal(const struct FLinearColor& FillColor_Normal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button02_Framed_C", "B02_SetFillColor_Normal");

	Params::UWB_Button02_Framed_C_B02_SetFillColor_Normal_Params Parms{};

	Parms.FillColor_Normal = FillColor_Normal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button02_Framed.WB_Button02_Framed_C.B02_SetFillColor_Hovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                FillColor_Hovered                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button02_Framed_C::B02_SetFillColor_Hovered(const struct FLinearColor& FillColor_Hovered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button02_Framed_C", "B02_SetFillColor_Hovered");

	Params::UWB_Button02_Framed_C_B02_SetFillColor_Hovered_Params Parms{};

	Parms.FillColor_Hovered = FillColor_Hovered;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button02_Framed.WB_Button02_Framed_C.B02_SetFillColor_Clicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                FillColor_Clicked                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button02_Framed_C::B02_SetFillColor_Clicked(const struct FLinearColor& FillColor_Clicked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button02_Framed_C", "B02_SetFillColor_Clicked");

	Params::UWB_Button02_Framed_C_B02_SetFillColor_Clicked_Params Parms{};

	Parms.FillColor_Clicked = FillColor_Clicked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button02_Framed.WB_Button02_Framed_C.B02_SetFillColor_Disabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                FillColor_Disabled                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button02_Framed_C::B02_SetFillColor_Disabled(const struct FLinearColor& FillColor_Disabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button02_Framed_C", "B02_SetFillColor_Disabled");

	Params::UWB_Button02_Framed_C_B02_SetFillColor_Disabled_Params Parms{};

	Parms.FillColor_Disabled = FillColor_Disabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button02_Framed.WB_Button02_Framed_C.B02_SetFillColor_Current
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                FillColor_Current                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button02_Framed_C::B02_SetFillColor_Current(const struct FLinearColor& FillColor_Current)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button02_Framed_C", "B02_SetFillColor_Current");

	Params::UWB_Button02_Framed_C_B02_SetFillColor_Current_Params Parms{};

	Parms.FillColor_Current = FillColor_Current;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button02_Framed.WB_Button02_Framed_C.B02_SetUseDynamicShine
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bUseDynamicShine                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_Button02_Framed_C::B02_SetUseDynamicShine(bool bUseDynamicShine)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button02_Framed_C", "B02_SetUseDynamicShine");

	Params::UWB_Button02_Framed_C_B02_SetUseDynamicShine_Params Parms{};

	Parms.bUseDynamicShine = bUseDynamicShine;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button02_Framed.WB_Button02_Framed_C.B02_SetDynamicShineColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                InColor                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button02_Framed_C::B02_SetDynamicShineColor(const struct FLinearColor& InColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button02_Framed_C", "B02_SetDynamicShineColor");

	Params::UWB_Button02_Framed_C_B02_SetDynamicShineColor_Params Parms{};

	Parms.InColor = InColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button02_Framed.WB_Button02_Framed_C.B02_SetBlurShineColor_Hovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                InColor                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button02_Framed_C::B02_SetBlurShineColor_Hovered(const struct FLinearColor& InColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button02_Framed_C", "B02_SetBlurShineColor_Hovered");

	Params::UWB_Button02_Framed_C_B02_SetBlurShineColor_Hovered_Params Parms{};

	Parms.InColor = InColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button02_Framed.WB_Button02_Framed_C.B02_SetBlurShineColor_Clicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                InColor                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button02_Framed_C::B02_SetBlurShineColor_Clicked(const struct FLinearColor& InColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button02_Framed_C", "B02_SetBlurShineColor_Clicked");

	Params::UWB_Button02_Framed_C_B02_SetBlurShineColor_Clicked_Params Parms{};

	Parms.InColor = InColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button02_Framed.WB_Button02_Framed_C.B02_Create_ContentWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      ContentWidget                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button02_Framed_C::B02_Create_ContentWidget(class UClass* ContentWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button02_Framed_C", "B02_Create_ContentWidget");

	Params::UWB_Button02_Framed_C_B02_Create_ContentWidget_Params Parms{};

	Parms.ContentWidget = ContentWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button02_Framed.WB_Button02_Framed_C.B02_RemoveContentWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Button02_Framed_C::B02_RemoveContentWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button02_Framed_C", "B02_RemoveContentWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Button02_Framed.WB_Button02_Framed_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_Button02_Framed_C::BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button02_Framed_C", "BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Button02_Framed.WB_Button02_Framed_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_Button02_Framed_C::BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button02_Framed_C", "BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Button02_Framed.WB_Button02_Framed_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_7_OnUnhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_Button02_Framed_C::BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_7_OnUnhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button02_Framed_C", "BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_7_OnUnhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Button02_Framed.WB_Button02_Framed_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_Button02_Framed_C::BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button02_Framed_C", "BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Button02_Framed.WB_Button02_Framed_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_9_OnReleased__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_Button02_Framed_C::BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_9_OnReleased__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button02_Framed_C", "BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_9_OnReleased__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Button02_Framed.WB_Button02_Framed_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWB_Button02_Framed_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button02_Framed_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Button02_Framed.WB_Button02_Framed_C.CheckHasFocus
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Button02_Framed_C::CheckHasFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button02_Framed_C", "CheckHasFocus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Button02_Framed.WB_Button02_Framed_C.OnInputSwitched
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EInputType              InputType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button02_Framed_C::OnInputSwitched(enum class EInputType InputType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button02_Framed_C", "OnInputSwitched");

	Params::UWB_Button02_Framed_C_OnInputSwitched_Params Parms{};

	Parms.InputType = InputType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button02_Framed.WB_Button02_Framed_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_0_OnDisabled__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_Button02_Framed_C::BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_0_OnDisabled__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button02_Framed_C", "BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_0_OnDisabled__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Button02_Framed.WB_Button02_Framed_C.UpdateTextAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bFadeIn                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_Button02_Framed_C::UpdateTextAnim(bool bFadeIn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button02_Framed_C", "UpdateTextAnim");

	Params::UWB_Button02_Framed_C_UpdateTextAnim_Params Parms{};

	Parms.bFadeIn = bFadeIn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button02_Framed.WB_Button02_Framed_C.BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_6_OnUnfocused__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_Button02_Framed_C::BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_6_OnUnfocused__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button02_Framed_C", "BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_6_OnUnfocused__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Button02_Framed.WB_Button02_Framed_C.BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_5_OnFocused__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_Button02_Framed_C::BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_5_OnFocused__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button02_Framed_C", "BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_5_OnFocused__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Button02_Framed.WB_Button02_Framed_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_Button02_Framed_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button02_Framed_C", "PreConstruct");

	Params::UWB_Button02_Framed_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button02_Framed.WB_Button02_Framed_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button02_Framed_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button02_Framed_C", "Tick");

	Params::UWB_Button02_Framed_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button02_Framed.WB_Button02_Framed_C.ExecuteUbergraph_WB_Button02_Framed
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EUMGSequencePlayMode    Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EUMGSequencePlayMode    K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_2                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_3                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Event_ButtonText                                          (None)
// class UFont*                       K2Node_Event_Font_4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFontFace*                   K2Node_Event_TypeFace_4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_FontSize_4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_Color_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsEnabled                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFont*                       K2Node_Event_Font_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFontFace*                   K2Node_Event_TypeFace_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_FontSize_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_Color_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFont*                       K2Node_Event_Font_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFontFace*                   K2Node_Event_TypeFace_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_FontSize_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_Color_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFont*                       K2Node_Event_Font_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFontFace*                   K2Node_Event_TypeFace_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_FontSize_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_Color_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFont*                       K2Node_Event_Font                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFontFace*                   K2Node_Event_TypeFace                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_FontSize                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_Color                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UButton*                     CallFunc_GetButton_Base_Button                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           K2Node_Event_Player                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_Event_HintIcon                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_Event_ClickedSound                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_Event_HoveredSound                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EJustification          K2Node_Event_EJustification                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_FrameColor_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_FrameColor_Hovered                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_FrameColor_Clicked                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_FrameColor_Disabled                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_FrameColor_Current                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_Event_FillColor_Normal                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_FillColor_Hovered                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_FillColor_Clicked                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_FillColor_Disabled                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_FillColor_Current                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bUseDynamicShine                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_Event_InColor_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_InColor_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_InColor                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_Event_ContentWidget                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidClass_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_4                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EUMGSequencePlayMode    Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UButton*                     CallFunc_GetButton_Base_Button_1                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInputType              K2Node_CustomEvent_InputType                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyUserFocus_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bFadeIn                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EUMGSequencePlayMode    K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_5                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EUMGSequencePlayMode    Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UButton*                     CallFunc_GetButton_Base_Button_2                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsHovered_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EUMGSequencePlayMode    Temp_byte_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UButton*                     CallFunc_GetButton_Base_Button_3                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EUMGSequencePlayMode    K2Node_Select_Default_4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyUserFocus_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UButton*                     CallFunc_GetButton_Base_Button_4                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    Temp_byte_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EUMGSequencePlayMode    K2Node_Select_Default_5                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    Temp_byte_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_5                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    Temp_byte_Variable_9                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_6                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_7                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default_6                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_9                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    K2Node_Select_Default_7                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_8                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_9                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_10                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default_8                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    Temp_byte_Variable_10                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    Temp_byte_Variable_11                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_3                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_10                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_11                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default_9                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    K2Node_Select_Default_10                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_11                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default_11                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_5                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGamePaused_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_4                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button02_Framed_C::ExecuteUbergraph_WB_Button02_Framed(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, enum class EUMGSequencePlayMode Temp_byte_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable_1, bool Temp_bool_Variable_2, enum class EUMGSequencePlayMode K2Node_Select_Default, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FLinearColor& K2Node_MakeStruct_LinearColor_1, bool CallFunc_BooleanAND_ReturnValue, int32 Temp_int_Variable, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_2, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_IsClosed_Variable_2, bool CallFunc_IsValid_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable_3, bool Temp_bool_IsClosed_Variable_3, class FText K2Node_Event_ButtonText, class UFont* K2Node_Event_Font_4, class UFontFace* K2Node_Event_TypeFace_4, int32 K2Node_Event_FontSize_4, const struct FLinearColor& K2Node_Event_Color_4, bool K2Node_Event_bIsEnabled, class UFont* K2Node_Event_Font_3, class UFontFace* K2Node_Event_TypeFace_3, int32 K2Node_Event_FontSize_3, const struct FLinearColor& K2Node_Event_Color_3, class UFont* K2Node_Event_Font_2, class UFontFace* K2Node_Event_TypeFace_2, int32 K2Node_Event_FontSize_2, const struct FLinearColor& K2Node_Event_Color_2, class UFont* K2Node_Event_Font_1, class UFontFace* K2Node_Event_TypeFace_1, int32 K2Node_Event_FontSize_1, const struct FLinearColor& K2Node_Event_Color_1, class UFont* K2Node_Event_Font, class UFontFace* K2Node_Event_TypeFace, int32 K2Node_Event_FontSize, const struct FLinearColor& K2Node_Event_Color, bool CallFunc_IsValid_ReturnValue_2, class UButton* CallFunc_GetButton_Base_Button, class APlayerController* K2Node_Event_Player, class UClass* K2Node_Event_HintIcon, class USoundBase* K2Node_Event_ClickedSound, class USoundBase* K2Node_Event_HoveredSound, enum class EJustification K2Node_Event_EJustification, const struct FLinearColor& K2Node_Event_FrameColor_Normal, const struct FLinearColor& K2Node_Event_FrameColor_Hovered, const struct FLinearColor& K2Node_Event_FrameColor_Clicked, const struct FLinearColor& K2Node_Event_FrameColor_Disabled, const struct FLinearColor& K2Node_Event_FrameColor_Current, bool CallFunc_IsValid_ReturnValue_3, const struct FLinearColor& K2Node_Event_FillColor_Normal, const struct FLinearColor& K2Node_Event_FillColor_Hovered, const struct FLinearColor& K2Node_Event_FillColor_Clicked, const struct FLinearColor& K2Node_Event_FillColor_Disabled, const struct FLinearColor& K2Node_Event_FillColor_Current, bool K2Node_Event_bUseDynamicShine, const struct FLinearColor& K2Node_Event_InColor_2, int32 Temp_int_Variable_1, const struct FLinearColor& K2Node_Event_InColor_1, const struct FLinearColor& K2Node_Event_InColor, class UClass* K2Node_Event_ContentWidget, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_IsValidClass_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable_4, enum class EUMGSequencePlayMode Temp_byte_Variable_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, enum class EUMGSequencePlayMode Temp_byte_Variable_3, class UButton* CallFunc_GetButton_Base_Button_1, enum class EInputType K2Node_CustomEvent_InputType, bool CallFunc_HasAnyUserFocus_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_BooleanAND_ReturnValue_1, bool Temp_bool_IsClosed_Variable_4, int32 Temp_int_Variable_2, bool K2Node_CustomEvent_bFadeIn, bool K2Node_SwitchEnum_CmpSuccess_1, bool Temp_bool_Variable_3, enum class EUMGSequencePlayMode K2Node_Select_Default_1, bool Temp_bool_Variable_4, int32 K2Node_Select_Default_2, int32 Temp_int_Variable_3, int32 Temp_int_Variable_4, bool Temp_bool_Variable_5, int32 K2Node_Select_Default_3, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_5, enum class EUMGSequencePlayMode Temp_byte_Variable_4, enum class EUMGSequencePlayMode Temp_byte_Variable_5, class UButton* CallFunc_GetButton_Base_Button_2, bool CallFunc_IsHovered_ReturnValue, enum class EUMGSequencePlayMode Temp_byte_Variable_6, class UButton* CallFunc_GetButton_Base_Button_3, bool Temp_bool_Variable_6, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_GetIsEnabled_ReturnValue, enum class EUMGSequencePlayMode K2Node_Select_Default_4, bool CallFunc_BooleanAND_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool CallFunc_HasAnyUserFocus_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UButton* CallFunc_GetButton_Base_Button_4, enum class EUMGSequencePlayMode Temp_byte_Variable_7, bool Temp_bool_IsClosed_Variable_5, bool CallFunc_IsValid_ReturnValue_5, bool K2Node_Event_IsDesignTime, bool CallFunc_IsValid_ReturnValue_6, bool Temp_bool_Variable_7, bool CallFunc_IsValid_ReturnValue_7, enum class EUMGSequencePlayMode K2Node_Select_Default_5, enum class EUMGSequencePlayMode Temp_byte_Variable_8, bool CallFunc_IsValid_ReturnValue_8, int32 Temp_int_Variable_5, enum class EUMGSequencePlayMode Temp_byte_Variable_9, bool CallFunc_Greater_FloatFloat_ReturnValue, int32 Temp_int_Variable_6, bool Temp_bool_Variable_8, int32 Temp_int_Variable_7, int32 K2Node_Select_Default_6, bool Temp_bool_Variable_9, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, enum class EUMGSequencePlayMode K2Node_Select_Default_7, int32 Temp_int_Variable_8, bool CallFunc_Greater_FloatFloat_ReturnValue_1, int32 Temp_int_Variable_9, bool Temp_bool_Variable_10, int32 K2Node_Select_Default_8, bool CallFunc_Greater_FloatFloat_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, enum class EUMGSequencePlayMode Temp_byte_Variable_10, enum class EUMGSequencePlayMode Temp_byte_Variable_11, bool CallFunc_Greater_FloatFloat_ReturnValue_3, int32 Temp_int_Variable_10, bool Temp_bool_Variable_11, int32 K2Node_Select_Default_9, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_4, enum class EUMGSequencePlayMode K2Node_Select_Default_10, int32 Temp_int_Variable_11, int32 K2Node_Select_Default_11, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_5, bool CallFunc_IsGamePaused_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_4, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button02_Framed_C", "ExecuteUbergraph_WB_Button02_Framed");

	Params::UWB_Button02_Framed_C_ExecuteUbergraph_WB_Button02_Framed_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
	Parms.K2Node_MakeStruct_LinearColor_1 = K2Node_MakeStruct_LinearColor_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.Temp_bool_Has_Been_Initd_Variable_2 = Temp_bool_Has_Been_Initd_Variable_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable_2 = Temp_bool_IsClosed_Variable_2;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.Temp_bool_Has_Been_Initd_Variable_3 = Temp_bool_Has_Been_Initd_Variable_3;
	Parms.Temp_bool_IsClosed_Variable_3 = Temp_bool_IsClosed_Variable_3;
	Parms.K2Node_Event_ButtonText = K2Node_Event_ButtonText;
	Parms.K2Node_Event_Font_4 = K2Node_Event_Font_4;
	Parms.K2Node_Event_TypeFace_4 = K2Node_Event_TypeFace_4;
	Parms.K2Node_Event_FontSize_4 = K2Node_Event_FontSize_4;
	Parms.K2Node_Event_Color_4 = K2Node_Event_Color_4;
	Parms.K2Node_Event_bIsEnabled = K2Node_Event_bIsEnabled;
	Parms.K2Node_Event_Font_3 = K2Node_Event_Font_3;
	Parms.K2Node_Event_TypeFace_3 = K2Node_Event_TypeFace_3;
	Parms.K2Node_Event_FontSize_3 = K2Node_Event_FontSize_3;
	Parms.K2Node_Event_Color_3 = K2Node_Event_Color_3;
	Parms.K2Node_Event_Font_2 = K2Node_Event_Font_2;
	Parms.K2Node_Event_TypeFace_2 = K2Node_Event_TypeFace_2;
	Parms.K2Node_Event_FontSize_2 = K2Node_Event_FontSize_2;
	Parms.K2Node_Event_Color_2 = K2Node_Event_Color_2;
	Parms.K2Node_Event_Font_1 = K2Node_Event_Font_1;
	Parms.K2Node_Event_TypeFace_1 = K2Node_Event_TypeFace_1;
	Parms.K2Node_Event_FontSize_1 = K2Node_Event_FontSize_1;
	Parms.K2Node_Event_Color_1 = K2Node_Event_Color_1;
	Parms.K2Node_Event_Font = K2Node_Event_Font;
	Parms.K2Node_Event_TypeFace = K2Node_Event_TypeFace;
	Parms.K2Node_Event_FontSize = K2Node_Event_FontSize;
	Parms.K2Node_Event_Color = K2Node_Event_Color;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetButton_Base_Button = CallFunc_GetButton_Base_Button;
	Parms.K2Node_Event_Player = K2Node_Event_Player;
	Parms.K2Node_Event_HintIcon = K2Node_Event_HintIcon;
	Parms.K2Node_Event_ClickedSound = K2Node_Event_ClickedSound;
	Parms.K2Node_Event_HoveredSound = K2Node_Event_HoveredSound;
	Parms.K2Node_Event_EJustification = K2Node_Event_EJustification;
	Parms.K2Node_Event_FrameColor_Normal = K2Node_Event_FrameColor_Normal;
	Parms.K2Node_Event_FrameColor_Hovered = K2Node_Event_FrameColor_Hovered;
	Parms.K2Node_Event_FrameColor_Clicked = K2Node_Event_FrameColor_Clicked;
	Parms.K2Node_Event_FrameColor_Disabled = K2Node_Event_FrameColor_Disabled;
	Parms.K2Node_Event_FrameColor_Current = K2Node_Event_FrameColor_Current;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_Event_FillColor_Normal = K2Node_Event_FillColor_Normal;
	Parms.K2Node_Event_FillColor_Hovered = K2Node_Event_FillColor_Hovered;
	Parms.K2Node_Event_FillColor_Clicked = K2Node_Event_FillColor_Clicked;
	Parms.K2Node_Event_FillColor_Disabled = K2Node_Event_FillColor_Disabled;
	Parms.K2Node_Event_FillColor_Current = K2Node_Event_FillColor_Current;
	Parms.K2Node_Event_bUseDynamicShine = K2Node_Event_bUseDynamicShine;
	Parms.K2Node_Event_InColor_2 = K2Node_Event_InColor_2;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.K2Node_Event_InColor_1 = K2Node_Event_InColor_1;
	Parms.K2Node_Event_InColor = K2Node_Event_InColor;
	Parms.K2Node_Event_ContentWidget = K2Node_Event_ContentWidget;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue_1 = CallFunc_IsValidClass_ReturnValue_1;
	Parms.Temp_bool_Has_Been_Initd_Variable_4 = Temp_bool_Has_Been_Initd_Variable_4;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.CallFunc_GetButton_Base_Button_1 = CallFunc_GetButton_Base_Button_1;
	Parms.K2Node_CustomEvent_InputType = K2Node_CustomEvent_InputType;
	Parms.CallFunc_HasAnyUserFocus_ReturnValue = CallFunc_HasAnyUserFocus_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.Temp_bool_IsClosed_Variable_4 = Temp_bool_IsClosed_Variable_4;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.K2Node_CustomEvent_bFadeIn = K2Node_CustomEvent_bFadeIn;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.Temp_int_Variable_4 = Temp_int_Variable_4;
	Parms.Temp_bool_Variable_5 = Temp_bool_Variable_5;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable_5 = Temp_bool_Has_Been_Initd_Variable_5;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.CallFunc_GetButton_Base_Button_2 = CallFunc_GetButton_Base_Button_2;
	Parms.CallFunc_IsHovered_ReturnValue = CallFunc_IsHovered_ReturnValue;
	Parms.Temp_byte_Variable_6 = Temp_byte_Variable_6;
	Parms.CallFunc_GetButton_Base_Button_3 = CallFunc_GetButton_Base_Button_3;
	Parms.Temp_bool_Variable_6 = Temp_bool_Variable_6;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_GetIsEnabled_ReturnValue = CallFunc_GetIsEnabled_ReturnValue;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_HasAnyUserFocus_ReturnValue_1 = CallFunc_HasAnyUserFocus_ReturnValue_1;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetButton_Base_Button_4 = CallFunc_GetButton_Base_Button_4;
	Parms.Temp_byte_Variable_7 = Temp_byte_Variable_7;
	Parms.Temp_bool_IsClosed_Variable_5 = Temp_bool_IsClosed_Variable_5;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.Temp_bool_Variable_7 = Temp_bool_Variable_7;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;
	Parms.Temp_byte_Variable_8 = Temp_byte_Variable_8;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.Temp_int_Variable_5 = Temp_int_Variable_5;
	Parms.Temp_byte_Variable_9 = Temp_byte_Variable_9;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.Temp_int_Variable_6 = Temp_int_Variable_6;
	Parms.Temp_bool_Variable_8 = Temp_bool_Variable_8;
	Parms.Temp_int_Variable_7 = Temp_int_Variable_7;
	Parms.K2Node_Select_Default_6 = K2Node_Select_Default_6;
	Parms.Temp_bool_Variable_9 = Temp_bool_Variable_9;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.K2Node_Select_Default_7 = K2Node_Select_Default_7;
	Parms.Temp_int_Variable_8 = Temp_int_Variable_8;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_1 = CallFunc_Greater_FloatFloat_ReturnValue_1;
	Parms.Temp_int_Variable_9 = Temp_int_Variable_9;
	Parms.Temp_bool_Variable_10 = Temp_bool_Variable_10;
	Parms.K2Node_Select_Default_8 = K2Node_Select_Default_8;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_2 = CallFunc_Greater_FloatFloat_ReturnValue_2;
	Parms.CallFunc_PlayAnimation_ReturnValue_3 = CallFunc_PlayAnimation_ReturnValue_3;
	Parms.Temp_byte_Variable_10 = Temp_byte_Variable_10;
	Parms.Temp_byte_Variable_11 = Temp_byte_Variable_11;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_3 = CallFunc_Greater_FloatFloat_ReturnValue_3;
	Parms.Temp_int_Variable_10 = Temp_int_Variable_10;
	Parms.Temp_bool_Variable_11 = Temp_bool_Variable_11;
	Parms.K2Node_Select_Default_9 = K2Node_Select_Default_9;
	Parms.CallFunc_PlayAnimation_ReturnValue_4 = CallFunc_PlayAnimation_ReturnValue_4;
	Parms.K2Node_Select_Default_10 = K2Node_Select_Default_10;
	Parms.Temp_int_Variable_11 = Temp_int_Variable_11;
	Parms.K2Node_Select_Default_11 = K2Node_Select_Default_11;
	Parms.CallFunc_PlayAnimation_ReturnValue_5 = CallFunc_PlayAnimation_ReturnValue_5;
	Parms.CallFunc_IsGamePaused_ReturnValue = CallFunc_IsGamePaused_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_4 = CallFunc_Greater_FloatFloat_ReturnValue_4;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button02_Framed.WB_Button02_Framed_C.OnUnfocused__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Button02_Framed_C::OnUnfocused__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button02_Framed_C", "OnUnfocused__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Button02_Framed.WB_Button02_Framed_C.OnFocused__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Button02_Framed_C::OnFocused__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button02_Framed_C", "OnFocused__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Button02_Framed.WB_Button02_Framed_C.OnDisabled__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Button02_Framed_C::OnDisabled__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button02_Framed_C", "OnDisabled__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Button02_Framed.WB_Button02_Framed_C.OnReleased__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Button02_Framed_C::OnReleased__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button02_Framed_C", "OnReleased__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Button02_Framed.WB_Button02_Framed_C.OnPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Button02_Framed_C::OnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button02_Framed_C", "OnPressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Button02_Framed.WB_Button02_Framed_C.OnUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Button02_Framed_C::OnUnhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button02_Framed_C", "OnUnhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Button02_Framed.WB_Button02_Framed_C.OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Button02_Framed_C::OnHovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button02_Framed_C", "OnHovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Button02_Framed.WB_Button02_Framed_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Button02_Framed_C::OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button02_Framed_C", "OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


