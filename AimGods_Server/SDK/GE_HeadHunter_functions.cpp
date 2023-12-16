#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_HeadHunter.GE_HeadHunter_C
// (None)

class UClass* UGE_HeadHunter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_HeadHunter_C");

	return Clss;
}


// GE_HeadHunter_C GE_HeadHunter.Default__GE_HeadHunter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_HeadHunter_C* UGE_HeadHunter_C::GetDefaultObj()
{
	static class UGE_HeadHunter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_HeadHunter_C*>(UGE_HeadHunter_C::StaticClass()->DefaultObject);

	return Default;
}

}


