#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ButtonManager_Functions.BP_ButtonManager_Functions_C
// (None)

class UClass* UBP_ButtonManager_Functions_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ButtonManager_Functions_C");

	return Clss;
}


// BP_ButtonManager_Functions_C BP_ButtonManager_Functions.Default__BP_ButtonManager_Functions_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ButtonManager_Functions_C* UBP_ButtonManager_Functions_C::GetDefaultObj()
{
	static class UBP_ButtonManager_Functions_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ButtonManager_Functions_C*>(UBP_ButtonManager_Functions_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ButtonManager_Functions.BP_ButtonManager_Functions_C.GetButtonManager
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWB_Button_Base_C*           ButtonWidget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPi_ButtonManager_C>ButtonManager                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPi_ButtonManager_C>CurrentManager                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ButtonManager_Functions_C::GetButtonManager(class UWB_Button_Base_C* ButtonWidget, class UObject* __WorldContext, TScriptInterface<class IBPi_ButtonManager_C>* ButtonManager, TScriptInterface<class IBPi_ButtonManager_C> CurrentManager)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ButtonManager_Functions_C", "GetButtonManager");

	Params::UBP_ButtonManager_Functions_C_GetButtonManager_Params Parms{};

	Parms.ButtonWidget = ButtonWidget;
	Parms.__WorldContext = __WorldContext;
	Parms.CurrentManager = CurrentManager;

	UObject::ProcessEvent(Func, &Parms);

	if (ButtonManager != nullptr)
		*ButtonManager = Parms.ButtonManager;

}

}


