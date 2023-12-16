#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MagicLeapAR.LuminARUObjectManager
// (None)

class UClass* ULuminARUObjectManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LuminARUObjectManager");

	return Clss;
}


// LuminARUObjectManager MagicLeapAR.Default__LuminARUObjectManager
// (Public, ClassDefaultObject, ArchetypeObject)

class ULuminARUObjectManager* ULuminARUObjectManager::GetDefaultObj()
{
	static class ULuminARUObjectManager* Default = nullptr;

	if (!Default)
		Default = static_cast<ULuminARUObjectManager*>(ULuminARUObjectManager::StaticClass()->DefaultObject);

	return Default;
}


// Class MagicLeapAR.LuminARSessionFunctionLibrary
// (None)

class UClass* ULuminARSessionFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LuminARSessionFunctionLibrary");

	return Clss;
}


// LuminARSessionFunctionLibrary MagicLeapAR.Default__LuminARSessionFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class ULuminARSessionFunctionLibrary* ULuminARSessionFunctionLibrary::GetDefaultObj()
{
	static class ULuminARSessionFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<ULuminARSessionFunctionLibrary*>(ULuminARSessionFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function MagicLeapAR.LuminARSessionFunctionLibrary.StartLuminARSession
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           LatentInfo                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class ULuminARSessionConfig*       Configuration                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULuminARSessionFunctionLibrary::StartLuminARSession(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class ULuminARSessionConfig* Configuration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LuminARSessionFunctionLibrary", "StartLuminARSession");

	Params::ULuminARSessionFunctionLibrary_StartLuminARSession_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.LatentInfo = LatentInfo;
	Parms.Configuration = Configuration;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class MagicLeapAR.LuminARFrameFunctionLibrary
// (None)

class UClass* ULuminARFrameFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LuminARFrameFunctionLibrary");

	return Clss;
}


// LuminARFrameFunctionLibrary MagicLeapAR.Default__LuminARFrameFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class ULuminARFrameFunctionLibrary* ULuminARFrameFunctionLibrary::GetDefaultObj()
{
	static class ULuminARFrameFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<ULuminARFrameFunctionLibrary*>(ULuminARFrameFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function MagicLeapAR.LuminARFrameFunctionLibrary.LuminARLineTrace
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   ScreenPosition                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSet<enum class ELuminARLineTraceChannel>TraceChannels                                                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FARTraceResult>      OutHitResults                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULuminARFrameFunctionLibrary::LuminARLineTrace(class UObject* WorldContextObject, struct FVector2D& ScreenPosition, TSet<enum class ELuminARLineTraceChannel> TraceChannels, TArray<struct FARTraceResult>* OutHitResults)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LuminARFrameFunctionLibrary", "LuminARLineTrace");

	Params::ULuminARFrameFunctionLibrary_LuminARLineTrace_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ScreenPosition = ScreenPosition;
	Parms.TraceChannels = TraceChannels;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutHitResults != nullptr)
		*OutHitResults = std::move(Parms.OutHitResults);

	return Parms.ReturnValue;

}


// Function MagicLeapAR.LuminARFrameFunctionLibrary.GetTrackingState
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class ELuminARTrackingState   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ELuminARTrackingState ULuminARFrameFunctionLibrary::GetTrackingState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LuminARFrameFunctionLibrary", "GetTrackingState");

	Params::ULuminARFrameFunctionLibrary_GetTrackingState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MagicLeapAR.LuminARFrameFunctionLibrary.GetLightEstimation
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLuminARLightEstimate       OutLightEstimate                                                 (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)

void ULuminARFrameFunctionLibrary::GetLightEstimation(struct FLuminARLightEstimate* OutLightEstimate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LuminARFrameFunctionLibrary", "GetLightEstimation");

	Params::ULuminARFrameFunctionLibrary_GetLightEstimation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutLightEstimate != nullptr)
		*OutLightEstimate = std::move(Parms.OutLightEstimate);

}


// Class MagicLeapAR.LuminARSessionConfig
// (None)

class UClass* ULuminARSessionConfig::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LuminARSessionConfig");

	return Clss;
}


// LuminARSessionConfig MagicLeapAR.Default__LuminARSessionConfig
// (Public, ClassDefaultObject, ArchetypeObject)

class ULuminARSessionConfig* ULuminARSessionConfig::GetDefaultObj()
{
	static class ULuminARSessionConfig* Default = nullptr;

	if (!Default)
		Default = static_cast<ULuminARSessionConfig*>(ULuminARSessionConfig::StaticClass()->DefaultObject);

	return Default;
}

}


