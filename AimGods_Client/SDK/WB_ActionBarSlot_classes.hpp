#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF8 (0x328 - 0x230)
// WidgetBlueprintGeneratedClass WB_ActionBarSlot.WB_ActionBarSlot_C
class UWB_ActionBarSlot_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      ErrorState;                                        // 0x238(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      CooldownState_End;                                 // 0x240(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      BuffState_End;                                     // 0x248(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      BuffState_On;                                      // 0x250(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Icon;                                              // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            KeybindText_A;                                     // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              Size;                                              // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TimerText;                                         // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EAGAbilityInputID                 InputID;                                           // 0x278(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_126F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                DisplayedAbility;                                  // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CoolDownTime;                                      // 0x288(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ActiveBuffTime;                                    // 0x28C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          UpdateTimersHandle;                                // 0x290(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         BuffIsActive;                                      // 0x298(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1270[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           BuffActiveColor;                                   // 0x2A0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                           CooldownActiveColor;                               // 0x2C8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  KeyText;                                           // 0x2F0(0x18)(Edit, BlueprintVisible)
	struct FVector2D                             IconSize;                                          // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Dynomat_Icon;                                      // 0x310(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ActiveBuffTimeMax;                                 // 0x318(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CooldownMax;                                       // 0x31C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  InputName;                                         // 0x320(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWB_ActionBarSlot_C* GetDefaultObj();

	void ToggleAbilityUsable(bool IsUsable, bool Temp_bool_Variable, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateColor& K2Node_Select_Default);
	bool OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UBP_ActionBarDragAndDropPayload_C* K2Node_DynamicCast_AsBP_Action_Bar_Drag_and_Drop_Payload, bool K2Node_DynamicCast_bSuccess, class ABP_AGPlayerState_C* K2Node_DynamicCast_AsBP_AGPlayer_State, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_TrySwapAbilities_ReturnValue);
	void OnDragDetected(const struct FGeometry& MyGeometry, struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation, class UDragDropOperation* CallFunc_CreateDragDropOperation_ReturnValue, class UBP_ActionBarDragAndDropPayload_C* CallFunc_SpawnObject_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWBP_ActionBarDragVisual_C* CallFunc_Create_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_DetectDragIfPressed_ReturnValue, bool CallFunc_IsValidClass_ReturnValue);
	void Display_Ability(class UClass* Ability);
	void On_Gameplay_Effect_Added(class UAbilitySystemComponent* AbilitySystemComponent, class UGameplayEffect* AddedEffect, const struct FGameplayEffectSpec& EffectSpec, const struct FActiveGameplayEffectHandle& ActiveEffectHandle);
	void On_Gameplay_Effect_Removed(class UAbilitySystemComponent* AbilitySystemComponent, class UGameplayEffect* AddedEffect, const struct FGameplayEffectSpec& EffectSpec, const struct FActiveGameplayEffectHandle& ActiveEffectHandle);
	void Update_Timers();
	void OnDragEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void OnDragLeave(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void PreConstruct(bool IsDesignTime);
	void Init();
	void CancelCooldowns();
	void On_Input_Binding_Changed(class FName BindingName, const struct FKey& NewKey);
	void ErrorCast();
	void ExecuteUbergraph_WB_ActionBarSlot(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UClass* K2Node_CustomEvent_Ability, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class ABP_AGPlayerState_C* K2Node_DynamicCast_AsBP_AGPlayer_State, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UAbilitySystemComponent* K2Node_CustomEvent_AbilitySystemComponent_1, class UGameplayEffect* K2Node_CustomEvent_AddedEffect_1, const struct FGameplayEffectSpec& K2Node_CustomEvent_EffectSpec_1, const struct FActiveGameplayEffectHandle& K2Node_CustomEvent_ActiveEffectHandle_1, class UAbilitySystemComponent* K2Node_CustomEvent_AbilitySystemComponent, class UGameplayEffect* K2Node_CustomEvent_AddedEffect, const struct FGameplayEffectSpec& K2Node_CustomEvent_EffectSpec, const struct FActiveGameplayEffectHandle& K2Node_CustomEvent_ActiveEffectHandle, float CallFunc_GetEffectSpecDuration_ReturnValue, class UAGGameplayEffect* K2Node_DynamicCast_AsAGGameplay_Effect, bool K2Node_DynamicCast_bSuccess_1, bool K2Node_SwitchEnum_CmpSuccess, class UAGGameplayEffect* K2Node_DynamicCast_AsAGGameplay_Effect_1, bool K2Node_DynamicCast_bSuccess_2, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_FMax_ReturnValue, float CallFunc_FMax_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_SelectFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_2, class FText CallFunc_Conv_FloatToText_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, bool Temp_bool_Variable, const struct FSlateColor& K2Node_Select_Default, class FText Temp_text_Variable, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_PointerEvent_1, class UDragDropOperation* K2Node_Event_Operation_1, class UBP_ActionBarDragAndDropPayload_C* K2Node_DynamicCast_AsBP_Action_Bar_Drag_and_Drop_Payload, bool K2Node_DynamicCast_bSuccess_3, class UWBP_ActionBarDragVisual_C* K2Node_DynamicCast_AsWBP_Action_Bar_Drag_Visual, bool K2Node_DynamicCast_bSuccess_4, const struct FPointerEvent& K2Node_Event_PointerEvent, class UDragDropOperation* K2Node_Event_Operation, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class UWBP_ActionBarDragVisual_C* K2Node_DynamicCast_AsWBP_Action_Bar_Drag_Visual_1, bool K2Node_DynamicCast_bSuccess_5, bool K2Node_Event_IsDesignTime, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, float CallFunc_FMax_ReturnValue_2, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FMax_ReturnValue_3, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_4, bool Temp_bool_Variable_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, class FText K2Node_Select_Default_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_3, class FName K2Node_CustomEvent_BindingName, const struct FKey& K2Node_CustomEvent_NewKey, bool CallFunc_EqualEqual_NameName_ReturnValue, float Temp_float_Variable, class UInputSettings* CallFunc_GetInputSettings_ReturnValue, TArray<struct FInputActionKeyMapping>& CallFunc_GetActionMappingByName_OutMappings, const struct FInputActionKeyMapping& CallFunc_Array_Get_Item, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_AGGameInstance_C* K2Node_DynamicCast_AsBP_AGGame_Instance, bool K2Node_DynamicCast_bSuccess_6, class FText CallFunc_Key_GetDisplayName_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Len_ReturnValue, const class FString& CallFunc_GetSubstring_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const class FString& CallFunc_SelectString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue, float Temp_float_Variable_1, bool Temp_bool_Variable_2, bool CallFunc_IsValid_ReturnValue_5, float K2Node_Select_Default_2);
};

}


