#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x108 (0x338 - 0x230)
// WidgetBlueprintGeneratedClass WB_LoadoutActionBarSlot.WB_LoadoutActionBarSlot_C
class UWB_LoadoutActionBarSlot_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Hover;                                             // 0x238(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      DropFailAnim;                                      // 0x240(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      DropAnim;                                          // 0x248(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UOverlay*                              AttentionBox;                                      // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                BG;                                                // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               ClickableButton;                                   // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Icon;                                              // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            KeybindText;                                       // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              Size;                                              // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TimerText;                                         // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EAGAbilityInputID                 InputID;                                           // 0x288(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_C58[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                DisplayedAbility;                                  // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CoolDownTime;                                      // 0x298(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ActiveBuffTime;                                    // 0x29C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          UpdateTimersHandle;                                // 0x2A0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         BuffIsActive;                                      // 0x2A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C5B[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           BuffActiveColor;                                   // 0x2B0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                           CooldownActiveColor;                               // 0x2D8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  KeyText;                                           // 0x300(0x18)(Edit, BlueprintVisible)
	struct FVector2D                             IconSize;                                          // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	UMulticastInlineDelegateProperty_            Clicked;                                           // 0x320(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FName                                  InputBinding;                                      // 0x330(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWB_LoadoutActionBarSlot_C* GetDefaultObj();

	class UWidget* GetLoadoutSlotTooltip(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWB_Shop_Tooltip_C* CallFunc_Create_ReturnValue, bool CallFunc_NotEqual_ClassClass_ReturnValue);
	bool OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UBP_ActionBarDragAndDropPayload_C* K2Node_DynamicCast_AsBP_Action_Bar_Drag_and_Drop_Payload, bool K2Node_DynamicCast_bSuccess, class UBP_LoadoutDragAndDropPayload_C* K2Node_DynamicCast_AsBP_Loadout_Drag_and_Drop_Payload, bool K2Node_DynamicCast_bSuccess_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, class UBP_AGGameInstance_C* K2Node_DynamicCast_AsBP_AGGame_Instance, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_SwapAbilities_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class UBP_AGGameInstance_C* K2Node_DynamicCast_AsBP_AGGame_Instance_1, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_SetAbility_ReturnValue);
	void OnDragDetected(const struct FGeometry& MyGeometry, struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation, class UDragDropOperation* CallFunc_CreateDragDropOperation_ReturnValue, class UBP_ActionBarDragAndDropPayload_C* CallFunc_SpawnObject_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWBP_LoadoutDragVisual_C* CallFunc_Create_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_DetectDragIfPressed_ReturnValue, bool CallFunc_IsValidClass_ReturnValue);
	void Construct();
	void Display_Ability(class UClass* Ability);
	void OnDragEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void OnDragLeave(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__Button_183_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ClickableButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ClickableButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	void OnMouseLeave(struct FPointerEvent& MouseEvent);
	void On_Input_Binding_Changed(class FName BindingName, const struct FKey& NewKey);
	void ExecuteUbergraph_WB_LoadoutActionBarSlot(int32 EntryPoint, class UClass* K2Node_CustomEvent_Ability, const struct FGeometry& K2Node_Event_MyGeometry_1, const struct FPointerEvent& K2Node_Event_PointerEvent_1, class UDragDropOperation* K2Node_Event_Operation_1, class UBP_ActionBarDragAndDropPayload_C* K2Node_DynamicCast_AsBP_Action_Bar_Drag_and_Drop_Payload, bool K2Node_DynamicCast_bSuccess, class UWBP_ActionBarDragVisual_C* K2Node_DynamicCast_AsWBP_Action_Bar_Drag_Visual, bool K2Node_DynamicCast_bSuccess_1, const struct FPointerEvent& K2Node_Event_PointerEvent, class UDragDropOperation* K2Node_Event_Operation, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class UWBP_ActionBarDragVisual_C* K2Node_DynamicCast_AsWBP_Action_Bar_Drag_Visual_1, bool K2Node_DynamicCast_bSuccess_2, bool K2Node_Event_IsDesignTime, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent_1, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, const struct FPointerEvent& K2Node_Event_MouseEvent, class FName K2Node_CustomEvent_BindingName, const struct FKey& K2Node_CustomEvent_NewKey, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UBP_AGGameInstance_C* K2Node_DynamicCast_AsBP_AGGame_Instance, bool K2Node_DynamicCast_bSuccess_3, class UInputSettings* CallFunc_GetInputSettings_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, TArray<struct FInputActionKeyMapping>& CallFunc_GetActionMappingByName_OutMappings, const struct FInputActionKeyMapping& CallFunc_Array_Get_Item, class FText CallFunc_Key_GetDisplayName_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue);
	void Clicked__DelegateSignature();
};

}


