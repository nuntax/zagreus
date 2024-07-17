#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Execute.GE_Execute_C
// (None)

class UClass* UGE_Execute_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Execute_C");

	return Clss;
}


// GE_Execute_C GE_Execute.Default__GE_Execute_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Execute_C* UGE_Execute_C::GetDefaultObj()
{
	static class UGE_Execute_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Execute_C*>(UGE_Execute_C::StaticClass()->DefaultObject);

	return Default;
}

}


