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

// 0x4 (0x4 - 0x0)
// Function GA_PersistentHealthRegen.GA_PersistentHealthRegen_C.OnFinished_712AA67141E78B3E710A9DB39319877E
struct UGA_PersistentHealthRegen_C_OnFinished_712AA67141E78B3E710A9DB39319877E_Params
{
public:
	int32                                        ActionNumber;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function GA_PersistentHealthRegen.GA_PersistentHealthRegen_C.OnPerformAction_712AA67141E78B3E710A9DB39319877E
struct UGA_PersistentHealthRegen_C_OnPerformAction_712AA67141E78B3E710A9DB39319877E_Params
{
public:
	int32                                        ActionNumber;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function GA_PersistentHealthRegen.GA_PersistentHealthRegen_C.K2_OnEndAbility
struct UGA_PersistentHealthRegen_C_K2_OnEndAbility_Params
{
public:
	bool                                         bWasCancelled;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x49 (0x49 - 0x0)
// Function GA_PersistentHealthRegen.GA_PersistentHealthRegen_C.ExecuteUbergraph_GA_PersistentHealthRegen
struct UGA_PersistentHealthRegen_C_ExecuteUbergraph_GA_PersistentHealthRegen_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
	int32                                        K2Node_CustomEvent_ActionNumber_1;                 // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_ActionNumber;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x1C(0x10)(ZeroConstructor, NoDestructor)
	int32                                        Temp_int_Variable;                                 // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bWasCancelled;                        // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_12B2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FActiveGameplayEffectHandle           CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue; // 0x34(0x8)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12B3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilityTask_Repeat*                   CallFunc_RepeatAction_ReturnValue;                 // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


