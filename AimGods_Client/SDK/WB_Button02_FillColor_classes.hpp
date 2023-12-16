#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x298 - 0x230)
// WidgetBlueprintGeneratedClass WB_Button02_FillColor.WB_Button02_FillColor_C
class UWB_Button02_FillColor_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                          CP_Base;                                           // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Color;                                         // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Highlight_2;                                   // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Highlight1;                                    // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                          FillColor_Normal;                                  // 0x258(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          FillColor_Hovered;                                 // 0x268(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          FillColor_Clicked;                                 // 0x278(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          FillColor_Disabled;                                // 0x288(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWB_Button02_FillColor_C* GetDefaultObj();

	void SetFillColor(const struct FLinearColor& Color, float Temp_float_Variable, float CallFunc_RGBToHSV_H, float CallFunc_RGBToHSV_S, float CallFunc_RGBToHSV_V, float CallFunc_RGBToHSV_A, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_RGBToHSV_H_1, float CallFunc_RGBToHSV_S_1, float CallFunc_RGBToHSV_V_1, float CallFunc_RGBToHSV_A_1, bool Temp_bool_Variable, bool CallFunc_EqualEqual_FloatFloat_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue_1, float Temp_float_Variable_1, float Temp_float_Variable_2, float K2Node_Select_Default, float Temp_float_Variable_3, bool Temp_bool_Variable_1, float Temp_float_Variable_4, bool Temp_bool_Variable_2, float Temp_float_Variable_5, float K2Node_Select_Default_1, const struct FLinearColor& CallFunc_AddColorV_Value_OutColor, float K2Node_Select_Default_2, bool Temp_bool_Variable_3, float K2Node_Select_Default_3, const struct FLinearColor& CallFunc_AddColorV_Value_OutColor_1);
	void AddColorV_Value(const struct FLinearColor& InColor, float ExtraV, struct FLinearColor* OutColor, bool Temp_bool_Variable, float CallFunc_RGBToHSV_H, float CallFunc_RGBToHSV_S, float CallFunc_RGBToHSV_V, float CallFunc_RGBToHSV_A, float Temp_float_Variable, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float K2Node_Select_Default, const struct FLinearColor& CallFunc_HSVToRGB_ReturnValue);
	void OnUnhovered();
	void OnClicked();
	void OnHovered();
	void OnDisabled();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_WB_Button02_FillColor(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}


