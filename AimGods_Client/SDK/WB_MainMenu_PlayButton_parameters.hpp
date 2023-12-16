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

// 0x11 (0x11 - 0x0)
// Function WB_MainMenu_PlayButton.WB_MainMenu_PlayButton_C.PartnerIsOutOfGame
struct UWB_MainMenu_PlayButton_C_PartnerIsOutOfGame_Params
{
public:
	bool                                         bPartnerIsOutOfGame;                               // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_125F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAGPartySubsystem*                     CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_BoolBool_ReturnValue;          // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x379 (0x379 - 0x0)
// Function WB_MainMenu_PlayButton.WB_MainMenu_PlayButton_C.Btn_Change_Status
struct UWB_MainMenu_PlayButton_C_Btn_Change_Status_Params
{
public:
	enum class EMatchmakingStatus                CurrentStatus;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsInParty;                                        // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bIsPartyLeader;                                    // 0x2(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_126A[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x8(0x28)(None)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_2;                    // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_126B[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateFontInfo                        K2Node_MakeStruct_SlateFontInfo;                   // 0x38(0x50)(HasGetValueTypeHash)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_1;                    // 0x88(0x28)(None)
	struct FSlateFontInfo                        K2Node_MakeStruct_SlateFontInfo_1;                 // 0xB0(0x50)(HasGetValueTypeHash)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_2;                    // 0x100(0x28)(None)
	struct FSlateFontInfo                        K2Node_MakeStruct_SlateFontInfo_2;                 // 0x128(0x50)(HasGetValueTypeHash)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_3;                    // 0x178(0x28)(None)
	struct FSlateFontInfo                        K2Node_MakeStruct_SlateFontInfo_3;                 // 0x1A0(0x50)(HasGetValueTypeHash)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_4;                    // 0x1F0(0x28)(None)
	struct FSlateFontInfo                        K2Node_MakeStruct_SlateFontInfo_4;                 // 0x218(0x50)(HasGetValueTypeHash)
	struct FSlateFontInfo                        K2Node_MakeStruct_SlateFontInfo_5;                 // 0x268(0x50)(HasGetValueTypeHash)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_5;                    // 0x2B8(0x28)(None)
	bool                                         CallFunc_PartnerIsOutOfGame_bPartnerIsOutOfGame;   // 0x2E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_126C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateFontInfo                        K2Node_MakeStruct_SlateFontInfo_6;                 // 0x2E8(0x50)(HasGetValueTypeHash)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_6;                    // 0x338(0x28)(None)
	class UAGPartySubsystem*                     CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x360(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInParty_ReturnValue;                    // 0x368(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_126D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAGPartySubsystem*                     CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0x370(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsPartyLeader_ReturnValue;                // 0x378(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function WB_MainMenu_PlayButton.WB_MainMenu_PlayButton_C.ChangeOfStatus
struct UWB_MainMenu_PlayButton_C_ChangeOfStatus_Params
{
public:
	enum class EMatchmakingStatus                Status;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function WB_MainMenu_PlayButton.WB_MainMenu_PlayButton_C.OnPartyMemberInMatchStatusChangedWs
struct UWB_MainMenu_PlayButton_C_OnPartyMemberInMatchStatusChangedWs_Params
{
public:
	class FString                                UserId;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                         bIsInGame;                                         // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x70 (0x70 - 0x0)
// Function WB_MainMenu_PlayButton.WB_MainMenu_PlayButton_C.ExecuteUbergraph_WB_MainMenu_PlayButton
struct UWB_MainMenu_PlayButton_C_ExecuteUbergraph_WB_MainMenu_PlayButton_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMatchmakingStatus                K2Node_CustomEvent_Status;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1274[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationReverse_ReturnValue;         // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue_1;       // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAGPartySubsystem*                     CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_UserId;                         // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bIsInGame;                      // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsPartyLeader_ReturnValue;                // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsInParty_ReturnValue;                    // 0x3A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1275[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x3C(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_1277[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAGPartySubsystem*                     CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAGPartySubsystem*                     CallFunc_GetGameInstanceSubsystem_ReturnValue_2;   // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInParty_ReturnValue_1;                  // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsPartyLeader_ReturnValue_1;              // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsInParty_ReturnValue_2;                  // 0x62(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1278[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAGPartySubsystem*                     CallFunc_GetGameInstanceSubsystem_ReturnValue_3;   // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


