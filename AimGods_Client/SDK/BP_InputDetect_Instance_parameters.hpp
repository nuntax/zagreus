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
// Function BP_InputDetect_Instance.BP_InputDetect_Instance_C.SetShowMouse
struct UBP_InputDetect_Instance_C_SetShowMouse_Params
{
public:
	bool                                         bShowMouse;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function BP_InputDetect_Instance.BP_InputDetect_Instance_C.SetInputType
struct UBP_InputDetect_Instance_C_SetInputType_Params
{
public:
	enum class EInputType                        InputType;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BP_InputDetect_Instance.BP_InputDetect_Instance_C.UpdateInputType__DelegateSignature
struct UBP_InputDetect_Instance_C_UpdateInputType__DelegateSignature_Params
{
public:
	enum class EInputType                        InputType;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


