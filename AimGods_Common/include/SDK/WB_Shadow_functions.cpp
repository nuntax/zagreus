#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_Shadow.WB_Shadow_C
// (None)

class UClass* UWB_Shadow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_Shadow_C");

	return Clss;
}


// WB_Shadow_C WB_Shadow.Default__WB_Shadow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_Shadow_C* UWB_Shadow_C::GetDefaultObj()
{
	static class UWB_Shadow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_Shadow_C*>(UWB_Shadow_C::StaticClass()->DefaultObject);

	return Default;
}

}


