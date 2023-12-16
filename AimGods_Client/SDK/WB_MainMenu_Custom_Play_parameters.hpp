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

// 0x2E0 (0x2E0 - 0x0)
// Function WB_MainMenu_Custom_Play.WB_MainMenu_Custom_Play_C.Btn_Change_Status
struct UWB_MainMenu_Custom_Play_C_Btn_Change_Status_Params
{
public:
	bool                                         Leader;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsReady_;                                          // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         AllPlayersReady_;                                  // 0x2(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMatchmakingStatus                CurrentStatus;                                     // 0x3(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_10CD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x8(0x28)(None)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_10CE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateFontInfo                        K2Node_MakeStruct_SlateFontInfo;                   // 0x38(0x50)(HasGetValueTypeHash)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_1;                    // 0x88(0x28)(None)
	struct FSlateFontInfo                        K2Node_MakeStruct_SlateFontInfo_1;                 // 0xB0(0x50)(HasGetValueTypeHash)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_2;                    // 0x100(0x28)(None)
	struct FSlateFontInfo                        K2Node_MakeStruct_SlateFontInfo_2;                 // 0x128(0x50)(HasGetValueTypeHash)
	struct FSlateFontInfo                        K2Node_MakeStruct_SlateFontInfo_3;                 // 0x178(0x50)(HasGetValueTypeHash)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_3;                    // 0x1C8(0x28)(None)
	struct FSlateFontInfo                        K2Node_MakeStruct_SlateFontInfo_4;                 // 0x1F0(0x50)(HasGetValueTypeHash)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_4;                    // 0x240(0x28)(None)
	struct FSlateFontInfo                        K2Node_MakeStruct_SlateFontInfo_5;                 // 0x268(0x50)(HasGetValueTypeHash)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_5;                    // 0x2B8(0x28)(None)
};

// 0x1 (0x1 - 0x0)
// Function WB_MainMenu_Custom_Play.WB_MainMenu_Custom_Play_C.ChangeOfStatus
struct UWB_MainMenu_Custom_Play_C_ChangeOfStatus_Params
{
public:
	enum class EMatchmakingStatus                Status;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function WB_MainMenu_Custom_Play.WB_MainMenu_Custom_Play_C.ExecuteUbergraph_WB_MainMenu_Custom_Play
struct UWB_MainMenu_Custom_Play_C_ExecuteUbergraph_WB_MainMenu_Custom_Play_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMatchmakingStatus                K2Node_CustomEvent_Status;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_10E8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationReverse_ReturnValue;         // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue_1;       // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAGCustomGameSubsystem*                CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x28(0x10)(ZeroConstructor, NoDestructor)
};

}
}


