#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_HadesDispellCharge.GE_HadesDispellCharge_C
// (None)

class UClass* UGE_HadesDispellCharge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_HadesDispellCharge_C");

	return Clss;
}


// GE_HadesDispellCharge_C GE_HadesDispellCharge.Default__GE_HadesDispellCharge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_HadesDispellCharge_C* UGE_HadesDispellCharge_C::GetDefaultObj()
{
	static class UGE_HadesDispellCharge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_HadesDispellCharge_C*>(UGE_HadesDispellCharge_C::StaticClass()->DefaultObject);

	return Default;
}

}


