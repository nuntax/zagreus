#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GEC_ProtectionFromZeus.GEC_ProtectionFromZeus_C
// (None)

class UClass* UGEC_ProtectionFromZeus_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GEC_ProtectionFromZeus_C");

	return Clss;
}


// GEC_ProtectionFromZeus_C GEC_ProtectionFromZeus.Default__GEC_ProtectionFromZeus_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGEC_ProtectionFromZeus_C* UGEC_ProtectionFromZeus_C::GetDefaultObj()
{
	static class UGEC_ProtectionFromZeus_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGEC_ProtectionFromZeus_C*>(UGEC_ProtectionFromZeus_C::StaticClass()->DefaultObject);

	return Default;
}

}


