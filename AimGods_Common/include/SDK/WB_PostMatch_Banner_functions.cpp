#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_PostMatch_Banner.WB_PostMatch_Banner_C
// (None)

class UClass* UWB_PostMatch_Banner_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_PostMatch_Banner_C");

	return Clss;
}


// WB_PostMatch_Banner_C WB_PostMatch_Banner.Default__WB_PostMatch_Banner_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_PostMatch_Banner_C* UWB_PostMatch_Banner_C::GetDefaultObj()
{
	static class UWB_PostMatch_Banner_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_PostMatch_Banner_C*>(UWB_PostMatch_Banner_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_PostMatch_Banner.WB_PostMatch_Banner_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Victory_                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_PostMatch_Banner_C::Initialize(bool Victory_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PostMatch_Banner_C", "Initialize");

	Params::UWB_PostMatch_Banner_C_Initialize_Params Parms{};

	Parms.Victory_ = Victory_;

	UObject::ProcessEvent(Func, &Parms);

}

}


