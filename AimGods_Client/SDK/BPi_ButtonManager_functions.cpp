#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPi_ButtonManager.BPi_ButtonManager_C
// (None)

class UClass* IBPi_ButtonManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPi_ButtonManager_C");

	return Clss;
}


// BPi_ButtonManager_C BPi_ButtonManager.Default__BPi_ButtonManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPi_ButtonManager_C* IBPi_ButtonManager_C::GetDefaultObj()
{
	static class IBPi_ButtonManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPi_ButtonManager_C*>(IBPi_ButtonManager_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_GetSliderValueNormalized
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              ValueNormalized                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ButtonManager_C::B03_GetSliderValueNormalized(float* ValueNormalized)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ButtonManager_C", "B03_GetSliderValueNormalized");

	Params::IBPi_ButtonManager_C_B03_GetSliderValueNormalized_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ValueNormalized != nullptr)
		*ValueNormalized = Parms.ValueNormalized;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_GetSliderValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ButtonManager_C::B03_GetSliderValue(float* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ButtonManager_C", "B03_GetSliderValue");

	Params::IBPi_ButtonManager_C_B03_GetSliderValue_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_SetSliderValueNormalized
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              ValueNormalized                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ButtonManager_C::B03_SetSliderValueNormalized(float ValueNormalized)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ButtonManager_C", "B03_SetSliderValueNormalized");

	Params::IBPi_ButtonManager_C_B03_SetSliderValueNormalized_Params Parms{};

	Parms.ValueNormalized = ValueNormalized;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_SetSliderValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ButtonManager_C::B03_SetSliderValue(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ButtonManager_C", "B03_SetSliderValue");

	Params::IBPi_ButtonManager_C_B03_SetSliderValue_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B04_SetScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Scale                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ButtonManager_C::B04_SetScale(float Scale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ButtonManager_C", "B04_SetScale");

	Params::IBPi_ButtonManager_C_B04_SetScale_Params Parms{};

	Parms.Scale = Scale;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B04_GetScale_Clicked
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Scale                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ButtonManager_C::B04_GetScale_Clicked(float* Scale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ButtonManager_C", "B04_GetScale_Clicked");

	Params::IBPi_ButtonManager_C_B04_GetScale_Clicked_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Scale != nullptr)
		*Scale = Parms.Scale;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B04_GetScale_Hovered
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Scale                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ButtonManager_C::B04_GetScale_Hovered(float* Scale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ButtonManager_C", "B04_GetScale_Hovered");

	Params::IBPi_ButtonManager_C_B04_GetScale_Hovered_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Scale != nullptr)
		*Scale = Parms.Scale;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B04_GetImage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Image_Brush                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Image_Translation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ButtonManager_C::B04_GetImage(class UObject** Image_Brush, struct FVector2D* Image_Translation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ButtonManager_C", "B04_GetImage");

	Params::IBPi_ButtonManager_C_B04_GetImage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Image_Brush != nullptr)
		*Image_Brush = Parms.Image_Brush;

	if (Image_Translation != nullptr)
		*Image_Translation = std::move(Parms.Image_Translation);

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B04_SetVignetteColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                VignetteColor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ButtonManager_C::B04_SetVignetteColor(const struct FLinearColor& VignetteColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ButtonManager_C", "B04_SetVignetteColor");

	Params::IBPi_ButtonManager_C_B04_SetVignetteColor_Params Parms{};

	Parms.VignetteColor = VignetteColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B04_SetImageColor_Disabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                ImageColor_Disabled                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Saturation_Disabled                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ButtonManager_C::B04_SetImageColor_Disabled(const struct FLinearColor& ImageColor_Disabled, float Saturation_Disabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ButtonManager_C", "B04_SetImageColor_Disabled");

	Params::IBPi_ButtonManager_C_B04_SetImageColor_Disabled_Params Parms{};

	Parms.ImageColor_Disabled = ImageColor_Disabled;
	Parms.Saturation_Disabled = Saturation_Disabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B04_SetImageColor_Clicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                ImageColor_Clicked                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Saturation_Clicked                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ButtonManager_C::B04_SetImageColor_Clicked(const struct FLinearColor& ImageColor_Clicked, float Saturation_Clicked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ButtonManager_C", "B04_SetImageColor_Clicked");

	Params::IBPi_ButtonManager_C_B04_SetImageColor_Clicked_Params Parms{};

	Parms.ImageColor_Clicked = ImageColor_Clicked;
	Parms.Saturation_Clicked = Saturation_Clicked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B04_SetImageColor_Hovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                ImageColor_Hovered                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Saturation_Hovered                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ButtonManager_C::B04_SetImageColor_Hovered(const struct FLinearColor& ImageColor_Hovered, float Saturation_Hovered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ButtonManager_C", "B04_SetImageColor_Hovered");

	Params::IBPi_ButtonManager_C_B04_SetImageColor_Hovered_Params Parms{};

	Parms.ImageColor_Hovered = ImageColor_Hovered;
	Parms.Saturation_Hovered = Saturation_Hovered;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B04_SetImageColor_Normal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                ImageColor_Normal                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Saturation_Normal                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ButtonManager_C::B04_SetImageColor_Normal(const struct FLinearColor& ImageColor_Normal, float Saturation_Normal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ButtonManager_C", "B04_SetImageColor_Normal");

	Params::IBPi_ButtonManager_C_B04_SetImageColor_Normal_Params Parms{};

	Parms.ImageColor_Normal = ImageColor_Normal;
	Parms.Saturation_Normal = Saturation_Normal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B04_SetImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     ImageBrush                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   ImageTranslation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ButtonManager_C::B04_SetImage(class UObject* ImageBrush, const struct FVector2D& ImageTranslation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ButtonManager_C", "B04_SetImage");

	Params::IBPi_ButtonManager_C_B04_SetImage_Params Parms{};

	Parms.ImageBrush = ImageBrush;
	Parms.ImageTranslation = ImageTranslation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B04_RemoveContentWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPi_ButtonManager_C::B04_RemoveContentWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ButtonManager_C", "B04_RemoveContentWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B04_CreateContentWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      ContentWidget                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ButtonManager_C::B04_CreateContentWidget(class UClass* ContentWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ButtonManager_C", "B04_CreateContentWidget");

	Params::IBPi_ButtonManager_C_B04_CreateContentWidget_Params Parms{};

	Parms.ContentWidget = ContentWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B04_SetShineFxEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsEnabled                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPi_ButtonManager_C::B04_SetShineFxEnabled(bool bIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ButtonManager_C", "B04_SetShineFxEnabled");

	Params::IBPi_ButtonManager_C_B04_SetShineFxEnabled_Params Parms{};

	Parms.bIsEnabled = bIsEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B04_SetFrameColor_Current
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                FrameColor1                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                FrameColor2                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                FrameColor_Shine                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                ShineFxColor_Background                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                ShineFxColor_Small                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                ShineFxColor_Big                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ButtonManager_C::B04_SetFrameColor_Current(const struct FLinearColor& FrameColor1, const struct FLinearColor& FrameColor2, const struct FLinearColor& FrameColor_Shine, const struct FLinearColor& ShineFxColor_Background, const struct FLinearColor& ShineFxColor_Small, const struct FLinearColor& ShineFxColor_Big)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ButtonManager_C", "B04_SetFrameColor_Current");

	Params::IBPi_ButtonManager_C_B04_SetFrameColor_Current_Params Parms{};

	Parms.FrameColor1 = FrameColor1;
	Parms.FrameColor2 = FrameColor2;
	Parms.FrameColor_Shine = FrameColor_Shine;
	Parms.ShineFxColor_Background = ShineFxColor_Background;
	Parms.ShineFxColor_Small = ShineFxColor_Small;
	Parms.ShineFxColor_Big = ShineFxColor_Big;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B04_SetFrameColor_Disabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                FrameColor1                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                FrameColor2                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                FrameColor_Shine                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ButtonManager_C::B04_SetFrameColor_Disabled(const struct FLinearColor& FrameColor1, const struct FLinearColor& FrameColor2, const struct FLinearColor& FrameColor_Shine)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ButtonManager_C", "B04_SetFrameColor_Disabled");

	Params::IBPi_ButtonManager_C_B04_SetFrameColor_Disabled_Params Parms{};

	Parms.FrameColor1 = FrameColor1;
	Parms.FrameColor2 = FrameColor2;
	Parms.FrameColor_Shine = FrameColor_Shine;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B04_SetFrameColor_Clicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                FrameColor1                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                FrameColor2                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                FrameColor_Shine                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                ShineFxColor_Background                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                ShineFxColor_Small                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                ShineFxColor_Big                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ButtonManager_C::B04_SetFrameColor_Clicked(const struct FLinearColor& FrameColor1, const struct FLinearColor& FrameColor2, const struct FLinearColor& FrameColor_Shine, const struct FLinearColor& ShineFxColor_Background, const struct FLinearColor& ShineFxColor_Small, const struct FLinearColor& ShineFxColor_Big)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ButtonManager_C", "B04_SetFrameColor_Clicked");

	Params::IBPi_ButtonManager_C_B04_SetFrameColor_Clicked_Params Parms{};

	Parms.FrameColor1 = FrameColor1;
	Parms.FrameColor2 = FrameColor2;
	Parms.FrameColor_Shine = FrameColor_Shine;
	Parms.ShineFxColor_Background = ShineFxColor_Background;
	Parms.ShineFxColor_Small = ShineFxColor_Small;
	Parms.ShineFxColor_Big = ShineFxColor_Big;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B04_SetFrameColor_Hovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                FrameColor1                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                FrameColor2                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                FrameColor_Shine                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                ShineFxColor_Background                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                ShineFxColor_Small                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                ShineFxColor_Big                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ButtonManager_C::B04_SetFrameColor_Hovered(const struct FLinearColor& FrameColor1, const struct FLinearColor& FrameColor2, const struct FLinearColor& FrameColor_Shine, const struct FLinearColor& ShineFxColor_Background, const struct FLinearColor& ShineFxColor_Small, const struct FLinearColor& ShineFxColor_Big)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ButtonManager_C", "B04_SetFrameColor_Hovered");

	Params::IBPi_ButtonManager_C_B04_SetFrameColor_Hovered_Params Parms{};

	Parms.FrameColor1 = FrameColor1;
	Parms.FrameColor2 = FrameColor2;
	Parms.FrameColor_Shine = FrameColor_Shine;
	Parms.ShineFxColor_Background = ShineFxColor_Background;
	Parms.ShineFxColor_Small = ShineFxColor_Small;
	Parms.ShineFxColor_Big = ShineFxColor_Big;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B04_SetFrameColor_Normal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                FrameColor1                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                FrameColor2                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                FrameColor_Shine                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                ShineFxColor_Background                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                ShineFxColor_Small                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                ShineFxColor_Big                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ButtonManager_C::B04_SetFrameColor_Normal(const struct FLinearColor& FrameColor1, const struct FLinearColor& FrameColor2, const struct FLinearColor& FrameColor_Shine, const struct FLinearColor& ShineFxColor_Background, const struct FLinearColor& ShineFxColor_Small, const struct FLinearColor& ShineFxColor_Big)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ButtonManager_C", "B04_SetFrameColor_Normal");

	Params::IBPi_ButtonManager_C_B04_SetFrameColor_Normal_Params Parms{};

	Parms.FrameColor1 = FrameColor1;
	Parms.FrameColor2 = FrameColor2;
	Parms.FrameColor_Shine = FrameColor_Shine;
	Parms.ShineFxColor_Background = ShineFxColor_Background;
	Parms.ShineFxColor_Small = ShineFxColor_Small;
	Parms.ShineFxColor_Big = ShineFxColor_Big;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_RemoveContentWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPi_ButtonManager_C::B03_RemoveContentWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ButtonManager_C", "B03_RemoveContentWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_CreateContentWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      ContentWidget                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ButtonManager_C::B03_CreateContentWidget(class UClass* ContentWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ButtonManager_C", "B03_CreateContentWidget");

	Params::IBPi_ButtonManager_C_B03_CreateContentWidget_Params Parms{};

	Parms.ContentWidget = ContentWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_SetKeyEscapeKeys
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESelectedKey            Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FKey>                EscapeKeys                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void IBPi_ButtonManager_C::B03_SetKeyEscapeKeys(enum class ESelectedKey Key, TArray<struct FKey>& EscapeKeys)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ButtonManager_C", "B03_SetKeyEscapeKeys");

	Params::IBPi_ButtonManager_C_B03_SetKeyEscapeKeys_Params Parms{};

	Parms.Key = Key;
	Parms.EscapeKeys = EscapeKeys;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_GetKeyEscapeKeys
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESelectedKey            Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FKey>                EscapeKeys                                                       (Parm, OutParm, ZeroConstructor)

void IBPi_ButtonManager_C::B03_GetKeyEscapeKeys(enum class ESelectedKey Key, TArray<struct FKey>* EscapeKeys)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ButtonManager_C", "B03_GetKeyEscapeKeys");

	Params::IBPi_ButtonManager_C_B03_GetKeyEscapeKeys_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

	if (EscapeKeys != nullptr)
		*EscapeKeys = std::move(Parms.EscapeKeys);

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_GetAllowModifierKeys
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESelectedKey            Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bAllowModifierKeys                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPi_ButtonManager_C::B03_GetAllowModifierKeys(enum class ESelectedKey Key, bool* bAllowModifierKeys)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ButtonManager_C", "B03_GetAllowModifierKeys");

	Params::IBPi_ButtonManager_C_B03_GetAllowModifierKeys_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

	if (bAllowModifierKeys != nullptr)
		*bAllowModifierKeys = Parms.bAllowModifierKeys;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_SetAllowModifierKeys
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESelectedKey            Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bAllowModifierKeys                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPi_ButtonManager_C::B03_SetAllowModifierKeys(enum class ESelectedKey Key, bool bAllowModifierKeys)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ButtonManager_C", "B03_SetAllowModifierKeys");

	Params::IBPi_ButtonManager_C_B03_SetAllowModifierKeys_Params Parms{};

	Parms.Key = Key;
	Parms.bAllowModifierKeys = bAllowModifierKeys;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_GetAllowGamepadKeys
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESelectedKey            Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bAllowGamepadKeys                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPi_ButtonManager_C::B03_GetAllowGamepadKeys(enum class ESelectedKey Key, bool* bAllowGamepadKeys)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ButtonManager_C", "B03_GetAllowGamepadKeys");

	Params::IBPi_ButtonManager_C_B03_GetAllowGamepadKeys_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

	if (bAllowGamepadKeys != nullptr)
		*bAllowGamepadKeys = Parms.bAllowGamepadKeys;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_SetAllowGamepadKeys
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESelectedKey            Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bAllowGamepadKeys                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPi_ButtonManager_C::B03_SetAllowGamepadKeys(enum class ESelectedKey Key, bool bAllowGamepadKeys)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ButtonManager_C", "B03_SetAllowGamepadKeys");

	Params::IBPi_ButtonManager_C_B03_SetAllowGamepadKeys_Params Parms{};

	Parms.Key = Key;
	Parms.bAllowGamepadKeys = bAllowGamepadKeys;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_GetKeySelectionText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESelectedKey            Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        KeySelectionText                                                 (Parm, OutParm)

void IBPi_ButtonManager_C::B03_GetKeySelectionText(enum class ESelectedKey Key, class FText* KeySelectionText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ButtonManager_C", "B03_GetKeySelectionText");

	Params::IBPi_ButtonManager_C_B03_GetKeySelectionText_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

	if (KeySelectionText != nullptr)
		*KeySelectionText = Parms.KeySelectionText;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_SetKeySelectionText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESelectedKey            Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        KeySelectionText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void IBPi_ButtonManager_C::B03_SetKeySelectionText(enum class ESelectedKey Key, class FText KeySelectionText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ButtonManager_C", "B03_SetKeySelectionText");

	Params::IBPi_ButtonManager_C_B03_SetKeySelectionText_Params Parms{};

	Parms.Key = Key;
	Parms.KeySelectionText = KeySelectionText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_GetSelectedKey
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESelectedKey            Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputChord                 SelectedKey                                                      (Parm, OutParm, HasGetValueTypeHash)

void IBPi_ButtonManager_C::B03_GetSelectedKey(enum class ESelectedKey Key, struct FInputChord* SelectedKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ButtonManager_C", "B03_GetSelectedKey");

	Params::IBPi_ButtonManager_C_B03_GetSelectedKey_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

	if (SelectedKey != nullptr)
		*SelectedKey = std::move(Parms.SelectedKey);

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_GetKeyEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESelectedKey            Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bEnabled                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPi_ButtonManager_C::B03_GetKeyEnabled(enum class ESelectedKey Key, bool* bEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ButtonManager_C", "B03_GetKeyEnabled");

	Params::IBPi_ButtonManager_C_B03_GetKeyEnabled_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

	if (bEnabled != nullptr)
		*bEnabled = Parms.bEnabled;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_SetKeyEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESelectedKey            Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bEnabled                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPi_ButtonManager_C::B03_SetKeyEnabled(enum class ESelectedKey Key, bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ButtonManager_C", "B03_SetKeyEnabled");

	Params::IBPi_ButtonManager_C_B03_SetKeyEnabled_Params Parms{};

	Parms.Key = Key;
	Parms.bEnabled = bEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_SetSelectedKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESelectedKey            Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputChord                 SelectedKey                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void IBPi_ButtonManager_C::B03_SetSelectedKey(enum class ESelectedKey Key, const struct FInputChord& SelectedKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ButtonManager_C", "B03_SetSelectedKey");

	Params::IBPi_ButtonManager_C_B03_SetSelectedKey_Params Parms{};

	Parms.Key = Key;
	Parms.SelectedKey = SelectedKey;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_SetStateButtonIconColor_Clicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ButtonManager_C::B03_SetStateButtonIconColor_Clicked(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ButtonManager_C", "B03_SetStateButtonIconColor_Clicked");

	Params::IBPi_ButtonManager_C_B03_SetStateButtonIconColor_Clicked_Params Parms{};

	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_SetStateButtonIconColor_Hovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ButtonManager_C::B03_SetStateButtonIconColor_Hovered(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ButtonManager_C", "B03_SetStateButtonIconColor_Hovered");

	Params::IBPi_ButtonManager_C_B03_SetStateButtonIconColor_Hovered_Params Parms{};

	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_SetStateButtonIconColor_Normal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ButtonManager_C::B03_SetStateButtonIconColor_Normal(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ButtonManager_C", "B03_SetStateButtonIconColor_Normal");

	Params::IBPi_ButtonManager_C_B03_SetStateButtonIconColor_Normal_Params Parms{};

	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_SetStateButtonIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Icon                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ButtonManager_C::B03_SetStateButtonIcon(class UObject* Icon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ButtonManager_C", "B03_SetStateButtonIcon");

	Params::IBPi_ButtonManager_C_B03_SetStateButtonIcon_Params Parms{};

	Parms.Icon = Icon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_GetStateByIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              State                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ButtonManager_C::B03_GetStateByIndex(int32* State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ButtonManager_C", "B03_GetStateByIndex");

	Params::IBPi_ButtonManager_C_B03_GetStateByIndex_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (State != nullptr)
		*State = Parms.State;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_GetStateByName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        State                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ButtonManager_C::B03_GetStateByName(class FName* State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ButtonManager_C", "B03_GetStateByName");

	Params::IBPi_ButtonManager_C_B03_GetStateByName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (State != nullptr)
		*State = Parms.State;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_SetStateByIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ButtonManager_C::B03_SetStateByIndex(int32 State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ButtonManager_C", "B03_SetStateByIndex");

	Params::IBPi_ButtonManager_C_B03_SetStateByIndex_Params Parms{};

	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_SetStateByName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ButtonManager_C::B03_SetStateByName(class FName State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ButtonManager_C", "B03_SetStateByName");

	Params::IBPi_ButtonManager_C_B03_SetStateByName_Params Parms{};

	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B02_RemoveContentWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPi_ButtonManager_C::B02_RemoveContentWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ButtonManager_C", "B02_RemoveContentWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B02_Create_ContentWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      ContentWidget                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ButtonManager_C::B02_Create_ContentWidget(class UClass* ContentWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ButtonManager_C", "B02_Create_ContentWidget");

	Params::IBPi_ButtonManager_C_B02_Create_ContentWidget_Params Parms{};

	Parms.ContentWidget = ContentWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B02_SetBlurShineColor_Clicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                InColor                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ButtonManager_C::B02_SetBlurShineColor_Clicked(const struct FLinearColor& InColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ButtonManager_C", "B02_SetBlurShineColor_Clicked");

	Params::IBPi_ButtonManager_C_B02_SetBlurShineColor_Clicked_Params Parms{};

	Parms.InColor = InColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B02_SetBlurShineColor_Hovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                InColor                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ButtonManager_C::B02_SetBlurShineColor_Hovered(const struct FLinearColor& InColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ButtonManager_C", "B02_SetBlurShineColor_Hovered");

	Params::IBPi_ButtonManager_C_B02_SetBlurShineColor_Hovered_Params Parms{};

	Parms.InColor = InColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B02_SetDynamicShineColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                InColor                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ButtonManager_C::B02_SetDynamicShineColor(const struct FLinearColor& InColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ButtonManager_C", "B02_SetDynamicShineColor");

	Params::IBPi_ButtonManager_C_B02_SetDynamicShineColor_Params Parms{};

	Parms.InColor = InColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B02_SetUseDynamicShine
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bUseDynamicShine                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPi_ButtonManager_C::B02_SetUseDynamicShine(bool bUseDynamicShine)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ButtonManager_C", "B02_SetUseDynamicShine");

	Params::IBPi_ButtonManager_C_B02_SetUseDynamicShine_Params Parms{};

	Parms.bUseDynamicShine = bUseDynamicShine;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B02_SetFillColor_Current
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                FillColor_Current                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ButtonManager_C::B02_SetFillColor_Current(const struct FLinearColor& FillColor_Current)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ButtonManager_C", "B02_SetFillColor_Current");

	Params::IBPi_ButtonManager_C_B02_SetFillColor_Current_Params Parms{};

	Parms.FillColor_Current = FillColor_Current;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B02_SetFillColor_Disabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                FillColor_Disabled                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ButtonManager_C::B02_SetFillColor_Disabled(const struct FLinearColor& FillColor_Disabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ButtonManager_C", "B02_SetFillColor_Disabled");

	Params::IBPi_ButtonManager_C_B02_SetFillColor_Disabled_Params Parms{};

	Parms.FillColor_Disabled = FillColor_Disabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B02_SetFillColor_Clicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                FillColor_Clicked                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ButtonManager_C::B02_SetFillColor_Clicked(const struct FLinearColor& FillColor_Clicked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ButtonManager_C", "B02_SetFillColor_Clicked");

	Params::IBPi_ButtonManager_C_B02_SetFillColor_Clicked_Params Parms{};

	Parms.FillColor_Clicked = FillColor_Clicked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B02_SetFillColor_Hovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                FillColor_Hovered                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ButtonManager_C::B02_SetFillColor_Hovered(const struct FLinearColor& FillColor_Hovered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ButtonManager_C", "B02_SetFillColor_Hovered");

	Params::IBPi_ButtonManager_C_B02_SetFillColor_Hovered_Params Parms{};

	Parms.FillColor_Hovered = FillColor_Hovered;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B02_SetFillColor_Normal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                FillColor_Normal                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ButtonManager_C::B02_SetFillColor_Normal(const struct FLinearColor& FillColor_Normal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ButtonManager_C", "B02_SetFillColor_Normal");

	Params::IBPi_ButtonManager_C_B02_SetFillColor_Normal_Params Parms{};

	Parms.FillColor_Normal = FillColor_Normal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B02_SetFrameColor_Current
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                FrameColor_Current                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ButtonManager_C::B02_SetFrameColor_Current(const struct FLinearColor& FrameColor_Current)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ButtonManager_C", "B02_SetFrameColor_Current");

	Params::IBPi_ButtonManager_C_B02_SetFrameColor_Current_Params Parms{};

	Parms.FrameColor_Current = FrameColor_Current;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B02_SetFrameColor_Disabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                FrameColor_Disabled                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ButtonManager_C::B02_SetFrameColor_Disabled(const struct FLinearColor& FrameColor_Disabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ButtonManager_C", "B02_SetFrameColor_Disabled");

	Params::IBPi_ButtonManager_C_B02_SetFrameColor_Disabled_Params Parms{};

	Parms.FrameColor_Disabled = FrameColor_Disabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B02_SetFrameColor_Clicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                FrameColor_Clicked                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ButtonManager_C::B02_SetFrameColor_Clicked(const struct FLinearColor& FrameColor_Clicked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ButtonManager_C", "B02_SetFrameColor_Clicked");

	Params::IBPi_ButtonManager_C_B02_SetFrameColor_Clicked_Params Parms{};

	Parms.FrameColor_Clicked = FrameColor_Clicked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B02_SetFrameColor_Hovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                FrameColor_Hovered                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ButtonManager_C::B02_SetFrameColor_Hovered(const struct FLinearColor& FrameColor_Hovered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ButtonManager_C", "B02_SetFrameColor_Hovered");

	Params::IBPi_ButtonManager_C_B02_SetFrameColor_Hovered_Params Parms{};

	Parms.FrameColor_Hovered = FrameColor_Hovered;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B02_SetFrameColor_Normal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                FrameColor_Normal                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ButtonManager_C::B02_SetFrameColor_Normal(const struct FLinearColor& FrameColor_Normal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ButtonManager_C", "B02_SetFrameColor_Normal");

	Params::IBPi_ButtonManager_C_B02_SetFrameColor_Normal_Params Parms{};

	Parms.FrameColor_Normal = FrameColor_Normal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.SetButtonJustification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EJustification          EJustification                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ButtonManager_C::SetButtonJustification(enum class EJustification EJustification)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ButtonManager_C", "SetButtonJustification");

	Params::IBPi_ButtonManager_C_SetButtonJustification_Params Parms{};

	Parms.EJustification = EJustification;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.GetButtonJustification
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EJustification          EJustification                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ButtonManager_C::GetButtonJustification(enum class EJustification* EJustification)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ButtonManager_C", "GetButtonJustification");

	Params::IBPi_ButtonManager_C_GetButtonJustification_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EJustification != nullptr)
		*EJustification = Parms.EJustification;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B01_SetColor_ClickedFX_Text
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color_ClickedFX_Text                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ButtonManager_C::B01_SetColor_ClickedFX_Text(const struct FLinearColor& Color_ClickedFX_Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ButtonManager_C", "B01_SetColor_ClickedFX_Text");

	Params::IBPi_ButtonManager_C_B01_SetColor_ClickedFX_Text_Params Parms{};

	Parms.Color_ClickedFX_Text = Color_ClickedFX_Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B01_SetColor_ClickedFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color_ClickedFX                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ButtonManager_C::B01_SetColor_ClickedFX(const struct FLinearColor& Color_ClickedFX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ButtonManager_C", "B01_SetColor_ClickedFX");

	Params::IBPi_ButtonManager_C_B01_SetColor_ClickedFX_Params Parms{};

	Parms.Color_ClickedFX = Color_ClickedFX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B01_SetColor_HoveredFX_02
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color_HoveredFX_02                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ButtonManager_C::B01_SetColor_HoveredFX_02(const struct FLinearColor& Color_HoveredFX_02)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ButtonManager_C", "B01_SetColor_HoveredFX_02");

	Params::IBPi_ButtonManager_C_B01_SetColor_HoveredFX_02_Params Parms{};

	Parms.Color_HoveredFX_02 = Color_HoveredFX_02;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B01_SetColor_HoveredFX_01
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color_HoveredFX_01                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ButtonManager_C::B01_SetColor_HoveredFX_01(const struct FLinearColor& Color_HoveredFX_01)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ButtonManager_C", "B01_SetColor_HoveredFX_01");

	Params::IBPi_ButtonManager_C_B01_SetColor_HoveredFX_01_Params Parms{};

	Parms.Color_HoveredFX_01 = Color_HoveredFX_01;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.SetButtonSound_OnHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*                  HoveredSound                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ButtonManager_C::SetButtonSound_OnHovered(class USoundBase* HoveredSound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ButtonManager_C", "SetButtonSound_OnHovered");

	Params::IBPi_ButtonManager_C_SetButtonSound_OnHovered_Params Parms{};

	Parms.HoveredSound = HoveredSound;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.SetButtonSound_OnClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*                  ClickedSound                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ButtonManager_C::SetButtonSound_OnClicked(class USoundBase* ClickedSound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ButtonManager_C", "SetButtonSound_OnClicked");

	Params::IBPi_ButtonManager_C_SetButtonSound_OnClicked_Params Parms{};

	Parms.ClickedSound = ClickedSound;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.SetHintIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      HintIcon                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ButtonManager_C::SetHintIcon(class UClass* HintIcon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ButtonManager_C", "SetHintIcon");

	Params::IBPi_ButtonManager_C_SetHintIcon_Params Parms{};

	Parms.HintIcon = HintIcon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.SetUser_Focus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ButtonManager_C::SetUser_Focus(class APlayerController* Player)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ButtonManager_C", "SetUser_Focus");

	Params::IBPi_ButtonManager_C_SetUser_Focus_Params Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.GetUserFocus
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               HasFocus                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPi_ButtonManager_C::GetUserFocus(class APlayerController* Player, bool* HasFocus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ButtonManager_C", "GetUserFocus");

	Params::IBPi_ButtonManager_C_GetUserFocus_Params Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

	if (HasFocus != nullptr)
		*HasFocus = Parms.HasFocus;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.SetButtonFontInfo_Disabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFont*                       Font                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFontFace*                   Typeface                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              FontSize                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ButtonManager_C::SetButtonFontInfo_Disabled(class UFont* Font, class UFontFace* Typeface, int32 FontSize, const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ButtonManager_C", "SetButtonFontInfo_Disabled");

	Params::IBPi_ButtonManager_C_SetButtonFontInfo_Disabled_Params Parms{};

	Parms.Font = Font;
	Parms.Typeface = Typeface;
	Parms.FontSize = FontSize;
	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.SetButtonFontInfo_Clicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFont*                       Font                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFontFace*                   Typeface                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              FontSize                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ButtonManager_C::SetButtonFontInfo_Clicked(class UFont* Font, class UFontFace* Typeface, int32 FontSize, const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ButtonManager_C", "SetButtonFontInfo_Clicked");

	Params::IBPi_ButtonManager_C_SetButtonFontInfo_Clicked_Params Parms{};

	Parms.Font = Font;
	Parms.Typeface = Typeface;
	Parms.FontSize = FontSize;
	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.SetButtonFontInfo_Hovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFont*                       Font                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFontFace*                   Typeface                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              FontSize                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ButtonManager_C::SetButtonFontInfo_Hovered(class UFont* Font, class UFontFace* Typeface, int32 FontSize, const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ButtonManager_C", "SetButtonFontInfo_Hovered");

	Params::IBPi_ButtonManager_C_SetButtonFontInfo_Hovered_Params Parms{};

	Parms.Font = Font;
	Parms.Typeface = Typeface;
	Parms.FontSize = FontSize;
	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.SetButtonFontInfo_Normal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFont*                       Font                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFontFace*                   Typeface                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              FontSize                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ButtonManager_C::SetButtonFontInfo_Normal(class UFont* Font, class UFontFace* Typeface, int32 FontSize, const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ButtonManager_C", "SetButtonFontInfo_Normal");

	Params::IBPi_ButtonManager_C_SetButtonFontInfo_Normal_Params Parms{};

	Parms.Font = Font;
	Parms.Typeface = Typeface;
	Parms.FontSize = FontSize;
	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.GetButtonFontInfo_Disabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFont*                       Font                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFontFace*                   Typeface                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              FontSize                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Color                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ButtonManager_C::GetButtonFontInfo_Disabled(class UFont** Font, class UFontFace** Typeface, int32* FontSize, struct FLinearColor* Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ButtonManager_C", "GetButtonFontInfo_Disabled");

	Params::IBPi_ButtonManager_C_GetButtonFontInfo_Disabled_Params Parms{};


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


// Function BPi_ButtonManager.BPi_ButtonManager_C.GetButtonFontInfo_Clicked
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFont*                       Font                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFontFace*                   Typeface                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Integer                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Color                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ButtonManager_C::GetButtonFontInfo_Clicked(class UFont** Font, class UFontFace** Typeface, int32* Integer, struct FLinearColor* Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ButtonManager_C", "GetButtonFontInfo_Clicked");

	Params::IBPi_ButtonManager_C_GetButtonFontInfo_Clicked_Params Parms{};


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


// Function BPi_ButtonManager.BPi_ButtonManager_C.GetButtonFontInfo_Hovered
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFont*                       Font                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFontFace*                   Typeface                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              FontSize                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Color                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ButtonManager_C::GetButtonFontInfo_Hovered(class UFont** Font, class UFontFace** Typeface, int32* FontSize, struct FLinearColor* Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ButtonManager_C", "GetButtonFontInfo_Hovered");

	Params::IBPi_ButtonManager_C_GetButtonFontInfo_Hovered_Params Parms{};


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


// Function BPi_ButtonManager.BPi_ButtonManager_C.GetButtonFontInfo_Normal
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFont*                       Font                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFontFace*                   Typeface                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              FontSize                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Color                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ButtonManager_C::GetButtonFontInfo_Normal(class UFont** Font, class UFontFace** Typeface, int32* FontSize, struct FLinearColor* Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ButtonManager_C", "GetButtonFontInfo_Normal");

	Params::IBPi_ButtonManager_C_GetButtonFontInfo_Normal_Params Parms{};


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


// Function BPi_ButtonManager.BPi_ButtonManager_C.GetButtonText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ButtonText                                                       (Parm, OutParm)

void IBPi_ButtonManager_C::GetButtonText(class FText* ButtonText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ButtonManager_C", "GetButtonText");

	Params::IBPi_ButtonManager_C_GetButtonText_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ButtonText != nullptr)
		*ButtonText = Parms.ButtonText;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.GetButtonEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsEnabled                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPi_ButtonManager_C::GetButtonEnabled(bool* bIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ButtonManager_C", "GetButtonEnabled");

	Params::IBPi_ButtonManager_C_GetButtonEnabled_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bIsEnabled != nullptr)
		*bIsEnabled = Parms.bIsEnabled;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.SetButtonEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsEnabled                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPi_ButtonManager_C::SetButtonEnabled(bool bIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ButtonManager_C", "SetButtonEnabled");

	Params::IBPi_ButtonManager_C_SetButtonEnabled_Params Parms{};

	Parms.bIsEnabled = bIsEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.SetButtonFontInfo_Current
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFont*                       Font                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFontFace*                   Typeface                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              FontSize                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ButtonManager_C::SetButtonFontInfo_Current(class UFont* Font, class UFontFace* Typeface, int32 FontSize, const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ButtonManager_C", "SetButtonFontInfo_Current");

	Params::IBPi_ButtonManager_C_SetButtonFontInfo_Current_Params Parms{};

	Parms.Font = Font;
	Parms.Typeface = Typeface;
	Parms.FontSize = FontSize;
	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.SetButtonText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ButtonText                                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void IBPi_ButtonManager_C::SetButtonText(class FText ButtonText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ButtonManager_C", "SetButtonText");

	Params::IBPi_ButtonManager_C_SetButtonText_Params Parms{};

	Parms.ButtonText = ButtonText;

	UObject::ProcessEvent(Func, &Parms);

}

}


