#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0x4 - 0x0)
// Function WB_Button_Base.WB_Button_Base_C.B03_GetSliderValueNormalized
struct UWB_Button_Base_C_B03_GetSliderValueNormalized_Params
{
public:
	float                                        ValueNormalized;                                   // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WB_Button_Base.WB_Button_Base_C.B03_GetSliderValue
struct UWB_Button_Base_C_B03_GetSliderValue_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function WB_Button_Base.WB_Button_Base_C.B03_GetKeyEscapeKeys
struct UWB_Button_Base_C_B03_GetKeyEscapeKeys_Params
{
public:
	enum class ESelectedKey                      Key;                                               // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_10F2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FKey>                          EscapeKeys;                                        // 0x8(0x10)(Parm, OutParm, ZeroConstructor)
};

// 0x2 (0x2 - 0x0)
// Function WB_Button_Base.WB_Button_Base_C.B03_GetAllowModifierKeys
struct UWB_Button_Base_C_B03_GetAllowModifierKeys_Params
{
public:
	enum class ESelectedKey                      Key;                                               // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bAllowModifierKeys;                                // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function WB_Button_Base.WB_Button_Base_C.B03_GetAllowGamepadKeys
struct UWB_Button_Base_C_B03_GetAllowGamepadKeys_Params
{
public:
	enum class ESelectedKey                      Key;                                               // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bAllowGamepadKeys;                                 // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function WB_Button_Base.WB_Button_Base_C.B03_GetKeySelectionText
struct UWB_Button_Base_C_B03_GetKeySelectionText_Params
{
public:
	enum class ESelectedKey                      Key;                                               // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1100[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  KeySelectionText;                                  // 0x8(0x18)(Parm, OutParm)
};

// 0x28 (0x28 - 0x0)
// Function WB_Button_Base.WB_Button_Base_C.B03_GetSelectedKey
struct UWB_Button_Base_C_B03_GetSelectedKey_Params
{
public:
	enum class ESelectedKey                      Key;                                               // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1106[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputChord                           SelectedKey;                                       // 0x8(0x20)(Parm, OutParm, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function WB_Button_Base.WB_Button_Base_C.B03_GetKeyEnabled
struct UWB_Button_Base_C_B03_GetKeyEnabled_Params
{
public:
	enum class ESelectedKey                      Key;                                               // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bEnabled;                                          // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function WB_Button_Base.WB_Button_Base_C.B03_GetStateByIndex
struct UWB_Button_Base_C_B03_GetStateByIndex_Params
{
public:
	int32                                        State;                                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WB_Button_Base.WB_Button_Base_C.B03_GetStateByName
struct UWB_Button_Base_C_B03_GetStateByName_Params
{
public:
	class FName                                  State;                                             // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WB_Button_Base.WB_Button_Base_C.B04_GetScale_Clicked
struct UWB_Button_Base_C_B04_GetScale_Clicked_Params
{
public:
	float                                        Scale;                                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WB_Button_Base.WB_Button_Base_C.B04_GetScale_Hovered
struct UWB_Button_Base_C_B04_GetScale_Hovered_Params
{
public:
	float                                        Scale;                                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WB_Button_Base.WB_Button_Base_C.B04_GetImage
struct UWB_Button_Base_C_B04_GetImage_Params
{
public:
	class UObject*                               Image_Brush;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             Image_Translation;                                 // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WB_Button_Base.WB_Button_Base_C.GetButtonJustification
struct UWB_Button_Base_C_GetButtonJustification_Params
{
public:
	enum class EJustification                    EJustification;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function WB_Button_Base.WB_Button_Base_C.GetUserFocus
struct UWB_Button_Base_C_GetUserFocus_Params
{
public:
	class APlayerController*                     Player;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasFocus;                                          // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x24 (0x24 - 0x0)
// Function WB_Button_Base.WB_Button_Base_C.GetButtonFontInfo_Clicked
struct UWB_Button_Base_C_GetButtonFontInfo_Clicked_Params
{
public:
	class UFont*                                 Font;                                              // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                             Typeface;                                          // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Integer;                                           // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Color;                                             // 0x14(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x24 (0x24 - 0x0)
// Function WB_Button_Base.WB_Button_Base_C.GetButtonFontInfo_Disabled
struct UWB_Button_Base_C_GetButtonFontInfo_Disabled_Params
{
public:
	class UFont*                                 Font;                                              // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                             Typeface;                                          // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        FontSize;                                          // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Color;                                             // 0x14(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x24 (0x24 - 0x0)
// Function WB_Button_Base.WB_Button_Base_C.GetButtonFontInfo_Hovered
struct UWB_Button_Base_C_GetButtonFontInfo_Hovered_Params
{
public:
	class UFont*                                 Font;                                              // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                             Typeface;                                          // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        FontSize;                                          // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Color;                                             // 0x14(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x24 (0x24 - 0x0)
// Function WB_Button_Base.WB_Button_Base_C.GetButtonFontInfo_Normal
struct UWB_Button_Base_C_GetButtonFontInfo_Normal_Params
{
public:
	class UFont*                                 Font;                                              // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                             Typeface;                                          // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        FontSize;                                          // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Color;                                             // 0x14(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function WB_Button_Base.WB_Button_Base_C.GetButtonText
struct UWB_Button_Base_C_GetButtonText_Params
{
public:
	class FText                                  ButtonText;                                        // 0x0(0x18)(Parm, OutParm)
};

// 0x1 (0x1 - 0x0)
// Function WB_Button_Base.WB_Button_Base_C.GetButtonEnabled
struct UWB_Button_Base_C_GetButtonEnabled_Params
{
public:
	bool                                         bIsEnabled;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function WB_Button_Base.WB_Button_Base_C.SetButtonText
struct UWB_Button_Base_C_SetButtonText_Params
{
public:
	class FText                                  ButtonText;                                        // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x24 (0x24 - 0x0)
// Function WB_Button_Base.WB_Button_Base_C.SetButtonFontInfo_Current
struct UWB_Button_Base_C_SetButtonFontInfo_Current_Params
{
public:
	class UFont*                                 Font;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                             Typeface;                                          // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        FontSize;                                          // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Color;                                             // 0x14(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WB_Button_Base.WB_Button_Base_C.SetButtonEnabled
struct UWB_Button_Base_C_SetButtonEnabled_Params
{
public:
	bool                                         bIsEnabled;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x24 (0x24 - 0x0)
// Function WB_Button_Base.WB_Button_Base_C.SetButtonFontInfo_Normal
struct UWB_Button_Base_C_SetButtonFontInfo_Normal_Params
{
public:
	class UFont*                                 Font;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                             Typeface;                                          // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        FontSize;                                          // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Color;                                             // 0x14(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x24 (0x24 - 0x0)
// Function WB_Button_Base.WB_Button_Base_C.SetButtonFontInfo_Hovered
struct UWB_Button_Base_C_SetButtonFontInfo_Hovered_Params
{
public:
	class UFont*                                 Font;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                             Typeface;                                          // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        FontSize;                                          // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Color;                                             // 0x14(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x24 (0x24 - 0x0)
// Function WB_Button_Base.WB_Button_Base_C.SetButtonFontInfo_Clicked
struct UWB_Button_Base_C_SetButtonFontInfo_Clicked_Params
{
public:
	class UFont*                                 Font;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                             Typeface;                                          // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        FontSize;                                          // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Color;                                             // 0x14(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x24 (0x24 - 0x0)
// Function WB_Button_Base.WB_Button_Base_C.SetButtonFontInfo_Disabled
struct UWB_Button_Base_C_SetButtonFontInfo_Disabled_Params
{
public:
	class UFont*                                 Font;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                             Typeface;                                          // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        FontSize;                                          // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Color;                                             // 0x14(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WB_Button_Base.WB_Button_Base_C.SetUser_Focus
struct UWB_Button_Base_C_SetUser_Focus_Params
{
public:
	class APlayerController*                     Player;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WB_Button_Base.WB_Button_Base_C.SetHintIcon
struct UWB_Button_Base_C_SetHintIcon_Params
{
public:
	class UClass*                                HintIcon;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WB_Button_Base.WB_Button_Base_C.SetButtonSound_OnClicked
struct UWB_Button_Base_C_SetButtonSound_OnClicked_Params
{
public:
	class USoundBase*                            ClickedSound;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WB_Button_Base.WB_Button_Base_C.SetButtonSound_OnHovered
struct UWB_Button_Base_C_SetButtonSound_OnHovered_Params
{
public:
	class USoundBase*                            HoveredSound;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WB_Button_Base.WB_Button_Base_C.B01_SetColor_HoveredFX_01
struct UWB_Button_Base_C_B01_SetColor_HoveredFX_01_Params
{
public:
	struct FLinearColor                          Color_HoveredFX_01;                                // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WB_Button_Base.WB_Button_Base_C.B01_SetColor_HoveredFX_02
struct UWB_Button_Base_C_B01_SetColor_HoveredFX_02_Params
{
public:
	struct FLinearColor                          Color_HoveredFX_02;                                // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WB_Button_Base.WB_Button_Base_C.B01_SetColor_ClickedFX
struct UWB_Button_Base_C_B01_SetColor_ClickedFX_Params
{
public:
	struct FLinearColor                          Color_ClickedFX;                                   // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WB_Button_Base.WB_Button_Base_C.B01_SetColor_ClickedFX_Text
struct UWB_Button_Base_C_B01_SetColor_ClickedFX_Text_Params
{
public:
	struct FLinearColor                          Color_ClickedFX_Text;                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WB_Button_Base.WB_Button_Base_C.SetButtonJustification
struct UWB_Button_Base_C_SetButtonJustification_Params
{
public:
	enum class EJustification                    EJustification;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WB_Button_Base.WB_Button_Base_C.B02_SetFrameColor_Normal
struct UWB_Button_Base_C_B02_SetFrameColor_Normal_Params
{
public:
	struct FLinearColor                          FrameColor_Normal;                                 // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WB_Button_Base.WB_Button_Base_C.B02_SetFrameColor_Hovered
struct UWB_Button_Base_C_B02_SetFrameColor_Hovered_Params
{
public:
	struct FLinearColor                          FrameColor_Hovered;                                // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WB_Button_Base.WB_Button_Base_C.B02_SetFrameColor_Clicked
struct UWB_Button_Base_C_B02_SetFrameColor_Clicked_Params
{
public:
	struct FLinearColor                          FrameColor_Clicked;                                // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WB_Button_Base.WB_Button_Base_C.B02_SetFrameColor_Disabled
struct UWB_Button_Base_C_B02_SetFrameColor_Disabled_Params
{
public:
	struct FLinearColor                          FrameColor_Disabled;                               // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WB_Button_Base.WB_Button_Base_C.B02_SetFrameColor_Current
struct UWB_Button_Base_C_B02_SetFrameColor_Current_Params
{
public:
	struct FLinearColor                          FrameColor_Current;                                // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WB_Button_Base.WB_Button_Base_C.B02_SetFillColor_Normal
struct UWB_Button_Base_C_B02_SetFillColor_Normal_Params
{
public:
	struct FLinearColor                          FillColor_Normal;                                  // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WB_Button_Base.WB_Button_Base_C.B02_SetFillColor_Hovered
struct UWB_Button_Base_C_B02_SetFillColor_Hovered_Params
{
public:
	struct FLinearColor                          FillColor_Hovered;                                 // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WB_Button_Base.WB_Button_Base_C.B02_SetFillColor_Clicked
struct UWB_Button_Base_C_B02_SetFillColor_Clicked_Params
{
public:
	struct FLinearColor                          FillColor_Clicked;                                 // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WB_Button_Base.WB_Button_Base_C.B02_SetFillColor_Disabled
struct UWB_Button_Base_C_B02_SetFillColor_Disabled_Params
{
public:
	struct FLinearColor                          FillColor_Disabled;                                // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WB_Button_Base.WB_Button_Base_C.B02_SetFillColor_Current
struct UWB_Button_Base_C_B02_SetFillColor_Current_Params
{
public:
	struct FLinearColor                          FillColor_Current;                                 // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WB_Button_Base.WB_Button_Base_C.B02_SetUseDynamicShine
struct UWB_Button_Base_C_B02_SetUseDynamicShine_Params
{
public:
	bool                                         bUseDynamicShine;                                  // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function WB_Button_Base.WB_Button_Base_C.B02_SetDynamicShineColor
struct UWB_Button_Base_C_B02_SetDynamicShineColor_Params
{
public:
	struct FLinearColor                          InColor;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WB_Button_Base.WB_Button_Base_C.B02_SetBlurShineColor_Hovered
struct UWB_Button_Base_C_B02_SetBlurShineColor_Hovered_Params
{
public:
	struct FLinearColor                          InColor;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WB_Button_Base.WB_Button_Base_C.B02_SetBlurShineColor_Clicked
struct UWB_Button_Base_C_B02_SetBlurShineColor_Clicked_Params
{
public:
	struct FLinearColor                          InColor;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WB_Button_Base.WB_Button_Base_C.B02_Create_ContentWidget
struct UWB_Button_Base_C_B02_Create_ContentWidget_Params
{
public:
	class UClass*                                ContentWidget;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WB_Button_Base.WB_Button_Base_C.B03_SetStateByName
struct UWB_Button_Base_C_B03_SetStateByName_Params
{
public:
	class FName                                  State;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WB_Button_Base.WB_Button_Base_C.B03_SetStateByIndex
struct UWB_Button_Base_C_B03_SetStateByIndex_Params
{
public:
	int32                                        State;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WB_Button_Base.WB_Button_Base_C.B03_SetStateButtonIcon
struct UWB_Button_Base_C_B03_SetStateButtonIcon_Params
{
public:
	class UObject*                               Icon;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WB_Button_Base.WB_Button_Base_C.B03_SetStateButtonIconColor_Normal
struct UWB_Button_Base_C_B03_SetStateButtonIconColor_Normal_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WB_Button_Base.WB_Button_Base_C.B03_SetStateButtonIconColor_Hovered
struct UWB_Button_Base_C_B03_SetStateButtonIconColor_Hovered_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WB_Button_Base.WB_Button_Base_C.B03_SetStateButtonIconColor_Clicked
struct UWB_Button_Base_C_B03_SetStateButtonIconColor_Clicked_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function WB_Button_Base.WB_Button_Base_C.B03_SetSelectedKey
struct UWB_Button_Base_C_B03_SetSelectedKey_Params
{
public:
	enum class ESelectedKey                      Key;                                               // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1174[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputChord                           SelectedKey;                                       // 0x8(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function WB_Button_Base.WB_Button_Base_C.B03_SetKeyEnabled
struct UWB_Button_Base_C_B03_SetKeyEnabled_Params
{
public:
	enum class ESelectedKey                      Key;                                               // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bEnabled;                                          // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function WB_Button_Base.WB_Button_Base_C.B03_SetKeySelectionText
struct UWB_Button_Base_C_B03_SetKeySelectionText_Params
{
public:
	enum class ESelectedKey                      Key;                                               // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1176[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  KeySelectionText;                                  // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x2 (0x2 - 0x0)
// Function WB_Button_Base.WB_Button_Base_C.B03_SetAllowGamepadKeys
struct UWB_Button_Base_C_B03_SetAllowGamepadKeys_Params
{
public:
	enum class ESelectedKey                      Key;                                               // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bAllowGamepadKeys;                                 // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function WB_Button_Base.WB_Button_Base_C.B03_SetAllowModifierKeys
struct UWB_Button_Base_C_B03_SetAllowModifierKeys_Params
{
public:
	enum class ESelectedKey                      Key;                                               // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bAllowModifierKeys;                                // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function WB_Button_Base.WB_Button_Base_C.B03_SetKeyEscapeKeys
struct UWB_Button_Base_C_B03_SetKeyEscapeKeys_Params
{
public:
	enum class ESelectedKey                      Key;                                               // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_117F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FKey>                          EscapeKeys;                                        // 0x8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// 0x8 (0x8 - 0x0)
// Function WB_Button_Base.WB_Button_Base_C.B03_CreateContentWidget
struct UWB_Button_Base_C_B03_CreateContentWidget_Params
{
public:
	class UClass*                                ContentWidget;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x60 (0x60 - 0x0)
// Function WB_Button_Base.WB_Button_Base_C.B04_SetFrameColor_Normal
struct UWB_Button_Base_C_B04_SetFrameColor_Normal_Params
{
public:
	struct FLinearColor                          FrameColor1;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          FrameColor2;                                       // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          FrameColor_Shine;                                  // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          ShineFxColor_Background;                           // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          ShineFxColor_Small;                                // 0x40(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          ShineFxColor_Big;                                  // 0x50(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x60 (0x60 - 0x0)
// Function WB_Button_Base.WB_Button_Base_C.B04_SetFrameColor_Hovered
struct UWB_Button_Base_C_B04_SetFrameColor_Hovered_Params
{
public:
	struct FLinearColor                          FrameColor1;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          FrameColor2;                                       // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          FrameColor_Shine;                                  // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          ShineFxColor_Background;                           // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          ShineFxColor_Small;                                // 0x40(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          ShineFxColor_Big;                                  // 0x50(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x60 (0x60 - 0x0)
// Function WB_Button_Base.WB_Button_Base_C.B04_SetFrameColor_Clicked
struct UWB_Button_Base_C_B04_SetFrameColor_Clicked_Params
{
public:
	struct FLinearColor                          FrameColor1;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          FrameColor2;                                       // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          FrameColor_Shine;                                  // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          ShineFxColor_Background;                           // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          ShineFxColor_Small;                                // 0x40(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          ShineFxColor_Big;                                  // 0x50(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function WB_Button_Base.WB_Button_Base_C.B04_SetFrameColor_Disabled
struct UWB_Button_Base_C_B04_SetFrameColor_Disabled_Params
{
public:
	struct FLinearColor                          FrameColor1;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          FrameColor2;                                       // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          FrameColor_Shine;                                  // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x60 (0x60 - 0x0)
// Function WB_Button_Base.WB_Button_Base_C.B04_SetFrameColor_Current
struct UWB_Button_Base_C_B04_SetFrameColor_Current_Params
{
public:
	struct FLinearColor                          FrameColor1;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          FrameColor2;                                       // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          FrameColor_Shine;                                  // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          ShineFxColor_Background;                           // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          ShineFxColor_Small;                                // 0x40(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          ShineFxColor_Big;                                  // 0x50(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WB_Button_Base.WB_Button_Base_C.B04_SetShineFxEnabled
struct UWB_Button_Base_C_B04_SetShineFxEnabled_Params
{
public:
	bool                                         bIsEnabled;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function WB_Button_Base.WB_Button_Base_C.B04_CreateContentWidget
struct UWB_Button_Base_C_B04_CreateContentWidget_Params
{
public:
	class UClass*                                ContentWidget;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WB_Button_Base.WB_Button_Base_C.B04_SetImage
struct UWB_Button_Base_C_B04_SetImage_Params
{
public:
	class UObject*                               ImageBrush;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             ImageTranslation;                                  // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x14 (0x14 - 0x0)
// Function WB_Button_Base.WB_Button_Base_C.B04_SetImageColor_Normal
struct UWB_Button_Base_C_B04_SetImageColor_Normal_Params
{
public:
	struct FLinearColor                          ImageColor_Normal;                                 // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Saturation_Normal;                                 // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x14 (0x14 - 0x0)
// Function WB_Button_Base.WB_Button_Base_C.B04_SetImageColor_Hovered
struct UWB_Button_Base_C_B04_SetImageColor_Hovered_Params
{
public:
	struct FLinearColor                          ImageColor_Hovered;                                // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Saturation_Hovered;                                // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x14 (0x14 - 0x0)
// Function WB_Button_Base.WB_Button_Base_C.B04_SetImageColor_Clicked
struct UWB_Button_Base_C_B04_SetImageColor_Clicked_Params
{
public:
	struct FLinearColor                          ImageColor_Clicked;                                // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Saturation_Clicked;                                // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x14 (0x14 - 0x0)
// Function WB_Button_Base.WB_Button_Base_C.B04_SetImageColor_Disabled
struct UWB_Button_Base_C_B04_SetImageColor_Disabled_Params
{
public:
	struct FLinearColor                          ImageColor_Disabled;                               // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Saturation_Disabled;                               // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WB_Button_Base.WB_Button_Base_C.B04_SetVignetteColor
struct UWB_Button_Base_C_B04_SetVignetteColor_Params
{
public:
	struct FLinearColor                          VignetteColor;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WB_Button_Base.WB_Button_Base_C.B04_SetScale
struct UWB_Button_Base_C_B04_SetScale_Params
{
public:
	float                                        Scale;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WB_Button_Base.WB_Button_Base_C.B03_SetSliderValue
struct UWB_Button_Base_C_B03_SetSliderValue_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WB_Button_Base.WB_Button_Base_C.B03_SetSliderValueNormalized
struct UWB_Button_Base_C_B03_SetSliderValueNormalized_Params
{
public:
	float                                        ValueNormalized;                                   // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x510 (0x510 - 0x0)
// Function WB_Button_Base.WB_Button_Base_C.ExecuteUbergraph_WB_Button_Base
struct UWB_Button_Base_C_ExecuteUbergraph_WB_Button_Base_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_ValueNormalized;                      // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_Event_ButtonText;                           // 0x8(0x18)(None)
	class UFont*                                 K2Node_Event_Font_4;                               // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                             K2Node_Event_TypeFace_4;                           // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_FontSize_4;                           // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Event_Color_7;                              // 0x34(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bIsEnabled_1;                         // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_11B6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFont*                                 K2Node_Event_Font_3;                               // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                             K2Node_Event_TypeFace_3;                           // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_FontSize_3;                           // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Event_Color_6;                              // 0x5C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_11B7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFont*                                 K2Node_Event_Font_2;                               // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                             K2Node_Event_TypeFace_2;                           // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_FontSize_2;                           // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Event_Color_5;                              // 0x84(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_11B8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFont*                                 K2Node_Event_Font_1;                               // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                             K2Node_Event_TypeFace_1;                           // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_FontSize_1;                           // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Event_Color_4;                              // 0xAC(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_11B9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFont*                                 K2Node_Event_Font;                                 // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                             K2Node_Event_TypeFace;                             // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_FontSize;                             // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Event_Color_3;                              // 0xD4(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_11BA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     K2Node_Event_Player;                               // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                K2Node_Event_HintIcon;                             // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            K2Node_Event_ClickedSound;                         // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            K2Node_Event_HoveredSound;                         // 0x100(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Event_Color_HoveredFX_01;                   // 0x108(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Event_Color_HoveredFX_02;                   // 0x118(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Event_Color_ClickedFX;                      // 0x128(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Event_Color_ClickedFX_Text;                 // 0x138(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EJustification                    K2Node_Event_EJustification;                       // 0x148(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_11BC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          K2Node_Event_FrameColor_Normal;                    // 0x14C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Event_FrameColor_Hovered;                   // 0x15C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Event_FrameColor_Clicked;                   // 0x16C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Event_FrameColor_Disabled;                  // 0x17C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Event_FrameColor_Current;                   // 0x18C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Event_FillColor_Normal;                     // 0x19C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Event_FillColor_Hovered;                    // 0x1AC(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Event_FillColor_Clicked;                    // 0x1BC(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Event_FillColor_Disabled;                   // 0x1CC(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Event_FillColor_Current;                    // 0x1DC(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bUseDynamicShine;                     // 0x1EC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_11BD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          K2Node_Event_InColor_2;                            // 0x1F0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Event_InColor_1;                            // 0x200(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Event_InColor;                              // 0x210(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                K2Node_Event_ContentWidget_2;                      // 0x220(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_Event_State_1;                              // 0x228(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_State;                                // 0x230(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_11BE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               K2Node_Event_Icon;                                 // 0x238(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Event_Color_2;                              // 0x240(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Event_Color_1;                              // 0x250(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Event_Color;                                // 0x260(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESelectedKey                      K2Node_Event_Key_5;                                // 0x270(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_11C0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputChord                           K2Node_Event_SelectedKey;                          // 0x278(0x20)(HasGetValueTypeHash)
	enum class ESelectedKey                      K2Node_Event_Key_4;                                // 0x298(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bEnabled;                             // 0x299(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESelectedKey                      K2Node_Event_Key_3;                                // 0x29A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_11C1[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Event_KeySelectionText;                     // 0x2A0(0x18)(None)
	enum class ESelectedKey                      K2Node_Event_Key_2;                                // 0x2B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bAllowGamepadKeys;                    // 0x2B9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESelectedKey                      K2Node_Event_Key_1;                                // 0x2BA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bAllowModifierKeys;                   // 0x2BB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESelectedKey                      K2Node_Event_Key;                                  // 0x2BC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_11C2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FKey>                          K2Node_Event_EscapeKeys;                           // 0x2C0(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	class UClass*                                K2Node_Event_ContentWidget_1;                      // 0x2D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Event_FrameColor1_4;                        // 0x2D8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Event_FrameColor2_4;                        // 0x2E8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Event_FrameColor_Shine_4;                   // 0x2F8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Event_ShineFxColor_Background_3;            // 0x308(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Event_ShineFxColor_Small_3;                 // 0x318(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Event_ShineFxColor_Big_3;                   // 0x328(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Event_FrameColor1_3;                        // 0x338(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Event_FrameColor2_3;                        // 0x348(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Event_FrameColor_Shine_3;                   // 0x358(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Event_ShineFxColor_Background_2;            // 0x368(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Event_ShineFxColor_Small_2;                 // 0x378(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Event_ShineFxColor_Big_2;                   // 0x388(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Event_FrameColor1_2;                        // 0x398(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Event_FrameColor2_2;                        // 0x3A8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Event_FrameColor_Shine_2;                   // 0x3B8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Event_ShineFxColor_Background_1;            // 0x3C8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Event_ShineFxColor_Small_1;                 // 0x3D8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Event_ShineFxColor_Big_1;                   // 0x3E8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Event_FrameColor1_1;                        // 0x3F8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Event_FrameColor2_1;                        // 0x408(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Event_FrameColor_Shine_1;                   // 0x418(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Event_FrameColor1;                          // 0x428(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Event_FrameColor2;                          // 0x438(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Event_FrameColor_Shine;                     // 0x448(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Event_ShineFxColor_Background;              // 0x458(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Event_ShineFxColor_Small;                   // 0x468(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Event_ShineFxColor_Big;                     // 0x478(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bIsEnabled;                           // 0x488(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_11C5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                K2Node_Event_ContentWidget;                        // 0x490(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               K2Node_Event_ImageBrush;                           // 0x498(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             K2Node_Event_ImageTranslation;                     // 0x4A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Event_ImageColor_Normal;                    // 0x4A8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_Saturation_Normal;                    // 0x4B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Event_ImageColor_Hovered;                   // 0x4BC(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_Saturation_Hovered;                   // 0x4CC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Event_ImageColor_Clicked;                   // 0x4D0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_Saturation_Clicked;                   // 0x4E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Event_ImageColor_Disabled;                  // 0x4E4(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_Saturation_Disabled;                  // 0x4F4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Event_VignetteColor;                        // 0x4F8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_Scale;                                // 0x508(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_Value;                                // 0x50C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


