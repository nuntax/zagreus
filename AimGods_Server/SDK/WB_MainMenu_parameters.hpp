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

// 0x80 (0x80 - 0x0)
// Function WB_MainMenu.WB_MainMenu_C.UpdatePreviousSeasonInfo
struct UWB_MainMenu_C_UpdatePreviousSeasonInfo_Params
{
public:
	struct FPreviousSeasonInfo                   Previous_Season_Info;                              // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         bError;                                            // 0x30(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_105C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x38(0x18)(None)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x50(0x18)(None)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue_1;             // 0x68(0x18)(None)
};

// 0x118 (0x118 - 0x0)
// Function WB_MainMenu.WB_MainMenu_C.UpdateEloInfo
struct UWB_MainMenu_C_UpdateEloInfo_Params
{
public:
	struct FGameStatsPayload                     Stats;                                             // 0x0(0x70)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x70(0x40)(HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_StrStr_ReturnValue;              // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1078[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0xB8(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0xC8(0x18)(None)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0xE0(0x18)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1083[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x100(0x18)(None)
};

// 0x31 (0x31 - 0x0)
// Function WB_MainMenu.WB_MainMenu_C.UpdateMainScreen
struct UWB_MainMenu_C_UpdateMainScreen_Params
{
public:
	class UAGGameliftSubsystem*                  CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1095[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_QueuePopup_C*                      CallFunc_Create_ReturnValue;                       // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAGGameliftSubsystem*                  CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function WB_MainMenu.WB_MainMenu_C.PreConstruct
struct UWB_MainMenu_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x78 (0x78 - 0x0)
// Function WB_MainMenu.WB_MainMenu_C.OnAcceptPartyInvite
struct UWB_MainMenu_C_OnAcceptPartyInvite_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1099[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPartyError                           Error;                                             // 0x8(0x30)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FCurrentParty                         CurrentParty;                                      // 0x38(0x40)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x10 (0x10 - 0x0)
// Function WB_MainMenu.WB_MainMenu_C.OnPartyDisbandedWs
struct UWB_MainMenu_C_OnPartyDisbandedWs_Params
{
public:
	class FString                                PartyId;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x48 (0x48 - 0x0)
// Function WB_MainMenu.WB_MainMenu_C.OnLeaveCurrentParty
struct UWB_MainMenu_C_OnLeaveCurrentParty_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_109C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Response;                                          // 0x8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FPartyError                           Error;                                             // 0x18(0x30)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x30 (0x30 - 0x0)
// Function WB_MainMenu.WB_MainMenu_C.OnOutgoingPartyInviteAcceptedWs
struct UWB_MainMenu_C_OnOutgoingPartyInviteAcceptedWs_Params
{
public:
	class FString                                PartyId;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                UserId;                                            // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                Username;                                          // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WB_MainMenu.WB_MainMenu_C.OnMatchmakingStatusChanged
struct UWB_MainMenu_C_OnMatchmakingStatusChanged_Params
{
public:
	enum class EMatchmakingStatus                NewStatus;                                         // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA8 (0xA8 - 0x0)
// Function WB_MainMenu.WB_MainMenu_C.OnGetPlayerStatsFromServer
struct UWB_MainMenu_C_OnGetPlayerStatsFromServer_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_10B8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStatsError                           StatError;                                         // 0x8(0x30)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameStatsPayload                     Stats;                                             // 0x38(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x10 (0x10 - 0x0)
// Function WB_MainMenu.WB_MainMenu_C.OnWebSocketError
struct UWB_MainMenu_C_OnWebSocketError_Params
{
public:
	class FString                                Message;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x68 (0x68 - 0x0)
// Function WB_MainMenu.WB_MainMenu_C.OnGetSeasonInfo
struct UWB_MainMenu_C_OnGetSeasonInfo_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_10BD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStatsError                           StatError;                                         // 0x8(0x30)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FSeasonInfo                           SeasonInfo;                                        // 0x38(0x30)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x68 (0x68 - 0x0)
// Function WB_MainMenu.WB_MainMenu_C.OnGetPreviousSeasonInfo
struct UWB_MainMenu_C_OnGetPreviousSeasonInfo_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_10C2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStatsError                           StatError;                                         // 0x8(0x30)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FPreviousSeasonInfo                   SeasonInfo;                                        // 0x38(0x30)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x671 (0x671 - 0x0)
// Function WB_MainMenu.WB_MainMenu_C.ExecuteUbergraph_WB_MainMenu
struct UWB_MainMenu_C_ExecuteUbergraph_WB_MainMenu_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1109[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_AGGameInstance_C*                  K2Node_DynamicCast_AsBP_AGGame_Instance;           // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_110A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x1C(0x10)(ZeroConstructor, NoDestructor)
	bool                                         K2Node_CustomEvent_Success_4;                      // 0x2C(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_110B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPartyError                           K2Node_CustomEvent_Error_1;                        // 0x30(0x30)(ConstParm)
	struct FCurrentParty                         K2Node_CustomEvent_CurrentParty;                   // 0x60(0x40)(ConstParm)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_PartyId_1;                      // 0xA8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0xB8(0x10)(ZeroConstructor, NoDestructor)
	bool                                         K2Node_CustomEvent_Success_3;                      // 0xC8(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_110C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_CustomEvent_Response;                       // 0xD0(0x10)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	struct FPartyError                           K2Node_CustomEvent_Error;                          // 0xE0(0x30)(ConstParm)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x110(0x10)(ZeroConstructor, NoDestructor)
	class FString                                K2Node_CustomEvent_PartyId;                        // 0x120(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_UserId;                         // 0x130(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_Username;                       // 0x140(0x10)(ZeroConstructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x150(0x10)(ZeroConstructor, NoDestructor)
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue_1;            // 0x160(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMatchmakingStatus                K2Node_CustomEvent_NewStatus;                      // 0x168(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_110E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_AGGameInstance_C*                  K2Node_DynamicCast_AsBP_AGGame_Instance_1;         // 0x170(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x178(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1111[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x17C(0x10)(ZeroConstructor, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x18C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x18D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_Success_2;                      // 0x18E(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1112[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStatsError                           K2Node_CustomEvent_StatError_2;                    // 0x190(0x30)(ConstParm)
	struct FGameStatsPayload                     K2Node_CustomEvent_Stats;                          // 0x1C0(0x70)(ConstParm)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x230(0x10)(ZeroConstructor, NoDestructor)
	class UAGStatsSubsystem*                     CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x240(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_Message;                        // 0x248(0x10)(ZeroConstructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0x258(0x10)(ZeroConstructor, NoDestructor)
	class UAGPartySubsystem*                     CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0x268(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0x270(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_ErrorPopUp_C*                      CallFunc_Create_ReturnValue;                       // 0x278(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x280(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAGGameliftSubsystem*                  CallFunc_GetGameInstanceSubsystem_ReturnValue_2;   // 0x288(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Success_1;                      // 0x290(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1119[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStatsError                           K2Node_CustomEvent_StatError_1;                    // 0x298(0x30)(ConstParm)
	struct FSeasonInfo                           K2Node_CustomEvent_SeasonInfo_1;                   // 0x2C8(0x30)(ConstParm)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_7;            // 0x2F8(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_8;            // 0x308(0x10)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x318(0x8)(NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_9;            // 0x320(0x10)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue_1;        // 0x330(0x8)(NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue; // 0x338(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_111C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAGGameliftSubsystem*                  CallFunc_GetGameInstanceSubsystem_ReturnValue_3;   // 0x340(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FTrunc_ReturnValue;                       // 0x348(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_111D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x350(0x18)(None)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_10;           // 0x368(0x10)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue_2;        // 0x378(0x8)(NoDestructor, HasGetValueTypeHash)
	class UAGStatsSubsystem*                     CallFunc_GetGameInstanceSubsystem_ReturnValue_4;   // 0x380(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x388(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_111F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_2;        // 0x390(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_CustomGamesScreen_C*               CallFunc_Create_ReturnValue_1;                     // 0x398(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x3A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1120[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDateTime                             CallFunc_UtcNow_ReturnValue;                       // 0x3A8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimespan                             CallFunc_Subtract_DateTimeDateTime_ReturnValue;    // 0x3B0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakTimespan_Days;                       // 0x3B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakTimespan_Hours;                      // 0x3BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakTimespan_Minutes;                    // 0x3C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakTimespan_Seconds;                    // 0x3C4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakTimespan_Milliseconds;               // 0x3C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Abs_Int_ReturnValue;                      // 0x3CC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Abs_Int_ReturnValue_1;                    // 0x3D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1122[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue_1;             // 0x3D8(0x18)(None)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue_2;             // 0x3F0(0x18)(None)
	int32                                        CallFunc_Abs_Int_ReturnValue_2;                    // 0x408(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Abs_Int_ReturnValue_3;                    // 0x40C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue_3;             // 0x410(0x18)(None)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue_4;             // 0x428(0x18)(None)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_11;           // 0x440(0x10)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue_3;        // 0x450(0x8)(NoDestructor, HasGetValueTypeHash)
	class UOverlaySlot*                          CallFunc_SlotAsOverlaySlot_ReturnValue;            // 0x458(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue_1;                   // 0x460(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAGStatsSubsystem*                     CallFunc_GetGameInstanceSubsystem_ReturnValue_5;   // 0x468(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x470(0x18)(None)
	class FText                                  CallFunc_TextToUpper_ReturnValue;                  // 0x488(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x4A0(0x40)(HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x4E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1123[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x4E8(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x4F8(0x18)(None)
	class UAGStatsSubsystem*                     CallFunc_GetGameInstanceSubsystem_ReturnValue_6;   // 0x510(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetTimeLeftInCurrentSeason_ReturnValue;   // 0x518(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UAGStatsSubsystem*                     CallFunc_GetGameInstanceSubsystem_ReturnValue_7;   // 0x528(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x530(0x18)(None)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_12;           // 0x548(0x10)(ZeroConstructor, NoDestructor)
	class UWebSocketManager*                     CallFunc_GetGameInstanceSubsystem_ReturnValue_8;   // 0x558(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x560(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1124[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAGStatsSubsystem*                     CallFunc_GetGameInstanceSubsystem_ReturnValue_9;   // 0x568(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0x570(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x578(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x579(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1125[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAGGameliftSubsystem*                  CallFunc_GetGameInstanceSubsystem_ReturnValue_10;  // 0x580(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x588(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1127[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAGGameliftSubsystem*                  CallFunc_GetGameInstanceSubsystem_ReturnValue_11;  // 0x590(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWebSocketManager*                     CallFunc_GetGameInstanceSubsystem_ReturnValue_12;  // 0x598(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x5A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1128[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAwsHttpRequestLibrary*                CallFunc_GetGameInstanceSubsystem_ReturnValue_13;  // 0x5A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAGPartySubsystem*                     CallFunc_GetGameInstanceSubsystem_ReturnValue_14;  // 0x5B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsLoggedIn_ReturnValue;                   // 0x5B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1129[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAGPartySubsystem*                     CallFunc_GetGameInstanceSubsystem_ReturnValue_15;  // 0x5C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Success;                        // 0x5C8(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_112A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStatsError                           K2Node_CustomEvent_StatError;                      // 0x5D0(0x30)(ConstParm)
	struct FPreviousSeasonInfo                   K2Node_CustomEvent_SeasonInfo;                     // 0x600(0x30)(ConstParm)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_13;           // 0x630(0x10)(ZeroConstructor, NoDestructor)
	class UAGPartySubsystem*                     CallFunc_GetGameInstanceSubsystem_ReturnValue_16;  // 0x640(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue_2;            // 0x648(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue_3;            // 0x650(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_AGGameInstance_C*                  K2Node_DynamicCast_AsBP_AGGame_Instance_2;         // 0x658(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x660(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_112C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_AGGameInstance_C*                  K2Node_DynamicCast_AsBP_AGGame_Instance_3;         // 0x668(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x670(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


