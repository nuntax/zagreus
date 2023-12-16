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

// 0x30 (0x30 - 0x0)
// Function BP_ButtonManager_Functions.BP_ButtonManager_Functions_C.GetButtonManager
struct UBP_ButtonManager_Functions_C_GetButtonManager_Params
{
public:
	class UWB_Button_Base_C*                     ButtonWidget;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPi_ButtonManager_C> ButtonManager;                                     // 0x10(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class IBPi_ButtonManager_C> CurrentManager;                                    // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


