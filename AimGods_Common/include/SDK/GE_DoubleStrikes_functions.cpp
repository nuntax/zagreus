#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_DoubleStrikes.GE_DoubleStrikes_C
// (None)

class UClass* UGE_DoubleStrikes_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_DoubleStrikes_C");

	return Clss;
}


// GE_DoubleStrikes_C GE_DoubleStrikes.Default__GE_DoubleStrikes_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_DoubleStrikes_C* UGE_DoubleStrikes_C::GetDefaultObj()
{
	static class UGE_DoubleStrikes_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_DoubleStrikes_C*>(UGE_DoubleStrikes_C::StaticClass()->DefaultObject);

	return Default;
}

}


