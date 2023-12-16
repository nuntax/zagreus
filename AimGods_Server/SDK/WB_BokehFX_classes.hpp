#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x268 - 0x230)
// WidgetBlueprintGeneratedClass WB_BokehFX.WB_BokehFX_C
class UWB_BokehFX_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UOverlay*                              OV_Content;                                        // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UOverlaySlot*>                  OV_SlotArray;                                      // 0x240(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UWB_BokehChild_C*>              BokehChilds;                                       // 0x250(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
	float                                        HorizontalValue;                                   // 0x260(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        VerticalValue;                                     // 0x264(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWB_BokehFX_C* GetDefaultObj();

	void CreateBokehFX(const struct FLinearColor& Color, enum class EJustification EJustification);
	void ExecuteUbergraph_WB_BokehFX(int32 EntryPoint, bool CallFunc_RandomBool_ReturnValue, float Temp_float_Variable, float Temp_float_Variable_1, const struct FLinearColor& K2Node_CustomEvent_Color, enum class EJustification K2Node_CustomEvent_EJustification, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, int32 Temp_int_Loop_Counter_Variable, float CallFunc_RandomFloatInRange_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float Temp_float_Variable_2, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_RandomIntegerInRange_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UWB_BokehChild_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWB_BokehChild_C* CallFunc_Create_ReturnValue, const struct FLinearColor& K2Node_MakeStruct_LinearColor, int32 CallFunc_Array_Add_ReturnValue, enum class EJustification Temp_byte_Variable, class UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue, float K2Node_Select_Default, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, float CallFunc_RandomFloatInRange_ReturnValue_1, bool Temp_bool_IsClosed_Variable, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, float CallFunc_MakeLiteralFloat_ReturnValue, float CallFunc_MakeLiteralFloat_ReturnValue_1, float CallFunc_Abs_ReturnValue, float CallFunc_Abs_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue_2, float CallFunc_RandomFloatInRange_ReturnValue_3, bool CallFunc_RandomBool_ReturnValue_1, const struct FMargin& K2Node_MakeStruct_Margin, const struct FMargin& K2Node_MakeStruct_Margin_1, const struct FMargin& K2Node_MakeStruct_Margin_2, const struct FMargin& K2Node_MakeStruct_Margin_3, bool CallFunc_RandomBool_ReturnValue_2, const struct FMargin& K2Node_Select_Default_1, const struct FMargin& K2Node_Select_Default_2, const struct FMargin& K2Node_Select_Default_3);
};

}


