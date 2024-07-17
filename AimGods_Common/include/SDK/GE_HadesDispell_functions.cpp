#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_HadesDispell.GE_HadesDispell_C
// (None)

class UClass* UGE_HadesDispell_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_HadesDispell_C");

	return Clss;
}


// GE_HadesDispell_C GE_HadesDispell.Default__GE_HadesDispell_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_HadesDispell_C* UGE_HadesDispell_C::GetDefaultObj()
{
	static class UGE_HadesDispell_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_HadesDispell_C*>(UGE_HadesDispell_C::StaticClass()->DefaultObject);

	return Default;
}

}


