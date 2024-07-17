#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x69 (0x2B9 - 0x250)
// BlueprintGeneratedClass BP_AGGameInstance.BP_AGGameInstance_C
class UBP_AGGameInstance_C : public UAGGameInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x250(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWB_EndGame_C*                         EndGameRef;                                        // 0x258(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_InGameMenu_C*                      InGameMenuRef;                                     // 0x260(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_MainMenu_C*                        MainMenu;                                          // 0x268(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_LoadingScreen_C*                   LoadingScreenRef;                                  // 0x270(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_SettingsMenu_C*                    SettingsMenuRef;                                   // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_Gameplay_C*                        GameplayWidgetRef;                                 // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_PlayerScores_C*                    PlayerScoresWidgetRef;                             // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                PlayerSessionId;                                   // 0x290(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UAudioComponent*                       SoundComp;                                         // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastInlineDelegateProperty_            InputBindingChanged;                               // 0x2A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         bIsInCustomGame;                                   // 0x2B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UBP_AGGameInstance_C* GetDefaultObj();

	void OnFailure_D7E6F33944FC88F0975CC29A0A147795();
	void OnSuccess_D7E6F33944FC88F0975CC29A0A147795();
	void ShowSettingsMenu(class UWB_MainMenu_C* MainMenuWidget);
	void HandleNetworkError(enum class ENetworkFailure FailureType, bool bIsServer);
	void ShowLoadingScreen();
	void HandleTravelError(enum class ETravelFailure FailureType);
	void DestroySessionCaller(class APlayerController* PlayerController);
	void ShowGameplayWidget();
	void ShowIngameMenu();
	void ShowMainMenu();
	void ShowEndGameMenu(bool RedTeamWon, int32 Position);
	void ShowPlayerScores();
	void ShowErrorMessageMenu(const class FString& ErrorMessage);
	void HidePlayerScores();
	void CloseIngame_Menu();
	void SetVolume(float AudioVolume, class USoundClass* SoundClass);
	void BPRemoveSettingsMenu();
	void ShowLogin();
	void LeaveCustomGame();
	void JoinCustomGame();
	void ReceiveInit();
	void ExecuteUbergraph_BP_AGGameInstance(int32 EntryPoint, enum class ETravelFailure K2Node_Event_FailureType, class APlayerController* K2Node_CustomEvent_PlayerController, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class UDestroySessionCallbackProxy* CallFunc_DestroySession_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UWB_Gameplay_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, enum class ENetworkFailure K2Node_Event_FailureType_1, bool K2Node_Event_bIsServer, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class UWB_MainMenu_C* CallFunc_Create_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, class UWB_InGameMenu_C* CallFunc_Create_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsInViewport_ReturnValue, bool K2Node_CustomEvent_RedTeamWon, int32 K2Node_CustomEvent_Position, class APlayerController* CallFunc_GetPlayerController_ReturnValue_4, class UWB_PlayerScores_C* CallFunc_Create_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_7, const class FString& K2Node_CustomEvent_ErrorMessage, class APlayerController* CallFunc_GetPlayerController_ReturnValue_5, class APlayerController* CallFunc_GetPlayerController_ReturnValue_6, class UWB_ErrorMessage_C* CallFunc_Create_ReturnValue_4, class UWB_SettingsMenu_C* CallFunc_Create_ReturnValue_5, class UWB_MainMenu_C* K2Node_CustomEvent_MainMenuWidget, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue_8, class APlayerController* CallFunc_GetPlayerController_ReturnValue_7, class UWB_LoadingScreen_C* CallFunc_Create_ReturnValue_6, bool CallFunc_IsInViewport_ReturnValue_1, bool CallFunc_IsInViewport_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_9, bool CallFunc_IsValid_ReturnValue_10, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, float K2Node_CustomEvent_AudioVolume, class USoundClass* K2Node_CustomEvent_SoundClass, float CallFunc_FClamp_ReturnValue, bool CallFunc_IsValid_ReturnValue_11, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_8, class UAGChatSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UWB_Login_C* CallFunc_Create_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_12, class APlayerController* CallFunc_GetPlayerController_ReturnValue_9, class UWebSocketManager* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue_13, bool CallFunc_IsValid_ReturnValue_14, bool CallFunc_IsValid_ReturnValue_15);
	void InputBindingChanged__DelegateSignature(class FName BindingName, const struct FKey& New_Key);
};

}


