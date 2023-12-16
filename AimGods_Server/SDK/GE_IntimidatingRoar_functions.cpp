#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_IntimidatingRoar.GE_IntimidatingRoar_C
// (None)

class UClass* UGE_IntimidatingRoar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_IntimidatingRoar_C");

	return Clss;
}


// GE_IntimidatingRoar_C GE_IntimidatingRoar.Default__GE_IntimidatingRoar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_IntimidatingRoar_C* UGE_IntimidatingRoar_C::GetDefaultObj()
{
	static class UGE_IntimidatingRoar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_IntimidatingRoar_C*>(UGE_IntimidatingRoar_C::StaticClass()->DefaultObject);

	return Default;
}

}


