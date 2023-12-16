#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x670 - 0x650)
// BlueprintGeneratedClass BP_Ghost.BP_Ghost_C
class ABP_Ghost_C : public AAGGhost
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x650(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*              MeshParticle;                                      // 0x658(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWB_Spectating_C*                      SpectatingWidget;                                  // 0x660(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_Gameplay_C*                        GameplayWidget;                                    // 0x668(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Ghost_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void BPOnSpectateModeChanged(bool bFreeMode);
	void ExecuteUbergraph_BP_Ghost(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool CallFunc_IsLocallyControlled_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UWB_Spectating_C* CallFunc_Create_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UWB_Gameplay_C* CallFunc_Create_ReturnValue_1, bool K2Node_Event_bFreeMode, class ABP_AGCharacter_C* K2Node_DynamicCast_AsBP_AGCharacter, bool K2Node_DynamicCast_bSuccess, class UUserWidget* K2Node_Select_Default, class UUserWidget* K2Node_Select_Default_1, class AGameStateBase* CallFunc_GetGameState_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, class ABP_AGGameState_C* K2Node_DynamicCast_AsBP_AGGame_State, bool K2Node_DynamicCast_bSuccess_1, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, float CallFunc_SelectFloat_ReturnValue);
};

}


