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

// 0x1 (0x1 - 0x0)
// Function WB_SeasonCalendar_Box.WB_SeasonCalendar_Box_C.PreConstruct
struct UWB_SeasonCalendar_Box_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function WB_SeasonCalendar_Box.WB_SeasonCalendar_Box_C.UpdateNumber
struct UWB_SeasonCalendar_Box_C_UpdateNumber_Params
{
public:
	class FText                                  NewNumber;                                         // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x20 (0x20 - 0x0)
// Function WB_SeasonCalendar_Box.WB_SeasonCalendar_Box_C.ExecuteUbergraph_WB_SeasonCalendar_Box
struct UWB_SeasonCalendar_Box_C_ExecuteUbergraph_WB_SeasonCalendar_Box_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_12C8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_CustomEvent_NewNumber;                      // 0x8(0x18)(None)
};

}
}


