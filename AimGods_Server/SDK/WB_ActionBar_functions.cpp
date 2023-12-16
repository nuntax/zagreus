#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_ActionBar.WB_ActionBar_C
// (None)

class UClass* UWB_ActionBar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_ActionBar_C");

	return Clss;
}


// WB_ActionBar_C WB_ActionBar.Default__WB_ActionBar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_ActionBar_C* UWB_ActionBar_C::GetDefaultObj()
{
	static class UWB_ActionBar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_ActionBar_C*>(UWB_ActionBar_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_ActionBar.WB_ActionBar_C.CheckAbilityActivationStatus
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                InOwningTag                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// enum class EAGAbilityInputID       InAbilityInput                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_ActionBarSlotAbilityInfoInActionBarSlotAbilityInfo                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              InCount                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       TempGameplayTagContainer                                         (Edit, BlueprintVisible)
// int32                              OwningTagCount                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_ActionBarSlotAbilityInfoActionBarSlotAbilityInfo                                         (Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
// struct FGameplayTag                OwningTag                                                        (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// enum class EAGAbilityInputID       AbilityInput                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_ActionBarSlotAbilityInfoCallFunc_Map_Find_Value                                          (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FGameplayTag>        CallFunc_BreakGameplayTagContainer_GameplayTags                  (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RemoveGameplayTag_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTagContainer       CallFunc_MakeLiteralGameplayTagContainer_ReturnValue             (None)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_ActionBarSlotAbilityInfoCallFunc_Map_Find_Value_1                                        (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetDebugStringFromGameplayTagContainer_ReturnValue      (ZeroConstructor, HasGetValueTypeHash)
// struct FGameplayAbilitySpec        CallFunc_BP_FindAbilitySpecFromClass_ReturnValue                 (None)
// struct FGameplayTagContainer       CallFunc_GetAbilityActivationBlockedTags_ReturnValue             (None)
// bool                               CallFunc_HasTag_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_ActionBarSlotAbilityInfoCallFunc_Map_Find_Value_2                                        (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_ActionBar_C::CheckAbilityActivationStatus(const struct FGameplayTag& InOwningTag, enum class EAGAbilityInputID InAbilityInput, struct FStruct_ActionBarSlotAbilityInfo& InActionBarSlotAbilityInfo, int32 InCount, const struct FGameplayTagContainer& TempGameplayTagContainer, int32 OwningTagCount, const struct FStruct_ActionBarSlotAbilityInfo& ActionBarSlotAbilityInfo, const struct FGameplayTag& OwningTag, enum class EAGAbilityInputID AbilityInput, const struct FStruct_ActionBarSlotAbilityInfo& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_RemoveGameplayTag_ReturnValue, const struct FGameplayTagContainer& CallFunc_MakeLiteralGameplayTagContainer_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct FStruct_ActionBarSlotAbilityInfo& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, const class FString& CallFunc_GetDebugStringFromGameplayTagContainer_ReturnValue, const struct FGameplayAbilitySpec& CallFunc_BP_FindAbilitySpecFromClass_ReturnValue, const struct FGameplayTagContainer& CallFunc_GetAbilityActivationBlockedTags_ReturnValue, bool CallFunc_HasTag_ReturnValue, const struct FStruct_ActionBarSlotAbilityInfo& CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_ActionBar_C", "CheckAbilityActivationStatus");

	Params::UWB_ActionBar_C_CheckAbilityActivationStatus_Params Parms{};

	Parms.InOwningTag = InOwningTag;
	Parms.InAbilityInput = InAbilityInput;
	Parms.InActionBarSlotAbilityInfo = InActionBarSlotAbilityInfo;
	Parms.InCount = InCount;
	Parms.TempGameplayTagContainer = TempGameplayTagContainer;
	Parms.OwningTagCount = OwningTagCount;
	Parms.ActionBarSlotAbilityInfo = ActionBarSlotAbilityInfo;
	Parms.OwningTag = OwningTag;
	Parms.AbilityInput = AbilityInput;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_BreakGameplayTagContainer_GameplayTags = CallFunc_BreakGameplayTagContainer_GameplayTags;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_RemoveGameplayTag_ReturnValue = CallFunc_RemoveGameplayTag_ReturnValue;
	Parms.CallFunc_MakeLiteralGameplayTagContainer_ReturnValue = CallFunc_MakeLiteralGameplayTagContainer_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_GetDebugStringFromGameplayTagContainer_ReturnValue = CallFunc_GetDebugStringFromGameplayTagContainer_ReturnValue;
	Parms.CallFunc_BP_FindAbilitySpecFromClass_ReturnValue = CallFunc_BP_FindAbilitySpecFromClass_ReturnValue;
	Parms.CallFunc_GetAbilityActivationBlockedTags_ReturnValue = CallFunc_GetAbilityActivationBlockedTags_ReturnValue;
	Parms.CallFunc_HasTag_ReturnValue = CallFunc_HasTag_ReturnValue;
	Parms.CallFunc_Map_Find_Value_2 = CallFunc_Map_Find_Value_2;
	Parms.CallFunc_Map_Find_ReturnValue_2 = CallFunc_Map_Find_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_ActionBar.WB_ActionBar_C.OnOwnedTagChanged_D84337954CD10C215BAB2A89C4B2221E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                OwningTag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ActionBar_C::OnOwnedTagChanged_D84337954CD10C215BAB2A89C4B2221E(const struct FGameplayTag& OwningTag, int32 Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_ActionBar_C", "OnOwnedTagChanged_D84337954CD10C215BAB2A89C4B2221E");

	Params::UWB_ActionBar_C_OnOwnedTagChanged_D84337954CD10C215BAB2A89C4B2221E_Params Parms{};

	Parms.OwningTag = OwningTag;
	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_ActionBar.WB_ActionBar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWB_ActionBar_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_ActionBar_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_ActionBar.WB_ActionBar_C.On Ability Added
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent*     AbilitySystemComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      GameplayAbilityClass                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAGAbilityInputID       InputID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ActionBar_C::On_Ability_Added(class UAbilitySystemComponent* AbilitySystemComponent, class UClass* GameplayAbilityClass, enum class EAGAbilityInputID InputID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_ActionBar_C", "On Ability Added");

	Params::UWB_ActionBar_C_On_Ability_Added_Params Parms{};

	Parms.AbilitySystemComponent = AbilitySystemComponent;
	Parms.GameplayAbilityClass = GameplayAbilityClass;
	Parms.InputID = InputID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_ActionBar.WB_ActionBar_C.Wait for Valid Data
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_ActionBar_C::Wait_for_Valid_Data()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_ActionBar_C", "Wait for Valid Data");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_ActionBar.WB_ActionBar_C.ListenForAbilitiesBeingBlocked
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_ActionBar_C::ListenForAbilitiesBeingBlocked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_ActionBar_C", "ListenForAbilitiesBeingBlocked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_ActionBar.WB_ActionBar_C.ListenForAbilitiesBeingUsed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_ActionBar_C::ListenForAbilitiesBeingUsed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_ActionBar_C", "ListenForAbilitiesBeingUsed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_ActionBar.WB_ActionBar_C.OnLocalAbilityInputPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAGAbilityInputID       AbilityInputID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ActionBar_C::OnLocalAbilityInputPressed(enum class EAGAbilityInputID AbilityInputID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_ActionBar_C", "OnLocalAbilityInputPressed");

	Params::UWB_ActionBar_C_OnLocalAbilityInputPressed_Params Parms{};

	Parms.AbilityInputID = AbilityInputID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_ActionBar.WB_ActionBar_C.ExecuteUbergraph_WB_ActionBar
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     K2Node_CustomEvent_AbilitySystemComponent                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_CustomEvent_GameplayAbilityClass                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAGAbilityInputID       K2Node_CustomEvent_InputID                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ZeroConstructor, ReferenceParm, ContainsInstancedReference)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_ActionBarSlot_C*         K2Node_DynamicCast_AsWB_Action_Bar_Slot                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_ActionBarSlotAbilityInfoK2Node_MakeStruct_Struct_ActionBarSlotAbilityInfo                (ContainsInstancedReference, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_AGPlayerState_C*         K2Node_DynamicCast_AsBP_AGPlayer_State                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EAGAbilityInputID>CallFunc_Map_Keys_Keys                                           (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EAGAbilityInputID       CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_ActionBarSlotAbilityInfoCallFunc_Map_Find_Value                                          (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_Map_Find_Value_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FStruct_ActionBarSlotAbilityInfo>CallFunc_Map_Values_Values                                       (ZeroConstructor, ReferenceParm, ContainsInstancedReference)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_ActionBarSlotAbilityInfoCallFunc_Array_Get_Item_2                                        (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue_1                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAsyncTaskOwnedTagChanged*   CallFunc_ListenForOwnedTagChange_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue_2                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAGAbilitySystemComponent*   K2Node_DynamicCast_AsAGAbility_System_Component                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EAGAbilityInputID       K2Node_CustomEvent_AbilityInputID                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_ActionBarSlotAbilityInfoCallFunc_Map_Find_Value_2                                        (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// struct FStruct_ActionBarSlotAbilityInfoK2Node_SetFieldsInStruct_StructOut                               (ContainsInstancedReference, HasGetValueTypeHash)
// TArray<enum class EAGAbilityInputID>CallFunc_Map_Keys_Keys_1                                         (ZeroConstructor, ReferenceParm)
// enum class EAGAbilityInputID       CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_ActionBarSlotAbilityInfoCallFunc_Map_Find_Value_3                                        (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_ActionBarSlotAbilityInfoCallFunc_Map_Find_Value_4                                        (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_ActionBarSlotAbilityInfoK2Node_SetFieldsInStruct_StructOut_1                             (ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_ActionBarSlotAbilityInfoCallFunc_Map_Find_Value_5                                        (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGameplayTag>        CallFunc_BreakGameplayTagContainer_GameplayTags                  (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue_3                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAGAbilitySystemComponent*   K2Node_DynamicCast_AsAGAbility_System_Component_1                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                Temp_struct_Variable                                             (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_CustomEvent_OwningTag                                     (NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Amount                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ActionBar_C::ExecuteUbergraph_WB_ActionBar(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Array_Index_Variable_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_3, class UAbilitySystemComponent* K2Node_CustomEvent_AbilitySystemComponent, class UClass* K2Node_CustomEvent_GameplayAbilityClass, enum class EAGAbilityInputID K2Node_CustomEvent_InputID, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UWB_ActionBarSlot_C* K2Node_DynamicCast_AsWB_Action_Bar_Slot, bool K2Node_DynamicCast_bSuccess, const struct FStruct_ActionBarSlotAbilityInfo& K2Node_MakeStruct_Struct_ActionBarSlotAbilityInfo, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class ABP_AGPlayerState_C* K2Node_DynamicCast_AsBP_AGPlayer_State, bool K2Node_DynamicCast_bSuccess_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, TArray<enum class EAGAbilityInputID>& CallFunc_Map_Keys_Keys, bool CallFunc_IsValid_ReturnValue, enum class EAGAbilityInputID CallFunc_Array_Get_Item_1, const struct FStruct_ActionBarSlotAbilityInfo& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UClass* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, TArray<struct FStruct_ActionBarSlotAbilityInfo>& CallFunc_Map_Values_Values, int32 Temp_int_Loop_Counter_Variable_3, const struct FStruct_ActionBarSlotAbilityInfo& CallFunc_Array_Get_Item_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue_2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_1, class UAsyncTaskOwnedTagChanged* CallFunc_ListenForOwnedTagChange_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_3, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class UAGAbilitySystemComponent* K2Node_DynamicCast_AsAGAbility_System_Component, bool K2Node_DynamicCast_bSuccess_2, enum class EAGAbilityInputID K2Node_CustomEvent_AbilityInputID, const struct FStruct_ActionBarSlotAbilityInfo& CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FStruct_ActionBarSlotAbilityInfo& K2Node_SetFieldsInStruct_StructOut, TArray<enum class EAGAbilityInputID>& CallFunc_Map_Keys_Keys_1, enum class EAGAbilityInputID CallFunc_Array_Get_Item_3, const struct FStruct_ActionBarSlotAbilityInfo& CallFunc_Map_Find_Value_3, bool CallFunc_Map_Find_ReturnValue_3, const struct FStruct_ActionBarSlotAbilityInfo& CallFunc_Map_Find_Value_4, bool CallFunc_Map_Find_ReturnValue_4, const struct FStruct_ActionBarSlotAbilityInfo& K2Node_SetFieldsInStruct_StructOut_1, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_3, const struct FStruct_ActionBarSlotAbilityInfo& CallFunc_Map_Find_Value_5, bool CallFunc_Map_Find_ReturnValue_5, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_4, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags, int32 CallFunc_Array_Length_ReturnValue_4, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_3, bool CallFunc_Greater_IntInt_ReturnValue, class UAGAbilitySystemComponent* K2Node_DynamicCast_AsAGAbility_System_Component_1, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_LessEqual_FloatFloat_ReturnValue, const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_BooleanAND_ReturnValue, int32 Temp_int_Variable, const struct FGameplayTag& K2Node_CustomEvent_OwningTag, int32 K2Node_CustomEvent_Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_ActionBar_C", "ExecuteUbergraph_WB_ActionBar");

	Params::UWB_ActionBar_C_ExecuteUbergraph_WB_ActionBar_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.K2Node_CustomEvent_AbilitySystemComponent = K2Node_CustomEvent_AbilitySystemComponent;
	Parms.K2Node_CustomEvent_GameplayAbilityClass = K2Node_CustomEvent_GameplayAbilityClass;
	Parms.K2Node_CustomEvent_InputID = K2Node_CustomEvent_InputID;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsWB_Action_Bar_Slot = K2Node_DynamicCast_AsWB_Action_Bar_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_MakeStruct_Struct_ActionBarSlotAbilityInfo = K2Node_MakeStruct_Struct_ActionBarSlotAbilityInfo;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_AGPlayer_State = K2Node_DynamicCast_AsBP_AGPlayer_State;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_1 = CallFunc_GetOwningPlayer_ReturnValue_1;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_2 = CallFunc_GetOwningPlayer_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue_1 = CallFunc_GetAbilitySystemComponent_ReturnValue_1;
	Parms.CallFunc_ListenForOwnedTagChange_ReturnValue = CallFunc_ListenForOwnedTagChange_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_3 = CallFunc_GetOwningPlayer_ReturnValue_3;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue_2 = CallFunc_GetAbilitySystemComponent_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsAGAbility_System_Component = K2Node_DynamicCast_AsAGAbility_System_Component;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_CustomEvent_AbilityInputID = K2Node_CustomEvent_AbilityInputID;
	Parms.CallFunc_Map_Find_Value_2 = CallFunc_Map_Find_Value_2;
	Parms.CallFunc_Map_Find_ReturnValue_2 = CallFunc_Map_Find_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_SetFieldsInStruct_StructOut = K2Node_SetFieldsInStruct_StructOut;
	Parms.CallFunc_Map_Keys_Keys_1 = CallFunc_Map_Keys_Keys_1;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Map_Find_Value_3 = CallFunc_Map_Find_Value_3;
	Parms.CallFunc_Map_Find_ReturnValue_3 = CallFunc_Map_Find_ReturnValue_3;
	Parms.CallFunc_Map_Find_Value_4 = CallFunc_Map_Find_Value_4;
	Parms.CallFunc_Map_Find_ReturnValue_4 = CallFunc_Map_Find_ReturnValue_4;
	Parms.K2Node_SetFieldsInStruct_StructOut_1 = K2Node_SetFieldsInStruct_StructOut_1;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_Map_Find_Value_5 = CallFunc_Map_Find_Value_5;
	Parms.CallFunc_Map_Find_ReturnValue_5 = CallFunc_Map_Find_ReturnValue_5;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_4 = CallFunc_GetOwningPlayer_ReturnValue_4;
	Parms.CallFunc_BreakGameplayTagContainer_GameplayTags = CallFunc_BreakGameplayTagContainer_GameplayTags;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue_3 = CallFunc_GetAbilitySystemComponent_ReturnValue_3;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsAGAbility_System_Component_1 = K2Node_DynamicCast_AsAGAbility_System_Component_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_CustomEvent_OwningTag = K2Node_CustomEvent_OwningTag;
	Parms.K2Node_CustomEvent_Amount = K2Node_CustomEvent_Amount;

	UObject::ProcessEvent(Func, &Parms);

}

}


