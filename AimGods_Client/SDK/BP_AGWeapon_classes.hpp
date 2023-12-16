#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x368 - 0x358)
// BlueprintGeneratedClass BP_AGWeapon.BP_AGWeapon_C
class ABP_AGWeapon_C : public AAGWeapon
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x358(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x360(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_AGWeapon_C* GetDefaultObj();

	void OnOwnedTagChanged_C52886434498EC5F3DB0209ACCD68CFB(const struct FGameplayTag& OwningTag, int32 Amount);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_AGWeapon(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_AGCharacter_C* K2Node_DynamicCast_AsBP_AGCharacter, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGameplayTag& K2Node_CustomEvent_OwningTag, int32 K2Node_CustomEvent_Amount, int32 Temp_int_Variable, const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class UAsyncTaskOwnedTagChanged* CallFunc_ListenForOwnedTagChange_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue_2, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsLocallyControlled_ReturnValue);
};

}


