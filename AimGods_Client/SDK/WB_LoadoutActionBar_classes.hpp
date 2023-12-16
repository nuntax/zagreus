#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA8 (0x2D8 - 0x230)
// WidgetBlueprintGeneratedClass WB_LoadoutActionBar.WB_LoadoutActionBar_C
class UWB_LoadoutActionBar_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                        ActionBarBox;                                      // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_LoadoutActionBarSlot_C*            WB_LoadoutActionBarSlot;                           // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_LoadoutActionBarSlot_C*            WB_LoadoutActionBarSlot_1;                         // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_LoadoutActionBarSlot_C*            WB_LoadoutActionBarSlot_2;                         // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_LoadoutActionBarSlot_C*            WB_LoadoutActionBarSlot_3;                         // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_LoadoutActionBarSlot_C*            WB_LoadoutActionBarSlot_4;                         // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_LoadoutActionBarSlot_C*            WB_LoadoutActionBarSlot_5;                         // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_LoadoutActionBarSlot_C*            WB_LoadoutActionBarSlot_6;                         // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<enum class EAGAbilityInputID, class UWB_LoadoutActionBarSlot_C*> ActionBarSlots;                                    // 0x278(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
	UMulticastInlineDelegateProperty_            ClickedAnySlot;                                    // 0x2C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWB_LoadoutActionBar_C* GetDefaultObj();

	void Construct();
	void On_Loadout_Ability_Changed(enum class EAGAbilityInputID InputID, class UClass* Ability);
	void BndEvt__WB_LoadoutActionBarSlot_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature();
	void BndEvt__WB_LoadoutActionBarSlot_1_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature();
	void BndEvt__WB_LoadoutActionBarSlot_2_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature();
	void BndEvt__WB_LoadoutActionBarSlot_3_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature();
	void BndEvt__WB_LoadoutActionBarSlot_4_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature();
	void BndEvt__WB_LoadoutActionBarSlot_5_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature();
	void BndEvt__WB_LoadoutActionBarSlot_6_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature();
	void ExecuteUbergraph_WB_LoadoutActionBar(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UWB_LoadoutActionBarSlot_C* K2Node_DynamicCast_AsWB_Loadout_Action_Bar_Slot, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, enum class EAGAbilityInputID K2Node_CustomEvent_InputID, class UClass* K2Node_CustomEvent_Ability, class UBP_AGGameInstance_C* K2Node_DynamicCast_AsBP_AGGame_Instance, bool K2Node_DynamicCast_bSuccess_1, class UWB_LoadoutActionBarSlot_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FLoadoutAbility& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class UWB_LoadoutActionBarSlot_C* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1);
	void ClickedAnySlot__DelegateSignature();
};

}


