#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ProfanityFilter.ProfanityFilterFunctionLibrary
// (None)

class UClass* UProfanityFilterFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProfanityFilterFunctionLibrary");

	return Clss;
}


// ProfanityFilterFunctionLibrary ProfanityFilter.Default__ProfanityFilterFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UProfanityFilterFunctionLibrary* UProfanityFilterFunctionLibrary::GetDefaultObj()
{
	static class UProfanityFilterFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UProfanityFilterFunctionLibrary*>(UProfanityFilterFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function ProfanityFilter.ProfanityFilterFunctionLibrary.FilterProfanity_String
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      InString                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              InMinimumSeverity                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UProfanityFilterFunctionLibrary::FilterProfanity_String(const class FString& InString, uint8 InMinimumSeverity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProfanityFilterFunctionLibrary", "FilterProfanity_String");

	Params::UProfanityFilterFunctionLibrary_FilterProfanity_String_Params Parms{};

	Parms.InString = InString;
	Parms.InMinimumSeverity = InMinimumSeverity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ProfanityFilter.ProfanityFilterFunctionLibrary.ContainsProfanity_Text
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FText                        InText                                                           (Parm, NativeAccessSpecifierPublic)
// uint8                              InMinimumSeverity                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UProfanityFilterFunctionLibrary::ContainsProfanity_Text(class FText InText, uint8 InMinimumSeverity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProfanityFilterFunctionLibrary", "ContainsProfanity_Text");

	Params::UProfanityFilterFunctionLibrary_ContainsProfanity_Text_Params Parms{};

	Parms.InText = InText;
	Parms.InMinimumSeverity = InMinimumSeverity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ProfanityFilter.ProfanityFilterFunctionLibrary.ContainsProfanity_String
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      InString                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              InMinimumSeverity                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UProfanityFilterFunctionLibrary::ContainsProfanity_String(const class FString& InString, uint8 InMinimumSeverity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProfanityFilterFunctionLibrary", "ContainsProfanity_String");

	Params::UProfanityFilterFunctionLibrary_ContainsProfanity_String_Params Parms{};

	Parms.InString = InString;
	Parms.InMinimumSeverity = InMinimumSeverity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ProfanityFilter.ProfanityFilterFunctionLibrary.ContainsProfanity_Name
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FName                        InName                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              InMinimumSeverity                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UProfanityFilterFunctionLibrary::ContainsProfanity_Name(class FName InName, uint8 InMinimumSeverity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProfanityFilterFunctionLibrary", "ContainsProfanity_Name");

	Params::UProfanityFilterFunctionLibrary_ContainsProfanity_Name_Params Parms{};

	Parms.InName = InName;
	Parms.InMinimumSeverity = InMinimumSeverity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


