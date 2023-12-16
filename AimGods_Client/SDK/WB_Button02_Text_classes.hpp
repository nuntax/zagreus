#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x39 (0x269 - 0x230)
// WidgetBlueprintGeneratedClass WB_Button02_Text.WB_Button02_Text_C
class UWB_Button02_Text_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            ButtonText;                                        // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HB_Text;                                           // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OV_IconLeft;                                       // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OV_IconRight;                                      // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SB_Icon_Left;                                      // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SB_Icon_Right;                                     // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EJustification                    EJustification;                                    // 0x268(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWB_Button02_Text_C* GetDefaultObj();

	struct FVector2D GetHB_Text_Size(const struct FGeometry& CallFunc_GetCachedGeometry_ReturnValue, const struct FVector2D& CallFunc_GetLocalSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, int32 CallFunc_Round_ReturnValue, int32 CallFunc_Round_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
	void UpdateFontInfo(class UFont* Font, class UFontFace* FontFace, int32 FontSize, const struct FLinearColor& Color);
	void AddHintIcon(class UClass* Widget20x20);
	void UpdateText(class FText InText);
	void UpdateJustification(enum class EJustification Justification);
	void ExecuteUbergraph_WB_Button02_Text(int32 EntryPoint, enum class EJustification Temp_byte_Variable, class UFont* K2Node_CustomEvent_Font, class UFontFace* K2Node_CustomEvent_FontFace, int32 K2Node_CustomEvent_FontSize, const struct FLinearColor& K2Node_CustomEvent_Color, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const class FString& CallFunc_GetDisplayName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, class UClass* K2Node_CustomEvent_Widget20x20, enum class ETextJustify Temp_byte_Variable_1, bool CallFunc_IsValidClass_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUserWidget* CallFunc_Create_ReturnValue, enum class EJustification Temp_byte_Variable_2, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, enum class EJustification Temp_byte_Variable_3, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo_1, class FText K2Node_CustomEvent_InText, enum class EHorizontalAlignment Temp_byte_Variable_4, enum class ETextJustify Temp_byte_Variable_5, enum class EJustification K2Node_CustomEvent_Justification, enum class ETextJustify Temp_byte_Variable_6, enum class EHorizontalAlignment Temp_byte_Variable_7, enum class ETextJustify K2Node_Select_Default, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_1, enum class EHorizontalAlignment Temp_byte_Variable_8, enum class EHorizontalAlignment K2Node_Select_Default_1, class UOverlay* K2Node_Select_Default_2, class UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue);
};

}


