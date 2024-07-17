#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x2B0 - 0x230)
// WidgetBlueprintGeneratedClass WB_InGameMenu.WB_InGameMenu_C
class UWB_InGameMenu_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWB_Border_A_C*                        WB_Border_A;                                       // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Btn_Generic_C*                     WB_Btn_MainMenu;                                   // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Btn_Generic_C*                     WB_Btn_Quit;                                       // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Btn_Generic_C*                     WB_Btn_Report;                                     // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Btn_Generic_C*                     WB_Btn_Return;                                     // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Btn_Generic_C*                     WB_Btn_Settings;                                   // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                          ButtonColor;                                       // 0x268(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          HoveredColor;                                      // 0x278(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          HoveredTextColor;                                  // 0x288(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          TextColor;                                         // 0x298(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_PlayerReportPopup_C*               ReportScreen;                                      // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWB_InGameMenu_C* GetDefaultObj();

	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FKey& CallFunc_GetKey_ReturnValue, class FText CallFunc_Key_GetDisplayName_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue);
	void ReturnToGame();
	void OnKeyPressed(const class FString& Key);
	void Construct();
	void OnButtonHovered(class UButton* Button, class UTextBlock* Text);
	void OnButtonUnhovered(class UButton* Button, class UTextBlock* Text);
	void BndEvt__WB_Btn_Return_K2Node_ComponentBoundEvent_15_Clicked__DelegateSignature();
	void BndEvt__WB_Btn_Report_K2Node_ComponentBoundEvent_16_Clicked__DelegateSignature();
	void BndEvt__WB_Btn_MainMenu_K2Node_ComponentBoundEvent_17_Clicked__DelegateSignature();
	void BndEvt__WB_Btn_Quit_K2Node_ComponentBoundEvent_18_Clicked__DelegateSignature();
	void BndEvt__WB_Btn_Settings_K2Node_ComponentBoundEvent_19_Clicked__DelegateSignature();
	void ExecuteUbergraph_WB_InGameMenu(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, const class FString& K2Node_CustomEvent_Key, bool K2Node_SwitchString_CmpSuccess, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UButton* K2Node_CustomEvent_Button_1, class UTextBlock* K2Node_CustomEvent_Text_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor, class UButton* K2Node_CustomEvent_Button, class UTextBlock* K2Node_CustomEvent_Text, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ABP_AGPlayerController_C* K2Node_DynamicCast_AsBP_AGPlayer_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_AGGameInstance_C* K2Node_DynamicCast_AsBP_AGGame_Instance, bool K2Node_DynamicCast_bSuccess_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UWB_PlayerReportPopup_C* CallFunc_Create_ReturnValue);
};

}


