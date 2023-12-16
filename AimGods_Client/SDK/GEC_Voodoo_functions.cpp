#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GEC_Voodoo.GEC_Voodoo_C
// (None)

class UClass* UGEC_Voodoo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GEC_Voodoo_C");

	return Clss;
}


// GEC_Voodoo_C GEC_Voodoo.Default__GEC_Voodoo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGEC_Voodoo_C* UGEC_Voodoo_C::GetDefaultObj()
{
	static class UGEC_Voodoo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGEC_Voodoo_C*>(UGEC_Voodoo_C::StaticClass()->DefaultObject);

	return Default;
}

}


