#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_Gameplay.WB_Gameplay_C
// (None)

class UClass* UWB_Gameplay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_Gameplay_C");

	return Clss;
}


// WB_Gameplay_C WB_Gameplay.Default__WB_Gameplay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_Gameplay_C* UWB_Gameplay_C::GetDefaultObj()
{
	static class UWB_Gameplay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_Gameplay_C*>(UWB_Gameplay_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_Gameplay.WB_Gameplay_C.Get_Health_Number
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            (None)

class FText UWB_Gameplay_C::Get_Health_Number(class FText CallFunc_Conv_FloatToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Gameplay_C", "Get_Health_Number");

	Params::UWB_Gameplay_C_Get_Health_Number_Params Parms{};

	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_Gameplay.WB_Gameplay_C.Get_Health_Percentage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UWB_Gameplay_C::Get_Health_Percentage(float CallFunc_Divide_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Gameplay_C", "Get_Health_Percentage");

	Params::UWB_Gameplay_C_Get_Health_Percentage_Params Parms{};

	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_Gameplay.WB_Gameplay_C.Get_Mana_Percentage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UWB_Gameplay_C::Get_Mana_Percentage(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Gameplay_C", "Get_Mana_Percentage");

	Params::UWB_Gameplay_C_Get_Mana_Percentage_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_Gameplay.WB_Gameplay_C.GetDamageTextColor
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Was_Headshot_                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// struct FSlateColor                 K2Node_Select_Default                                            (None)
// struct FSlateColor                 K2Node_Select_Default_1                                          (None)

struct FSlateColor UWB_Gameplay_C::GetDamageTextColor(float Damage, bool Was_Headshot_, bool Temp_bool_Variable, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool Temp_bool_Variable_1, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_Select_Default, const struct FSlateColor& K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Gameplay_C", "GetDamageTextColor");

	Params::UWB_Gameplay_C_GetDamageTextColor_Params Parms{};

	Parms.Damage = Damage;
	Parms.Was_Headshot_ = Was_Headshot_;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_LinearColorLerp_ReturnValue = CallFunc_LinearColorLerp_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_Gameplay.WB_Gameplay_C.RefreshHealth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Gameplay_C::RefreshHealth()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Gameplay_C", "RefreshHealth");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Gameplay.WB_Gameplay_C.UpdateTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_AGPlayerController_C*    K2Node_DynamicCast_AsBP_AGPlayer_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AAGGameState*                K2Node_DynamicCast_AsAGGame_State                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimespan                   CallFunc_MakeTimespan_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_AsTimespan_Timespan_ReturnValue                         (None)

void UWB_Gameplay_C::UpdateTimer(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ABP_AGPlayerController_C* K2Node_DynamicCast_AsBP_AGPlayer_Controller, bool K2Node_DynamicCast_bSuccess, class AAGGameState* K2Node_DynamicCast_AsAGGame_State, bool K2Node_DynamicCast_bSuccess_1, const struct FTimespan& CallFunc_MakeTimespan_ReturnValue, class FText CallFunc_AsTimespan_Timespan_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Gameplay_C", "UpdateTimer");

	Params::UWB_Gameplay_C_UpdateTimer_Params Parms{};

	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_AGPlayer_Controller = K2Node_DynamicCast_AsBP_AGPlayer_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsAGGame_State = K2Node_DynamicCast_AsAGGame_State;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_MakeTimespan_ReturnValue = CallFunc_MakeTimespan_ReturnValue;
	Parms.CallFunc_AsTimespan_Timespan_ReturnValue = CallFunc_AsTimespan_Timespan_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Gameplay.WB_Gameplay_C.UpdateScores
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Gameplay_C::UpdateScores()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Gameplay_C", "UpdateScores");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Gameplay.WB_Gameplay_C.Get Ammo Per Clip
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

class FText UWB_Gameplay_C::Get_Ammo_Per_Clip(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Gameplay_C", "Get Ammo Per Clip");

	Params::UWB_Gameplay_C_Get_Ammo_Per_Clip_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_Gameplay.WB_Gameplay_C.GetAmmoInClip
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

class FText UWB_Gameplay_C::GetAmmoInClip(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Gameplay_C", "GetAmmoInClip");

	Params::UWB_Gameplay_C_GetAmmoInClip_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_Gameplay.WB_Gameplay_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)

struct FEventReply UWB_Gameplay_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Gameplay_C", "OnMouseButtonDown");

	Params::UWB_Gameplay_C_OnMouseButtonDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_Gameplay.WB_Gameplay_C.OnAttributeChanged_992CD9B7462442386928C2AC0338BC67
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAttribute          Attribute                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              OldValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Gameplay_C::OnAttributeChanged_992CD9B7462442386928C2AC0338BC67(const struct FGameplayAttribute& Attribute, float NewValue, float OldValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Gameplay_C", "OnAttributeChanged_992CD9B7462442386928C2AC0338BC67");

	Params::UWB_Gameplay_C_OnAttributeChanged_992CD9B7462442386928C2AC0338BC67_Params Parms{};

	Parms.Attribute = Attribute;
	Parms.NewValue = NewValue;
	Parms.OldValue = OldValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Gameplay.WB_Gameplay_C.OnGameplayEffectStackChange_55531E8B4ABD8149014A1D9B51CFA46E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                EffectGameplayTag                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle Handle                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int32                              NewStackCount                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OldStackCount                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Gameplay_C::OnGameplayEffectStackChange_55531E8B4ABD8149014A1D9B51CFA46E(const struct FGameplayTag& EffectGameplayTag, const struct FActiveGameplayEffectHandle& Handle, int32 NewStackCount, int32 OldStackCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Gameplay_C", "OnGameplayEffectStackChange_55531E8B4ABD8149014A1D9B51CFA46E");

	Params::UWB_Gameplay_C_OnGameplayEffectStackChange_55531E8B4ABD8149014A1D9B51CFA46E_Params Parms{};

	Parms.EffectGameplayTag = EffectGameplayTag;
	Parms.Handle = Handle;
	Parms.NewStackCount = NewStackCount;
	Parms.OldStackCount = OldStackCount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Gameplay.WB_Gameplay_C.On Health Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Health                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              OldValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Gameplay_C::On_Health_Changed(float Health, float OldValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Gameplay_C", "On Health Changed");

	Params::UWB_Gameplay_C_On_Health_Changed_Params Parms{};

	Parms.Health = Health;
	Parms.OldValue = OldValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Gameplay.WB_Gameplay_C.On Max Health Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Max_Health                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Gameplay_C::On_Max_Health_Changed(float Max_Health)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Gameplay_C", "On Max Health Changed");

	Params::UWB_Gameplay_C_On_Max_Health_Changed_Params Parms{};

	Parms.Max_Health = Max_Health;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Gameplay.WB_Gameplay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWB_Gameplay_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Gameplay_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Gameplay.WB_Gameplay_C.AddDamageIndicator
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     DmgLocation                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Gameplay_C::AddDamageIndicator(const struct FVector& DmgLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Gameplay_C", "AddDamageIndicator");

	Params::UWB_Gameplay_C_AddDamageIndicator_Params Parms{};

	Parms.DmgLocation = DmgLocation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Gameplay.WB_Gameplay_C.ShowHitMarker
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Gameplay_C::ShowHitMarker()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Gameplay_C", "ShowHitMarker");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Gameplay.WB_Gameplay_C.SetTeamIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Gameplay_C::SetTeamIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Gameplay_C", "SetTeamIcon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Gameplay.WB_Gameplay_C.On Gold Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              OldAmount                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NewAmount                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Gameplay_C::On_Gold_Changed(int32 OldAmount, int32 NewAmount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Gameplay_C", "On Gold Changed");

	Params::UWB_Gameplay_C_On_Gold_Changed_Params Parms{};

	Parms.OldAmount = OldAmount;
	Parms.NewAmount = NewAmount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Gameplay.WB_Gameplay_C.Set Prompt Text
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Prompt                                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UWB_Gameplay_C::Set_Prompt_Text(class FText Prompt)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Gameplay_C", "Set Prompt Text");

	Params::UWB_Gameplay_C_Set_Prompt_Text_Params Parms{};

	Parms.Prompt = Prompt;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Gameplay.WB_Gameplay_C.Bind GAS Attributes to UI
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Gameplay_C::Bind_GAS_Attributes_to_UI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Gameplay_C", "Bind GAS Attributes to UI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Gameplay.WB_Gameplay_C.On Player Destroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DestroyedActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Gameplay_C::On_Player_Destroyed(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Gameplay_C", "On Player Destroyed");

	Params::UWB_Gameplay_C_On_Player_Destroyed_Params Parms{};

	Parms.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Gameplay.WB_Gameplay_C.Begin Recall
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Gameplay_C::Begin_Recall()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Gameplay_C", "Begin Recall");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Gameplay.WB_Gameplay_C.End Recall
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Gameplay_C::End_Recall()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Gameplay_C", "End Recall");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Gameplay.WB_Gameplay_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Gameplay_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Gameplay_C", "Tick");

	Params::UWB_Gameplay_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Gameplay.WB_Gameplay_C.Welcome
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Gameplay_C::Welcome()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Gameplay_C", "Welcome");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Gameplay.WB_Gameplay_C.On Gameplay Effect Added
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent*     AbilitySystemComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameplayEffect*             AddedEffect                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectSpec         EffectSpec                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FActiveGameplayEffectHandle ActiveEffectHandle                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UWB_Gameplay_C::On_Gameplay_Effect_Added(class UAbilitySystemComponent* AbilitySystemComponent, class UGameplayEffect* AddedEffect, const struct FGameplayEffectSpec& EffectSpec, const struct FActiveGameplayEffectHandle& ActiveEffectHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Gameplay_C", "On Gameplay Effect Added");

	Params::UWB_Gameplay_C_On_Gameplay_Effect_Added_Params Parms{};

	Parms.AbilitySystemComponent = AbilitySystemComponent;
	Parms.AddedEffect = AddedEffect;
	Parms.EffectSpec = EffectSpec;
	Parms.ActiveEffectHandle = ActiveEffectHandle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Gameplay.WB_Gameplay_C.On Gameplay Effect Removed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent*     AbilitySystemComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameplayEffect*             AddedEffect                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectSpec         EffectSpec                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FActiveGameplayEffectHandle ActiveEffectHandle                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UWB_Gameplay_C::On_Gameplay_Effect_Removed(class UAbilitySystemComponent* AbilitySystemComponent, class UGameplayEffect* AddedEffect, const struct FGameplayEffectSpec& EffectSpec, const struct FActiveGameplayEffectHandle& ActiveEffectHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Gameplay_C", "On Gameplay Effect Removed");

	Params::UWB_Gameplay_C_On_Gameplay_Effect_Removed_Params Parms{};

	Parms.AbilitySystemComponent = AbilitySystemComponent;
	Parms.AddedEffect = AddedEffect;
	Parms.EffectSpec = EffectSpec;
	Parms.ActiveEffectHandle = ActiveEffectHandle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Gameplay.WB_Gameplay_C.Setup Playercards
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Gameplay_C::Setup_Playercards()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Gameplay_C", "Setup Playercards");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Gameplay.WB_Gameplay_C.Wait for Players
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Gameplay_C::Wait_for_Players()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Gameplay_C", "Wait for Players");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Gameplay.WB_Gameplay_C.BndEvt__WB_Countdown_K2Node_ComponentBoundEvent_0_ShowTime__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_Gameplay_C::BndEvt__WB_Countdown_K2Node_ComponentBoundEvent_0_ShowTime__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Gameplay_C", "BndEvt__WB_Countdown_K2Node_ComponentBoundEvent_0_ShowTime__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Gameplay.WB_Gameplay_C.DisplayAbilityActivateErrorMessages
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer       AbilityBlockedByTags                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UWB_Gameplay_C::DisplayAbilityActivateErrorMessages(const struct FGameplayTagContainer& AbilityBlockedByTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Gameplay_C", "DisplayAbilityActivateErrorMessages");

	Params::UWB_Gameplay_C_DisplayAbilityActivateErrorMessages_Params Parms{};

	Parms.AbilityBlockedByTags = AbilityBlockedByTags;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Gameplay.WB_Gameplay_C.ExecuteUbergraph_WB_Gameplay
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAGGameInstance*             K2Node_DynamicCast_AsAGGame_Instance                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EEffectType             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelWidget*                Temp_object_Variable                                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelWidget*                Temp_object_Variable_1                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Health                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_OldValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Max_Health                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Abs_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                Temp_struct_Variable                                             (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle Temp_struct_Variable_1                                           (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_DmgLocation                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_DirectionalDamageIndicator_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_AddChildToCanvas_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AAGPlayerState*              K2Node_DynamicCast_AsAGPlayer_State                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_OldAmount                                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_NewAmount                                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAnchors                    K2Node_MakeStruct_Anchors                                        (NoDestructor)
// TArray<struct FGameplayAttribute>  K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        K2Node_CustomEvent_Prompt                                        (None)
// class AActor*                      K2Node_CustomEvent_DestroyedActor                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_PlayerStats_C*           CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_CustomEvent_EffectGameplayTag                             (NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle K2Node_CustomEvent_Handle                                        (NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_NewStackCount                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_OldStackCount                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_AGPlayerState_C*         K2Node_DynamicCast_AsBP_AGPlayer_State                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWB_PlayerStats_C*           CallFunc_Create_ReturnValue_2                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// struct FGameplayAttribute          Temp_struct_Variable_2                                           (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GameplayAttributeGameplayAttribute_ReturnValue(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_GameplayAttributeGameplayAttribute_ReturnValue_1(ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_AGPlayerState_C*         K2Node_DynamicCast_AsBP_AGPlayer_State_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAsyncTaskAttributeChanged*  CallFunc_ListenForAttributesChange_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_AGPlayerState_C*         K2Node_DynamicCast_AsBP_AGPlayer_State_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue_1                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAsyncTaskEffectStackChanged*CallFunc_ListenForGameplayEffectStackChange_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSameTeam_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UVerticalBox*                K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     K2Node_CustomEvent_AbilitySystemComponent_1                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameplayEffect*             K2Node_CustomEvent_AddedEffect_1                                 (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectSpec         K2Node_CustomEvent_EffectSpec_1                                  (None)
// struct FActiveGameplayEffectHandle K2Node_CustomEvent_ActiveEffectHandle_1                          (NoDestructor, HasGetValueTypeHash)
// class UAGGameplayEffect*           K2Node_DynamicCast_AsAGGameplay_Effect                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAbilitySystemComponent*     K2Node_CustomEvent_AbilitySystemComponent                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameplayEffect*             K2Node_CustomEvent_AddedEffect                                   (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectSpec         K2Node_CustomEvent_EffectSpec                                    (None)
// struct FActiveGameplayEffectHandle K2Node_CustomEvent_ActiveEffectHandle                            (NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_GasEffectIcon_C*         CallFunc_Create_ReturnValue_3                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_GasEffectIcon_C*         CallFunc_Map_Find_Value                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAttribute          K2Node_CustomEvent_Attribute                                     (HasGetValueTypeHash)
// float                              K2Node_CustomEvent_NewValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_OldValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelWidget*                K2Node_Select_Default_1                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_CustomEvent_AbilityBlockedByTags                          (None)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGameplayTag>        CallFunc_BreakGameplayTagContainer_GameplayTags                  (ZeroConstructor, ReferenceParm)
// struct FGameplayTag                CallFunc_Array_Get_Item_1                                        (NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Map_Find_Value_1                                        (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// float                              K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// class ABP_AGPlayerState_C*         K2Node_DynamicCast_AsBP_AGPlayer_State_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsSameTeam_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UVerticalBox*                K2Node_Select_Default_3                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_PlayerDamage_C*          CallFunc_Create_ReturnValue_4                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue_1                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOverlaySlot*                CallFunc_SlotAsOverlaySlot_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue_1                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_Gameplay_C::ExecuteUbergraph_WB_Gameplay(int32 EntryPoint, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UAGGameInstance* K2Node_DynamicCast_AsAGGame_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, enum class EEffectType Temp_byte_Variable, class UPanelWidget* Temp_object_Variable, class UPanelWidget* Temp_object_Variable_1, int32 Temp_int_Array_Index_Variable, float K2Node_CustomEvent_Health, float K2Node_CustomEvent_OldValue, float K2Node_CustomEvent_Max_Health, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_Abs_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_Not_PreBool_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, const struct FActiveGameplayEffectHandle& Temp_struct_Variable_1, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FVector& K2Node_CustomEvent_DmgLocation, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, int32 Temp_int_Variable, class UWB_DirectionalDamageIndicator_C* CallFunc_Create_ReturnValue, int32 Temp_int_Variable_1, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AAGPlayerState* K2Node_DynamicCast_AsAGPlayer_State, bool K2Node_DynamicCast_bSuccess_1, int32 K2Node_CustomEvent_OldAmount, int32 K2Node_CustomEvent_NewAmount, const struct FAnchors& K2Node_MakeStruct_Anchors, TArray<struct FGameplayAttribute>& K2Node_MakeArray_Array, class FText K2Node_CustomEvent_Prompt, class AActor* K2Node_CustomEvent_DestroyedActor, class AGameStateBase* CallFunc_GetGameState_ReturnValue, float Temp_float_Variable, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWB_PlayerStats_C* CallFunc_Create_ReturnValue_1, const struct FGameplayTag& K2Node_CustomEvent_EffectGameplayTag, const struct FActiveGameplayEffectHandle& K2Node_CustomEvent_Handle, int32 K2Node_CustomEvent_NewStackCount, int32 K2Node_CustomEvent_OldStackCount, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_2, class APlayerState* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, class ABP_AGPlayerState_C* K2Node_DynamicCast_AsBP_AGPlayer_State, bool K2Node_DynamicCast_bSuccess_2, float Temp_float_Variable_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, bool Temp_bool_Variable_1, class UWB_PlayerStats_C* CallFunc_Create_ReturnValue_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FGameplayAttribute& Temp_struct_Variable_2, bool CallFunc_EqualEqual_GameplayAttributeGameplayAttribute_ReturnValue, bool CallFunc_EqualEqual_GameplayAttributeGameplayAttribute_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, class ABP_AGPlayerState_C* K2Node_DynamicCast_AsBP_AGPlayer_State_1, bool K2Node_DynamicCast_bSuccess_3, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class UAsyncTaskAttributeChanged* CallFunc_ListenForAttributesChange_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class ABP_AGPlayerState_C* K2Node_DynamicCast_AsBP_AGPlayer_State_2, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_1, class UAsyncTaskEffectStackChanged* CallFunc_ListenForGameplayEffectStackChange_ReturnValue, bool CallFunc_IsSameTeam_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class UVerticalBox* K2Node_Select_Default, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, class UAbilitySystemComponent* K2Node_CustomEvent_AbilitySystemComponent_1, class UGameplayEffect* K2Node_CustomEvent_AddedEffect_1, const struct FGameplayEffectSpec& K2Node_CustomEvent_EffectSpec_1, const struct FActiveGameplayEffectHandle& K2Node_CustomEvent_ActiveEffectHandle_1, class UAGGameplayEffect* K2Node_DynamicCast_AsAGGameplay_Effect, bool K2Node_DynamicCast_bSuccess_5, class UAbilitySystemComponent* K2Node_CustomEvent_AbilitySystemComponent, class UGameplayEffect* K2Node_CustomEvent_AddedEffect, const struct FGameplayEffectSpec& K2Node_CustomEvent_EffectSpec, const struct FActiveGameplayEffectHandle& K2Node_CustomEvent_ActiveEffectHandle, bool K2Node_SwitchEnum_CmpSuccess, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, float Temp_float_Variable_2, class UWB_GasEffectIcon_C* CallFunc_Create_ReturnValue_3, float Temp_float_Variable_3, int32 Temp_int_Loop_Counter_Variable_1, class UWB_GasEffectIcon_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FGameplayAttribute& K2Node_CustomEvent_Attribute, float K2Node_CustomEvent_NewValue, float K2Node_CustomEvent_OldValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class AGameStateBase* CallFunc_GetGameState_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_3, class UPanelWidget* K2Node_Select_Default_1, const struct FGameplayTagContainer& K2Node_CustomEvent_AbilityBlockedByTags, class UPanelSlot* CallFunc_AddChild_ReturnValue, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags, const struct FGameplayTag& CallFunc_Array_Get_Item_1, bool Temp_bool_Variable_2, const class FString& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, float K2Node_Select_Default_2, int32 Temp_int_Array_Index_Variable_1, const struct FLinearColor& K2Node_MakeStruct_LinearColor, class APlayerState* CallFunc_Array_Get_Item_2, const struct FSlateColor& K2Node_MakeStruct_SlateColor, class ABP_AGPlayerState_C* K2Node_DynamicCast_AsBP_AGPlayer_State_3, bool K2Node_DynamicCast_bSuccess_6, bool CallFunc_IsSameTeam_ReturnValue_1, class UVerticalBox* K2Node_Select_Default_3, class UWB_PlayerDamage_C* CallFunc_Create_ReturnValue_4, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_1, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Gameplay_C", "ExecuteUbergraph_WB_Gameplay");

	Params::UWB_Gameplay_C_ExecuteUbergraph_WB_Gameplay_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsAGGame_Instance = K2Node_DynamicCast_AsAGGame_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_CustomEvent_Health = K2Node_CustomEvent_Health;
	Parms.K2Node_CustomEvent_OldValue = K2Node_CustomEvent_OldValue;
	Parms.K2Node_CustomEvent_Max_Health = K2Node_CustomEvent_Max_Health;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Abs_ReturnValue = CallFunc_Abs_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_1 = CallFunc_Greater_FloatFloat_ReturnValue_1;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.K2Node_CustomEvent_DmgLocation = K2Node_CustomEvent_DmgLocation;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_1 = CallFunc_LessEqual_FloatFloat_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_AddChildToCanvas_ReturnValue = CallFunc_AddChildToCanvas_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsAGPlayer_State = K2Node_DynamicCast_AsAGPlayer_State;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CustomEvent_OldAmount = K2Node_CustomEvent_OldAmount;
	Parms.K2Node_CustomEvent_NewAmount = K2Node_CustomEvent_NewAmount;
	Parms.K2Node_MakeStruct_Anchors = K2Node_MakeStruct_Anchors;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_CustomEvent_Prompt = K2Node_CustomEvent_Prompt;
	Parms.K2Node_CustomEvent_DestroyedActor = K2Node_CustomEvent_DestroyedActor;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.K2Node_CustomEvent_EffectGameplayTag = K2Node_CustomEvent_EffectGameplayTag;
	Parms.K2Node_CustomEvent_Handle = K2Node_CustomEvent_Handle;
	Parms.K2Node_CustomEvent_NewStackCount = K2Node_CustomEvent_NewStackCount;
	Parms.K2Node_CustomEvent_OldStackCount = K2Node_CustomEvent_OldStackCount;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue = CallFunc_EqualEqual_TextText_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_1 = CallFunc_PlayAnimationForward_ReturnValue_1;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_2 = CallFunc_PlayAnimationForward_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_AGPlayer_State = K2Node_DynamicCast_AsBP_AGPlayer_State;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_1 = CallFunc_GetOwningPlayer_ReturnValue_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_Create_ReturnValue_2 = CallFunc_Create_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.CallFunc_EqualEqual_GameplayAttributeGameplayAttribute_ReturnValue = CallFunc_EqualEqual_GameplayAttributeGameplayAttribute_ReturnValue;
	Parms.CallFunc_EqualEqual_GameplayAttributeGameplayAttribute_ReturnValue_1 = CallFunc_EqualEqual_GameplayAttributeGameplayAttribute_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_AGPlayer_State_1 = K2Node_DynamicCast_AsBP_AGPlayer_State_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_ListenForAttributesChange_ReturnValue = CallFunc_ListenForAttributesChange_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBP_AGPlayer_State_2 = K2Node_DynamicCast_AsBP_AGPlayer_State_2;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue_1 = CallFunc_GetAbilitySystemComponent_ReturnValue_1;
	Parms.CallFunc_ListenForGameplayEffectStackChange_ReturnValue = CallFunc_ListenForGameplayEffectStackChange_ReturnValue;
	Parms.CallFunc_IsSameTeam_ReturnValue = CallFunc_IsSameTeam_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.K2Node_CustomEvent_AbilitySystemComponent_1 = K2Node_CustomEvent_AbilitySystemComponent_1;
	Parms.K2Node_CustomEvent_AddedEffect_1 = K2Node_CustomEvent_AddedEffect_1;
	Parms.K2Node_CustomEvent_EffectSpec_1 = K2Node_CustomEvent_EffectSpec_1;
	Parms.K2Node_CustomEvent_ActiveEffectHandle_1 = K2Node_CustomEvent_ActiveEffectHandle_1;
	Parms.K2Node_DynamicCast_AsAGGameplay_Effect = K2Node_DynamicCast_AsAGGameplay_Effect;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.K2Node_CustomEvent_AbilitySystemComponent = K2Node_CustomEvent_AbilitySystemComponent;
	Parms.K2Node_CustomEvent_AddedEffect = K2Node_CustomEvent_AddedEffect;
	Parms.K2Node_CustomEvent_EffectSpec = K2Node_CustomEvent_EffectSpec;
	Parms.K2Node_CustomEvent_ActiveEffectHandle = K2Node_CustomEvent_ActiveEffectHandle;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_2 = CallFunc_GetOwningPlayer_ReturnValue_2;
	Parms.Temp_float_Variable_2 = Temp_float_Variable_2;
	Parms.CallFunc_Create_ReturnValue_3 = CallFunc_Create_ReturnValue_3;
	Parms.Temp_float_Variable_3 = Temp_float_Variable_3;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.K2Node_CustomEvent_Attribute = K2Node_CustomEvent_Attribute;
	Parms.K2Node_CustomEvent_NewValue = K2Node_CustomEvent_NewValue;
	Parms.K2Node_CustomEvent_OldValue_1 = K2Node_CustomEvent_OldValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_GetGameState_ReturnValue_1 = CallFunc_GetGameState_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_3 = CallFunc_PlayAnimationForward_ReturnValue_3;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_CustomEvent_AbilityBlockedByTags = K2Node_CustomEvent_AbilityBlockedByTags;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_BreakGameplayTagContainer_GameplayTags = CallFunc_BreakGameplayTagContainer_GameplayTags;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_DynamicCast_AsBP_AGPlayer_State_3 = K2Node_DynamicCast_AsBP_AGPlayer_State_3;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_IsSameTeam_ReturnValue_1 = CallFunc_IsSameTeam_ReturnValue_1;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_Create_ReturnValue_4 = CallFunc_Create_ReturnValue_4;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue_1 = CallFunc_AddChildToVerticalBox_ReturnValue_1;
	Parms.CallFunc_SlotAsOverlaySlot_ReturnValue = CallFunc_SlotAsOverlaySlot_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue_1 = CallFunc_AddChild_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;

	UObject::ProcessEvent(Func, &Parms);

}

}


