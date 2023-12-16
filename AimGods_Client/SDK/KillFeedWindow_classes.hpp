#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x240 - 0x230)
// WidgetBlueprintGeneratedClass KillFeedWindow.KillFeedWindow_C
class UKillFeedWindow_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UScrollBox*                            KillFeedLog;                                       // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UKillFeedWindow_C* GetDefaultObj();

	void SetTextToSend(bool bTeam, class FText Killer, class FText Dead, class FText* TexToSend, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void UpdateKillFeed(class FText Killer, class FText Victim, bool bKillerIsRedTeam, bool bVictimIsRedTeam);
	void OnInitialized();
	void ExecuteUbergraph_KillFeedWindow(int32 EntryPoint, class FText K2Node_CustomEvent_Killer, class FText K2Node_CustomEvent_Victim, bool K2Node_CustomEvent_bKillerIsRedTeam, bool K2Node_CustomEvent_bVictimIsRedTeam, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UKillFeedText_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
};

}


