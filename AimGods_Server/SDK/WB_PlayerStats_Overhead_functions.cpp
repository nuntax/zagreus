#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_PlayerStats_Overhead.WB_PlayerStats_Overhead_C
// (None)

class UClass* UWB_PlayerStats_Overhead_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_PlayerStats_Overhead_C");

	return Clss;
}


// WB_PlayerStats_Overhead_C WB_PlayerStats_Overhead.Default__WB_PlayerStats_Overhead_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_PlayerStats_Overhead_C* UWB_PlayerStats_Overhead_C::GetDefaultObj()
{
	static class UWB_PlayerStats_Overhead_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_PlayerStats_Overhead_C*>(UWB_PlayerStats_Overhead_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_PlayerStats_Overhead.WB_PlayerStats_Overhead_C.Set Health Percent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute(ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute_1(ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UWB_PlayerStats_Overhead_C::Set_Health_Percent(class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute_1, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, float CallFunc_FMax_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, bool CallFunc_BooleanAND_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PlayerStats_Overhead_C", "Set Health Percent");

	Params::UWB_PlayerStats_Overhead_C_Set_Health_Percent_Params Parms{};

	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute = CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute;
	Parms.CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue = CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute_1 = CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute_1;
	Parms.CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue_1 = CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_PlayerStats_Overhead.WB_PlayerStats_Overhead_C.SelectSide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EHorizontalAlignment    Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHorizontalAlignment    Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHorizontalAlignment    Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOverlaySlot*                CallFunc_SlotAsOverlaySlot_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHorizontalAlignment    Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USizeBoxSlot*                CallFunc_SlotAsSizeBoxSlot_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USizeBoxSlot*                CallFunc_SlotAsSizeBoxSlot_ReturnValue_1                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHorizontalAlignment    K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHorizontalAlignment    K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PlayerStats_Overhead_C::SelectSide(bool Temp_bool_Variable, enum class EHorizontalAlignment Temp_byte_Variable, enum class EHorizontalAlignment Temp_byte_Variable_1, enum class EHorizontalAlignment Temp_byte_Variable_2, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, enum class EHorizontalAlignment Temp_byte_Variable_3, class USizeBoxSlot* CallFunc_SlotAsSizeBoxSlot_ReturnValue, bool Temp_bool_Variable_1, class USizeBoxSlot* CallFunc_SlotAsSizeBoxSlot_ReturnValue_1, int32 CallFunc_SelectInt_ReturnValue, enum class EHorizontalAlignment K2Node_Select_Default, enum class EHorizontalAlignment K2Node_Select_Default_1, int32 CallFunc_SelectInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PlayerStats_Overhead_C", "SelectSide");

	Params::UWB_PlayerStats_Overhead_C_SelectSide_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.CallFunc_SlotAsOverlaySlot_ReturnValue = CallFunc_SlotAsOverlaySlot_ReturnValue;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.CallFunc_SlotAsSizeBoxSlot_ReturnValue = CallFunc_SlotAsSizeBoxSlot_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_SlotAsSizeBoxSlot_ReturnValue_1 = CallFunc_SlotAsSizeBoxSlot_ReturnValue_1;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_SelectInt_ReturnValue_1 = CallFunc_SelectInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_PlayerStats_Overhead.WB_PlayerStats_Overhead_C.OnAttributeChanged_C67460624B6DD8FA943FB8818A5F571B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAttribute          Attribute                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              OldValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PlayerStats_Overhead_C::OnAttributeChanged_C67460624B6DD8FA943FB8818A5F571B(const struct FGameplayAttribute& Attribute, float NewValue, float OldValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PlayerStats_Overhead_C", "OnAttributeChanged_C67460624B6DD8FA943FB8818A5F571B");

	Params::UWB_PlayerStats_Overhead_C_OnAttributeChanged_C67460624B6DD8FA943FB8818A5F571B_Params Parms{};

	Parms.Attribute = Attribute;
	Parms.NewValue = NewValue;
	Parms.OldValue = OldValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_PlayerStats_Overhead.WB_PlayerStats_Overhead_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_PlayerStats_Overhead_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PlayerStats_Overhead_C", "PreConstruct");

	Params::UWB_PlayerStats_Overhead_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_PlayerStats_Overhead.WB_PlayerStats_Overhead_C.On Gameplay Effect Added
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent*     AbilitySystemComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameplayEffect*             AddedEffect                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectSpec         EffectSpec                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FActiveGameplayEffectHandle ActiveEffectHandle                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UWB_PlayerStats_Overhead_C::On_Gameplay_Effect_Added(class UAbilitySystemComponent* AbilitySystemComponent, class UGameplayEffect* AddedEffect, const struct FGameplayEffectSpec& EffectSpec, const struct FActiveGameplayEffectHandle& ActiveEffectHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PlayerStats_Overhead_C", "On Gameplay Effect Added");

	Params::UWB_PlayerStats_Overhead_C_On_Gameplay_Effect_Added_Params Parms{};

	Parms.AbilitySystemComponent = AbilitySystemComponent;
	Parms.AddedEffect = AddedEffect;
	Parms.EffectSpec = EffectSpec;
	Parms.ActiveEffectHandle = ActiveEffectHandle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_PlayerStats_Overhead.WB_PlayerStats_Overhead_C.On Gameplay Effect Removed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent*     AbilitySystemComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameplayEffect*             AddedEffect                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectSpec         EffectSpec                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FActiveGameplayEffectHandle ActiveEffectHandle                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UWB_PlayerStats_Overhead_C::On_Gameplay_Effect_Removed(class UAbilitySystemComponent* AbilitySystemComponent, class UGameplayEffect* AddedEffect, const struct FGameplayEffectSpec& EffectSpec, const struct FActiveGameplayEffectHandle& ActiveEffectHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PlayerStats_Overhead_C", "On Gameplay Effect Removed");

	Params::UWB_PlayerStats_Overhead_C_On_Gameplay_Effect_Removed_Params Parms{};

	Parms.AbilitySystemComponent = AbilitySystemComponent;
	Parms.AddedEffect = AddedEffect;
	Parms.EffectSpec = EffectSpec;
	Parms.ActiveEffectHandle = ActiveEffectHandle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_PlayerStats_Overhead.WB_PlayerStats_Overhead_C.Handle Attribute Change
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAttribute          Attribute                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// float                              OldValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PlayerStats_Overhead_C::Handle_Attribute_Change(const struct FGameplayAttribute& Attribute, float OldValue, float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PlayerStats_Overhead_C", "Handle Attribute Change");

	Params::UWB_PlayerStats_Overhead_C_Handle_Attribute_Change_Params Parms{};

	Parms.Attribute = Attribute;
	Parms.OldValue = OldValue;
	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_PlayerStats_Overhead.WB_PlayerStats_Overhead_C.Set Player
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_AGPlayerState_C*         Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PlayerStats_Overhead_C::Set_Player(class ABP_AGPlayerState_C* Player)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PlayerStats_Overhead_C", "Set Player");

	Params::UWB_PlayerStats_Overhead_C_Set_Player_Params Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_PlayerStats_Overhead.WB_PlayerStats_Overhead_C.ExecuteUbergraph_WB_PlayerStats_Overhead
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAttribute          K2Node_CustomEvent_Attribute_1                                   (HasGetValueTypeHash)
// float                              K2Node_CustomEvent_NewValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_OldValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAttribute          Temp_struct_Variable                                             (HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetPlayerName_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FString                      CallFunc_GetUniqueIdAsString_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsRedTeam_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     K2Node_CustomEvent_AbilitySystemComponent_1                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameplayEffect*             K2Node_CustomEvent_AddedEffect_1                                 (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectSpec         K2Node_CustomEvent_EffectSpec_1                                  (None)
// struct FActiveGameplayEffectHandle K2Node_CustomEvent_ActiveEffectHandle_1                          (NoDestructor, HasGetValueTypeHash)
// class UAGGameplayEffect*           K2Node_DynamicCast_AsAGGameplay_Effect                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UAbilitySystemComponent*     K2Node_CustomEvent_AbilitySystemComponent                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameplayEffect*             K2Node_CustomEvent_AddedEffect                                   (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectSpec         K2Node_CustomEvent_EffectSpec                                    (None)
// struct FActiveGameplayEffectHandle K2Node_CustomEvent_ActiveEffectHandle                            (NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_GasEffectIcon_C*         CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_GasEffectIcon_C*         CallFunc_Map_Find_Value                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPanelWidget*                Temp_object_Variable                                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// struct FGameplayAttribute          K2Node_CustomEvent_Attribute                                     (HasGetValueTypeHash)
// float                              K2Node_CustomEvent_OldValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_NewValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GameplayAttributeGameplayAttribute_ReturnValue(ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// class UPanelWidget*                Temp_object_Variable_1                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute(ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute_1(ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGameplayAttribute>  K2Node_MakeArray_Array_2                                         (ZeroConstructor, ReferenceParm)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue_1                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAsyncTaskAttributeChanged*  CallFunc_ListenForAttributesChange_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_AGPlayerState_C*         K2Node_CustomEvent_Player                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEffectType             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelWidget*                K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PlayerStats_Overhead_C::ExecuteUbergraph_WB_PlayerStats_Overhead(int32 EntryPoint, const struct FGameplayAttribute& K2Node_CustomEvent_Attribute_1, float K2Node_CustomEvent_NewValue_1, float K2Node_CustomEvent_OldValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float Temp_float_Variable, float Temp_float_Variable_1, const struct FGameplayAttribute& Temp_struct_Variable, bool K2Node_Event_IsDesignTime, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetPlayerName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_GetUniqueIdAsString_ReturnValue, bool CallFunc_IsRedTeam_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, class UAbilitySystemComponent* K2Node_CustomEvent_AbilitySystemComponent_1, class UGameplayEffect* K2Node_CustomEvent_AddedEffect_1, const struct FGameplayEffectSpec& K2Node_CustomEvent_EffectSpec_1, const struct FActiveGameplayEffectHandle& K2Node_CustomEvent_ActiveEffectHandle_1, class UAGGameplayEffect* K2Node_DynamicCast_AsAGGameplay_Effect, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UAbilitySystemComponent* K2Node_CustomEvent_AbilitySystemComponent, class UGameplayEffect* K2Node_CustomEvent_AddedEffect, const struct FGameplayEffectSpec& K2Node_CustomEvent_EffectSpec, const struct FActiveGameplayEffectHandle& K2Node_CustomEvent_ActiveEffectHandle, bool K2Node_SwitchEnum_CmpSuccess, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWB_GasEffectIcon_C* CallFunc_Create_ReturnValue, class UWB_GasEffectIcon_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UPanelWidget* Temp_object_Variable, bool CallFunc_IsValid_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FGameplayAttribute& K2Node_CustomEvent_Attribute, float K2Node_CustomEvent_OldValue, float K2Node_CustomEvent_NewValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, float CallFunc_FMax_ReturnValue, bool CallFunc_EqualEqual_GameplayAttributeGameplayAttribute_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class UPanelWidget* Temp_object_Variable_1, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute_1, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Format_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, TArray<struct FGameplayAttribute>& K2Node_MakeArray_Array_2, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_1, class UAsyncTaskAttributeChanged* CallFunc_ListenForAttributesChange_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class ABP_AGPlayerState_C* K2Node_CustomEvent_Player, enum class EEffectType Temp_byte_Variable, class UPanelWidget* K2Node_Select_Default, class UPanelSlot* CallFunc_AddChild_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PlayerStats_Overhead_C", "ExecuteUbergraph_WB_PlayerStats_Overhead");

	Params::UWB_PlayerStats_Overhead_C_ExecuteUbergraph_WB_PlayerStats_Overhead_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Attribute_1 = K2Node_CustomEvent_Attribute_1;
	Parms.K2Node_CustomEvent_NewValue_1 = K2Node_CustomEvent_NewValue_1;
	Parms.K2Node_CustomEvent_OldValue_1 = K2Node_CustomEvent_OldValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPlayerName_ReturnValue = CallFunc_GetPlayerName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_GetUniqueIdAsString_ReturnValue = CallFunc_GetUniqueIdAsString_ReturnValue;
	Parms.CallFunc_IsRedTeam_ReturnValue = CallFunc_IsRedTeam_ReturnValue;
	Parms.CallFunc_SelectColor_ReturnValue = CallFunc_SelectColor_ReturnValue;
	Parms.K2Node_CustomEvent_AbilitySystemComponent_1 = K2Node_CustomEvent_AbilitySystemComponent_1;
	Parms.K2Node_CustomEvent_AddedEffect_1 = K2Node_CustomEvent_AddedEffect_1;
	Parms.K2Node_CustomEvent_EffectSpec_1 = K2Node_CustomEvent_EffectSpec_1;
	Parms.K2Node_CustomEvent_ActiveEffectHandle_1 = K2Node_CustomEvent_ActiveEffectHandle_1;
	Parms.K2Node_DynamicCast_AsAGGameplay_Effect = K2Node_DynamicCast_AsAGGameplay_Effect;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_AbilitySystemComponent = K2Node_CustomEvent_AbilitySystemComponent;
	Parms.K2Node_CustomEvent_AddedEffect = K2Node_CustomEvent_AddedEffect;
	Parms.K2Node_CustomEvent_EffectSpec = K2Node_CustomEvent_EffectSpec;
	Parms.K2Node_CustomEvent_ActiveEffectHandle = K2Node_CustomEvent_ActiveEffectHandle;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_Attribute = K2Node_CustomEvent_Attribute;
	Parms.K2Node_CustomEvent_OldValue = K2Node_CustomEvent_OldValue;
	Parms.K2Node_CustomEvent_NewValue = K2Node_CustomEvent_NewValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_EqualEqual_GameplayAttributeGameplayAttribute_ReturnValue = CallFunc_EqualEqual_GameplayAttributeGameplayAttribute_ReturnValue;
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute = CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute;
	Parms.CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue = CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute_1 = CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute_1;
	Parms.CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue_1 = CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue_1 = CallFunc_GetAbilitySystemComponent_ReturnValue_1;
	Parms.CallFunc_ListenForAttributesChange_ReturnValue = CallFunc_ListenForAttributesChange_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_CustomEvent_Player = K2Node_CustomEvent_Player;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


