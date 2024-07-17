#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x39F (0x5D8 - 0x239)
// WidgetBlueprintGeneratedClass WB_Button02_Framed.WB_Button02_Framed_C
class UWB_Button02_Framed_C : public UWB_Button_Base_C
{
public:
	uint8                                        Pad_122A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x240(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      FrameFX_ClickedAnim;                               // 0x248(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      FrameFX_HoveredAnim;                               // 0x250(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      TextAnim_Right;                                    // 0x258(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      TextAnim_Left;                                     // 0x260(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                               b_FFX_Clicked_Color;                               // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               b_FFX_Hovered_Color;                               // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               b_StructureRef;                                    // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Button02_FrameFX_C*                FrameFX_Clicked;                                   // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Button02_FrameFX_C*                FrameFX_Hovered;                                   // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OV_Base;                                           // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OV_ContentWidget;                                  // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SB_BlurShine;                                      // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SB_BokehFX;                                        // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SB_ContentWidget;                                  // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SB_FillColor;                                      // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SB_Frame;                                          // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SB_FrameFX_Clicked;                                // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SB_FrameFX_Hovered;                                // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SB_HoveredShine;                                   // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SB_LightFX;                                        // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SB_NativeButton;                                   // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SB_Text;                                           // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                StructureRef;                                      // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_BokehFX_C*                         WB_BokehFX;                                        // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Button02_BlurShine_C*              WB_Button02_BlurShine;                             // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Button02_Text_C*                   WB_Button02_Content;                               // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Button02_FillColor_C*              WB_Button02_FillColor;                             // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Button02_Frame_C*                  WB_Button02_Frame;                                 // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Button02_HoveredShine_C*           WB_Button02_HoveredShine;                          // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_LightFX_C*                         WB_LightFX;                                        // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_NativeButton_C*                    WB_NativeButton;                                   // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastInlineDelegateProperty_            OnClicked;                                         // 0x340(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastInlineDelegateProperty_            OnHovered;                                         // 0x350(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastInlineDelegateProperty_            OnUnhovered;                                       // 0x360(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastInlineDelegateProperty_            OnPressed;                                         // 0x370(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastInlineDelegateProperty_            OnReleased;                                        // 0x380(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UFont*                                 Font_Normal;                                       // 0x390(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                             TypeFace_Normal;                                   // 0x398(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        FontSize_Normal;                                   // 0x3A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_122E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFont*                                 Font_Hovered;                                      // 0x3A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                             TypeFace_Hovered;                                  // 0x3B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        FontSize_Hovered;                                  // 0x3B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1230[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFont*                                 Font_Clicked;                                      // 0x3C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                             TypeFace_Clicked;                                  // 0x3C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        FontSize_Clicked;                                  // 0x3D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Duration_Clicked;                                  // 0x3D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  ButtonText;                                        // 0x3D8(0x18)(Edit, BlueprintVisible)
	struct FLinearColor                          FontColor_Clicked;                                 // 0x3F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          FontColor_Normal;                                  // 0x400(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          FontColor_Hovered;                                 // 0x410(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsEnabled;                                         // 0x420(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EJustification                    ButtonJustification;                               // 0x421(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bUseGamepadFocus;                                  // 0x422(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EInputType                        InputType;                                         // 0x423(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bAutoMinusdetectInput;                             // 0x424(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1235[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                HintIcon;                                          // 0x428(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFont*                                 Font_Disabled;                                     // 0x430(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                             TypeFace_Disabled;                                 // 0x438(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        FontSize_Disabled;                                 // 0x440(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          FontColor_Disabled;                                // 0x444(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1236[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastInlineDelegateProperty_            OnDisabled;                                        // 0x458(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FTimerHandle                          Timer_TextSizeCheck;                               // 0x468(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                ContentWidget;                                     // 0x470(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            OnClicked_Sound;                                   // 0x478(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            OnHovered_Sound;                                   // 0x480(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             ButtonSize;                                        // 0x488(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsDesignTime;                                      // 0x490(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         UsePreview;                                        // 0x491(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1237[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PreviewTime;                                       // 0x494(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          ClickableAreaPreviewColor;                         // 0x498(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bUseDynamicShine;                                  // 0x4A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_123A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          DynamicShineColor;                                 // 0x4AC(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          FrameColor_Normal;                                 // 0x4BC(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          FrameColor_Hovered;                                // 0x4CC(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          FrameColor_Clicked;                                // 0x4DC(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          FrameColor_Disabled;                               // 0x4EC(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          FillColor_Normal;                                  // 0x4FC(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          FillColor_Hovered;                                 // 0x50C(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          FillColor_Clicked;                                 // 0x51C(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          FillColor_Disabled;                                // 0x52C(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          BlurShine_Hovered_Color;                           // 0x53C(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          FrameFX_Hovered_Color;                             // 0x54C(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bUseHoveredTextAnim;                               // 0x55C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_123C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          BlurShine_Clicked_Color;                           // 0x560(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          FrameFX_Clicked_Color;                             // 0x570(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          BokehFX_Color;                                     // 0x580(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BokehFX_Scale;                                     // 0x590(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          LightFX_Color;                                     // 0x594(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LightFX_Scale;                                     // 0x5A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          HoveredShineColor;                                 // 0x5A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastInlineDelegateProperty_            OnFocused;                                         // 0x5B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastInlineDelegateProperty_            OnUnfocused;                                       // 0x5C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWB_Button02_Framed_C* GetDefaultObj();

	void RemoveContentWidget(bool CallFunc_HasAnyChildren_ReturnValue);
	void CreateContentWidget(class UClass* ContentWidget, class UClass* LocalContentWidget, enum class EJustification Temp_byte_Variable, enum class EHorizontalAlignment Temp_byte_Variable_1, enum class EHorizontalAlignment Temp_byte_Variable_2, enum class EHorizontalAlignment Temp_byte_Variable_3, bool CallFunc_IsValidClass_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, enum class EHorizontalAlignment K2Node_Select_Default, class UUserWidget* CallFunc_Create_ReturnValue, class UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue);
	bool IsContentWidgetValid(bool CallFunc_IsValidClass_ReturnValue);
	void SetLightFX_Scale(float Value, float CallFunc_MapRangeClamped_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue_1);
	void SetBokehFX_Scale(float Value, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue_1);
	void SetAllBlurredFrameColors(const struct FLinearColor& Color_FX01_Hovered, const struct FLinearColor& Color_FX01_Clicked);
	void SetBlurredFrameColor(const struct FLinearColor& Color);
	void Set_AllFillColors(const struct FLinearColor& FillColor_Normal, const struct FLinearColor& FillColor_Hovered, const struct FLinearColor& FillColor_Clicked, const struct FLinearColor& FillColor_Disabled, bool Temp_bool_Variable, const struct FLinearColor& K2Node_Select_Default);
	void Set_FillColor(const struct FLinearColor& FillColor);
	void Set_AllFrameColours(const struct FLinearColor& FrameColor_Normal, const struct FLinearColor& FrameColor_Hovered, const struct FLinearColor& FrameColor_Clicked, const struct FLinearColor& FrameColor_Disabled, bool Temp_bool_Variable, const struct FLinearColor& K2Node_Select_Default);
	void Set_FrameColor(const struct FLinearColor& FrameColor);
	void Set_FrameDynamicShineColor(const struct FLinearColor& FrameShineColor);
	void Set_UseFrameDynamicShine(bool bUseShine);
	void GetButtonJustification(enum class EJustification* EJustification);
	void GetUserFocus(class APlayerController* Player, bool* HasFocus, bool CallFunc_IsValid_ReturnValue, class UButton* CallFunc_GetButton_Base_Button, bool CallFunc_HasUserFocus_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void GetButtonFontInfo_Disabled(class UFont** Font, class UFontFace** Typeface, int32* FontSize, struct FLinearColor* Color);
	void GetButtonFontInfo_Clicked(class UFont** Font, class UFontFace** Typeface, int32* Integer, struct FLinearColor* Color);
	void GetButtonFontInfo_Hovered(class UFont** Font, class UFontFace** Typeface, int32* FontSize, struct FLinearColor* Color);
	void GetButtonFontInfo_Normal(class UFont** Font, class UFontFace** Typeface, int32* FontSize, struct FLinearColor* Color);
	void GetButtonText(class FText* ButtonText, class FText CallFunc_GetText_ReturnValue);
	void GetButtonEnabled(bool* bIsEnabled, class UButton* CallFunc_GetButton_Base_Button, class UButton* CallFunc_GetButton_Base_Button_1, bool CallFunc_GetIsEnabled_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
	void UpdateIsEnabled(bool bIsEnabled, class UButton* CallFunc_GetButton_Base_Button, class UButton* CallFunc_GetButton_Base_Button_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class UButton* CallFunc_GetButton_Base_Button_2, bool CallFunc_IsHovered_ReturnValue);
	void SetFontInfo_OnDisabled();
	void SetButtonSizeScale(const struct FVector2D& Size, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, float CallFunc_FClamp_ReturnValue, float CallFunc_FClamp_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_FClamp_ReturnValue_2, float CallFunc_FClamp_ReturnValue_3, float CallFunc_Add_FloatFloat_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue_3, float CallFunc_BreakVector2D_X_2, float CallFunc_BreakVector2D_Y_2, float CallFunc_FClamp_ReturnValue_4, float CallFunc_FClamp_ReturnValue_5, float CallFunc_Add_FloatFloat_ReturnValue_4, float CallFunc_Add_FloatFloat_ReturnValue_5, float CallFunc_BreakVector2D_X_3, float CallFunc_BreakVector2D_Y_3, float CallFunc_BreakVector2D_X_4, float CallFunc_BreakVector2D_Y_4, float CallFunc_FClamp_ReturnValue_6, float CallFunc_FClamp_ReturnValue_7, float CallFunc_Add_FloatFloat_ReturnValue_6, float CallFunc_Add_FloatFloat_ReturnValue_7, float CallFunc_FClamp_ReturnValue_8, float CallFunc_FClamp_ReturnValue_9, float CallFunc_Add_FloatFloat_ReturnValue_8, float CallFunc_Add_FloatFloat_ReturnValue_9, float CallFunc_BreakVector2D_X_5, float CallFunc_BreakVector2D_Y_5, float CallFunc_BreakVector2D_X_6, float CallFunc_BreakVector2D_Y_6, float CallFunc_FClamp_ReturnValue_10, float CallFunc_FClamp_ReturnValue_11, float CallFunc_Add_FloatFloat_ReturnValue_10, float CallFunc_Add_FloatFloat_ReturnValue_11, float CallFunc_FClamp_ReturnValue_12, float CallFunc_FClamp_ReturnValue_13, float CallFunc_Add_FloatFloat_ReturnValue_12, float CallFunc_Add_FloatFloat_ReturnValue_13, float CallFunc_BreakVector2D_X_7, float CallFunc_BreakVector2D_Y_7, bool CallFunc_IsContentWidgetValid_ReturnValue, float CallFunc_FClamp_ReturnValue_14, float CallFunc_Add_FloatFloat_ReturnValue_14, float CallFunc_FClamp_ReturnValue_15, float CallFunc_Add_FloatFloat_ReturnValue_15, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	void SetResponsiveHoveringToNativeButton(bool CallFunc_IsValid_ReturnValue);
	void UnhoverAllNativeButtons(int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWB_NativeButton_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, bool CallFunc_Array_IsValidIndex_ReturnValue, class UWB_NativeButton_C* CallFunc_Array_Get_Item, bool CallFunc_GetIsEnabled_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void SetButtonSounds(class USoundBase* OnClicked_Sound, class USoundBase* OnHovered_Sound, bool CallFunc_IsValid_ReturnValue);
	void UpdateBaseButtonJustification(enum class EJustification Index, enum class EJustification Temp_byte_Variable, enum class EHorizontalAlignment Temp_byte_Variable_1, enum class EHorizontalAlignment Temp_byte_Variable_2, enum class EHorizontalAlignment Temp_byte_Variable_3, enum class EHorizontalAlignment K2Node_Select_Default, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_1, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_2, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_3);
	void UpdateButtonJustification(enum class EJustification EJustification);
	void AddHintIcon(class UClass* Widget20x20, bool CallFunc_IsValid_ReturnValue);
	void GetButton(class UButton** Base_Button);
	void SetFontInfo_OnClicked();
	void SetFontInfo_OnNormal();
	void SetFontInfo_OnHovered();
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
	void BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature();
	void BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature();
	void BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_7_OnUnhovered__DelegateSignature();
	void BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature();
	void BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_9_OnReleased__DelegateSignature();
	void Construct();
	void CheckHasFocus();
	void OnInputSwitched(enum class EInputType InputType);
	void BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_0_OnDisabled__DelegateSignature();
	void UpdateTextAnim(bool bFadeIn);
	void BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_6_OnUnfocused__DelegateSignature();
	void BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_5_OnFocused__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_WB_Button02_Framed(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, enum class EUMGSequencePlayMode Temp_byte_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable_1, bool Temp_bool_Variable_2, enum class EUMGSequencePlayMode K2Node_Select_Default, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FLinearColor& K2Node_MakeStruct_LinearColor_1, bool CallFunc_BooleanAND_ReturnValue, int32 Temp_int_Variable, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_2, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_IsClosed_Variable_2, bool CallFunc_IsValid_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable_3, bool Temp_bool_IsClosed_Variable_3, class FText K2Node_Event_ButtonText, class UFont* K2Node_Event_Font_4, class UFontFace* K2Node_Event_TypeFace_4, int32 K2Node_Event_FontSize_4, const struct FLinearColor& K2Node_Event_Color_4, bool K2Node_Event_bIsEnabled, class UFont* K2Node_Event_Font_3, class UFontFace* K2Node_Event_TypeFace_3, int32 K2Node_Event_FontSize_3, const struct FLinearColor& K2Node_Event_Color_3, class UFont* K2Node_Event_Font_2, class UFontFace* K2Node_Event_TypeFace_2, int32 K2Node_Event_FontSize_2, const struct FLinearColor& K2Node_Event_Color_2, class UFont* K2Node_Event_Font_1, class UFontFace* K2Node_Event_TypeFace_1, int32 K2Node_Event_FontSize_1, const struct FLinearColor& K2Node_Event_Color_1, class UFont* K2Node_Event_Font, class UFontFace* K2Node_Event_TypeFace, int32 K2Node_Event_FontSize, const struct FLinearColor& K2Node_Event_Color, bool CallFunc_IsValid_ReturnValue_2, class UButton* CallFunc_GetButton_Base_Button, class APlayerController* K2Node_Event_Player, class UClass* K2Node_Event_HintIcon, class USoundBase* K2Node_Event_ClickedSound, class USoundBase* K2Node_Event_HoveredSound, enum class EJustification K2Node_Event_EJustification, const struct FLinearColor& K2Node_Event_FrameColor_Normal, const struct FLinearColor& K2Node_Event_FrameColor_Hovered, const struct FLinearColor& K2Node_Event_FrameColor_Clicked, const struct FLinearColor& K2Node_Event_FrameColor_Disabled, const struct FLinearColor& K2Node_Event_FrameColor_Current, bool CallFunc_IsValid_ReturnValue_3, const struct FLinearColor& K2Node_Event_FillColor_Normal, const struct FLinearColor& K2Node_Event_FillColor_Hovered, const struct FLinearColor& K2Node_Event_FillColor_Clicked, const struct FLinearColor& K2Node_Event_FillColor_Disabled, const struct FLinearColor& K2Node_Event_FillColor_Current, bool K2Node_Event_bUseDynamicShine, const struct FLinearColor& K2Node_Event_InColor_2, int32 Temp_int_Variable_1, const struct FLinearColor& K2Node_Event_InColor_1, const struct FLinearColor& K2Node_Event_InColor, class UClass* K2Node_Event_ContentWidget, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_IsValidClass_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable_4, enum class EUMGSequencePlayMode Temp_byte_Variable_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, enum class EUMGSequencePlayMode Temp_byte_Variable_3, class UButton* CallFunc_GetButton_Base_Button_1, enum class EInputType K2Node_CustomEvent_InputType, bool CallFunc_HasAnyUserFocus_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_BooleanAND_ReturnValue_1, bool Temp_bool_IsClosed_Variable_4, int32 Temp_int_Variable_2, bool K2Node_CustomEvent_bFadeIn, bool K2Node_SwitchEnum_CmpSuccess_1, bool Temp_bool_Variable_3, enum class EUMGSequencePlayMode K2Node_Select_Default_1, bool Temp_bool_Variable_4, int32 K2Node_Select_Default_2, int32 Temp_int_Variable_3, int32 Temp_int_Variable_4, bool Temp_bool_Variable_5, int32 K2Node_Select_Default_3, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_5, enum class EUMGSequencePlayMode Temp_byte_Variable_4, enum class EUMGSequencePlayMode Temp_byte_Variable_5, class UButton* CallFunc_GetButton_Base_Button_2, bool CallFunc_IsHovered_ReturnValue, enum class EUMGSequencePlayMode Temp_byte_Variable_6, class UButton* CallFunc_GetButton_Base_Button_3, bool Temp_bool_Variable_6, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_GetIsEnabled_ReturnValue, enum class EUMGSequencePlayMode K2Node_Select_Default_4, bool CallFunc_BooleanAND_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool CallFunc_HasAnyUserFocus_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UButton* CallFunc_GetButton_Base_Button_4, enum class EUMGSequencePlayMode Temp_byte_Variable_7, bool Temp_bool_IsClosed_Variable_5, bool CallFunc_IsValid_ReturnValue_5, bool K2Node_Event_IsDesignTime, bool CallFunc_IsValid_ReturnValue_6, bool Temp_bool_Variable_7, bool CallFunc_IsValid_ReturnValue_7, enum class EUMGSequencePlayMode K2Node_Select_Default_5, enum class EUMGSequencePlayMode Temp_byte_Variable_8, bool CallFunc_IsValid_ReturnValue_8, int32 Temp_int_Variable_5, enum class EUMGSequencePlayMode Temp_byte_Variable_9, bool CallFunc_Greater_FloatFloat_ReturnValue, int32 Temp_int_Variable_6, bool Temp_bool_Variable_8, int32 Temp_int_Variable_7, int32 K2Node_Select_Default_6, bool Temp_bool_Variable_9, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, enum class EUMGSequencePlayMode K2Node_Select_Default_7, int32 Temp_int_Variable_8, bool CallFunc_Greater_FloatFloat_ReturnValue_1, int32 Temp_int_Variable_9, bool Temp_bool_Variable_10, int32 K2Node_Select_Default_8, bool CallFunc_Greater_FloatFloat_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, enum class EUMGSequencePlayMode Temp_byte_Variable_10, enum class EUMGSequencePlayMode Temp_byte_Variable_11, bool CallFunc_Greater_FloatFloat_ReturnValue_3, int32 Temp_int_Variable_10, bool Temp_bool_Variable_11, int32 K2Node_Select_Default_9, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_4, enum class EUMGSequencePlayMode K2Node_Select_Default_10, int32 Temp_int_Variable_11, int32 K2Node_Select_Default_11, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_5, bool CallFunc_IsGamePaused_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_4, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime);
	void OnUnfocused__DelegateSignature();
	void OnFocused__DelegateSignature();
	void OnDisabled__DelegateSignature();
	void OnReleased__DelegateSignature();
	void OnPressed__DelegateSignature();
	void OnUnhovered__DelegateSignature();
	void OnHovered__DelegateSignature();
	void OnClicked__DelegateSignature();
};

}


