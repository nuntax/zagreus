#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x268 - 0x230)
// WidgetBlueprintGeneratedClass WB_PostMatchPlayers.WB_PostMatchPlayers_C
class UWB_PostMatchPlayers_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UScrollBox*                            SB_PlayersList;                                    // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FGameStatsPayload>             EndGameStats;                                      // 0x240(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FPostMatchPlayerStats>         PostMatchPlayers;                                  // 0x250(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FTimerHandle                          TimerUpdate_TimerHandle;                           // 0x260(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWB_PostMatchPlayers_C* GetDefaultObj();

	void FillPlayerArrayFromStats(TArray<struct FGameStatsPayload>& GameStats, const TArray<struct FGameStatsPayload>& GameStatsArray, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, const struct FGameStatsPayload& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class AGameStateBase* CallFunc_GetGameState_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, class APlayerState* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, class ABP_AGPlayerState_C* K2Node_DynamicCast_AsBP_AGPlayer_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, const class FString& CallFunc_GetPlayerName_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1, bool CallFunc_EqualEqual_StriStri_ReturnValue, const struct FPostMatchPlayerStats& K2Node_MakeStruct_PostMatchPlayerStats, int32 CallFunc_Array_AddUnique_ReturnValue);
	void AreAllPlayerStatsLoaded(bool* Loaded, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class APlayerState* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class ABP_AGPlayerState_C* K2Node_DynamicCast_AsBP_AGPlayer_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void Construct();
	void TimerUpdate();
	void CustomGameEndGame();
	void Retry_Load_Stats();
	void PreConstruct(bool IsDesignTime);
	void OnEndGameStatsReceived(TArray<struct FGameStatsPayload>& EndGameStats, bool bIsCustomGame);
	void DisplayEndgameStats(bool bIsCustomGame, TArray<struct FGameStatsPayload>& GameStats);
	void DisplayCustomEndGameStats();
	void ExecuteUbergraph_WB_PostMatchPlayers(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_3, class AGameStateBase* CallFunc_GetGameState_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UWB_PostMatchPlayer_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class AAGPlayerState* K2Node_DynamicCast_AsAGPlayer_State, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class UWB_PostMatchPlayer_C* CallFunc_Create_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_3, const struct FPostMatchPlayerStats& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_3, bool CallFunc_AreAllPlayerStatsLoaded_Loaded, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FPostMatchPlayerStats& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_4, bool K2Node_Event_IsDesignTime, class APlayerState* CallFunc_Array_Get_Item_2, class ABP_AGPlayerState_C* K2Node_DynamicCast_AsBP_AGPlayer_State, bool K2Node_DynamicCast_bSuccess_1, TArray<struct FGameStatsPayload>& K2Node_CustomEvent_EndGameStats, bool K2Node_CustomEvent_bIsCustomGame_1, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1, const class FString& CallFunc_GetPlayerName_ReturnValue, bool K2Node_CustomEvent_bIsCustomGame, TArray<struct FGameStatsPayload>& K2Node_CustomEvent_GameStats, const struct FPostMatchPlayerStats& K2Node_MakeStruct_PostMatchPlayerStats, int32 CallFunc_Array_Add_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, class UWB_PostMatchPlayer_C* CallFunc_Create_ReturnValue_2, class UPanelSlot* CallFunc_AddChild_ReturnValue_2, const struct FPostMatchPlayerStats& CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_4, class UWB_PostMatchPlayer_C* CallFunc_Create_ReturnValue_3, class UPanelSlot* CallFunc_AddChild_ReturnValue_3, int32 Temp_int_Loop_Counter_Variable_4, bool CallFunc_Less_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 CallFunc_Array_Length_ReturnValue_4, const struct FPostMatchPlayerStats& CallFunc_Array_Get_Item_4, bool CallFunc_Less_IntInt_ReturnValue_4);
};

}


