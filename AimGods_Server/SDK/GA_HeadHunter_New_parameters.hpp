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

// 0xB0 (0xB0 - 0x0)
// Function GA_HeadHunter_New.GA_HeadHunter_New_C.EventReceived_2D63217C474B2FE009D424854AD514A1
struct UGA_HeadHunter_New_C_EventReceived_2D63217C474B2FE009D424854AD514A1_Params
{
public:
	struct FGameplayEventData                    Payload;                                           // 0x0(0xB0)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x20 (0x20 - 0x0)
// Function GA_HeadHunter_New.GA_HeadHunter_New_C.InvalidHandle_50D2E54344A54A1B797677807D06FC04
struct UGA_HeadHunter_New_C_InvalidHandle_50D2E54344A54A1B797677807D06FC04_Params
{
public:
	struct FGameplayEffectRemovalInfo            GameplayEffectRemovalInfo;                         // 0x0(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x20 (0x20 - 0x0)
// Function GA_HeadHunter_New.GA_HeadHunter_New_C.OnRemoved_50D2E54344A54A1B797677807D06FC04
struct UGA_HeadHunter_New_C_OnRemoved_50D2E54344A54A1B797677807D06FC04_Params
{
public:
	struct FGameplayEffectRemovalInfo            GameplayEffectRemovalInfo;                         // 0x0(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x26C (0x26C - 0x0)
// Function GA_HeadHunter_New.GA_HeadHunter_New_C.ExecuteUbergraph_GA_HeadHunter_New
struct UGA_HeadHunter_New_C_ExecuteUbergraph_GA_HeadHunter_New_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_16E8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayEventData                    Temp_struct_Variable;                              // 0x8(0xB0)(None)
	class UAbilityTask_WaitGameplayEvent*        CallFunc_WaitGameplayEvent_ReturnValue;            // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilitySystemComponent*               CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0xC0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAGAbilitySystemComponent*             K2Node_DynamicCast_AsAGAbility_System_Component;   // 0xC8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xD1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsSameTeam_ReturnValue;                   // 0xD2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_16EA[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xD4(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_16EB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayEffectRemovalInfo            K2Node_CustomEvent_GameplayEffectRemovalInfo_1;    // 0xE8(0x20)(ConstParm)
	struct FGameplayEffectRemovalInfo            K2Node_CustomEvent_GameplayEffectRemovalInfo;      // 0x108(0x20)(ConstParm)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x128(0x10)(ZeroConstructor, NoDestructor)
	struct FGameplayEffectRemovalInfo            Temp_struct_Variable_1;                            // 0x138(0x20)(None)
	class UAbilitySystemComponent*               CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue; // 0x158(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_16EC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayEffectContextHandle          CallFunc_MakeEffectContext_ReturnValue;            // 0x168(0x18)(None)
	struct FGameplayEffectSpecHandle             CallFunc_MakeOutgoingSpec_ReturnValue;             // 0x180(0x10)(None)
	bool                                         CallFunc_K2_CommitAbility_ReturnValue;             // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_16EE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FActiveGameplayEffectHandle           CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue; // 0x194(0x8)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_16EF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilityTask_WaitGameplayEffectRemoved* CallFunc_WaitForGameplayEffectRemoved_ReturnValue; // 0x1A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                    K2Node_CustomEvent_Payload;                        // 0x1A8(0xB0)(None)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x258(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_16F0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x25C(0x10)(ZeroConstructor, NoDestructor)
};

}
}


