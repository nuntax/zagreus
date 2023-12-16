#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0x554 - 0x540)
// BlueprintGeneratedClass BP_AGGameMode.BP_AGGameMode_C
class ABP_AGGameMode_C : public AAGGameMode
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x540(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x548(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        EndGameDelay;                                      // 0x550(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_AGGameMode_C* GetDefaultObj();

	void ResetGame(float Delay);
	void EndGame(bool bRedTeamWon);
	void Restart_Game_Timer();
	void ReceiveBeginPlay();
	void Prematch_Begun(float PrematchTime);
	void Perform_Disconnect_Check();
	void ExecuteUbergraph_BP_AGGameMode(int32 EntryPoint, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class AAGGameMode* K2Node_DynamicCast_AsAGGame_Mode, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_CustomEvent_Delay, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_Event_bRedTeamWon, int32 Temp_int_Array_Index_Variable_2, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ABP_AGGameState_C* K2Node_DynamicCast_AsBP_AGGame_State, bool K2Node_DynamicCast_bSuccess_1, class AGameStateBase* CallFunc_GetGameState_ReturnValue_1, class AGameStateBase* CallFunc_GetGameState_ReturnValue_2, class AAGGameState* K2Node_DynamicCast_AsAGGame_State, bool K2Node_DynamicCast_bSuccess_2, class AAGGameState* K2Node_DynamicCast_AsAGGame_State_1, bool K2Node_DynamicCast_bSuccess_3, class APlayerController* CallFunc_Array_Get_Item, class APlayerController* CallFunc_Array_Get_Item_1, class ABP_AGPlayerController_C* K2Node_DynamicCast_AsBP_AGPlayer_Controller, bool K2Node_DynamicCast_bSuccess_4, class ABP_AGPlayerController_C* K2Node_DynamicCast_AsBP_AGPlayer_Controller_1, bool K2Node_DynamicCast_bSuccess_5, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, class AGameStateBase* CallFunc_GetGameState_ReturnValue_3, bool CallFunc_IsServer_ReturnValue, class ABP_AGGameState_C* K2Node_DynamicCast_AsBP_AGGame_State_1, bool K2Node_DynamicCast_bSuccess_6, float K2Node_CustomEvent_PrematchTime, TArray<class AAGCharacter*>& CallFunc_GetAllActorsOfClass_OutActors, class AAGCharacter* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
};

}


