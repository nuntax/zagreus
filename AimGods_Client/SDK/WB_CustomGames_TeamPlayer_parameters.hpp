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

// 0x44 (0x44 - 0x0)
// Function WB_CustomGames_TeamPlayer.WB_CustomGames_TeamPlayer_C.Initialize
struct UWB_CustomGames_TeamPlayer_C_Initialize_Params
{
public:
	enum class EFCustomGameTeam                  Temp_byte_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_109B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Temp_struct_Variable;                              // 0x4(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Temp_struct_Variable_1;                            // 0x14(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Temp_struct_Variable_2;                            // 0x24(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Select_Default;                             // 0x34(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function WB_CustomGames_TeamPlayer.WB_CustomGames_TeamPlayer_C.SetKickBtnVisibility
struct UWB_CustomGames_TeamPlayer_C_SetKickBtnVisibility_Params
{
public:
	class UAGCustomGameSubsystem*                CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetIsLeader_ReturnValue;                  // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x29 (0x29 - 0x0)
// Function WB_CustomGames_TeamPlayer.WB_CustomGames_TeamPlayer_C.RemovePlayer
struct UWB_CustomGames_TeamPlayer_C_RemovePlayer_Params
{
public:
	struct FCustomGamePlayer                     Player;                                            // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2D (0x2D - 0x0)
// Function WB_CustomGames_TeamPlayer.WB_CustomGames_TeamPlayer_C.SetPlayerIfMatches
struct UWB_CustomGames_TeamPlayer_C_SetPlayerIfMatches_Params
{
public:
	struct FCustomGamePlayer                     Player;                                            // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x2B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function WB_CustomGames_TeamPlayer.WB_CustomGames_TeamPlayer_C.OnPlayerChangedTeamWs
struct UWB_CustomGames_TeamPlayer_C_OnPlayerChangedTeamWs_Params
{
public:
	struct FCustomGamePlayer                     Player;                                            // 0x0(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x28 (0x28 - 0x0)
// Function WB_CustomGames_TeamPlayer.WB_CustomGames_TeamPlayer_C.TrySetPlayer
struct UWB_CustomGames_TeamPlayer_C_TrySetPlayer_Params
{
public:
	struct FCustomGamePlayer                     Player;                                            // 0x0(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x28 (0x28 - 0x0)
// Function WB_CustomGames_TeamPlayer.WB_CustomGames_TeamPlayer_C.OnPlayerJoinedCustomGameWs
struct UWB_CustomGames_TeamPlayer_C_OnPlayerJoinedCustomGameWs_Params
{
public:
	struct FCustomGamePlayer                     Player;                                            // 0x0(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x28 (0x28 - 0x0)
// Function WB_CustomGames_TeamPlayer.WB_CustomGames_TeamPlayer_C.OnPlayerLeftCustomGameWs
struct UWB_CustomGames_TeamPlayer_C_OnPlayerLeftCustomGameWs_Params
{
public:
	struct FCustomGamePlayer                     Player;                                            // 0x0(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x11 (0x11 - 0x0)
// Function WB_CustomGames_TeamPlayer.WB_CustomGames_TeamPlayer_C.OnPlayerReadyStateChangedWs
struct UWB_CustomGames_TeamPlayer_C_OnPlayerReadyStateChangedWs_Params
{
public:
	class FString                                PlayerId;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                         bIsReady;                                          // 0x10(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function WB_CustomGames_TeamPlayer.WB_CustomGames_TeamPlayer_C.OnPlayerKickedWs
struct UWB_CustomGames_TeamPlayer_C_OnPlayerKickedWs_Params
{
public:
	enum class EFCustomGameTeam                  Team;                                              // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_10AC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                PlayerId;                                          // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WB_CustomGames_TeamPlayer.WB_CustomGames_TeamPlayer_C.PreConstruct
struct UWB_CustomGames_TeamPlayer_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1CA (0x1CA - 0x0)
// Function WB_CustomGames_TeamPlayer.WB_CustomGames_TeamPlayer_C.ExecuteUbergraph_WB_CustomGames_TeamPlayer
struct UWB_CustomGames_TeamPlayer_C_ExecuteUbergraph_WB_CustomGames_TeamPlayer_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_10B2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAGCustomGameSubsystem*                CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAGCustomGameSubsystem*                CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x18(0x28)(None)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_1;                    // 0x40(0x28)(None)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x68(0x18)(None)
	class UAGCustomGameSubsystem*                CallFunc_GetGameInstanceSubsystem_ReturnValue_2;   // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x88(0x10)(ZeroConstructor, NoDestructor)
	struct FCustomGamePlayer                     K2Node_CustomEvent_Player_3;                       // 0x98(0x28)(ConstParm)
	struct FCustomGamePlayer                     K2Node_CustomEvent_Player_2;                       // 0xC0(0x28)(ConstParm)
	class UAGCustomGameSubsystem*                CallFunc_GetGameInstanceSubsystem_ReturnValue_3;   // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCustomGamePlayer                     K2Node_CustomEvent_Player_1;                       // 0xF0(0x28)(ConstParm)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x118(0x10)(ZeroConstructor, NoDestructor)
	class UAGCustomGameSubsystem*                CallFunc_GetGameInstanceSubsystem_ReturnValue_4;   // 0x128(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCustomGamePlayer                     K2Node_CustomEvent_Player;                         // 0x130(0x28)(ConstParm)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x158(0x10)(ZeroConstructor, NoDestructor)
	class UAGCustomGameSubsystem*                CallFunc_GetGameInstanceSubsystem_ReturnValue_5;   // 0x168(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_PlayerId_1;                     // 0x170(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bIsReady;                       // 0x180(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_10B3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x184(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x194(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_10B4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAGCustomGameSubsystem*                CallFunc_GetGameInstanceSubsystem_ReturnValue_6;   // 0x198(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFCustomGameTeam                  K2Node_CustomEvent_Team;                           // 0x1A0(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_10B5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_CustomEvent_PlayerId;                       // 0x1A8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x1B8(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x1C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x1C9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


