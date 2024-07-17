#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD8 (0x308 - 0x230)
// WidgetBlueprintGeneratedClass WB_CustomGamesScreen.WB_CustomGamesScreen_C
class UWB_CustomGamesScreen_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWB_CustomGames_TeamPlayer_C*          BluePlayer1;                                       // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_CustomGames_TeamPlayer_C*          BluePlayer2;                                       // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Button02_Framed_C*                 Btn_LeaveGame;                                     // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Button02_Framed_C*                 Btn_Rdy_StartGame;                                 // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_2;                                           // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_141;                                         // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_CustomGames_TeamPlayer_C*          RedPlayer1;                                        // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_CustomGames_TeamPlayer_C*          RedPlayer2;                                        // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_CustomGames_TeamPlayer_C*          Spectator1;                                        // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_CustomGames_TeamPlayer_C*          Spectator2;                                        // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_CustomGames_TeamPlayer_C*          Spectator3;                                        // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_CustomGames_TeamPlayer_C*          Spectator4;                                        // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_BlueTeam;                                       // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWrapBox*                              VB_Invites;                                        // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_RedTeam;                                        // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        VB_Spectators;                                     // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Border_A_C*                        WB_Border_A;                                       // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_MainMenu_Custom_Play_C*            WB_MainMenu_Custom_Play;                           // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_MainMenu_CustomMatch_C*            WB_MainMenu_CustomMatch;                           // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FCustomGamePlayer>             CustomGamePlayers;                                 // 0x2D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int32                                        MaxRedPlayers;                                     // 0x2E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        MaxBluePlayers;                                    // 0x2E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        MaxSpectators;                                     // 0x2E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class EMatchmakingStatus                MatchmakingStatus;                                 // 0x2EC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_10B6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          DescribeGameSessionTimerHandle;                    // 0x2F0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	UMulticastInlineDelegateProperty_            CustomGameLoadFriends;                             // 0x2F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWB_CustomGamesScreen_C* GetDefaultObj();

	void SetTeamButtonsEnabledState(bool bIsEnabled, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue_1, class UWidget* CallFunc_Array_Get_Item_1, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue_2, class UWidget* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2);
	void SetRdyStartButton(class UAGCustomGameSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UAGGameliftSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, bool CallFunc_GetIsReady_ReturnValue, class UAGCustomGameSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_AllPlayersReady_ReturnValue, class UAGCustomGameSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_3);
	void PopulateTeams(TArray<struct FCustomGamePlayer>& Players, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_3, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Array_Index_Variable_3, const struct FCustomGamePlayer& CallFunc_Array_Get_Item, bool K2Node_SwitchEnum_CmpSuccess, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue_1, class UWidget* CallFunc_Array_Get_Item_1, class UWidget* CallFunc_Array_Get_Item_2, class UWB_CustomGames_TeamPlayer_C* K2Node_DynamicCast_AsWB_Custom_Games_Team_Player, bool K2Node_DynamicCast_bSuccess, class UWB_CustomGames_TeamPlayer_C* K2Node_DynamicCast_AsWB_Custom_Games_Team_Player_1, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_3, class UWidget* CallFunc_Array_Get_Item_3, bool CallFunc_Less_IntInt_ReturnValue_3, class UWB_CustomGames_TeamPlayer_C* K2Node_DynamicCast_AsWB_Custom_Games_Team_Player_2, bool K2Node_DynamicCast_bSuccess_2);
	void BndEvt__Btn_LeaveGame_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void Construct();
	void CreateCustomGame();
	void OnCreateCustomGame(struct FCustomGame& CurrentGame);
	void OnSendInvite(struct FOutgoingCustomGameInvite& Invite);
	void OnAcceptInvite(struct FCustomGame& CurrentGame);
	void OnCustomGameDisbandedWs();
	void OnPlayerJoinedCustomGameWs(struct FCustomGamePlayer& Player);
	void BndEvt__Btn_Rdy_StartGame_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void OnMatchmakingStatusChanged(enum class EMatchmakingStatus& NewStatus);
	void OnPlayerKickedWs(enum class EFCustomGameTeam& Team, const class FString& PlayerId);
	void OnPlayerReadyStateChangedWs(const class FString& PlayerId, bool bIsReady);
	void DescribeGameSession();
	void OnDescribeGameSessionComplete();
	void OnCustomGamePlacementStarted();
	void OnCustomGamePlacementCancelled();
	void OnCustomGamePlacementFulfilled(struct FCustomGamePlayer& Player, const class FString& PlayerSessionId, const class FString& Team, struct FCustomGamePlacementInfo& PlacementInfo);
	void BndEvt__WB_MainMenu_Custom_Play_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature();
	void BndEvt__WB_MainMenu_CustomMatch_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature();
	void LeaveCustomGame();
	void ExecuteUbergraph_WB_CustomGamesScreen(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, class UAGCustomGameSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_AGGameInstance_C* K2Node_DynamicCast_AsBP_AGGame_Instance, bool K2Node_DynamicCast_bSuccess, class UAGCustomGameSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FCustomGame& K2Node_CustomEvent_CurrentGame_1, class UAGCustomGameSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UWB_Outgoing_CustomGames_Invite_C* CallFunc_Create_ReturnValue, const struct FOutgoingCustomGameInvite& K2Node_CustomEvent_Invite, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UAGCustomGameSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_3, const struct FCustomGame& K2Node_CustomEvent_CurrentGame, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UAGCustomGameSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class UAGCustomGameSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_5, class UBP_AGGameInstance_C* K2Node_DynamicCast_AsBP_AGGame_Instance_1, bool K2Node_DynamicCast_bSuccess_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FCustomGamePlayer& K2Node_CustomEvent_Player_1, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UAGCustomGameSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_6, class UWidget* CallFunc_Array_Get_Item, class UWB_Outgoing_CustomGames_Invite_C* K2Node_DynamicCast_AsWB_Outgoing_Custom_Games_Invite, bool K2Node_DynamicCast_bSuccess_2, int32 CallFunc_Array_Length_ReturnValue, class UAGCustomGameSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_7, bool CallFunc_EqualEqual_StrStr_ReturnValue, class UAGCustomGameSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_8, class UAGGameliftSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_9, bool CallFunc_GetIsReady_ReturnValue, class UAGCustomGameSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_10, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, enum class EMatchmakingStatus K2Node_CustomEvent_NewStatus, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, class UAGCustomGameSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_11, class UBP_AGGameInstance_C* K2Node_DynamicCast_AsBP_AGGame_Instance_2, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_GetIsReady_ReturnValue_1, enum class EFCustomGameTeam K2Node_CustomEvent_Team_1, const class FString& K2Node_CustomEvent_PlayerId_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class UAGCustomGameSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_12, const class FString& K2Node_CustomEvent_PlayerId, bool K2Node_CustomEvent_bIsReady, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, TScriptInterface<class IBPi_ButtonManager_C> CallFunc_GetButtonManager_ButtonManager, class UAGCustomGameSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_13, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FCustomGamePlayer& K2Node_CustomEvent_Player, const class FString& K2Node_CustomEvent_PlayerSessionId, const class FString& K2Node_CustomEvent_Team, const struct FCustomGamePlacementInfo& K2Node_CustomEvent_PlacementInfo, class UAGCustomGameSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_14, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, class FName CallFunc_Conv_StringToName_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, class UAGCustomGameSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_15, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, class UAGCustomGameSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_16, class UAGCustomGameSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_17);
	void CustomGameLoadFriends__DelegateSignature();
};

}


