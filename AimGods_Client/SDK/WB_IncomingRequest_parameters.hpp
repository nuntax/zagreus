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

// 0x48 (0x48 - 0x0)
// Function WB_IncomingRequest.WB_IncomingRequest_C.OnAcceptFriendRequest
struct UWB_IncomingRequest_C_OnAcceptFriendRequest_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_12AE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Response;                                          // 0x8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FAGFriendError                        Error;                                             // 0x18(0x30)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x48 (0x48 - 0x0)
// Function WB_IncomingRequest.WB_IncomingRequest_C.OnCancelOutgoingFriendshipRequest
struct UWB_IncomingRequest_C_OnCancelOutgoingFriendshipRequest_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_12AF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Response;                                          // 0x8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FAGFriendError                        Error;                                             // 0x18(0x30)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x10 (0x10 - 0x0)
// Function WB_IncomingRequest.WB_IncomingRequest_C.OnIncomingFriendRequestCancelledWs
struct UWB_IncomingRequest_C_OnIncomingFriendRequestCancelledWs_Params
{
public:
	class FString                                RequestId;                                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x120 (0x120 - 0x0)
// Function WB_IncomingRequest.WB_IncomingRequest_C.ExecuteUbergraph_WB_IncomingRequest
struct UWB_IncomingRequest_C_ExecuteUbergraph_WB_IncomingRequest_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12B7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFriendsLibrary*                       CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFriendsLibrary*                       CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFriendsLibrary*                       CallFunc_GetGameInstanceSubsystem_ReturnValue_2;   // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFriendsLibrary*                       CallFunc_GetGameInstanceSubsystem_ReturnValue_3;   // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x28(0x18)(None)
	bool                                         K2Node_CustomEvent_Success_1;                      // 0x40(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_12BC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_CustomEvent_Response_1;                     // 0x48(0x10)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	struct FAGFriendError                        K2Node_CustomEvent_Error_1;                        // 0x58(0x30)(None)
	bool                                         K2Node_CustomEvent_Success;                        // 0x88(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_12BD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_CustomEvent_Response;                       // 0x90(0x10)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	struct FAGFriendError                        K2Node_CustomEvent_Error;                          // 0xA0(0x30)(None)
	class FString                                K2Node_CustomEvent_RequestId;                      // 0xD0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xE0(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_12BE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFriendsLibrary*                       CallFunc_GetGameInstanceSubsystem_ReturnValue_4;   // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x100(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x110(0x10)(ZeroConstructor, NoDestructor)
};

}
}


