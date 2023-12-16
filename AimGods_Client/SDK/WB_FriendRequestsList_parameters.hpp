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

// 0x58 (0x58 - 0x0)
// Function WB_FriendRequestsList.WB_FriendRequestsList_C.OnGetIncomingFriendRequests
struct UWB_FriendRequestsList_C_OnGetIncomingFriendRequests_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Response;                                          // 0x8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FAGFriendError                        Error;                                             // 0x18(0x30)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FAGPendingFriendRequest>       FriendRequests;                                    // 0x48(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// 0x58 (0x58 - 0x0)
// Function WB_FriendRequestsList.WB_FriendRequestsList_C.OnGetOutgoingFriendRequests
struct UWB_FriendRequestsList_C_OnGetOutgoingFriendRequests_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_416[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Response;                                          // 0x8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FAGFriendError                        Error;                                             // 0x18(0x30)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FAGPendingFriendRequest>       FriendRequests;                                    // 0x48(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// 0x20 (0x20 - 0x0)
// Function WB_FriendRequestsList.WB_FriendRequestsList_C.OnFriendRequestReceivedWs
struct UWB_FriendRequestsList_C_OnFriendRequestReceivedWs_Params
{
public:
	class FString                                RequestId;                                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                Username;                                          // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x48 (0x48 - 0x0)
// Function WB_FriendRequestsList.WB_FriendRequestsList_C.OnSendFriendRequest
struct UWB_FriendRequestsList_C_OnSendFriendRequest_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_422[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Response;                                          // 0x8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FAGFriendError                        Error;                                             // 0x18(0x30)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x10 (0x10 - 0x0)
// Function WB_FriendRequestsList.WB_FriendRequestsList_C.OnOutgoingFriendRequestAcceptedWs
struct UWB_FriendRequestsList_C_OnOutgoingFriendRequestAcceptedWs_Params
{
public:
	class FString                                RequestId;                                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x48 (0x48 - 0x0)
// Function WB_FriendRequestsList.WB_FriendRequestsList_C.OnAcceptFriendRequest
struct UWB_FriendRequestsList_C_OnAcceptFriendRequest_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_432[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Response;                                          // 0x8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FAGFriendError                        Error;                                             // 0x18(0x30)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x48 (0x48 - 0x0)
// Function WB_FriendRequestsList.WB_FriendRequestsList_C.OnCancelOutgoingFriendshipRequest
struct UWB_FriendRequestsList_C_OnCancelOutgoingFriendshipRequest_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_437[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Response;                                          // 0x8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FAGFriendError                        Error;                                             // 0x18(0x30)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x10 (0x10 - 0x0)
// Function WB_FriendRequestsList.WB_FriendRequestsList_C.OnIncomingFriendRequestCancelledWs
struct UWB_FriendRequestsList_C_OnIncomingFriendRequestCancelledWs_Params
{
public:
	class FString                                RequestId;                                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x369 (0x369 - 0x0)
// Function WB_FriendRequestsList.WB_FriendRequestsList_C.ExecuteUbergraph_WB_FriendRequestsList
struct UWB_FriendRequestsList_C_ExecuteUbergraph_WB_FriendRequestsList_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Success_4;                      // 0xC(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_465[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_CustomEvent_Response_4;                     // 0x10(0x10)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	struct FAGFriendError                        K2Node_CustomEvent_Error_4;                        // 0x20(0x30)(ConstParm)
	TArray<struct FAGPendingFriendRequest>       K2Node_CustomEvent_FriendRequests_1;               // 0x50(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x60(0x10)(ZeroConstructor, NoDestructor)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x78(0x10)(ZeroConstructor, NoDestructor)
	bool                                         K2Node_CustomEvent_Success_3;                      // 0x88(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_468[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_CustomEvent_Response_3;                     // 0x90(0x10)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	struct FAGFriendError                        K2Node_CustomEvent_Error_3;                        // 0xA0(0x30)(ConstParm)
	TArray<struct FAGPendingFriendRequest>       K2Node_CustomEvent_FriendRequests;                 // 0xD0(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	struct FAGPendingFriendRequest               CallFunc_Array_Get_Item;                           // 0xE0(0x20)(None)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_46D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_IncomingRequest_C*                 CallFunc_Create_ReturnValue;                       // 0x110(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x118(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_46F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x120(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAGPendingFriendRequest               CallFunc_Array_Get_Item_1;                         // 0x128(0x20)(None)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue_1;            // 0x148(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_OutgoingRequest_C*                 CallFunc_Create_ReturnValue_1;                     // 0x150(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x158(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x15C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x15D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_470[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x160(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x164(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFriendsLibrary*                       CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x168(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_472[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x174(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_RequestId_2;                    // 0x178(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_Username;                       // 0x188(0x10)(ZeroConstructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x198(0x10)(ZeroConstructor, NoDestructor)
	struct FAGPendingFriendRequest               K2Node_MakeStruct_AGPendingFriendRequest;          // 0x1A8(0x20)(None)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue_2;            // 0x1C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_IncomingRequest_C*                 CallFunc_Create_ReturnValue_2;                     // 0x1D0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue_1;                   // 0x1D8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue_2;                   // 0x1E0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFriendsLibrary*                       CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0x1E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x1F0(0x10)(ZeroConstructor, NoDestructor)
	bool                                         K2Node_CustomEvent_Success_2;                      // 0x200(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_477[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_CustomEvent_Response_2;                     // 0x208(0x10)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	struct FAGFriendError                        K2Node_CustomEvent_Error_2;                        // 0x218(0x30)(None)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x248(0x10)(ZeroConstructor, NoDestructor)
	class FString                                K2Node_CustomEvent_RequestId_1;                    // 0x258(0x10)(ZeroConstructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x268(0x10)(ZeroConstructor, NoDestructor)
	bool                                         K2Node_CustomEvent_Success_1;                      // 0x278(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_479[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_CustomEvent_Response_1;                     // 0x280(0x10)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	struct FAGFriendError                        K2Node_CustomEvent_Error_1;                        // 0x290(0x30)(None)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0x2C0(0x10)(ZeroConstructor, NoDestructor)
	int32                                        CallFunc_GetChildrenCount_ReturnValue;             // 0x2D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_7;            // 0x2D4(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_8;            // 0x2E4(0x10)(ZeroConstructor, NoDestructor)
	bool                                         K2Node_CustomEvent_Success;                        // 0x2F4(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_47C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_CustomEvent_Response;                       // 0x2F8(0x10)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	struct FAGFriendError                        K2Node_CustomEvent_Error;                          // 0x308(0x30)(None)
	class FString                                K2Node_CustomEvent_RequestId;                      // 0x338(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetChildrenCount_ReturnValue_1;           // 0x348(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_47E[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0x350(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x358(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_47F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWB_IncomingRequest_C*                 K2Node_DynamicCast_AsWB_Incoming_Request;          // 0x360(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x368(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function WB_FriendRequestsList.WB_FriendRequestsList_C.WeHaveSomething__DelegateSignature
struct UWB_FriendRequestsList_C_WeHaveSomething__DelegateSignature_Params
{
public:
	int32                                        Quantity;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


