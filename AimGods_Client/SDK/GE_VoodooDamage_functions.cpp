#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_VoodooDamage.GE_VoodooDamage_C
// (None)

class UClass* UGE_VoodooDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_VoodooDamage_C");

	return Clss;
}


// GE_VoodooDamage_C GE_VoodooDamage.Default__GE_VoodooDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_VoodooDamage_C* UGE_VoodooDamage_C::GetDefaultObj()
{
	static class UGE_VoodooDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_VoodooDamage_C*>(UGE_VoodooDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


