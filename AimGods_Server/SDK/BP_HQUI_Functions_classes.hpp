#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BP_HQUI_Functions.BP_HQUI_Functions_C
class UBP_HQUI_Functions_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBP_HQUI_Functions_C* GetDefaultObj();

	void HandleResponsiveHovering(bool bResponsiveHovering, class UWB_NativeButton_C* ButtonToFocus, class APlayerController* OwningPlayer, class UObject* __WorldContext);
	void UnhoverAllNativeButtons(class UWB_NativeButton_C* Exception, class UObject* __WorldContext, TArray<class UWB_NativeButton_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class UWB_NativeButton_C* CallFunc_Array_Get_Item, bool CallFunc_GetIsEnabled_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void GetPC_InputDetect(class UObject* __WorldContext, class ABP_PC_InputDetect_C** AsPC_Input_Detect, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ABP_PC_InputDetect_C* K2Node_DynamicCast_AsBP_PC_Input_Detect, bool K2Node_DynamicCast_bSuccess);
	void SetRightInputType(const struct FKey& InputKey, class UObject* __WorldContext, struct FKey* LastPressed_Key, const struct FKey& CallFunc_FindInputType_LastPressed_Key, enum class EInputType CallFunc_FindInputType_InputType);
	void FindInputType(const struct FKey& InputKey, class UObject* __WorldContext, struct FKey* LastPressed_Key, enum class EInputType* InputType, bool bHasFound, enum class EInputType Input_Type, const struct FKey& LastPressedKey, TArray<struct FKey>& CallFunc_GetVRControllerKeys_Oculus_VR_Keys, TArray<struct FKey>& CallFunc_GetKeyboardKeys_KeyboardKeys, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, TArray<struct FKey>& CallFunc_GetMouseKeys_MouseKeys, TArray<struct FKey>& CallFunc_GetGamePadKeys_GamepadKeys, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_3, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, const struct FKey& CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable_1, bool Temp_bool_True_if_break_was_hit_Variable_1, const struct FKey& CallFunc_Array_Get_Item_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable_2, int32 Temp_int_Array_Index_Variable_2, const struct FKey& CallFunc_Array_Get_Item_2, bool CallFunc_EqualEqual_KeyKey_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, int32 Temp_int_Loop_Counter_Variable_3, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_2, int32 Temp_int_Array_Index_Variable_3, const struct FKey& CallFunc_Array_Get_Item_3, bool CallFunc_EqualEqual_KeyKey_ReturnValue_3, bool Temp_bool_True_if_break_was_hit_Variable_3, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_3);
	void GetVRControllerKeys(class UObject* __WorldContext, TArray<struct FKey>* Oculus_VR_Keys, TArray<struct FKey>& K2Node_MakeArray_Array);
	void GetMouseKeys(class UObject* __WorldContext, TArray<struct FKey>* MouseKeys, TArray<struct FKey>& K2Node_MakeArray_Array);
	void GetKeyboardKeys(class UObject* __WorldContext, TArray<struct FKey>* KeyboardKeys, TArray<struct FKey>& K2Node_MakeArray_Array);
	void GetGamepadKeys(class UObject* __WorldContext, TArray<struct FKey>* GamepadKeys, TArray<struct FKey>& K2Node_MakeArray_Array);
	void GetShowMouse(class UObject* __WorldContext, bool* bShowMouse, class UBP_InputDetect_Instance_C* CallFunc_GetInputDetectGameInstance_AsInput_Detect_Instance);
	void SetShowMouse(bool bShowMouse, class UObject* __WorldContext, class UBP_InputDetect_Instance_C* CallFunc_GetInputDetectGameInstance_AsInput_Detect_Instance, bool CallFunc_IsValid_ReturnValue);
	void UnbindOnInputTypeSwitched(UDelegateProperty_& Event, class UObject* __WorldContext, class UBP_InputDetect_Instance_C* CallFunc_GetInputDetectGameInstance_AsInput_Detect_Instance, bool CallFunc_IsValid_ReturnValue);
	void BindOnInputTypeSwitched(UDelegateProperty_& Event, class UObject* __WorldContext, class UBP_InputDetect_Instance_C* CallFunc_GetInputDetectGameInstance_AsInput_Detect_Instance, bool CallFunc_IsValid_ReturnValue);
	void SetInputType(enum class EInputType InputType, class UObject* __WorldContext, class UBP_InputDetect_Instance_C* CallFunc_GetInputDetectGameInstance_AsInput_Detect_Instance, bool CallFunc_IsValid_ReturnValue);
	void GetInputType(class UObject* __WorldContext, enum class EInputType* InputType, class UBP_InputDetect_Instance_C* CallFunc_GetInputDetectGameInstance_AsInput_Detect_Instance);
	void GetInputDetectGameInstance(class UObject* __WorldContext, class UBP_InputDetect_Instance_C** AsInput_Detect_Instance, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_InputDetect_Instance_C* K2Node_DynamicCast_AsBP_Input_Detect_Instance, bool K2Node_DynamicCast_bSuccess);
};

}


