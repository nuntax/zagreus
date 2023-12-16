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

// 0x5 (0x5 - 0x0)
// Function WB_Parties.WB_Parties_C.Check_Visibility
struct UWB_Parties_C_Check_Visibility_Params
{
public:
	int32                                        CallFunc_GetChildrenCount_ReturnValue;             // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x48 (0x48 - 0x0)
// Function WB_Parties.WB_Parties_C.OnLeaveCurrentParty
struct UWB_Parties_C_OnLeaveCurrentParty_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_12B6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Response;                                          // 0x8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FPartyError                           Error;                                             // 0x18(0x30)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x78 (0x78 - 0x0)
// Function WB_Parties.WB_Parties_C.OnAcceptPartyInvite
struct UWB_Parties_C_OnAcceptPartyInvite_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_12C4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPartyError                           Error;                                             // 0x8(0x30)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FCurrentParty                         CurrentParty;                                      // 0x38(0x40)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x30 (0x30 - 0x0)
// Function WB_Parties.WB_Parties_C.OnPartyInviteAcceptedWs
struct UWB_Parties_C_OnPartyInviteAcceptedWs_Params
{
public:
	class FString                                PartyId;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                UserId;                                            // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                Username;                                          // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WB_Parties.WB_Parties_C.OnPartyDisbandedWs
struct UWB_Parties_C_OnPartyDisbandedWs_Params
{
public:
	class FString                                PartyId;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x1B0 (0x1B0 - 0x0)
// Function WB_Parties.WB_Parties_C.ExecuteUbergraph_WB_Parties
struct UWB_Parties_C_ExecuteUbergraph_WB_Parties_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_12CC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAGPartySubsystem*                     CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAGPartySubsystem*                     CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAGPartySubsystem*                     CallFunc_GetGameInstanceSubsystem_ReturnValue_2;   // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Success_1;                      // 0x30(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_12CD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_CustomEvent_Response;                       // 0x38(0x10)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	struct FPartyError                           K2Node_CustomEvent_Error_1;                        // 0x48(0x30)(ConstParm)
	bool                                         CallFunc_NotEqual_StrStr_ReturnValue;              // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_12CE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAGPartySubsystem*                     CallFunc_GetGameInstanceSubsystem_ReturnValue_3;   // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_PartyRow_C*                        CallFunc_Create_ReturnValue;                       // 0x90(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAGPartySubsystem*                     CallFunc_GetGameInstanceSubsystem_ReturnValue_4;   // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue;        // 0xA0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAGPartySubsystem*                     CallFunc_GetGameInstanceSubsystem_ReturnValue_5;   // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue_1;            // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_PartyRow_C*                        CallFunc_Create_ReturnValue_1;                     // 0xB8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0xC0(0x10)(ZeroConstructor, NoDestructor)
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue_1;      // 0xD0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0xD8(0x10)(ZeroConstructor, NoDestructor)
	bool                                         K2Node_CustomEvent_Success;                        // 0xE8(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_12CF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPartyError                           K2Node_CustomEvent_Error;                          // 0xF0(0x30)(ConstParm)
	struct FCurrentParty                         K2Node_CustomEvent_CurrentParty;                   // 0x120(0x40)(ConstParm)
	class FString                                K2Node_CustomEvent_PartyId_1;                      // 0x160(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_UserId;                         // 0x170(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_Username;                       // 0x180(0x10)(ZeroConstructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x190(0x10)(ZeroConstructor, NoDestructor)
	class FString                                K2Node_CustomEvent_PartyId;                        // 0x1A0(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

}
}


