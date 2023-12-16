#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9 (0x239 - 0x230)
// WidgetBlueprintGeneratedClass WB_Button_Base.WB_Button_Base_C
class UWB_Button_Base_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         bResponsiveHovering;                               // 0x238(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UWB_Button_Base_C* GetDefaultObj();

	void B03_GetSliderValueNormalized(float* ValueNormalized);
	void B03_GetSliderValue(float* Value);
	void B03_GetKeyEscapeKeys(enum class ESelectedKey Key, TArray<struct FKey>* EscapeKeys);
	void B03_GetAllowModifierKeys(enum class ESelectedKey Key, bool* bAllowModifierKeys);
	void B03_GetAllowGamepadKeys(enum class ESelectedKey Key, bool* bAllowGamepadKeys);
	void B03_GetKeySelectionText(enum class ESelectedKey Key, class FText* KeySelectionText);
	void B03_GetSelectedKey(enum class ESelectedKey Key, struct FInputChord* SelectedKey);
	void B03_GetKeyEnabled(enum class ESelectedKey Key, bool* bEnabled);
	void B03_GetStateByIndex(int32* State);
	void B03_GetStateByName(class FName* State);
	void B04_GetScale_Clicked(float* Scale);
	void B04_GetScale_Hovered(float* Scale);
	void B04_GetImage(class UObject** Image_Brush, struct FVector2D* Image_Translation);
	void GetButtonJustification(enum class EJustification* EJustification);
	void GetUserFocus(class APlayerController* Player, bool* HasFocus);
	void GetButtonFontInfo_Clicked(class UFont** Font, class UFontFace** Typeface, int32* Integer, struct FLinearColor* Color);
	void GetButtonFontInfo_Disabled(class UFont** Font, class UFontFace** Typeface, int32* FontSize, struct FLinearColor* Color);
	void GetButtonFontInfo_Hovered(class UFont** Font, class UFontFace** Typeface, int32* FontSize, struct FLinearColor* Color);
	void GetButtonFontInfo_Normal(class UFont** Font, class UFontFace** Typeface, int32* FontSize, struct FLinearColor* Color);
	void GetButtonText(class FText* ButtonText);
	void GetButtonEnabled(bool* bIsEnabled);
	void SetButtonText(class FText ButtonText);
	void SetButtonFontInfo_Current(class UFont* Font, class UFontFace* Typeface, int32 FontSize, const struct FLinearColor& Color);
	void SetButtonEnabled(bool bIsEnabled);
	void SetButtonFontInfo_Normal(class UFont* Font, class UFontFace* Typeface, int32 FontSize, const struct FLinearColor& Color);
	void SetButtonFontInfo_Hovered(class UFont* Font, class UFontFace* Typeface, int32 FontSize, const struct FLinearColor& Color);
	void SetButtonFontInfo_Clicked(class UFont* Font, class UFontFace* Typeface, int32 FontSize, const struct FLinearColor& Color);
	void SetButtonFontInfo_Disabled(class UFont* Font, class UFontFace* Typeface, int32 FontSize, const struct FLinearColor& Color);
	void SetUser_Focus(class APlayerController* Player);
	void SetHintIcon(class UClass* HintIcon);
	void SetButtonSound_OnClicked(class USoundBase* ClickedSound);
	void SetButtonSound_OnHovered(class USoundBase* HoveredSound);
	void B01_SetColor_HoveredFX_01(const struct FLinearColor& Color_HoveredFX_01);
	void B01_SetColor_HoveredFX_02(const struct FLinearColor& Color_HoveredFX_02);
	void B01_SetColor_ClickedFX(const struct FLinearColor& Color_ClickedFX);
	void B01_SetColor_ClickedFX_Text(const struct FLinearColor& Color_ClickedFX_Text);
	void SetButtonJustification(enum class EJustification EJustification);
	void B02_SetFrameColor_Normal(const struct FLinearColor& FrameColor_Normal);
	void B02_SetFrameColor_Hovered(const struct FLinearColor& FrameColor_Hovered);
	void B02_SetFrameColor_Clicked(const struct FLinearColor& FrameColor_Clicked);
	void B02_SetFrameColor_Disabled(const struct FLinearColor& FrameColor_Disabled);
	void B02_SetFrameColor_Current(const struct FLinearColor& FrameColor_Current);
	void B02_SetFillColor_Normal(const struct FLinearColor& FillColor_Normal);
	void B02_SetFillColor_Hovered(const struct FLinearColor& FillColor_Hovered);
	void B02_SetFillColor_Clicked(const struct FLinearColor& FillColor_Clicked);
	void B02_SetFillColor_Disabled(const struct FLinearColor& FillColor_Disabled);
	void B02_SetFillColor_Current(const struct FLinearColor& FillColor_Current);
	void B02_SetUseDynamicShine(bool bUseDynamicShine);
	void B02_SetDynamicShineColor(const struct FLinearColor& InColor);
	void B02_SetBlurShineColor_Hovered(const struct FLinearColor& InColor);
	void B02_SetBlurShineColor_Clicked(const struct FLinearColor& InColor);
	void B02_Create_ContentWidget(class UClass* ContentWidget);
	void B02_RemoveContentWidget();
	void B03_SetStateByName(class FName State);
	void B03_SetStateByIndex(int32 State);
	void B03_SetStateButtonIcon(class UObject* Icon);
	void B03_SetStateButtonIconColor_Normal(const struct FLinearColor& Color);
	void B03_SetStateButtonIconColor_Hovered(const struct FLinearColor& Color);
	void B03_SetStateButtonIconColor_Clicked(const struct FLinearColor& Color);
	void B03_SetSelectedKey(enum class ESelectedKey Key, const struct FInputChord& SelectedKey);
	void B03_SetKeyEnabled(enum class ESelectedKey Key, bool bEnabled);
	void B03_SetKeySelectionText(enum class ESelectedKey Key, class FText KeySelectionText);
	void B03_SetAllowGamepadKeys(enum class ESelectedKey Key, bool bAllowGamepadKeys);
	void B03_SetAllowModifierKeys(enum class ESelectedKey Key, bool bAllowModifierKeys);
	void B03_SetKeyEscapeKeys(enum class ESelectedKey Key, TArray<struct FKey>& EscapeKeys);
	void B03_CreateContentWidget(class UClass* ContentWidget);
	void B03_RemoveContentWidget();
	void B04_SetFrameColor_Normal(const struct FLinearColor& FrameColor1, const struct FLinearColor& FrameColor2, const struct FLinearColor& FrameColor_Shine, const struct FLinearColor& ShineFxColor_Background, const struct FLinearColor& ShineFxColor_Small, const struct FLinearColor& ShineFxColor_Big);
	void B04_SetFrameColor_Hovered(const struct FLinearColor& FrameColor1, const struct FLinearColor& FrameColor2, const struct FLinearColor& FrameColor_Shine, const struct FLinearColor& ShineFxColor_Background, const struct FLinearColor& ShineFxColor_Small, const struct FLinearColor& ShineFxColor_Big);
	void B04_SetFrameColor_Clicked(const struct FLinearColor& FrameColor1, const struct FLinearColor& FrameColor2, const struct FLinearColor& FrameColor_Shine, const struct FLinearColor& ShineFxColor_Background, const struct FLinearColor& ShineFxColor_Small, const struct FLinearColor& ShineFxColor_Big);
	void B04_SetFrameColor_Disabled(const struct FLinearColor& FrameColor1, const struct FLinearColor& FrameColor2, const struct FLinearColor& FrameColor_Shine);
	void B04_SetFrameColor_Current(const struct FLinearColor& FrameColor1, const struct FLinearColor& FrameColor2, const struct FLinearColor& FrameColor_Shine, const struct FLinearColor& ShineFxColor_Background, const struct FLinearColor& ShineFxColor_Small, const struct FLinearColor& ShineFxColor_Big);
	void B04_SetShineFxEnabled(bool bIsEnabled);
	void B04_CreateContentWidget(class UClass* ContentWidget);
	void B04_RemoveContentWidget();
	void B04_SetImage(class UObject* ImageBrush, const struct FVector2D& ImageTranslation);
	void B04_SetImageColor_Normal(const struct FLinearColor& ImageColor_Normal, float Saturation_Normal);
	void B04_SetImageColor_Hovered(const struct FLinearColor& ImageColor_Hovered, float Saturation_Hovered);
	void B04_SetImageColor_Clicked(const struct FLinearColor& ImageColor_Clicked, float Saturation_Clicked);
	void B04_SetImageColor_Disabled(const struct FLinearColor& ImageColor_Disabled, float Saturation_Disabled);
	void B04_SetVignetteColor(const struct FLinearColor& VignetteColor);
	void B04_SetScale(float Scale);
	void B03_SetSliderValue(float Value);
	void B03_SetSliderValueNormalized(float ValueNormalized);
	void ExecuteUbergraph_WB_Button_Base(int32 EntryPoint, float K2Node_Event_ValueNormalized, class FText K2Node_Event_ButtonText, class UFont* K2Node_Event_Font_4, class UFontFace* K2Node_Event_TypeFace_4, int32 K2Node_Event_FontSize_4, const struct FLinearColor& K2Node_Event_Color_7, bool K2Node_Event_bIsEnabled_1, class UFont* K2Node_Event_Font_3, class UFontFace* K2Node_Event_TypeFace_3, int32 K2Node_Event_FontSize_3, const struct FLinearColor& K2Node_Event_Color_6, class UFont* K2Node_Event_Font_2, class UFontFace* K2Node_Event_TypeFace_2, int32 K2Node_Event_FontSize_2, const struct FLinearColor& K2Node_Event_Color_5, class UFont* K2Node_Event_Font_1, class UFontFace* K2Node_Event_TypeFace_1, int32 K2Node_Event_FontSize_1, const struct FLinearColor& K2Node_Event_Color_4, class UFont* K2Node_Event_Font, class UFontFace* K2Node_Event_TypeFace, int32 K2Node_Event_FontSize, const struct FLinearColor& K2Node_Event_Color_3, class APlayerController* K2Node_Event_Player, class UClass* K2Node_Event_HintIcon, class USoundBase* K2Node_Event_ClickedSound, class USoundBase* K2Node_Event_HoveredSound, const struct FLinearColor& K2Node_Event_Color_HoveredFX_01, const struct FLinearColor& K2Node_Event_Color_HoveredFX_02, const struct FLinearColor& K2Node_Event_Color_ClickedFX, const struct FLinearColor& K2Node_Event_Color_ClickedFX_Text, enum class EJustification K2Node_Event_EJustification, const struct FLinearColor& K2Node_Event_FrameColor_Normal, const struct FLinearColor& K2Node_Event_FrameColor_Hovered, const struct FLinearColor& K2Node_Event_FrameColor_Clicked, const struct FLinearColor& K2Node_Event_FrameColor_Disabled, const struct FLinearColor& K2Node_Event_FrameColor_Current, const struct FLinearColor& K2Node_Event_FillColor_Normal, const struct FLinearColor& K2Node_Event_FillColor_Hovered, const struct FLinearColor& K2Node_Event_FillColor_Clicked, const struct FLinearColor& K2Node_Event_FillColor_Disabled, const struct FLinearColor& K2Node_Event_FillColor_Current, bool K2Node_Event_bUseDynamicShine, const struct FLinearColor& K2Node_Event_InColor_2, const struct FLinearColor& K2Node_Event_InColor_1, const struct FLinearColor& K2Node_Event_InColor, class UClass* K2Node_Event_ContentWidget_2, class FName K2Node_Event_State_1, int32 K2Node_Event_State, class UObject* K2Node_Event_Icon, const struct FLinearColor& K2Node_Event_Color_2, const struct FLinearColor& K2Node_Event_Color_1, const struct FLinearColor& K2Node_Event_Color, enum class ESelectedKey K2Node_Event_Key_5, const struct FInputChord& K2Node_Event_SelectedKey, enum class ESelectedKey K2Node_Event_Key_4, bool K2Node_Event_bEnabled, enum class ESelectedKey K2Node_Event_Key_3, class FText K2Node_Event_KeySelectionText, enum class ESelectedKey K2Node_Event_Key_2, bool K2Node_Event_bAllowGamepadKeys, enum class ESelectedKey K2Node_Event_Key_1, bool K2Node_Event_bAllowModifierKeys, enum class ESelectedKey K2Node_Event_Key, TArray<struct FKey>& K2Node_Event_EscapeKeys, class UClass* K2Node_Event_ContentWidget_1, const struct FLinearColor& K2Node_Event_FrameColor1_4, const struct FLinearColor& K2Node_Event_FrameColor2_4, const struct FLinearColor& K2Node_Event_FrameColor_Shine_4, const struct FLinearColor& K2Node_Event_ShineFxColor_Background_3, const struct FLinearColor& K2Node_Event_ShineFxColor_Small_3, const struct FLinearColor& K2Node_Event_ShineFxColor_Big_3, const struct FLinearColor& K2Node_Event_FrameColor1_3, const struct FLinearColor& K2Node_Event_FrameColor2_3, const struct FLinearColor& K2Node_Event_FrameColor_Shine_3, const struct FLinearColor& K2Node_Event_ShineFxColor_Background_2, const struct FLinearColor& K2Node_Event_ShineFxColor_Small_2, const struct FLinearColor& K2Node_Event_ShineFxColor_Big_2, const struct FLinearColor& K2Node_Event_FrameColor1_2, const struct FLinearColor& K2Node_Event_FrameColor2_2, const struct FLinearColor& K2Node_Event_FrameColor_Shine_2, const struct FLinearColor& K2Node_Event_ShineFxColor_Background_1, const struct FLinearColor& K2Node_Event_ShineFxColor_Small_1, const struct FLinearColor& K2Node_Event_ShineFxColor_Big_1, const struct FLinearColor& K2Node_Event_FrameColor1_1, const struct FLinearColor& K2Node_Event_FrameColor2_1, const struct FLinearColor& K2Node_Event_FrameColor_Shine_1, const struct FLinearColor& K2Node_Event_FrameColor1, const struct FLinearColor& K2Node_Event_FrameColor2, const struct FLinearColor& K2Node_Event_FrameColor_Shine, const struct FLinearColor& K2Node_Event_ShineFxColor_Background, const struct FLinearColor& K2Node_Event_ShineFxColor_Small, const struct FLinearColor& K2Node_Event_ShineFxColor_Big, bool K2Node_Event_bIsEnabled, class UClass* K2Node_Event_ContentWidget, class UObject* K2Node_Event_ImageBrush, const struct FVector2D& K2Node_Event_ImageTranslation, const struct FLinearColor& K2Node_Event_ImageColor_Normal, float K2Node_Event_Saturation_Normal, const struct FLinearColor& K2Node_Event_ImageColor_Hovered, float K2Node_Event_Saturation_Hovered, const struct FLinearColor& K2Node_Event_ImageColor_Clicked, float K2Node_Event_Saturation_Clicked, const struct FLinearColor& K2Node_Event_ImageColor_Disabled, float K2Node_Event_Saturation_Disabled, const struct FLinearColor& K2Node_Event_VignetteColor, float K2Node_Event_Scale, float K2Node_Event_Value);
};

}


