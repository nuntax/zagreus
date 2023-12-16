#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_Button02_FrameFX.WB_Button02_FrameFX_C
// (None)

class UClass* UWB_Button02_FrameFX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_Button02_FrameFX_C");

	return Clss;
}


// WB_Button02_FrameFX_C WB_Button02_FrameFX.Default__WB_Button02_FrameFX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_Button02_FrameFX_C* UWB_Button02_FrameFX_C::GetDefaultObj()
{
	static class UWB_Button02_FrameFX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_Button02_FrameFX_C*>(UWB_Button02_FrameFX_C::StaticClass()->DefaultObject);

	return Default;
}

}


