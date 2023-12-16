#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_DisarmDebuff.GE_DisarmDebuff_C
// (None)

class UClass* UGE_DisarmDebuff_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_DisarmDebuff_C");

	return Clss;
}


// GE_DisarmDebuff_C GE_DisarmDebuff.Default__GE_DisarmDebuff_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_DisarmDebuff_C* UGE_DisarmDebuff_C::GetDefaultObj()
{
	static class UGE_DisarmDebuff_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_DisarmDebuff_C*>(UGE_DisarmDebuff_C::StaticClass()->DefaultObject);

	return Default;
}

}


