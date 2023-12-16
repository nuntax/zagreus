#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WC_DamageText.WC_DamageText_C
// (SceneComponent, PrimitiveComponent)

class UClass* UWC_DamageText_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WC_DamageText_C");

	return Clss;
}


// WC_DamageText_C WC_DamageText.Default__WC_DamageText_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWC_DamageText_C* UWC_DamageText_C::GetDefaultObj()
{
	static class UWC_DamageText_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWC_DamageText_C*>(UWC_DamageText_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WC_DamageText.WC_DamageText_C.SetDamageText
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDamageTextType         DamageTextType                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              GoldAmount                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  DebuffIcon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWC_DamageText_C::SetDamageText(float Damage, enum class EDamageTextType DamageTextType, int32 GoldAmount, class UTexture2D* DebuffIcon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WC_DamageText_C", "SetDamageText");

	Params::UWC_DamageText_C_SetDamageText_Params Parms{};

	Parms.Damage = Damage;
	Parms.DamageTextType = DamageTextType;
	Parms.GoldAmount = GoldAmount;
	Parms.DebuffIcon = DebuffIcon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WC_DamageText.WC_DamageText_C.AddDebuffIcon
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                      DebuffImage                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWC_DamageText_C::AddDebuffIcon(class UImage* DebuffImage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WC_DamageText_C", "AddDebuffIcon");

	Params::UWC_DamageText_C_AddDebuffIcon_Params Parms{};

	Parms.DebuffImage = DebuffImage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WC_DamageText.WC_DamageText_C.ExecuteUbergraph_WC_DamageText
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetUserWidgetObject_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                      K2Node_Event_DebuffImage                                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_DamageNumber_C*          K2Node_DynamicCast_AsWB_Damage_Number                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 CallFunc_GetUserWidgetObject_ReturnValue_1                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Damage                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDamageTextType         K2Node_Event_DamageTextType                                      (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_GoldAmount                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_Event_DebuffIcon                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_DamageNumber_C*          K2Node_DynamicCast_AsWB_Damage_Number_1                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWC_DamageText_C::ExecuteUbergraph_WC_DamageText(int32 EntryPoint, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UImage* K2Node_Event_DebuffImage, class UWB_DamageNumber_C* K2Node_DynamicCast_AsWB_Damage_Number, bool K2Node_DynamicCast_bSuccess, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue_1, float K2Node_Event_Damage, enum class EDamageTextType K2Node_Event_DamageTextType, int32 K2Node_Event_GoldAmount, class UTexture2D* K2Node_Event_DebuffIcon, class UWB_DamageNumber_C* K2Node_DynamicCast_AsWB_Damage_Number_1, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WC_DamageText_C", "ExecuteUbergraph_WC_DamageText");

	Params::UWC_DamageText_C_ExecuteUbergraph_WC_DamageText_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetUserWidgetObject_ReturnValue = CallFunc_GetUserWidgetObject_ReturnValue;
	Parms.K2Node_Event_DebuffImage = K2Node_Event_DebuffImage;
	Parms.K2Node_DynamicCast_AsWB_Damage_Number = K2Node_DynamicCast_AsWB_Damage_Number;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetUserWidgetObject_ReturnValue_1 = CallFunc_GetUserWidgetObject_ReturnValue_1;
	Parms.K2Node_Event_Damage = K2Node_Event_Damage;
	Parms.K2Node_Event_DamageTextType = K2Node_Event_DamageTextType;
	Parms.K2Node_Event_GoldAmount = K2Node_Event_GoldAmount;
	Parms.K2Node_Event_DebuffIcon = K2Node_Event_DebuffIcon;
	Parms.K2Node_DynamicCast_AsWB_Damage_Number_1 = K2Node_DynamicCast_AsWB_Damage_Number_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


