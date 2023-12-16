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

// 0x78 (0x78 - 0x0)
// Function WB_PartyInvite.WB_PartyInvite_C.OnAcceptPartyInvite
struct UWB_PartyInvite_C_OnAcceptPartyInvite_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_12B5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPartyError                           Error;                                             // 0x8(0x30)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FCurrentParty                         CurrentParty;                                      // 0x38(0x40)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0xC0 (0xC0 - 0x0)
// Function WB_PartyInvite.WB_PartyInvite_C.ExecuteUbergraph_WB_PartyInvite
struct UWB_PartyInvite_C_ExecuteUbergraph_WB_PartyInvite_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12B9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAGPartySubsystem*                     CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor, NoDestructor)
	class UAGPartySubsystem*                     CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x28(0x18)(None)
	bool                                         K2Node_CustomEvent_Success;                        // 0x40(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_12BB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPartyError                           K2Node_CustomEvent_Error;                          // 0x48(0x30)(ConstParm)
	struct FCurrentParty                         K2Node_CustomEvent_CurrentParty;                   // 0x78(0x40)(ConstParm)
	class UAGPartySubsystem*                     CallFunc_GetGameInstanceSubsystem_ReturnValue_2;   // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


