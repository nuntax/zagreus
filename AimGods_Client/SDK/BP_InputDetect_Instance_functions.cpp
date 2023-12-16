#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_InputDetect_Instance.BP_InputDetect_Instance_C
// (None)

class UClass* UBP_InputDetect_Instance_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_InputDetect_Instance_C");

	return Clss;
}


// BP_InputDetect_Instance_C BP_InputDetect_Instance.Default__BP_InputDetect_Instance_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_InputDetect_Instance_C* UBP_InputDetect_Instance_C::GetDefaultObj()
{
	static class UBP_InputDetect_Instance_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_InputDetect_Instance_C*>(UBP_InputDetect_Instance_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_InputDetect_Instance.BP_InputDetect_Instance_C.SetShowMouse
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bShowMouse                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_InputDetect_Instance_C::SetShowMouse(bool bShowMouse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InputDetect_Instance_C", "SetShowMouse");

	Params::UBP_InputDetect_Instance_C_SetShowMouse_Params Parms{};

	Parms.bShowMouse = bShowMouse;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_InputDetect_Instance.BP_InputDetect_Instance_C.SetInputType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EInputType              InputType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_InputDetect_Instance_C::SetInputType(enum class EInputType InputType, bool CallFunc_NotEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InputDetect_Instance_C", "SetInputType");

	Params::UBP_InputDetect_Instance_C_SetInputType_Params Parms{};

	Parms.InputType = InputType;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_InputDetect_Instance.BP_InputDetect_Instance_C.UpdateInputType__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EInputType              InputType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_InputDetect_Instance_C::UpdateInputType__DelegateSignature(enum class EInputType InputType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InputDetect_Instance_C", "UpdateInputType__DelegateSignature");

	Params::UBP_InputDetect_Instance_C_UpdateInputType__DelegateSignature_Params Parms{};

	Parms.InputType = InputType;

	UObject::ProcessEvent(Func, &Parms);

}

}


