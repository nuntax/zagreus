#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x240 - 0x220)
// BlueprintGeneratedClass MainMenu.MainMenu_C
class AMainMenu_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AAmbientSound*                         AmbientSound_1_ExecuteUbergraph_MainMenu_RefProperty; // 0x228(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_MainMenuChar_C*                    BP_MainMenuChar2_4_ExecuteUbergraph_MainMenu_RefProperty; // 0x230(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATextRenderActor*                      TextRenderActor_1_ExecuteUbergraph_MainMenu_RefProperty; // 0x238(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AMainMenu_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void OnOutgoingPartyInviteAcceptedWs(const class FString& PartyId, const class FString& UserId, const class FString& Username);
	void OnPartyDisbandedWs(const class FString& PartyId);
	void OnLeaveCurrentParty(bool Success, const class FString& Response, struct FPartyError& Error);
	void OnAcceptPartyInvite(bool Success, struct FPartyError& Error, struct FCurrentParty& CurrentParty);
	void ExecuteUbergraph_MainMenu(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAGPartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UAGPartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UAGPartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, bool CallFunc_NotEqual_StrStr_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_AGGameInstance_C* K2Node_DynamicCast_AsBP_AGGame_Instance, bool K2Node_DynamicCast_bSuccess, class UAGPartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_3, const class FString& K2Node_CustomEvent_PartyId_1, const class FString& K2Node_CustomEvent_UserId, const class FString& K2Node_CustomEvent_Username, class FText CallFunc_Conv_StringToText_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const class FString& K2Node_CustomEvent_PartyId, bool K2Node_CustomEvent_Success_1, const class FString& K2Node_CustomEvent_Response, const struct FPartyError& K2Node_CustomEvent_Error_1, class FText CallFunc_GetEmptyText_ReturnValue, bool K2Node_CustomEvent_Success, const struct FPartyError& K2Node_CustomEvent_Error, const struct FCurrentParty& K2Node_CustomEvent_CurrentParty, class UAGPartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_4, class UAwsHttpRequestLibrary* CallFunc_GetGameInstanceSubsystem_ReturnValue_5, bool CallFunc_IsLoggedIn_ReturnValue);
};

}


