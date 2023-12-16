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

// 0x10 (0x10 - 0x0)
// Function WB_Incoming_CustomGames_Invite.WB_Incoming_CustomGames_Invite_C.OnCustomGameInviteCancelledWs
struct UWB_Incoming_CustomGames_Invite_C_OnCustomGameInviteCancelledWs_Params
{
public:
	class FString                                InviteId;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x89 (0x89 - 0x0)
// Function WB_Incoming_CustomGames_Invite.WB_Incoming_CustomGames_Invite_C.ExecuteUbergraph_WB_Incoming_CustomGames_Invite
struct UWB_Incoming_CustomGames_Invite_C_ExecuteUbergraph_WB_Incoming_CustomGames_Invite_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12A8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAGCustomGameSubsystem*                CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAGCustomGameSubsystem*                CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x18(0x18)(None)
	class FString                                K2Node_CustomEvent_InviteId;                       // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UAGCustomGameSubsystem*                CallFunc_GetGameInstanceSubsystem_ReturnValue_2;   // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x48(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_12AA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAGCustomGameSubsystem*                CallFunc_GetGameInstanceSubsystem_ReturnValue_3;   // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAGCustomGameSubsystem*                CallFunc_GetGameInstanceSubsystem_ReturnValue_4;   // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAGCustomGameSubsystem*                CallFunc_GetGameInstanceSubsystem_ReturnValue_5;   // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue;              // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_AGGameInstance_C*                  K2Node_DynamicCast_AsBP_AGGame_Instance;           // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


