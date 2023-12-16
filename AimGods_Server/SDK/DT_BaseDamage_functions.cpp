#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DT_BaseDamage.DT_BaseDamage_C
// (None)

class UClass* UDT_BaseDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DT_BaseDamage_C");

	return Clss;
}


// DT_BaseDamage_C DT_BaseDamage.Default__DT_BaseDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDT_BaseDamage_C* UDT_BaseDamage_C::GetDefaultObj()
{
	static class UDT_BaseDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDT_BaseDamage_C*>(UDT_BaseDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


