#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x180 (0x3B0 - 0x230)
// WidgetBlueprintGeneratedClass WB_DamageNumber.WB_DamageNumber_C
class UWB_DamageNumber_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_03;                                           // 0x238(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_02;                                           // 0x240(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_01;                                           // 0x248(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      DamageTextFade;                                    // 0x250(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                            DamageNumber;                                      // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        DebuffHorizontalBox;                               // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            GoldAmount;                                        // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateFontInfo                        CritFont;                                          // 0x270(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSlateColor                           CritColor;                                         // 0x2C0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                           NormalColor;                                       // 0x2E8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateFontInfo                        NormalFont;                                        // 0x310(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSlateFontInfo                        OutOfRangeFont;                                    // 0x360(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWB_DamageNumber_C* GetDefaultObj();

	void Finished_C74A44EB49D394462E4FF3BFDD682116();
	void Finished_EAE840F2466551B3C6B96D96DEFF64E5();
	void Construct();
	void UpdateDamage(float Damage, enum class EDamageTextType DamageTextType, class UTexture2D* DebuffTexture, int32 GoldAmount);
	void AddDebuffImage(class UImage* DebuffImage);
	void ExecuteUbergraph_WB_DamageNumber(int32 EntryPoint, class UWB_HitEffect_C* CallFunc_Create_ReturnValue, float K2Node_CustomEvent_Damage, enum class EDamageTextType K2Node_CustomEvent_DamageTextType, class UTexture2D* K2Node_CustomEvent_DebuffTexture, int32 K2Node_CustomEvent_GoldAmount, const class FString& CallFunc_Conv_IntToString_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class FText CallFunc_Conv_FloatToText_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Variable, class UImage* K2Node_CustomEvent_DebuffImage, int32 CallFunc_RandomIntegerInRange_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, class UWidgetAnimation* K2Node_Select_Default, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result_1, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2);
};

}


