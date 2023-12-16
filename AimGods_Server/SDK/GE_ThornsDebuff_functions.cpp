#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_ThornsDebuff.GE_ThornsDebuff_C
// (None)

class UClass* UGE_ThornsDebuff_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_ThornsDebuff_C");

	return Clss;
}


// GE_ThornsDebuff_C GE_ThornsDebuff.Default__GE_ThornsDebuff_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_ThornsDebuff_C* UGE_ThornsDebuff_C::GetDefaultObj()
{
	static class UGE_ThornsDebuff_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_ThornsDebuff_C*>(UGE_ThornsDebuff_C::StaticClass()->DefaultObject);

	return Default;
}

}


