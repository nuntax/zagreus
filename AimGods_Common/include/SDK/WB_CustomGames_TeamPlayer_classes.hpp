#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x76 (0x2A6 - 0x230)
// WidgetBlueprintGeneratedClass WB_CustomGames_TeamPlayer.WB_CustomGames_TeamPlayer_C
class UWB_CustomGames_TeamPlayer_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                BG;                                                // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Btn_Kick;                                          // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Btn_Row;                                           // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ReadySign;                                         // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_JoinLabel;                                     // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_ReadyState;                                    // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_Username;                                      // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WS_HasPlayer;                                      // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FCustomGamePlayer                     Player;                                            // 0x278(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        Position;                                          // 0x2A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsOccupied;                                       // 0x2A4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EFCustomGameTeam                  Team;                                              // 0x2A5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWB_CustomGames_TeamPlayer_C* GetDefaultObj();

	void Initialize(enum class EFCustomGameTeam Temp_byte_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& Temp_struct_Variable_2, const struct FLinearColor& K2Node_Select_Default);
	void SetKickBtnVisibility(class UAGCustomGameSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_GetIsLeader_ReturnValue);
	void RemovePlayer(const struct FCustomGamePlayer& Player, bool CallFunc_EqualEqual_StrStr_ReturnValue);
	void SetPlayerIfMatches(struct FCustomGamePlayer& Player, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1);
	void Construct();
	void BndEvt__Btn_Row_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void OnPlayerChangedTeamWs(struct FCustomGamePlayer& Player);
	void RefreshVisuals();
	void TrySetPlayer(struct FCustomGamePlayer& Player);
	void OnPlayerJoinedCustomGameWs(struct FCustomGamePlayer& Player);
	void OnPlayerLeftCustomGameWs(struct FCustomGamePlayer& Player);
	void OnPlayerReadyStateChangedWs(const class FString& PlayerId, bool bIsReady);
	void BndEvt__Btn_Kick_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void OnPlayerKickedWs(enum class EFCustomGameTeam& Team, const class FString& PlayerId);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_WB_CustomGames_TeamPlayer(int32 EntryPoint, class UAGCustomGameSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UAGCustomGameSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, class FText CallFunc_Conv_StringToText_ReturnValue, class UAGCustomGameSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FCustomGamePlayer& K2Node_CustomEvent_Player_3, const struct FCustomGamePlayer& K2Node_CustomEvent_Player_2, class UAGCustomGameSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_3, const struct FCustomGamePlayer& K2Node_CustomEvent_Player_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UAGCustomGameSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_4, const struct FCustomGamePlayer& K2Node_CustomEvent_Player, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UAGCustomGameSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_5, const class FString& K2Node_CustomEvent_PlayerId_1, bool K2Node_CustomEvent_bIsReady, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_EqualEqual_StrStr_ReturnValue, class UAGCustomGameSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_6, enum class EFCustomGameTeam K2Node_CustomEvent_Team, const class FString& K2Node_CustomEvent_PlayerId, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, bool K2Node_Event_IsDesignTime);
};

}


