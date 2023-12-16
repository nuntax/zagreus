#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_SprintBuff.GE_SprintBuff_C
// (None)

class UClass* UGE_SprintBuff_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_SprintBuff_C");

	return Clss;
}


// GE_SprintBuff_C GE_SprintBuff.Default__GE_SprintBuff_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_SprintBuff_C* UGE_SprintBuff_C::GetDefaultObj()
{
	static class UGE_SprintBuff_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_SprintBuff_C*>(UGE_SprintBuff_C::StaticClass()->DefaultObject);

	return Default;
}

}


