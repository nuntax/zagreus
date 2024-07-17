#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Thorns.GE_Thorns_C
// (None)

class UClass* UGE_Thorns_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Thorns_C");

	return Clss;
}


// GE_Thorns_C GE_Thorns.Default__GE_Thorns_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Thorns_C* UGE_Thorns_C::GetDefaultObj()
{
	static class UGE_Thorns_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Thorns_C*>(UGE_Thorns_C::StaticClass()->DefaultObject);

	return Default;
}

}


