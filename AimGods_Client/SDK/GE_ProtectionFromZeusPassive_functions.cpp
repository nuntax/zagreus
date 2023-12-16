#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_ProtectionFromZeusPassive.GE_ProtectionFromZeusPassive_C
// (None)

class UClass* UGE_ProtectionFromZeusPassive_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_ProtectionFromZeusPassive_C");

	return Clss;
}


// GE_ProtectionFromZeusPassive_C GE_ProtectionFromZeusPassive.Default__GE_ProtectionFromZeusPassive_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_ProtectionFromZeusPassive_C* UGE_ProtectionFromZeusPassive_C::GetDefaultObj()
{
	static class UGE_ProtectionFromZeusPassive_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_ProtectionFromZeusPassive_C*>(UGE_ProtectionFromZeusPassive_C::StaticClass()->DefaultObject);

	return Default;
}

}


