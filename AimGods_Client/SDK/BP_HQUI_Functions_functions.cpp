#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_HQUI_Functions.BP_HQUI_Functions_C
// (None)

class UClass* UBP_HQUI_Functions_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_HQUI_Functions_C");

	return Clss;
}


// BP_HQUI_Functions_C BP_HQUI_Functions.Default__BP_HQUI_Functions_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_HQUI_Functions_C* UBP_HQUI_Functions_C::GetDefaultObj()
{
	static class UBP_HQUI_Functions_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_HQUI_Functions_C*>(UBP_HQUI_Functions_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_HQUI_Functions.BP_HQUI_Functions_C.HandleResponsiveHovering
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bResponsiveHovering                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWB_NativeButton_C*          ButtonToFocus                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           OwningPlayer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HQUI_Functions_C::HandleResponsiveHovering(bool bResponsiveHovering, class UWB_NativeButton_C* ButtonToFocus, class APlayerController* OwningPlayer, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HQUI_Functions_C", "HandleResponsiveHovering");

	Params::UBP_HQUI_Functions_C_HandleResponsiveHovering_Params Parms{};

	Parms.bResponsiveHovering = bResponsiveHovering;
	Parms.ButtonToFocus = ButtonToFocus;
	Parms.OwningPlayer = OwningPlayer;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HQUI_Functions.BP_HQUI_Functions_C.UnhoverAllNativeButtons
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWB_NativeButton_C*          Exception                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWB_NativeButton_C*>  CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ZeroConstructor, ReferenceParm, ContainsInstancedReference)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_NativeButton_C*          CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HQUI_Functions_C::UnhoverAllNativeButtons(class UWB_NativeButton_C* Exception, class UObject* __WorldContext, TArray<class UWB_NativeButton_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class UWB_NativeButton_C* CallFunc_Array_Get_Item, bool CallFunc_GetIsEnabled_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HQUI_Functions_C", "UnhoverAllNativeButtons");

	Params::UBP_HQUI_Functions_C_UnhoverAllNativeButtons_Params Parms{};

	Parms.Exception = Exception;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetIsEnabled_ReturnValue = CallFunc_GetIsEnabled_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HQUI_Functions.BP_HQUI_Functions_C.GetPC_InputDetect
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PC_InputDetect_C*        AsPC_Input_Detect                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PC_InputDetect_C*        K2Node_DynamicCast_AsBP_PC_Input_Detect                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_HQUI_Functions_C::GetPC_InputDetect(class UObject* __WorldContext, class ABP_PC_InputDetect_C** AsPC_Input_Detect, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ABP_PC_InputDetect_C* K2Node_DynamicCast_AsBP_PC_Input_Detect, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HQUI_Functions_C", "GetPC_InputDetect");

	Params::UBP_HQUI_Functions_C_GetPC_InputDetect_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_PC_Input_Detect = K2Node_DynamicCast_AsBP_PC_Input_Detect;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (AsPC_Input_Detect != nullptr)
		*AsPC_Input_Detect = Parms.AsPC_Input_Detect;

}


// Function BP_HQUI_Functions.BP_HQUI_Functions_C.SetRightInputType
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                        InputKey                                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        LastPressed_Key                                                  (Parm, OutParm, HasGetValueTypeHash)
// struct FKey                        CallFunc_FindInputType_LastPressed_Key                           (HasGetValueTypeHash)
// enum class EInputType              CallFunc_FindInputType_InputType                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HQUI_Functions_C::SetRightInputType(const struct FKey& InputKey, class UObject* __WorldContext, struct FKey* LastPressed_Key, const struct FKey& CallFunc_FindInputType_LastPressed_Key, enum class EInputType CallFunc_FindInputType_InputType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HQUI_Functions_C", "SetRightInputType");

	Params::UBP_HQUI_Functions_C_SetRightInputType_Params Parms{};

	Parms.InputKey = InputKey;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_FindInputType_LastPressed_Key = CallFunc_FindInputType_LastPressed_Key;
	Parms.CallFunc_FindInputType_InputType = CallFunc_FindInputType_InputType;

	UObject::ProcessEvent(Func, &Parms);

	if (LastPressed_Key != nullptr)
		*LastPressed_Key = std::move(Parms.LastPressed_Key);

}


// Function BP_HQUI_Functions.BP_HQUI_Functions_C.FindInputType
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                        InputKey                                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        LastPressed_Key                                                  (Parm, OutParm, HasGetValueTypeHash)
// enum class EInputType              InputType                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bHasFound                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputType              Input_Type                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        LastPressedKey                                                   (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<struct FKey>                CallFunc_GetVRControllerKeys_Oculus_VR_Keys                      (ZeroConstructor, ReferenceParm)
// TArray<struct FKey>                CallFunc_GetKeyboardKeys_KeyboardKeys                            (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FKey>                CallFunc_GetMouseKeys_MouseKeys                                  (ZeroConstructor, ReferenceParm)
// TArray<struct FKey>                CallFunc_GetGamePadKeys_GamepadKeys                              (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        CallFunc_Array_Get_Item_1                                        (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        CallFunc_Array_Get_Item_2                                        (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        CallFunc_Array_Get_Item_3                                        (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_True_if_break_was_hit_Variable_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_HQUI_Functions_C::FindInputType(const struct FKey& InputKey, class UObject* __WorldContext, struct FKey* LastPressed_Key, enum class EInputType* InputType, bool bHasFound, enum class EInputType Input_Type, const struct FKey& LastPressedKey, TArray<struct FKey>& CallFunc_GetVRControllerKeys_Oculus_VR_Keys, TArray<struct FKey>& CallFunc_GetKeyboardKeys_KeyboardKeys, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, TArray<struct FKey>& CallFunc_GetMouseKeys_MouseKeys, TArray<struct FKey>& CallFunc_GetGamePadKeys_GamepadKeys, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_3, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, const struct FKey& CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable_1, bool Temp_bool_True_if_break_was_hit_Variable_1, const struct FKey& CallFunc_Array_Get_Item_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable_2, int32 Temp_int_Array_Index_Variable_2, const struct FKey& CallFunc_Array_Get_Item_2, bool CallFunc_EqualEqual_KeyKey_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, int32 Temp_int_Loop_Counter_Variable_3, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_2, int32 Temp_int_Array_Index_Variable_3, const struct FKey& CallFunc_Array_Get_Item_3, bool CallFunc_EqualEqual_KeyKey_ReturnValue_3, bool Temp_bool_True_if_break_was_hit_Variable_3, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HQUI_Functions_C", "FindInputType");

	Params::UBP_HQUI_Functions_C_FindInputType_Params Parms{};

	Parms.InputKey = InputKey;
	Parms.__WorldContext = __WorldContext;
	Parms.bHasFound = bHasFound;
	Parms.Input_Type = Input_Type;
	Parms.LastPressedKey = LastPressedKey;
	Parms.CallFunc_GetVRControllerKeys_Oculus_VR_Keys = CallFunc_GetVRControllerKeys_Oculus_VR_Keys;
	Parms.CallFunc_GetKeyboardKeys_KeyboardKeys = CallFunc_GetKeyboardKeys_KeyboardKeys;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_GetMouseKeys_MouseKeys = CallFunc_GetMouseKeys_MouseKeys;
	Parms.CallFunc_GetGamePadKeys_GamepadKeys = CallFunc_GetGamePadKeys_GamepadKeys;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_bool_True_if_break_was_hit_Variable_1 = Temp_bool_True_if_break_was_hit_Variable_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_1 = CallFunc_EqualEqual_KeyKey_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable_2 = Temp_bool_True_if_break_was_hit_Variable_2;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_2 = CallFunc_EqualEqual_KeyKey_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_3 = CallFunc_EqualEqual_KeyKey_ReturnValue_3;
	Parms.Temp_bool_True_if_break_was_hit_Variable_3 = Temp_bool_True_if_break_was_hit_Variable_3;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

	if (LastPressed_Key != nullptr)
		*LastPressed_Key = std::move(Parms.LastPressed_Key);

	if (InputType != nullptr)
		*InputType = Parms.InputType;

}


// Function BP_HQUI_Functions.BP_HQUI_Functions_C.GetVRControllerKeys
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FKey>                Oculus_VR_Keys                                                   (Parm, OutParm, ZeroConstructor)
// TArray<struct FKey>                K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)

void UBP_HQUI_Functions_C::GetVRControllerKeys(class UObject* __WorldContext, TArray<struct FKey>* Oculus_VR_Keys, TArray<struct FKey>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HQUI_Functions_C", "GetVRControllerKeys");

	Params::UBP_HQUI_Functions_C_GetVRControllerKeys_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (Oculus_VR_Keys != nullptr)
		*Oculus_VR_Keys = std::move(Parms.Oculus_VR_Keys);

}


// Function BP_HQUI_Functions.BP_HQUI_Functions_C.GetMouseKeys
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FKey>                MouseKeys                                                        (Parm, OutParm, ZeroConstructor)
// TArray<struct FKey>                K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)

void UBP_HQUI_Functions_C::GetMouseKeys(class UObject* __WorldContext, TArray<struct FKey>* MouseKeys, TArray<struct FKey>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HQUI_Functions_C", "GetMouseKeys");

	Params::UBP_HQUI_Functions_C_GetMouseKeys_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (MouseKeys != nullptr)
		*MouseKeys = std::move(Parms.MouseKeys);

}


// Function BP_HQUI_Functions.BP_HQUI_Functions_C.GetKeyboardKeys
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FKey>                KeyboardKeys                                                     (Parm, OutParm, ZeroConstructor)
// TArray<struct FKey>                K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)

void UBP_HQUI_Functions_C::GetKeyboardKeys(class UObject* __WorldContext, TArray<struct FKey>* KeyboardKeys, TArray<struct FKey>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HQUI_Functions_C", "GetKeyboardKeys");

	Params::UBP_HQUI_Functions_C_GetKeyboardKeys_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (KeyboardKeys != nullptr)
		*KeyboardKeys = std::move(Parms.KeyboardKeys);

}


// Function BP_HQUI_Functions.BP_HQUI_Functions_C.GetGamepadKeys
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FKey>                GamepadKeys                                                      (Parm, OutParm, ZeroConstructor)
// TArray<struct FKey>                K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)

void UBP_HQUI_Functions_C::GetGamepadKeys(class UObject* __WorldContext, TArray<struct FKey>* GamepadKeys, TArray<struct FKey>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HQUI_Functions_C", "GetGamepadKeys");

	Params::UBP_HQUI_Functions_C_GetGamepadKeys_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (GamepadKeys != nullptr)
		*GamepadKeys = std::move(Parms.GamepadKeys);

}


// Function BP_HQUI_Functions.BP_HQUI_Functions_C.GetShowMouse
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bShowMouse                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_InputDetect_Instance_C*  CallFunc_GetInputDetectGameInstance_AsInput_Detect_Instance      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HQUI_Functions_C::GetShowMouse(class UObject* __WorldContext, bool* bShowMouse, class UBP_InputDetect_Instance_C* CallFunc_GetInputDetectGameInstance_AsInput_Detect_Instance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HQUI_Functions_C", "GetShowMouse");

	Params::UBP_HQUI_Functions_C_GetShowMouse_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetInputDetectGameInstance_AsInput_Detect_Instance = CallFunc_GetInputDetectGameInstance_AsInput_Detect_Instance;

	UObject::ProcessEvent(Func, &Parms);

	if (bShowMouse != nullptr)
		*bShowMouse = Parms.bShowMouse;

}


// Function BP_HQUI_Functions.BP_HQUI_Functions_C.SetShowMouse
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bShowMouse                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_InputDetect_Instance_C*  CallFunc_GetInputDetectGameInstance_AsInput_Detect_Instance      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_HQUI_Functions_C::SetShowMouse(bool bShowMouse, class UObject* __WorldContext, class UBP_InputDetect_Instance_C* CallFunc_GetInputDetectGameInstance_AsInput_Detect_Instance, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HQUI_Functions_C", "SetShowMouse");

	Params::UBP_HQUI_Functions_C_SetShowMouse_Params Parms{};

	Parms.bShowMouse = bShowMouse;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetInputDetectGameInstance_AsInput_Detect_Instance = CallFunc_GetInputDetectGameInstance_AsInput_Detect_Instance;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HQUI_Functions.BP_HQUI_Functions_C.UnbindOnInputTypeSwitched
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 Event                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_InputDetect_Instance_C*  CallFunc_GetInputDetectGameInstance_AsInput_Detect_Instance      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_HQUI_Functions_C::UnbindOnInputTypeSwitched(UDelegateProperty_& Event, class UObject* __WorldContext, class UBP_InputDetect_Instance_C* CallFunc_GetInputDetectGameInstance_AsInput_Detect_Instance, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HQUI_Functions_C", "UnbindOnInputTypeSwitched");

	Params::UBP_HQUI_Functions_C_UnbindOnInputTypeSwitched_Params Parms{};

	Parms.Event = Event;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetInputDetectGameInstance_AsInput_Detect_Instance = CallFunc_GetInputDetectGameInstance_AsInput_Detect_Instance;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HQUI_Functions.BP_HQUI_Functions_C.BindOnInputTypeSwitched
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 Event                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_InputDetect_Instance_C*  CallFunc_GetInputDetectGameInstance_AsInput_Detect_Instance      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_HQUI_Functions_C::BindOnInputTypeSwitched(UDelegateProperty_& Event, class UObject* __WorldContext, class UBP_InputDetect_Instance_C* CallFunc_GetInputDetectGameInstance_AsInput_Detect_Instance, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HQUI_Functions_C", "BindOnInputTypeSwitched");

	Params::UBP_HQUI_Functions_C_BindOnInputTypeSwitched_Params Parms{};

	Parms.Event = Event;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetInputDetectGameInstance_AsInput_Detect_Instance = CallFunc_GetInputDetectGameInstance_AsInput_Detect_Instance;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HQUI_Functions.BP_HQUI_Functions_C.SetInputType
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EInputType              InputType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_InputDetect_Instance_C*  CallFunc_GetInputDetectGameInstance_AsInput_Detect_Instance      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_HQUI_Functions_C::SetInputType(enum class EInputType InputType, class UObject* __WorldContext, class UBP_InputDetect_Instance_C* CallFunc_GetInputDetectGameInstance_AsInput_Detect_Instance, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HQUI_Functions_C", "SetInputType");

	Params::UBP_HQUI_Functions_C_SetInputType_Params Parms{};

	Parms.InputType = InputType;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetInputDetectGameInstance_AsInput_Detect_Instance = CallFunc_GetInputDetectGameInstance_AsInput_Detect_Instance;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HQUI_Functions.BP_HQUI_Functions_C.GetInputType
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInputType              InputType                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_InputDetect_Instance_C*  CallFunc_GetInputDetectGameInstance_AsInput_Detect_Instance      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HQUI_Functions_C::GetInputType(class UObject* __WorldContext, enum class EInputType* InputType, class UBP_InputDetect_Instance_C* CallFunc_GetInputDetectGameInstance_AsInput_Detect_Instance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HQUI_Functions_C", "GetInputType");

	Params::UBP_HQUI_Functions_C_GetInputType_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetInputDetectGameInstance_AsInput_Detect_Instance = CallFunc_GetInputDetectGameInstance_AsInput_Detect_Instance;

	UObject::ProcessEvent(Func, &Parms);

	if (InputType != nullptr)
		*InputType = Parms.InputType;

}


// Function BP_HQUI_Functions.BP_HQUI_Functions_C.GetInputDetectGameInstance
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_InputDetect_Instance_C*  AsInput_Detect_Instance                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_InputDetect_Instance_C*  K2Node_DynamicCast_AsBP_Input_Detect_Instance                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_HQUI_Functions_C::GetInputDetectGameInstance(class UObject* __WorldContext, class UBP_InputDetect_Instance_C** AsInput_Detect_Instance, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_InputDetect_Instance_C* K2Node_DynamicCast_AsBP_Input_Detect_Instance, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HQUI_Functions_C", "GetInputDetectGameInstance");

	Params::UBP_HQUI_Functions_C_GetInputDetectGameInstance_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Input_Detect_Instance = K2Node_DynamicCast_AsBP_Input_Detect_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (AsInput_Detect_Instance != nullptr)
		*AsInput_Detect_Instance = Parms.AsInput_Detect_Instance;

}

}


