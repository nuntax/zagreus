#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Voodoo.GE_Voodoo_C
// (None)

class UClass* UGE_Voodoo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Voodoo_C");

	return Clss;
}


// GE_Voodoo_C GE_Voodoo.Default__GE_Voodoo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Voodoo_C* UGE_Voodoo_C::GetDefaultObj()
{
	static class UGE_Voodoo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Voodoo_C*>(UGE_Voodoo_C::StaticClass()->DefaultObject);

	return Default;
}

}


