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

// 0xF8 (0xF8 - 0x0)
// Function KillFeedWindow.KillFeedWindow_C.SetTextToSend
struct UKillFeedWindow_C_SetTextToSend_Params
{
public:
	bool                                         bTeam;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_14AA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Killer;                                            // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  Dead;                                              // 0x20(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  TexToSend;                                         // 0x38(0x18)(Parm, OutParm)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x50(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x90(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0xD0(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0xE0(0x18)(None)
};

// 0x32 (0x32 - 0x0)
// Function KillFeedWindow.KillFeedWindow_C.UpdateKillFeed
struct UKillFeedWindow_C_UpdateKillFeed_Params
{
public:
	class FText                                  Killer;                                            // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  Victim;                                            // 0x18(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         bKillerIsRedTeam;                                  // 0x30(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bVictimIsRedTeam;                                  // 0x31(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x58 (0x58 - 0x0)
// Function KillFeedWindow.KillFeedWindow_C.ExecuteUbergraph_KillFeedWindow
struct UKillFeedWindow_C_ExecuteUbergraph_KillFeedWindow_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_14B5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_CustomEvent_Killer;                         // 0x8(0x18)(ConstParm)
	class FText                                  K2Node_CustomEvent_Victim;                         // 0x20(0x18)(ConstParm)
	bool                                         K2Node_CustomEvent_bKillerIsRedTeam;               // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_bVictimIsRedTeam;               // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_14B6[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UKillFeedText_C*                       CallFunc_Create_ReturnValue;                       // 0x48(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x50(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


