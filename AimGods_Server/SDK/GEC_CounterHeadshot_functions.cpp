#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GEC_CounterHeadshot.GEC_CounterHeadshot_C
// (None)

class UClass* UGEC_CounterHeadshot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GEC_CounterHeadshot_C");

	return Clss;
}


// GEC_CounterHeadshot_C GEC_CounterHeadshot.Default__GEC_CounterHeadshot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGEC_CounterHeadshot_C* UGEC_CounterHeadshot_C::GetDefaultObj()
{
	static class UGEC_CounterHeadshot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGEC_CounterHeadshot_C*>(UGEC_CounterHeadshot_C::StaticClass()->DefaultObject);

	return Default;
}

}


