#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8C (0x2BC - 0x230)
// WidgetBlueprintGeneratedClass WB_Button02_BlurShine.WB_Button02_BlurShine_C
class UWB_Button02_BlurShine_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      bLoop01;                                           // 0x238(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                               b_BlurredFrame;                                    // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          CP_Base;                                           // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_1;                                           // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_2;                                           // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_3;                                           // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_4;                                           // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_5;                                           // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_6;                                           // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_7;                                           // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               PreviewBorder;                                     // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EJustification                    EJustification;                                    // 0x298(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsClicked;                                        // 0x299(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1169[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Color_FX01_Hovered;                                // 0x29C(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Color_FX01_Clicked;                                // 0x2AC(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWB_Button02_BlurShine_C* GetDefaultObj();

	void SetBlurredFrameColor(const struct FLinearColor& Color);
	bool IsRightAligned(bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	bool IsCenterAligned(bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void OnHovered();
	void OnUnhovered();
	void OnClicked();
	void UpdateJustification(enum class EJustification EJustification);
	void ShowBaselinePreview(const struct FLinearColor& PreviewColor, float PreviewTime);
	void ExecuteUbergraph_WB_Button02_BlurShine(int32 EntryPoint, float CallFunc_RandomFloatInRange_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool Temp_bool_Variable, bool Temp_bool_Variable_1, const struct FLinearColor& K2Node_MakeStruct_LinearColor, int32 K2Node_Select_Default, enum class EUMGSequencePlayMode Temp_byte_Variable, const struct FLinearColor& K2Node_MakeStruct_LinearColor_1, int32 Temp_int_Variable_2, enum class EUMGSequencePlayMode Temp_byte_Variable_1, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, int32 Temp_int_Variable_3, bool Temp_bool_Variable_2, bool Temp_bool_IsClosed_Variable_1, enum class EUMGSequencePlayMode K2Node_Select_Default_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_Variable_3, int32 K2Node_Select_Default_2, enum class EJustification K2Node_CustomEvent_EJustification, const struct FLinearColor& K2Node_CustomEvent_PreviewColor, float K2Node_CustomEvent_PreviewTime, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, enum class EUMGSequencePlayMode Temp_byte_Variable_2, const struct FLinearColor& K2Node_MakeStruct_LinearColor_2, enum class EUMGSequencePlayMode Temp_byte_Variable_3, enum class EUMGSequencePlayMode K2Node_Select_Default_3, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
};

}


