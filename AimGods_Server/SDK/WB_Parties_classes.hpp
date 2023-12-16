#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x258 - 0x230)
// WidgetBlueprintGeneratedClass WB_Parties.WB_Parties_C
class UWB_Parties_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetSwitcher*                       LoadSwitcher;                                      // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          PartyBox;                                          // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_MainMenu_CustomMatch_C*            WB_MainMenu_LeaveParty;                            // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_PartyRow_C*                        WB_PartyRow;                                       // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWB_Parties_C* GetDefaultObj();

	void Check_Visibility(int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void OnLeaveCurrentParty(bool Success, const class FString& Response, struct FPartyError& Error);
	void Construct();
	void OnAcceptPartyInvite(bool Success, struct FPartyError& Error, struct FCurrentParty& CurrentParty);
	void OnPartyInviteAcceptedWs(const class FString& PartyId, const class FString& UserId, const class FString& Username);
	void BndEvt__WB_MainMenu_LeaveParty_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature();
	void OnPartyDisbandedWs(const class FString& PartyId);
	void ExecuteUbergraph_WB_Parties(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAGPartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UAGPartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, class UAGPartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, bool K2Node_CustomEvent_Success_1, const class FString& K2Node_CustomEvent_Response, const struct FPartyError& K2Node_CustomEvent_Error_1, bool CallFunc_NotEqual_StrStr_ReturnValue, class UAGPartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_3, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWB_PartyRow_C* CallFunc_Create_ReturnValue, class UAGPartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_4, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, class UAGPartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_5, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class UWB_PartyRow_C* CallFunc_Create_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool K2Node_CustomEvent_Success, const struct FPartyError& K2Node_CustomEvent_Error, const struct FCurrentParty& K2Node_CustomEvent_CurrentParty, const class FString& K2Node_CustomEvent_PartyId_1, const class FString& K2Node_CustomEvent_UserId, const class FString& K2Node_CustomEvent_Username, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const class FString& K2Node_CustomEvent_PartyId);
};

}


