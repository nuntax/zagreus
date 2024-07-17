#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x528 - 0x520)
// BlueprintGeneratedClass WC_DamageText.WC_DamageText_C
class UWC_DamageText_C : public UAGDamageTextWidgetComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x520(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UWC_DamageText_C* GetDefaultObj();

	void SetDamageText(float Damage, enum class EDamageTextType DamageTextType, int32 GoldAmount, class UTexture2D* DebuffIcon);
	void AddDebuffIcon(class UImage* DebuffImage);
	void ExecuteUbergraph_WC_DamageText(int32 EntryPoint, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UImage* K2Node_Event_DebuffImage, class UWB_DamageNumber_C* K2Node_DynamicCast_AsWB_Damage_Number, bool K2Node_DynamicCast_bSuccess, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue_1, float K2Node_Event_Damage, enum class EDamageTextType K2Node_Event_DamageTextType, int32 K2Node_Event_GoldAmount, class UTexture2D* K2Node_Event_DebuffIcon, class UWB_DamageNumber_C* K2Node_DynamicCast_AsWB_Damage_Number_1, bool K2Node_DynamicCast_bSuccess_1);
};

}


