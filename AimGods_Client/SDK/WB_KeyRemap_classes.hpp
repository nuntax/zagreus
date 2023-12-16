#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x34 (0x264 - 0x230)
// WidgetBlueprintGeneratedClass WB_KeyRemap.WB_KeyRemap_C
class UWB_KeyRemap_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UInputKeySelector*                     InputKey;                                          // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_33;                                      // 0x240(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  InputName;                                         // 0x248(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	int32                                        Position;                                          // 0x260(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWB_KeyRemap_C* GetDefaultObj();

	class FText GetInputMapName();
	void BndEvt__InputKey_K2Node_ComponentBoundEvent_0_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_WB_KeyRemap(int32 EntryPoint, const struct FInputChord& K2Node_ComponentBoundEvent_SelectedKey, class UInputSettings* CallFunc_GetInputSettings_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, class FName CallFunc_Conv_StringToName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue_1, const struct FInputActionKeyMapping& K2Node_MakeStruct_InputActionKeyMapping, TArray<struct FInputActionKeyMapping>& CallFunc_GetActionMappingByName_OutMappings, class UInputSettings* CallFunc_GetInputSettings_ReturnValue_1, TArray<struct FInputActionKeyMapping>& CallFunc_GetActionMappingByName_OutMappings_1, bool K2Node_Event_IsDesignTime, const struct FInputChord& K2Node_MakeStruct_InputChord);
};

}


