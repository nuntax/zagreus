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
// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_GetSliderValueNormalized
struct IBPi_ButtonManager_C_B03_GetSliderValueNormalized_Params
{
public:
	float                                        ValueNormalized;                                   // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_GetSliderValue
struct IBPi_ButtonManager_C_B03_GetSliderValue_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_SetSliderValueNormalized
struct IBPi_ButtonManager_C_B03_SetSliderValueNormalized_Params
{
public:
	float                                        ValueNormalized;                                   // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_SetSliderValue
struct IBPi_ButtonManager_C_B03_SetSliderValue_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BPi_ButtonManager.BPi_ButtonManager_C.B04_SetScale
struct IBPi_ButtonManager_C_B04_SetScale_Params
{
public:
	float                                        Scale;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BPi_ButtonManager.BPi_ButtonManager_C.B04_GetScale_Clicked
struct IBPi_ButtonManager_C_B04_GetScale_Clicked_Params
{
public:
	float                                        Scale;                                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BPi_ButtonManager.BPi_ButtonManager_C.B04_GetScale_Hovered
struct IBPi_ButtonManager_C_B04_GetScale_Hovered_Params
{
public:
	float                                        Scale;                                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BPi_ButtonManager.BPi_ButtonManager_C.B04_GetImage
struct IBPi_ButtonManager_C_B04_GetImage_Params
{
public:
	class UObject*                               Image_Brush;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             Image_Translation;                                 // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BPi_ButtonManager.BPi_ButtonManager_C.B04_SetVignetteColor
struct IBPi_ButtonManager_C_B04_SetVignetteColor_Params
{
public:
	struct FLinearColor                          VignetteColor;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x14 (0x14 - 0x0)
// Function BPi_ButtonManager.BPi_ButtonManager_C.B04_SetImageColor_Disabled
struct IBPi_ButtonManager_C_B04_SetImageColor_Disabled_Params
{
public:
	struct FLinearColor                          ImageColor_Disabled;                               // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Saturation_Disabled;                               // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x14 (0x14 - 0x0)
// Function BPi_ButtonManager.BPi_ButtonManager_C.B04_SetImageColor_Clicked
struct IBPi_ButtonManager_C_B04_SetImageColor_Clicked_Params
{
public:
	struct FLinearColor                          ImageColor_Clicked;                                // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Saturation_Clicked;                                // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x14 (0x14 - 0x0)
// Function BPi_ButtonManager.BPi_ButtonManager_C.B04_SetImageColor_Hovered
struct IBPi_ButtonManager_C_B04_SetImageColor_Hovered_Params
{
public:
	struct FLinearColor                          ImageColor_Hovered;                                // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Saturation_Hovered;                                // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x14 (0x14 - 0x0)
// Function BPi_ButtonManager.BPi_ButtonManager_C.B04_SetImageColor_Normal
struct IBPi_ButtonManager_C_B04_SetImageColor_Normal_Params
{
public:
	struct FLinearColor                          ImageColor_Normal;                                 // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Saturation_Normal;                                 // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BPi_ButtonManager.BPi_ButtonManager_C.B04_SetImage
struct IBPi_ButtonManager_C_B04_SetImage_Params
{
public:
	class UObject*                               ImageBrush;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             ImageTranslation;                                  // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BPi_ButtonManager.BPi_ButtonManager_C.B04_CreateContentWidget
struct IBPi_ButtonManager_C_B04_CreateContentWidget_Params
{
public:
	class UClass*                                ContentWidget;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BPi_ButtonManager.BPi_ButtonManager_C.B04_SetShineFxEnabled
struct IBPi_ButtonManager_C_B04_SetShineFxEnabled_Params
{
public:
	bool                                         bIsEnabled;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x60 (0x60 - 0x0)
// Function BPi_ButtonManager.BPi_ButtonManager_C.B04_SetFrameColor_Current
struct IBPi_ButtonManager_C_B04_SetFrameColor_Current_Params
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
// Function BPi_ButtonManager.BPi_ButtonManager_C.B04_SetFrameColor_Disabled
struct IBPi_ButtonManager_C_B04_SetFrameColor_Disabled_Params
{
public:
	struct FLinearColor                          FrameColor1;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          FrameColor2;                                       // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          FrameColor_Shine;                                  // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x60 (0x60 - 0x0)
// Function BPi_ButtonManager.BPi_ButtonManager_C.B04_SetFrameColor_Clicked
struct IBPi_ButtonManager_C_B04_SetFrameColor_Clicked_Params
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
// Function BPi_ButtonManager.BPi_ButtonManager_C.B04_SetFrameColor_Hovered
struct IBPi_ButtonManager_C_B04_SetFrameColor_Hovered_Params
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
// Function BPi_ButtonManager.BPi_ButtonManager_C.B04_SetFrameColor_Normal
struct IBPi_ButtonManager_C_B04_SetFrameColor_Normal_Params
{
public:
	struct FLinearColor                          FrameColor1;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          FrameColor2;                                       // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          FrameColor_Shine;                                  // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          ShineFxColor_Background;                           // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          ShineFxColor_Small;                                // 0x40(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          ShineFxColor_Big;                                  // 0x50(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_CreateContentWidget
struct IBPi_ButtonManager_C_B03_CreateContentWidget_Params
{
public:
	class UClass*                                ContentWidget;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_SetKeyEscapeKeys
struct IBPi_ButtonManager_C_B03_SetKeyEscapeKeys_Params
{
public:
	enum class ESelectedKey                      Key;                                               // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_D79[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FKey>                          EscapeKeys;                                        // 0x8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// 0x18 (0x18 - 0x0)
// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_GetKeyEscapeKeys
struct IBPi_ButtonManager_C_B03_GetKeyEscapeKeys_Params
{
public:
	enum class ESelectedKey                      Key;                                               // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_D7E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FKey>                          EscapeKeys;                                        // 0x8(0x10)(Parm, OutParm, ZeroConstructor)
};

// 0x2 (0x2 - 0x0)
// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_GetAllowModifierKeys
struct IBPi_ButtonManager_C_B03_GetAllowModifierKeys_Params
{
public:
	enum class ESelectedKey                      Key;                                               // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bAllowModifierKeys;                                // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_SetAllowModifierKeys
struct IBPi_ButtonManager_C_B03_SetAllowModifierKeys_Params
{
public:
	enum class ESelectedKey                      Key;                                               // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bAllowModifierKeys;                                // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_GetAllowGamepadKeys
struct IBPi_ButtonManager_C_B03_GetAllowGamepadKeys_Params
{
public:
	enum class ESelectedKey                      Key;                                               // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bAllowGamepadKeys;                                 // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_SetAllowGamepadKeys
struct IBPi_ButtonManager_C_B03_SetAllowGamepadKeys_Params
{
public:
	enum class ESelectedKey                      Key;                                               // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bAllowGamepadKeys;                                 // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_GetKeySelectionText
struct IBPi_ButtonManager_C_B03_GetKeySelectionText_Params
{
public:
	enum class ESelectedKey                      Key;                                               // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_D90[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  KeySelectionText;                                  // 0x8(0x18)(Parm, OutParm)
};

// 0x20 (0x20 - 0x0)
// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_SetKeySelectionText
struct IBPi_ButtonManager_C_B03_SetKeySelectionText_Params
{
public:
	enum class ESelectedKey                      Key;                                               // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_D9D[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  KeySelectionText;                                  // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x28 (0x28 - 0x0)
// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_GetSelectedKey
struct IBPi_ButtonManager_C_B03_GetSelectedKey_Params
{
public:
	enum class ESelectedKey                      Key;                                               // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_DA3[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputChord                           SelectedKey;                                       // 0x8(0x20)(Parm, OutParm, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_GetKeyEnabled
struct IBPi_ButtonManager_C_B03_GetKeyEnabled_Params
{
public:
	enum class ESelectedKey                      Key;                                               // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bEnabled;                                          // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_SetKeyEnabled
struct IBPi_ButtonManager_C_B03_SetKeyEnabled_Params
{
public:
	enum class ESelectedKey                      Key;                                               // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bEnabled;                                          // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_SetSelectedKey
struct IBPi_ButtonManager_C_B03_SetSelectedKey_Params
{
public:
	enum class ESelectedKey                      Key;                                               // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_DAC[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputChord                           SelectedKey;                                       // 0x8(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_SetStateButtonIconColor_Clicked
struct IBPi_ButtonManager_C_B03_SetStateButtonIconColor_Clicked_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_SetStateButtonIconColor_Hovered
struct IBPi_ButtonManager_C_B03_SetStateButtonIconColor_Hovered_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_SetStateButtonIconColor_Normal
struct IBPi_ButtonManager_C_B03_SetStateButtonIconColor_Normal_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_SetStateButtonIcon
struct IBPi_ButtonManager_C_B03_SetStateButtonIcon_Params
{
public:
	class UObject*                               Icon;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_GetStateByIndex
struct IBPi_ButtonManager_C_B03_GetStateByIndex_Params
{
public:
	int32                                        State;                                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_GetStateByName
struct IBPi_ButtonManager_C_B03_GetStateByName_Params
{
public:
	class FName                                  State;                                             // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_SetStateByIndex
struct IBPi_ButtonManager_C_B03_SetStateByIndex_Params
{
public:
	int32                                        State;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_SetStateByName
struct IBPi_ButtonManager_C_B03_SetStateByName_Params
{
public:
	class FName                                  State;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BPi_ButtonManager.BPi_ButtonManager_C.B02_Create_ContentWidget
struct IBPi_ButtonManager_C_B02_Create_ContentWidget_Params
{
public:
	class UClass*                                ContentWidget;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BPi_ButtonManager.BPi_ButtonManager_C.B02_SetBlurShineColor_Clicked
struct IBPi_ButtonManager_C_B02_SetBlurShineColor_Clicked_Params
{
public:
	struct FLinearColor                          InColor;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BPi_ButtonManager.BPi_ButtonManager_C.B02_SetBlurShineColor_Hovered
struct IBPi_ButtonManager_C_B02_SetBlurShineColor_Hovered_Params
{
public:
	struct FLinearColor                          InColor;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BPi_ButtonManager.BPi_ButtonManager_C.B02_SetDynamicShineColor
struct IBPi_ButtonManager_C_B02_SetDynamicShineColor_Params
{
public:
	struct FLinearColor                          InColor;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BPi_ButtonManager.BPi_ButtonManager_C.B02_SetUseDynamicShine
struct IBPi_ButtonManager_C_B02_SetUseDynamicShine_Params
{
public:
	bool                                         bUseDynamicShine;                                  // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function BPi_ButtonManager.BPi_ButtonManager_C.B02_SetFillColor_Current
struct IBPi_ButtonManager_C_B02_SetFillColor_Current_Params
{
public:
	struct FLinearColor                          FillColor_Current;                                 // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BPi_ButtonManager.BPi_ButtonManager_C.B02_SetFillColor_Disabled
struct IBPi_ButtonManager_C_B02_SetFillColor_Disabled_Params
{
public:
	struct FLinearColor                          FillColor_Disabled;                                // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BPi_ButtonManager.BPi_ButtonManager_C.B02_SetFillColor_Clicked
struct IBPi_ButtonManager_C_B02_SetFillColor_Clicked_Params
{
public:
	struct FLinearColor                          FillColor_Clicked;                                 // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BPi_ButtonManager.BPi_ButtonManager_C.B02_SetFillColor_Hovered
struct IBPi_ButtonManager_C_B02_SetFillColor_Hovered_Params
{
public:
	struct FLinearColor                          FillColor_Hovered;                                 // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BPi_ButtonManager.BPi_ButtonManager_C.B02_SetFillColor_Normal
struct IBPi_ButtonManager_C_B02_SetFillColor_Normal_Params
{
public:
	struct FLinearColor                          FillColor_Normal;                                  // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BPi_ButtonManager.BPi_ButtonManager_C.B02_SetFrameColor_Current
struct IBPi_ButtonManager_C_B02_SetFrameColor_Current_Params
{
public:
	struct FLinearColor                          FrameColor_Current;                                // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BPi_ButtonManager.BPi_ButtonManager_C.B02_SetFrameColor_Disabled
struct IBPi_ButtonManager_C_B02_SetFrameColor_Disabled_Params
{
public:
	struct FLinearColor                          FrameColor_Disabled;                               // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BPi_ButtonManager.BPi_ButtonManager_C.B02_SetFrameColor_Clicked
struct IBPi_ButtonManager_C_B02_SetFrameColor_Clicked_Params
{
public:
	struct FLinearColor                          FrameColor_Clicked;                                // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BPi_ButtonManager.BPi_ButtonManager_C.B02_SetFrameColor_Hovered
struct IBPi_ButtonManager_C_B02_SetFrameColor_Hovered_Params
{
public:
	struct FLinearColor                          FrameColor_Hovered;                                // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BPi_ButtonManager.BPi_ButtonManager_C.B02_SetFrameColor_Normal
struct IBPi_ButtonManager_C_B02_SetFrameColor_Normal_Params
{
public:
	struct FLinearColor                          FrameColor_Normal;                                 // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BPi_ButtonManager.BPi_ButtonManager_C.SetButtonJustification
struct IBPi_ButtonManager_C_SetButtonJustification_Params
{
public:
	enum class EJustification                    EJustification;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BPi_ButtonManager.BPi_ButtonManager_C.GetButtonJustification
struct IBPi_ButtonManager_C_GetButtonJustification_Params
{
public:
	enum class EJustification                    EJustification;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BPi_ButtonManager.BPi_ButtonManager_C.B01_SetColor_ClickedFX_Text
struct IBPi_ButtonManager_C_B01_SetColor_ClickedFX_Text_Params
{
public:
	struct FLinearColor                          Color_ClickedFX_Text;                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BPi_ButtonManager.BPi_ButtonManager_C.B01_SetColor_ClickedFX
struct IBPi_ButtonManager_C_B01_SetColor_ClickedFX_Params
{
public:
	struct FLinearColor                          Color_ClickedFX;                                   // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BPi_ButtonManager.BPi_ButtonManager_C.B01_SetColor_HoveredFX_02
struct IBPi_ButtonManager_C_B01_SetColor_HoveredFX_02_Params
{
public:
	struct FLinearColor                          Color_HoveredFX_02;                                // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BPi_ButtonManager.BPi_ButtonManager_C.B01_SetColor_HoveredFX_01
struct IBPi_ButtonManager_C_B01_SetColor_HoveredFX_01_Params
{
public:
	struct FLinearColor                          Color_HoveredFX_01;                                // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BPi_ButtonManager.BPi_ButtonManager_C.SetButtonSound_OnHovered
struct IBPi_ButtonManager_C_SetButtonSound_OnHovered_Params
{
public:
	class USoundBase*                            HoveredSound;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BPi_ButtonManager.BPi_ButtonManager_C.SetButtonSound_OnClicked
struct IBPi_ButtonManager_C_SetButtonSound_OnClicked_Params
{
public:
	class USoundBase*                            ClickedSound;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BPi_ButtonManager.BPi_ButtonManager_C.SetHintIcon
struct IBPi_ButtonManager_C_SetHintIcon_Params
{
public:
	class UClass*                                HintIcon;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BPi_ButtonManager.BPi_ButtonManager_C.SetUser_Focus
struct IBPi_ButtonManager_C_SetUser_Focus_Params
{
public:
	class APlayerController*                     Player;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BPi_ButtonManager.BPi_ButtonManager_C.GetUserFocus
struct IBPi_ButtonManager_C_GetUserFocus_Params
{
public:
	class APlayerController*                     Player;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasFocus;                                          // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x24 (0x24 - 0x0)
// Function BPi_ButtonManager.BPi_ButtonManager_C.SetButtonFontInfo_Disabled
struct IBPi_ButtonManager_C_SetButtonFontInfo_Disabled_Params
{
public:
	class UFont*                                 Font;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                             Typeface;                                          // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        FontSize;                                          // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Color;                                             // 0x14(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x24 (0x24 - 0x0)
// Function BPi_ButtonManager.BPi_ButtonManager_C.SetButtonFontInfo_Clicked
struct IBPi_ButtonManager_C_SetButtonFontInfo_Clicked_Params
{
public:
	class UFont*                                 Font;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                             Typeface;                                          // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        FontSize;                                          // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Color;                                             // 0x14(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x24 (0x24 - 0x0)
// Function BPi_ButtonManager.BPi_ButtonManager_C.SetButtonFontInfo_Hovered
struct IBPi_ButtonManager_C_SetButtonFontInfo_Hovered_Params
{
public:
	class UFont*                                 Font;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                             Typeface;                                          // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        FontSize;                                          // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Color;                                             // 0x14(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x24 (0x24 - 0x0)
// Function BPi_ButtonManager.BPi_ButtonManager_C.SetButtonFontInfo_Normal
struct IBPi_ButtonManager_C_SetButtonFontInfo_Normal_Params
{
public:
	class UFont*                                 Font;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                             Typeface;                                          // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        FontSize;                                          // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Color;                                             // 0x14(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x24 (0x24 - 0x0)
// Function BPi_ButtonManager.BPi_ButtonManager_C.GetButtonFontInfo_Disabled
struct IBPi_ButtonManager_C_GetButtonFontInfo_Disabled_Params
{
public:
	class UFont*                                 Font;                                              // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                             Typeface;                                          // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        FontSize;                                          // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Color;                                             // 0x14(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x24 (0x24 - 0x0)
// Function BPi_ButtonManager.BPi_ButtonManager_C.GetButtonFontInfo_Clicked
struct IBPi_ButtonManager_C_GetButtonFontInfo_Clicked_Params
{
public:
	class UFont*                                 Font;                                              // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                             Typeface;                                          // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Integer;                                           // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Color;                                             // 0x14(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x24 (0x24 - 0x0)
// Function BPi_ButtonManager.BPi_ButtonManager_C.GetButtonFontInfo_Hovered
struct IBPi_ButtonManager_C_GetButtonFontInfo_Hovered_Params
{
public:
	class UFont*                                 Font;                                              // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                             Typeface;                                          // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        FontSize;                                          // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Color;                                             // 0x14(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x24 (0x24 - 0x0)
// Function BPi_ButtonManager.BPi_ButtonManager_C.GetButtonFontInfo_Normal
struct IBPi_ButtonManager_C_GetButtonFontInfo_Normal_Params
{
public:
	class UFont*                                 Font;                                              // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                             Typeface;                                          // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        FontSize;                                          // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Color;                                             // 0x14(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BPi_ButtonManager.BPi_ButtonManager_C.GetButtonText
struct IBPi_ButtonManager_C_GetButtonText_Params
{
public:
	class FText                                  ButtonText;                                        // 0x0(0x18)(Parm, OutParm)
};

// 0x1 (0x1 - 0x0)
// Function BPi_ButtonManager.BPi_ButtonManager_C.GetButtonEnabled
struct IBPi_ButtonManager_C_GetButtonEnabled_Params
{
public:
	bool                                         bIsEnabled;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BPi_ButtonManager.BPi_ButtonManager_C.SetButtonEnabled
struct IBPi_ButtonManager_C_SetButtonEnabled_Params
{
public:
	bool                                         bIsEnabled;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x24 (0x24 - 0x0)
// Function BPi_ButtonManager.BPi_ButtonManager_C.SetButtonFontInfo_Current
struct IBPi_ButtonManager_C_SetButtonFontInfo_Current_Params
{
public:
	class UFont*                                 Font;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                             Typeface;                                          // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        FontSize;                                          // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Color;                                             // 0x14(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BPi_ButtonManager.BPi_ButtonManager_C.SetButtonText
struct IBPi_ButtonManager_C_SetButtonText_Params
{
public:
	class FText                                  ButtonText;                                        // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

}
}


