#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC8 (0x670 - 0x5A8)
// BlueprintGeneratedClass BP_AGPlayerController.BP_AGPlayerController_C
class ABP_AGPlayerController_C : public AAGPlayerController
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWB_Gameplay_C*                        GameplayWB;                                        // 0x5B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_CharacterSelection_C*              CharacterSelectionRef;                             // 0x5B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  KillerName;                                        // 0x5C0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  DeathPlayerName;                                   // 0x5D8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  SenderText;                                        // 0x5F0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  SenderName;                                        // 0x608(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UBP_AGGameInstance_C*                  GameInstance;                                      // 0x620(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                PlayerSessionId;                                   // 0x628(0x10)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UWB_RespawnScreen_C*                   RespawnScreenWidget;                               // 0x638(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_PostMatch_C*                       PostMatchScreen;                                   // 0x640(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_Shop_C*                            ShopWB;                                            // 0x648(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsDebugDetailsVisible;                             // 0x650(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1441[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWB_CheatManager_C*                    CheatManagerWidget;                                // 0x658(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastInlineDelegateProperty_            OnInputBindingChanged;                             // 0x660(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class ABP_AGPlayerController_C* GetDefaultObj();

	void LoadSettings(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_AGGameInstance_C* K2Node_DynamicCast_AsBP_AGGame_Instance, bool K2Node_DynamicCast_bSuccess, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FInputAxisKeyMapping& K2Node_MakeStruct_InputAxisKeyMapping, const struct FInputAxisKeyMapping& K2Node_MakeStruct_InputAxisKeyMapping_1, bool Temp_bool_Variable, bool Temp_bool_Variable_1, float K2Node_Select_Default, float K2Node_Select_Default_1, const struct FInputAxisKeyMapping& K2Node_MakeStruct_InputAxisKeyMapping_2, const struct FInputAxisKeyMapping& K2Node_MakeStruct_InputAxisKeyMapping_3, const struct FInputAxisKeyMapping& K2Node_MakeStruct_InputAxisKeyMapping_4, const struct FInputAxisKeyMapping& K2Node_MakeStruct_InputAxisKeyMapping_5, const struct FInputAxisKeyMapping& K2Node_MakeStruct_InputAxisKeyMapping_6, const struct FInputAxisKeyMapping& K2Node_MakeStruct_InputAxisKeyMapping_7, class UInputSettings* CallFunc_GetInputSettings_ReturnValue, class USaveGame* CallFunc_LoadGameFromSlot_ReturnValue, class UWB_AGSaveGame_C* K2Node_DynamicCast_AsWB_AGSave_Game, bool K2Node_DynamicCast_bSuccess_1);
	void InpActEvt_SettingMenu_K2Node_InputActionEvent_4(const struct FKey& Key);
	void InpActEvt_ShowPlayersState_K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_ShowPlayersState_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt___K2Node_InputKeyEvent_3(const struct FKey& Key);
	void InpActEvt___K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt___K2Node_InputKeyEvent_1(const struct FKey& Key);
	void InpActEvt_F10_K2Node_InputKeyEvent_0(const struct FKey& Key);
	void InpActEvt_CheatOpenShop_K2Node_InputActionEvent_1(const struct FKey& Key);
	void InpActEvt_CheatGold_K2Node_InputActionEvent_0(const struct FKey& Key);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ShowGameplayWidget(class ABP_AGCharacter_C* PlayerPawn);
	void ShowEndGameScreen(bool bRedTeamWon, int32 Position);
	void CloseWidgets();
	void GetKillFeedText(class FText Killer, class FText DeathPlayer, bool bKillerIsRedTeam, bool bVictimIsRedTeam);
	void UpdateKillFeed(class FText Killer, class FText Victim, bool bKillerIsRedTeam, bool bVictimIsRedTeam);
	void ClearWidgets();
	void PauseGame();
	void ShowKillingSpreeMessage();
	void CloseScores();
	void RemoveAllWidgets();
	void BPKicked();
	void BPCloseCharacterSelection();
	void CloseCharacterSelection();
	void Kicked();
	void ReceiveBeginPlay();
	void Show_Hit_Indicator(const struct FVector& Damager_Loc);
	void BPCloseWidgets();
	void ShowRespawnScreen_1(float RespawnTimer);
	void ShowRespawnScreen(float RespawnTimer);
	void Client_Remove_Widgets();
	void OnPostMatchBegin(bool bRedTeamWon);
	void Open_Shop_UI();
	void Close_Shop_UI();
	void On_Begin_Recall();
	void On_End_Recall();
	void OnDowntimeNotification(const class FString& Message);
	void AddCheatManagerWidget();
	void OnPreMatchBegin(float PrematchTime);
	void OnEndGameStatsRecieved(TArray<struct FGameStatsPayload>& EndGameStats, bool bIsCustomGame);
	void ShowTextChat();
	void UpdateChat(class FText Sender, class FText Text, bool bTeamChat);
	void ServerSendChatMessage(class FText TextToSend, bool bTeamChat, class APlayerController* SenderPC);
	void ExecuteUbergraph_BP_AGPlayerController(int32 EntryPoint, const struct FKey& K2Node_InputActionEvent_Key_4, bool K2Node_CustomEvent_bRedTeamWon_1, int32 K2Node_CustomEvent_Position, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, int32 Temp_int_Array_Index_Variable, class UBP_AGGameInstance_C* K2Node_DynamicCast_AsBP_AGGame_Instance, bool K2Node_DynamicCast_bSuccess, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class APawn* CallFunc_K2_GetPawn_ReturnValue, class UBP_AGGameInstance_C* K2Node_DynamicCast_AsBP_AGGame_Instance_1, bool K2Node_DynamicCast_bSuccess_1, class ABP_AGCharacter_C* K2Node_DynamicCast_AsBP_AGCharacter, bool K2Node_DynamicCast_bSuccess_2, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, class UBP_AGGameInstance_C* K2Node_DynamicCast_AsBP_AGGame_Instance_2, bool K2Node_DynamicCast_bSuccess_3, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_3, class UBP_AGGameInstance_C* K2Node_DynamicCast_AsBP_AGGame_Instance_3, bool K2Node_DynamicCast_bSuccess_4, class APawn* CallFunc_GetPlayerPawn_ReturnValue, class ABP_AGCharacter_C* K2Node_DynamicCast_AsBP_AGCharacter_1, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_IsDead_ReturnValue, class FText K2Node_CustomEvent_Killer_1, class FText K2Node_CustomEvent_DeathPlayer, bool K2Node_CustomEvent_bKillerIsRedTeam_1, bool K2Node_CustomEvent_bVictimIsRedTeam_1, class FText K2Node_CustomEvent_Killer, class FText K2Node_CustomEvent_Victim, bool K2Node_CustomEvent_bKillerIsRedTeam, bool K2Node_CustomEvent_bVictimIsRedTeam, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UWB_Gameplay_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABP_AGCharacter_C* K2Node_CustomEvent_PlayerPawn, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsGamePaused_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_SetGamePaused_ReturnValue, class UWB_KillingSpreeMessage_C* CallFunc_Create_ReturnValue_1, enum class EEndPlayReason K2Node_Event_EndPlayReason, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class APawn* CallFunc_GetPlayerPawn_ReturnValue_1, class ABP_AGCharacter_C* K2Node_DynamicCast_AsBP_AGCharacter_2, bool K2Node_DynamicCast_bSuccess_6, bool CallFunc_IsDead_ReturnValue_1, class APawn* CallFunc_GetPlayerPawn_ReturnValue_2, class AAGCharacter* K2Node_DynamicCast_AsAGCharacter, bool K2Node_DynamicCast_bSuccess_7, bool CallFunc_IsValid_ReturnValue_2, int32 Temp_int_Array_Index_Variable_1, const struct FVector& K2Node_CustomEvent_Damager_Loc, bool CallFunc_IsValid_ReturnValue_3, class UWB_RespawnScreen_C* CallFunc_Create_ReturnValue_2, TArray<class APlayerStart*>& CallFunc_GetAllActorsOfClass_OutActors, class APlayerStart* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, float K2Node_Event_RespawnTimer_1, float K2Node_Event_RespawnTimer, bool CallFunc_IsLocalPlayerController_ReturnValue, class UWB_RespawnScreen_C* CallFunc_Create_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_6, class AGameStateBase* CallFunc_GetGameState_ReturnValue, bool K2Node_CustomEvent_bRedTeamWon, class ABP_AGGameState_C* K2Node_DynamicCast_AsBP_AGGame_State, bool K2Node_DynamicCast_bSuccess_8, bool CallFunc_IsRedTeam_ReturnValue, class UWB_PostMatch_C* CallFunc_Create_ReturnValue_4, bool CallFunc_EqualEqual_BoolBool_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_IsLocalController_ReturnValue, class UWB_Shop_C* CallFunc_Create_ReturnValue_5, bool CallFunc_IsLocalController_ReturnValue_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_4, const class FString& K2Node_CustomEvent_Message, class UAGGameInstance* K2Node_DynamicCast_AsAGGame_Instance, bool K2Node_DynamicCast_bSuccess_9, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class UWB_DowntimeStart_C* CallFunc_Create_ReturnValue_6, class AGameStateBase* CallFunc_GetGameState_ReturnValue_1, class AAGGameState* K2Node_DynamicCast_AsAGGame_State, bool K2Node_DynamicCast_bSuccess_10, bool CallFunc_IsValid_ReturnValue_8, class APlayerController* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, class ABP_AGPlayerController_C* K2Node_DynamicCast_AsBP_AGPlayer_Controller, bool K2Node_DynamicCast_bSuccess_11, bool CallFunc_IsValid_ReturnValue_9, bool CallFunc_HasAuthority_ReturnValue, const struct FKey& Temp_struct_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AGameStateBase* CallFunc_GetGameState_ReturnValue_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class ABP_AGGameState_C* K2Node_DynamicCast_AsBP_AGGame_State_1, bool K2Node_DynamicCast_bSuccess_12, float K2Node_CustomEvent_PrematchTime, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool CallFunc_IsValid_ReturnValue_10, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FKey& K2Node_InputActionEvent_Key_2, bool CallFunc_IsPackagedForDistribution_ReturnValue, const struct FKey& K2Node_InputActionEvent_Key_3, const struct FKey& K2Node_InputActionEvent_Key, class AGameStateBase* CallFunc_GetGameState_ReturnValue_3, TArray<struct FGameStatsPayload>& K2Node_CustomEvent_EndGameStats, bool K2Node_CustomEvent_bIsCustomGame, class ABP_AGGameState_C* K2Node_DynamicCast_AsBP_AGGame_State_2, bool K2Node_DynamicCast_bSuccess_13, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_5, class UBP_AGGameInstance_C* K2Node_DynamicCast_AsBP_AGGame_Instance_4, bool K2Node_DynamicCast_bSuccess_14, const struct FGameStatsPayload& K2Node_MakeStruct_GameStatsPayload, TArray<struct FGameStatsPayload>& K2Node_MakeArray_Array_1, class AGameStateBase* CallFunc_GetGameState_ReturnValue_4, const struct FKey& K2Node_InputActionEvent_Key_1, class AAGGameState* K2Node_DynamicCast_AsAGGame_State_1, bool K2Node_DynamicCast_bSuccess_15, class FText CallFunc_GetPlayerName_ReturnValue, class APlayerController* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_1, class ABP_AGPlayerController_C* K2Node_DynamicCast_AsBP_AGPlayer_Controller_1, bool K2Node_DynamicCast_bSuccess_16, bool CallFunc_Less_IntInt_ReturnValue_1, const struct FKey& K2Node_InputKeyEvent_Key, const struct FKey& K2Node_InputKeyEvent_Key_1, bool CallFunc_IsValid_ReturnValue_11, const struct FKey& K2Node_InputKeyEvent_Key_2, const struct FKey& K2Node_InputKeyEvent_Key_3, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_12, class FText K2Node_CustomEvent_Sender, class FText K2Node_CustomEvent_Text, bool K2Node_CustomEvent_bTeamChat_1, class FText K2Node_CustomEvent_TextToSend, bool K2Node_CustomEvent_bTeamChat, class APlayerController* K2Node_CustomEvent_SenderPC, class ABP_AGPlayerController_C* K2Node_DynamicCast_AsBP_AGPlayer_Controller_2, bool K2Node_DynamicCast_bSuccess_17, bool CallFunc_IsSameTeam_ReturnValue);
	void OnInputBindingChanged__DelegateSignature(class FName BindingName, const struct FKey& NewKey);
};

}


