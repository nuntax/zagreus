#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MagicLeapPlanes.MagicLeapPlanesComponent
// (SceneComponent)

class UClass* UMagicLeapPlanesComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MagicLeapPlanesComponent");

	return Clss;
}


// MagicLeapPlanesComponent MagicLeapPlanes.Default__MagicLeapPlanesComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UMagicLeapPlanesComponent* UMagicLeapPlanesComponent::GetDefaultObj()
{
	static class UMagicLeapPlanesComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UMagicLeapPlanesComponent*>(UMagicLeapPlanesComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function MagicLeapPlanes.MagicLeapPlanesComponent.RequestPlanesAsync
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapPlanesComponent::RequestPlanesAsync()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapPlanesComponent", "RequestPlanesAsync");

	Params::UMagicLeapPlanesComponent_RequestPlanesAsync_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MagicLeapPlanes.MagicLeapPlanesFunctionLibrary
// (None)

class UClass* UMagicLeapPlanesFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MagicLeapPlanesFunctionLibrary");

	return Clss;
}


// MagicLeapPlanesFunctionLibrary MagicLeapPlanes.Default__MagicLeapPlanesFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UMagicLeapPlanesFunctionLibrary* UMagicLeapPlanesFunctionLibrary::GetDefaultObj()
{
	static class UMagicLeapPlanesFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UMagicLeapPlanesFunctionLibrary*>(UMagicLeapPlanesFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.ReorderPlaneFlags
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<enum class EMagicLeapPlaneQueryFlags>InPriority                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<enum class EMagicLeapPlaneQueryFlags>InFlagsToReorder                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<enum class EMagicLeapPlaneQueryFlags>OutReorderedFlags                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UMagicLeapPlanesFunctionLibrary::ReorderPlaneFlags(TArray<enum class EMagicLeapPlaneQueryFlags>& InPriority, TArray<enum class EMagicLeapPlaneQueryFlags>& InFlagsToReorder, TArray<enum class EMagicLeapPlaneQueryFlags>* OutReorderedFlags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapPlanesFunctionLibrary", "ReorderPlaneFlags");

	Params::UMagicLeapPlanesFunctionLibrary_ReorderPlaneFlags_Params Parms{};

	Parms.InPriority = InPriority;
	Parms.InFlagsToReorder = InFlagsToReorder;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutReorderedFlags != nullptr)
		*OutReorderedFlags = std::move(Parms.OutReorderedFlags);

}


// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.RemoveFlagsNotInQuery
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<enum class EMagicLeapPlaneQueryFlags>InQueryFlags                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<enum class EMagicLeapPlaneQueryFlags>InResultFlags                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<enum class EMagicLeapPlaneQueryFlags>OutFlags                                                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UMagicLeapPlanesFunctionLibrary::RemoveFlagsNotInQuery(TArray<enum class EMagicLeapPlaneQueryFlags>& InQueryFlags, TArray<enum class EMagicLeapPlaneQueryFlags>& InResultFlags, TArray<enum class EMagicLeapPlaneQueryFlags>* OutFlags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapPlanesFunctionLibrary", "RemoveFlagsNotInQuery");

	Params::UMagicLeapPlanesFunctionLibrary_RemoveFlagsNotInQuery_Params Parms{};

	Parms.InQueryFlags = InQueryFlags;
	Parms.InResultFlags = InResultFlags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutFlags != nullptr)
		*OutFlags = std::move(Parms.OutFlags);

}


// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.PlanesQueryBeginAsync
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMagicLeapPlanesQuery       Query                                                            (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// UDelegateProperty_                 ResultDelegate                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapPlanesFunctionLibrary::PlanesQueryBeginAsync(struct FMagicLeapPlanesQuery& Query, UDelegateProperty_& ResultDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapPlanesFunctionLibrary", "PlanesQueryBeginAsync");

	Params::UMagicLeapPlanesFunctionLibrary_PlanesQueryBeginAsync_Params Parms{};

	Parms.Query = Query;
	Parms.ResultDelegate = ResultDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.IsTrackerValid
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapPlanesFunctionLibrary::IsTrackerValid()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapPlanesFunctionLibrary", "IsTrackerValid");

	Params::UMagicLeapPlanesFunctionLibrary_IsTrackerValid_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.GetContentScale
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                      ContentActor                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMagicLeapPlaneResult       PlaneResult                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FTransform UMagicLeapPlanesFunctionLibrary::GetContentScale(class AActor* ContentActor, struct FMagicLeapPlaneResult& PlaneResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapPlanesFunctionLibrary", "GetContentScale");

	Params::UMagicLeapPlanesFunctionLibrary_GetContentScale_Params Parms{};

	Parms.ContentActor = ContentActor;
	Parms.PlaneResult = PlaneResult;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.DestroyTracker
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapPlanesFunctionLibrary::DestroyTracker()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapPlanesFunctionLibrary", "DestroyTracker");

	Params::UMagicLeapPlanesFunctionLibrary_DestroyTracker_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.CreateTracker
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapPlanesFunctionLibrary::CreateTracker()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapPlanesFunctionLibrary", "CreateTracker");

	Params::UMagicLeapPlanesFunctionLibrary_CreateTracker_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


