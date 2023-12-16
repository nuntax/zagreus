#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPi_ButtonManager.BPi_ButtonManager_C
class IBPi_ButtonManager_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPi_ButtonManager_C* GetDefaultObj();

	void B03_GetSliderValueNormalized(float* ValueNormalized);
	void B03_GetSliderValue(float* Value);
	void B03_SetSliderValueNormalized(float ValueNormalized);
	void B03_SetSliderValue(float Value);
	void B04_SetScale(float Scale);
	void B04_GetScale_Clicked(float* Scale);
	void B04_GetScale_Hovered(float* Scale);
	void B04_GetImage(class UObject** Image_Brush, struct FVector2D* Image_Translation);
	void B04_SetVignetteColor(const struct FLinearColor& VignetteColor);
	void B04_SetImageColor_Disabled(const struct FLinearColor& ImageColor_Disabled, float Saturation_Disabled);
	void B04_SetImageColor_Clicked(const struct FLinearColor& ImageColor_Clicked, float Saturation_Clicked);
	void B04_SetImageColor_Hovered(const struct FLinearColor& ImageColor_Hovered, float Saturation_Hovered);
	void B04_SetImageColor_Normal(const struct FLinearColor& ImageColor_Normal, float Saturation_Normal);
	void B04_SetImage(class UObject* ImageBrush, const struct FVector2D& ImageTranslation);
	void B04_RemoveContentWidget();
	void B04_CreateContentWidget(class UClass* ContentWidget);
	void B04_SetShineFxEnabled(bool bIsEnabled);
	void B04_SetFrameColor_Current(const struct FLinearColor& FrameColor1, const struct FLinearColor& FrameColor2, const struct FLinearColor& FrameColor_Shine, const struct FLinearColor& ShineFxColor_Background, const struct FLinearColor& ShineFxColor_Small, const struct FLinearColor& ShineFxColor_Big);
	void B04_SetFrameColor_Disabled(const struct FLinearColor& FrameColor1, const struct FLinearColor& FrameColor2, const struct FLinearColor& FrameColor_Shine);
	void B04_SetFrameColor_Clicked(const struct FLinearColor& FrameColor1, const struct FLinearColor& FrameColor2, const struct FLinearColor& FrameColor_Shine, const struct FLinearColor& ShineFxColor_Background, const struct FLinearColor& ShineFxColor_Small, const struct FLinearColor& ShineFxColor_Big);
	void B04_SetFrameColor_Hovered(const struct FLinearColor& FrameColor1, const struct FLinearColor& FrameColor2, const struct FLinearColor& FrameColor_Shine, const struct FLinearColor& ShineFxColor_Background, const struct FLinearColor& ShineFxColor_Small, const struct FLinearColor& ShineFxColor_Big);
	void B04_SetFrameColor_Normal(const struct FLinearColor& FrameColor1, const struct FLinearColor& FrameColor2, const struct FLinearColor& FrameColor_Shine, const struct FLinearColor& ShineFxColor_Background, const struct FLinearColor& ShineFxColor_Small, const struct FLinearColor& ShineFxColor_Big);
	void B03_RemoveContentWidget();
	void B03_CreateContentWidget(class UClass* ContentWidget);
	void B03_SetKeyEscapeKeys(enum class ESelectedKey Key, TArray<struct FKey>& EscapeKeys);
	void B03_GetKeyEscapeKeys(enum class ESelectedKey Key, TArray<struct FKey>* EscapeKeys);
	void B03_GetAllowModifierKeys(enum class ESelectedKey Key, bool* bAllowModifierKeys);
	void B03_SetAllowModifierKeys(enum class ESelectedKey Key, bool bAllowModifierKeys);
	void B03_GetAllowGamepadKeys(enum class ESelectedKey Key, bool* bAllowGamepadKeys);
	void B03_SetAllowGamepadKeys(enum class ESelectedKey Key, bool bAllowGamepadKeys);
	void B03_GetKeySelectionText(enum class ESelectedKey Key, class FText* KeySelectionText);
	void B03_SetKeySelectionText(enum class ESelectedKey Key, class FText KeySelectionText);
	void B03_GetSelectedKey(enum class ESelectedKey Key, struct FInputChord* SelectedKey);
	void B03_GetKeyEnabled(enum class ESelectedKey Key, bool* bEnabled);
	void B03_SetKeyEnabled(enum class ESelectedKey Key, bool bEnabled);
	void B03_SetSelectedKey(enum class ESelectedKey Key, const struct FInputChord& SelectedKey);
	void B03_SetStateButtonIconColor_Clicked(const struct FLinearColor& Color);
	void B03_SetStateButtonIconColor_Hovered(const struct FLinearColor& Color);
	void B03_SetStateButtonIconColor_Normal(const struct FLinearColor& Color);
	void B03_SetStateButtonIcon(class UObject* Icon);
	void B03_GetStateByIndex(int32* State);
	void B03_GetStateByName(class FName* State);
	void B03_SetStateByIndex(int32 State);
	void B03_SetStateByName(class FName State);
	void B02_RemoveContentWidget();
	void B02_Create_ContentWidget(class UClass* ContentWidget);
	void B02_SetBlurShineColor_Clicked(const struct FLinearColor& InColor);
	void B02_SetBlurShineColor_Hovered(const struct FLinearColor& InColor);
	void B02_SetDynamicShineColor(const struct FLinearColor& InColor);
	void B02_SetUseDynamicShine(bool bUseDynamicShine);
	void B02_SetFillColor_Current(const struct FLinearColor& FillColor_Current);
	void B02_SetFillColor_Disabled(const struct FLinearColor& FillColor_Disabled);
	void B02_SetFillColor_Clicked(const struct FLinearColor& FillColor_Clicked);
	void B02_SetFillColor_Hovered(const struct FLinearColor& FillColor_Hovered);
	void B02_SetFillColor_Normal(const struct FLinearColor& FillColor_Normal);
	void B02_SetFrameColor_Current(const struct FLinearColor& FrameColor_Current);
	void B02_SetFrameColor_Disabled(const struct FLinearColor& FrameColor_Disabled);
	void B02_SetFrameColor_Clicked(const struct FLinearColor& FrameColor_Clicked);
	void B02_SetFrameColor_Hovered(const struct FLinearColor& FrameColor_Hovered);
	void B02_SetFrameColor_Normal(const struct FLinearColor& FrameColor_Normal);
	void SetButtonJustification(enum class EJustification EJustification);
	void GetButtonJustification(enum class EJustification* EJustification);
	void B01_SetColor_ClickedFX_Text(const struct FLinearColor& Color_ClickedFX_Text);
	void B01_SetColor_ClickedFX(const struct FLinearColor& Color_ClickedFX);
	void B01_SetColor_HoveredFX_02(const struct FLinearColor& Color_HoveredFX_02);
	void B01_SetColor_HoveredFX_01(const struct FLinearColor& Color_HoveredFX_01);
	void SetButtonSound_OnHovered(class USoundBase* HoveredSound);
	void SetButtonSound_OnClicked(class USoundBase* ClickedSound);
	void SetHintIcon(class UClass* HintIcon);
	void SetUser_Focus(class APlayerController* Player);
	void GetUserFocus(class APlayerController* Player, bool* HasFocus);
	void SetButtonFontInfo_Disabled(class UFont* Font, class UFontFace* Typeface, int32 FontSize, const struct FLinearColor& Color);
	void SetButtonFontInfo_Clicked(class UFont* Font, class UFontFace* Typeface, int32 FontSize, const struct FLinearColor& Color);
	void SetButtonFontInfo_Hovered(class UFont* Font, class UFontFace* Typeface, int32 FontSize, const struct FLinearColor& Color);
	void SetButtonFontInfo_Normal(class UFont* Font, class UFontFace* Typeface, int32 FontSize, const struct FLinearColor& Color);
	void GetButtonFontInfo_Disabled(class UFont** Font, class UFontFace** Typeface, int32* FontSize, struct FLinearColor* Color);
	void GetButtonFontInfo_Clicked(class UFont** Font, class UFontFace** Typeface, int32* Integer, struct FLinearColor* Color);
	void GetButtonFontInfo_Hovered(class UFont** Font, class UFontFace** Typeface, int32* FontSize, struct FLinearColor* Color);
	void GetButtonFontInfo_Normal(class UFont** Font, class UFontFace** Typeface, int32* FontSize, struct FLinearColor* Color);
	void GetButtonText(class FText* ButtonText);
	void GetButtonEnabled(bool* bIsEnabled);
	void SetButtonEnabled(bool bIsEnabled);
	void SetButtonFontInfo_Current(class UFont* Font, class UFontFace* Typeface, int32 FontSize, const struct FLinearColor& Color);
	void SetButtonText(class FText ButtonText);
};

}


