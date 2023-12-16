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
// Function WB_FriendsList.WB_FriendsList_C.OnGetFriendsList
struct UWB_FriendsList_C_OnGetFriendsList_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1246[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Response;                                          // 0x8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FAGFriendError                        Error;                                             // 0x18(0x30)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FAGFriend>                     Friends;                                           // 0x48(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// 0x11 (0x11 - 0x0)
// Function WB_FriendsList.WB_FriendsList_C.OnFriendOnlineStatusChangedWs
struct UWB_FriendsList_C_OnFriendOnlineStatusChangedWs_Params
{
public:
	class FString                                PlayerId;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                         IsOnline;                                          // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x48 (0x48 - 0x0)
// Function WB_FriendsList.WB_FriendsList_C.OnRemoveFriend
struct UWB_FriendsList_C_OnRemoveFriend_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1248[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Response;                                          // 0x8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FAGFriendError                        Error;                                             // 0x18(0x30)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x48 (0x48 - 0x0)
// Function WB_FriendsList.WB_FriendsList_C.OnAcceptFriendRequest
struct UWB_FriendsList_C_OnAcceptFriendRequest_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_124D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Response;                                          // 0x8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FAGFriendError                        Error;                                             // 0x18(0x30)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x10 (0x10 - 0x0)
// Function WB_FriendsList.WB_FriendsList_C.OnOutgoingFriendRequestAcceptedWs
struct UWB_FriendsList_C_OnOutgoingFriendRequestAcceptedWs_Params
{
public:
	class FString                                RequestId;                                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WB_FriendsList.WB_FriendsList_C.OnPlayerUnfriendedYou
struct UWB_FriendsList_C_OnPlayerUnfriendedYou_Params
{
public:
	class FString                                Username;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x48 (0x48 - 0x0)
// Function WB_FriendsList.WB_FriendsList_C.OnBlockPlayer
struct UWB_FriendsList_C_OnBlockPlayer_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1265[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Response;                                          // 0x8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FAGFriendError                        Error;                                             // 0x18(0x30)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x58 (0x58 - 0x0)
// Function WB_FriendsList.WB_FriendsList_C.OnGetBlockedPlayers
struct UWB_FriendsList_C_OnGetBlockedPlayers_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1268[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Response;                                          // 0x8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FAGFriendError                        Error;                                             // 0x18(0x30)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FAGFriend>                     Friends;                                           // 0x48(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// 0x48 (0x48 - 0x0)
// Function WB_FriendsList.WB_FriendsList_C.OnUnblockPlayer
struct UWB_FriendsList_C_OnUnblockPlayer_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1269[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Response;                                          // 0x8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FAGFriendError                        Error;                                             // 0x18(0x30)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x3E8 (0x3E8 - 0x0)
// Function WB_FriendsList.WB_FriendsList_C.ExecuteUbergraph_WB_FriendsList
struct UWB_FriendsList_C_ExecuteUbergraph_WB_FriendsList_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1280[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFriendsLibrary*                       CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Success_5;                      // 0x18(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1282[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_CustomEvent_Response_5;                     // 0x20(0x10)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	struct FAGFriendError                        K2Node_CustomEvent_Error_5;                        // 0x30(0x30)(ConstParm)
	TArray<struct FAGFriend>                     K2Node_CustomEvent_Friends_1;                      // 0x60(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	struct FAGFriend                             CallFunc_Array_Get_Item;                           // 0x70(0x28)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1284[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_FriendRow_C*                       CallFunc_Create_ReturnValue;                       // 0xA8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xB4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue;        // 0xB8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue_1;      // 0xC0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFriendsLibrary*                       CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_PlayerId;                       // 0xD0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_IsOnline;                       // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1285[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFriendsLibrary*                       CallFunc_GetGameInstanceSubsystem_ReturnValue_2;   // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFriendsLibrary*                       CallFunc_GetGameInstanceSubsystem_ReturnValue_3;   // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xF8(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x108(0x10)(ZeroConstructor, NoDestructor)
	class UFriendsLibrary*                       CallFunc_GetGameInstanceSubsystem_ReturnValue_4;   // 0x118(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Success_4;                      // 0x120(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1287[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_CustomEvent_Response_4;                     // 0x128(0x10)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	struct FAGFriendError                        K2Node_CustomEvent_Error_4;                        // 0x138(0x30)(None)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x168(0x10)(ZeroConstructor, NoDestructor)
	bool                                         K2Node_CustomEvent_Success_3;                      // 0x178(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1288[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_CustomEvent_Response_3;                     // 0x180(0x10)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	struct FAGFriendError                        K2Node_CustomEvent_Error_3;                        // 0x190(0x30)(None)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x1C0(0x10)(ZeroConstructor, NoDestructor)
	class FString                                K2Node_CustomEvent_RequestId;                      // 0x1D0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x1E0(0x10)(ZeroConstructor, NoDestructor)
	class FString                                K2Node_CustomEvent_Username;                       // 0x1F0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x200(0x10)(ZeroConstructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x210(0x10)(ZeroConstructor, NoDestructor)
	class UFriendsLibrary*                       CallFunc_GetGameInstanceSubsystem_ReturnValue_5;   // 0x220(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFriendsLibrary*                       CallFunc_GetGameInstanceSubsystem_ReturnValue_6;   // 0x228(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFriendsLibrary*                       CallFunc_GetGameInstanceSubsystem_ReturnValue_7;   // 0x230(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue_1;            // 0x238(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_NotificationItem_C*                CallFunc_Create_ReturnValue_1;                     // 0x240(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x248(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x24C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1289[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x250(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Success_2;                      // 0x254(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_128A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_CustomEvent_Response_2;                     // 0x258(0x10)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	struct FAGFriendError                        K2Node_CustomEvent_Error_2;                        // 0x268(0x30)(None)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0x298(0x10)(ZeroConstructor, NoDestructor)
	class UFriendsLibrary*                       CallFunc_GetGameInstanceSubsystem_ReturnValue_8;   // 0x2A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Success_1;                      // 0x2B0(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_128B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_CustomEvent_Response_1;                     // 0x2B8(0x10)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	struct FAGFriendError                        K2Node_CustomEvent_Error_1;                        // 0x2C8(0x30)(ConstParm)
	TArray<struct FAGFriend>                     K2Node_CustomEvent_Friends;                        // 0x2F8(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	struct FAGFriend                             CallFunc_Array_Get_Item_1;                         // 0x308(0x28)(None)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x330(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x334(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1291[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_7;            // 0x338(0x10)(ZeroConstructor, NoDestructor)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue_2;            // 0x348(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_FriendRow_C*                       CallFunc_Create_ReturnValue_2;                     // 0x350(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFriendsLibrary*                       CallFunc_GetGameInstanceSubsystem_ReturnValue_9;   // 0x358(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue_2;      // 0x360(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFriendsLibrary*                       CallFunc_GetGameInstanceSubsystem_ReturnValue_10;  // 0x368(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFriendsLibrary*                       CallFunc_GetGameInstanceSubsystem_ReturnValue_11;  // 0x370(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFriendsLibrary*                       CallFunc_GetGameInstanceSubsystem_ReturnValue_12;  // 0x378(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFriendsLibrary*                       CallFunc_GetGameInstanceSubsystem_ReturnValue_13;  // 0x380(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFriendsLibrary*                       CallFunc_GetGameInstanceSubsystem_ReturnValue_14;  // 0x388(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Success;                        // 0x390(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1293[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_CustomEvent_Response;                       // 0x398(0x10)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	struct FAGFriendError                        K2Node_CustomEvent_Error;                          // 0x3A8(0x30)(None)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_8;            // 0x3D8(0x10)(ZeroConstructor, NoDestructor)
};

}
}


