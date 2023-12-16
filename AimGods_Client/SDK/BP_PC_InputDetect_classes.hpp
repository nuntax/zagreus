#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x5A0 - 0x568)
// BlueprintGeneratedClass BP_PC_InputDetect.BP_PC_InputDetect_C
class ABP_PC_InputDetect_C : public APlayerController
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x568(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FKey                                  LastPressedKey;                                    // 0x570(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FKey                                  AnyKey;                                            // 0x588(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_PC_InputDetect_C* GetDefaultObj();

	void FindRightInputType(const struct FKey& InputKey, struct FKey* LastPressedKey, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Array_Index_Variable_2, TArray<struct FKey>& CallFunc_GetGamePadKeys_GamepadKeys, TArray<struct FKey>& CallFunc_GetMouseKeys_MouseKeys, const struct FKey& CallFunc_Array_Get_Item, const struct FKey& CallFunc_Array_Get_Item_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, TArray<struct FKey>& CallFunc_GetKeyboardKeys_KeyboardKeys, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, TArray<struct FKey>& CallFunc_GetVRControllerKeys_Oculus_VR_Keys, int32 Temp_int_Array_Index_Variable_3, const struct FKey& CallFunc_Array_Get_Item_2, const struct FKey& CallFunc_Array_Get_Item_3, bool CallFunc_EqualEqual_KeyKey_ReturnValue_2, bool CallFunc_EqualEqual_KeyKey_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_3);
	bool GetIsMouseMoving(float CallFunc_GetInputMouseDelta_DeltaX, float CallFunc_GetInputMouseDelta_DeltaY, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2);
	void InpActEvt_AnyKey_K2Node_InputKeyEvent_0(const struct FKey& Key);
	void UpdateMouseCursor();
	void ExecuteUbergraph_BP_PC_InputDetect(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, const struct FIntPoint& CallFunc_GetDesktopResolution_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue_1, bool CallFunc_GetShowMouse_bShowMouse, enum class EInputType CallFunc_GetInputType_InputType, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_1, const struct FKey& K2Node_InputKeyEvent_Key, const struct FKey& CallFunc_FindRightInputType_LastPressedKey, bool Temp_bool_IsClosed_Variable_1);
};

}


