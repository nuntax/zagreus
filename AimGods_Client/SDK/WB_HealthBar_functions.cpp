#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_HealthBar.WB_HealthBar_C
// (None)

class UClass* UWB_HealthBar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_HealthBar_C");

	return Clss;
}


// WB_HealthBar_C WB_HealthBar.Default__WB_HealthBar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_HealthBar_C* UWB_HealthBar_C::GetDefaultObj()
{
	static class UWB_HealthBar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_HealthBar_C*>(UWB_HealthBar_C::StaticClass()->DefaultObject);

	return Default;
}

}


