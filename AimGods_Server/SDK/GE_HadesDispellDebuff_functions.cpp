#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_HadesDispellDebuff.GE_HadesDispellDebuff_C
// (None)

class UClass* UGE_HadesDispellDebuff_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_HadesDispellDebuff_C");

	return Clss;
}


// GE_HadesDispellDebuff_C GE_HadesDispellDebuff.Default__GE_HadesDispellDebuff_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_HadesDispellDebuff_C* UGE_HadesDispellDebuff_C::GetDefaultObj()
{
	static class UGE_HadesDispellDebuff_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_HadesDispellDebuff_C*>(UGE_HadesDispellDebuff_C::StaticClass()->DefaultObject);

	return Default;
}

}


