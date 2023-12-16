#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xFD (0x32D - 0x230)
// WidgetBlueprintGeneratedClass WB_Button02_Frame.WB_Button02_Frame_C
class UWB_Button02_Frame_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      FrameFX_Opacity;                                   // 0x238(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                               b_FrameColor;                                      // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               b_FrameFX_Shine_Color;                             // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          CP_Base;                                           // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_1;                                           // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_2;                                           // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_3;                                           // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_4;                                           // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_5;                                           // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_6;                                           // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_7;                                           // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImgFX_Bottom;                                      // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImgFX_Left;                                        // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImgFX_Right;                                       // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImgFX_Top;                                         // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        FFX_Shine_InterpValue;                             // 0x2B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FFX_Shine_TimeSteps;                               // 0x2BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          FFX_Shine_Timer;                                   // 0x2C0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        FFX_Shine_Time;                                    // 0x2C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FFX_Shine_InterpTarget;                            // 0x2CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        FFX_Shine_RandomIndex;                             // 0x2D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_119E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              FFX_Shine_CurrentDynamicMaterial;                  // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                FFX_Shine_CurrentImage;                            // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bUseShine;                                         // 0x2E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_119F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          FrameColor_Normal;                                 // 0x2EC(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          FrameColor_Hovered;                                // 0x2FC(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          FrameColor_Clicked;                                // 0x30C(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          FrameColor_Disabled;                               // 0x31C(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UpdateDynShine;                                    // 0x32C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UWB_Button02_Frame_C* GetDefaultObj();

	void Set_UseShine(bool bUseShine);
	void Set_FrameColor(const struct FLinearColor& FrameColor);
	void Set_FrameShineColor(const struct FLinearColor& FrameShineColor);
	void GetImageDynamicMaterial(class UMaterialInstanceDynamic** DynamicMaterial, class UImage** Image, int32 Temp_int_Variable, class UImage* K2Node_Select_Default, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
	void CreateShine();
	void Construct();
	void OnHovered();
	void OnClicked();
	void OnUnhovered();
	void OnDisabled();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void UpdateDynamicShine();
	void ResetTimer();
	void ExecuteUbergraph_WB_Button02_Frame(int32 EntryPoint, bool CallFunc_Greater_FloatFloat_ReturnValue, float Temp_float_Variable, float Temp_float_Variable_1, int32 Temp_int_Variable, bool Temp_bool_Variable, TArray<class UImage*>& K2Node_MakeArray_Array, int32 CallFunc_Array_Length_ReturnValue, float K2Node_Select_Default, int32 Temp_int_Variable_1, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, enum class EUMGSequencePlayMode Temp_byte_Variable, bool Temp_bool_Variable_1, int32 Temp_int_Array_Index_Variable, int32 K2Node_Select_Default_1, class UImage* CallFunc_Array_Get_Item, enum class EUMGSequencePlayMode Temp_byte_Variable_1, const struct FLinearColor& K2Node_MakeStruct_LinearColor, bool Temp_bool_Variable_2, int32 Temp_int_Variable_2, enum class EUMGSequencePlayMode K2Node_Select_Default_2, bool CallFunc_IsValid_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_IsGamePaused_ReturnValue, int32 Temp_int_Variable_3, bool CallFunc_IsGamePaused_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable_3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 K2Node_Select_Default_3, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_FClamp_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, enum class EUMGSequencePlayMode Temp_byte_Variable_2, float Temp_float_Variable_2, class UMaterialInstanceDynamic* CallFunc_GetImageDynamicMaterial_DynamicMaterial, class UImage* CallFunc_GetImageDynamicMaterial_Image, const struct FLinearColor& K2Node_MakeStruct_LinearColor_1, enum class EUMGSequencePlayMode Temp_byte_Variable_3, float CallFunc_Subtract_FloatFloat_ReturnValue, float Temp_float_Variable_3, bool Temp_bool_Variable_4, enum class EUMGSequencePlayMode K2Node_Select_Default_4, int32 CallFunc_RandomIntegerInRange_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, int32 CallFunc_RandomIntegerInRange_ReturnValue_1, int32 CallFunc_RandomIntegerInRange_ReturnValue_2, int32 CallFunc_RandomIntegerInRange_ReturnValue_3, int32 CallFunc_RandomIntegerInRange_ReturnValue_4, bool Temp_bool_Variable_5, int32 CallFunc_RandomIntegerInRange_ReturnValue_5, float K2Node_Select_Default_5, float CallFunc_FInterpTo_Constant_ReturnValue);
};

}


