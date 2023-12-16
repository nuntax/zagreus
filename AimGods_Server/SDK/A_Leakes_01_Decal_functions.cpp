#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass A_Leakes_01_Decal.A_Leakes_01_Decal_C
// (Actor)

class UClass* AA_Leakes_01_Decal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("A_Leakes_01_Decal_C");

	return Clss;
}


// A_Leakes_01_Decal_C A_Leakes_01_Decal.Default__A_Leakes_01_Decal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AA_Leakes_01_Decal_C* AA_Leakes_01_Decal_C::GetDefaultObj()
{
	static class AA_Leakes_01_Decal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AA_Leakes_01_Decal_C*>(AA_Leakes_01_Decal_C::StaticClass()->DefaultObject);

	return Default;
}

}


