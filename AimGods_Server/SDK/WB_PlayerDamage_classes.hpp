#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x248 - 0x230)
// WidgetBlueprintGeneratedClass WB_PlayerDamage.WB_PlayerDamage_C
class UWB_PlayerDamage_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim;                                              // 0x238(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                            DamageText;                                        // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWB_PlayerDamage_C* GetDefaultObj();

	void Initialize(bool Heal_, float Number, const struct FSlateColor& K2Node_MakeStruct_SlateColor, class FText CallFunc_Conv_FloatToText_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1);
	void Finished_A6AC22264894A303AC45448B5334C92A();
	void Construct();
	void Spawn(bool Heal_, float Number);
	void ExecuteUbergraph_WB_PlayerDamage(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue, bool K2Node_CustomEvent_Heal_, float K2Node_CustomEvent_Number, bool CallFunc_IsValid_ReturnValue);
};

}


