#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x298 - 0x230)
// WidgetBlueprintGeneratedClass WB_PartyInvite.WB_PartyInvite_C
class UWB_PartyInvite_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               AcceptPartyInvite;                                 // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Btn_Row;                                           // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               DeclinePartyInvite;                                // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Icon_A;                                            // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Icon_A_1;                                          // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                TagColor;                                          // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_Username;                                      // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FIncomingPartyInvite                  PartyInvite;                                       // 0x270(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UWB_PartyInvite_C* GetDefaultObj();

	void Construct();
	void BndEvt__AcceptPartyInvite_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void OnAcceptPartyInvite(bool Success, struct FPartyError& Error, struct FCurrentParty& CurrentParty);
	void BndEvt__DeclinePartyInvite_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void RemovePartyInvite();
	void ExecuteUbergraph_WB_PartyInvite(int32 EntryPoint, class UAGPartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAGPartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, bool K2Node_CustomEvent_Success, const struct FPartyError& K2Node_CustomEvent_Error, const struct FCurrentParty& K2Node_CustomEvent_CurrentParty, class UAGPartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2);
};

}


