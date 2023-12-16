#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3C (0x344 - 0x308)
// BlueprintGeneratedClass BP_AGHUD.BP_AGHUD_C
class ABP_AGHUD_C : public AHUD
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x308(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x310(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             ScreenCenter;                                      // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCrosshairParams                      CrosshairSettings;                                 // 0x320(0x24)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_AGHUD_C* GetDefaultObj();

	void DrawCrosshairPiece(const struct FVector2D& OffsetBegin, const struct FVector2D& OffsetEnd, bool Is_Outline_, float CallFunc_SelectFloat_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue_1, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1);
	void Draw_Crosshair(bool Is_Outline_);
	void ReceiveDrawHUD(int32 SizeX, int32 SizeY);
	void ExecuteUbergraph_BP_AGHUD(int32 EntryPoint, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_3, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_4, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_5, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue_2, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue_3, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_6, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_7, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue_4, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue_5, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue_6, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue_7, bool K2Node_CustomEvent_Is_Outline_, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_SelectFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, int32 K2Node_Event_SizeX, int32 K2Node_Event_SizeY);
};

}


