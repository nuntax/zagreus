#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class OculusMR.OculusMR_BoundaryActor
// (Actor)

class UClass* AOculusMR_BoundaryActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OculusMR_BoundaryActor");

	return Clss;
}


// OculusMR_BoundaryActor OculusMR.Default__OculusMR_BoundaryActor
// (Public, ClassDefaultObject, ArchetypeObject)

class AOculusMR_BoundaryActor* AOculusMR_BoundaryActor::GetDefaultObj()
{
	static class AOculusMR_BoundaryActor* Default = nullptr;

	if (!Default)
		Default = static_cast<AOculusMR_BoundaryActor*>(AOculusMR_BoundaryActor::StaticClass()->DefaultObject);

	return Default;
}


// Class OculusMR.OculusMR_BoundaryMeshComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UOculusMR_BoundaryMeshComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OculusMR_BoundaryMeshComponent");

	return Clss;
}


// OculusMR_BoundaryMeshComponent OculusMR.Default__OculusMR_BoundaryMeshComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UOculusMR_BoundaryMeshComponent* UOculusMR_BoundaryMeshComponent::GetDefaultObj()
{
	static class UOculusMR_BoundaryMeshComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UOculusMR_BoundaryMeshComponent*>(UOculusMR_BoundaryMeshComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class OculusMR.OculusMR_CastingCameraActor
// (Actor)

class UClass* AOculusMR_CastingCameraActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OculusMR_CastingCameraActor");

	return Clss;
}


// OculusMR_CastingCameraActor OculusMR.Default__OculusMR_CastingCameraActor
// (Public, ClassDefaultObject, ArchetypeObject)

class AOculusMR_CastingCameraActor* AOculusMR_CastingCameraActor::GetDefaultObj()
{
	static class AOculusMR_CastingCameraActor* Default = nullptr;

	if (!Default)
		Default = static_cast<AOculusMR_CastingCameraActor*>(AOculusMR_CastingCameraActor::StaticClass()->DefaultObject);

	return Default;
}


// Class OculusMR.OculusMR_PlaneMeshComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UOculusMR_PlaneMeshComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OculusMR_PlaneMeshComponent");

	return Clss;
}


// OculusMR_PlaneMeshComponent OculusMR.Default__OculusMR_PlaneMeshComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UOculusMR_PlaneMeshComponent* UOculusMR_PlaneMeshComponent::GetDefaultObj()
{
	static class UOculusMR_PlaneMeshComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UOculusMR_PlaneMeshComponent*>(UOculusMR_PlaneMeshComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function OculusMR.OculusMR_PlaneMeshComponent.SetCustomMeshTriangles
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FOculusMR_PlaneMeshTriangle>Triangles                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOculusMR_PlaneMeshComponent::SetCustomMeshTriangles(TArray<struct FOculusMR_PlaneMeshTriangle>& Triangles)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OculusMR_PlaneMeshComponent", "SetCustomMeshTriangles");

	Params::UOculusMR_PlaneMeshComponent_SetCustomMeshTriangles_Params Parms{};

	Parms.Triangles = Triangles;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OculusMR.OculusMR_PlaneMeshComponent.ClearCustomMeshTriangles
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UOculusMR_PlaneMeshComponent::ClearCustomMeshTriangles()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OculusMR_PlaneMeshComponent", "ClearCustomMeshTriangles");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function OculusMR.OculusMR_PlaneMeshComponent.AddCustomMeshTriangles
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FOculusMR_PlaneMeshTriangle>Triangles                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UOculusMR_PlaneMeshComponent::AddCustomMeshTriangles(TArray<struct FOculusMR_PlaneMeshTriangle>& Triangles)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OculusMR_PlaneMeshComponent", "AddCustomMeshTriangles");

	Params::UOculusMR_PlaneMeshComponent_AddCustomMeshTriangles_Params Parms{};

	Parms.Triangles = Triangles;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class OculusMR.OculusMR_Settings
// (None)

class UClass* UOculusMR_Settings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OculusMR_Settings");

	return Clss;
}


// OculusMR_Settings OculusMR.Default__OculusMR_Settings
// (Public, ClassDefaultObject, ArchetypeObject)

class UOculusMR_Settings* UOculusMR_Settings::GetDefaultObj()
{
	static class UOculusMR_Settings* Default = nullptr;

	if (!Default)
		Default = static_cast<UOculusMR_Settings*>(UOculusMR_Settings::StaticClass()->DefaultObject);

	return Default;
}


// Function OculusMR.OculusMR_Settings.SetUseDynamicLighting
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               Val                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOculusMR_Settings::SetUseDynamicLighting(bool Val)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OculusMR_Settings", "SetUseDynamicLighting");

	Params::UOculusMR_Settings_SetUseDynamicLighting_Params Parms{};

	Parms.Val = Val;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function OculusMR.OculusMR_Settings.SetIsCasting
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               Val                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOculusMR_Settings::SetIsCasting(bool Val)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OculusMR_Settings", "SetIsCasting");

	Params::UOculusMR_Settings_SetIsCasting_Params Parms{};

	Parms.Val = Val;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function OculusMR.OculusMR_Settings.SetDepthQuality
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EOculusMR_DepthQuality  Val                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOculusMR_Settings::SetDepthQuality(enum class EOculusMR_DepthQuality Val)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OculusMR_Settings", "SetDepthQuality");

	Params::UOculusMR_Settings_SetDepthQuality_Params Parms{};

	Parms.Val = Val;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function OculusMR.OculusMR_Settings.SetCompositionMethod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EOculusMR_CompositionMethodVal                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOculusMR_Settings::SetCompositionMethod(enum class EOculusMR_CompositionMethod Val)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OculusMR_Settings", "SetCompositionMethod");

	Params::UOculusMR_Settings_SetCompositionMethod_Params Parms{};

	Parms.Val = Val;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function OculusMR.OculusMR_Settings.SetCapturingCamera
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EOculusMR_CameraDeviceEnumVal                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOculusMR_Settings::SetCapturingCamera(enum class EOculusMR_CameraDeviceEnum Val)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OculusMR_Settings", "SetCapturingCamera");

	Params::UOculusMR_Settings_SetCapturingCamera_Params Parms{};

	Parms.Val = Val;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function OculusMR.OculusMR_Settings.SaveToIni
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:

void UOculusMR_Settings::SaveToIni()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OculusMR_Settings", "SaveToIni");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function OculusMR.OculusMR_Settings.LoadFromIni
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UOculusMR_Settings::LoadFromIni()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OculusMR_Settings", "LoadFromIni");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function OculusMR.OculusMR_Settings.GetUseDynamicLighting
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOculusMR_Settings::GetUseDynamicLighting()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OculusMR_Settings", "GetUseDynamicLighting");

	Params::UOculusMR_Settings_GetUseDynamicLighting_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OculusMR.OculusMR_Settings.GetIsCasting
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOculusMR_Settings::GetIsCasting()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OculusMR_Settings", "GetIsCasting");

	Params::UOculusMR_Settings_GetIsCasting_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OculusMR.OculusMR_Settings.GetDepthQuality
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EOculusMR_DepthQuality  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EOculusMR_DepthQuality UOculusMR_Settings::GetDepthQuality()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OculusMR_Settings", "GetDepthQuality");

	Params::UOculusMR_Settings_GetDepthQuality_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OculusMR.OculusMR_Settings.GetCompositionMethod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EOculusMR_CompositionMethodReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EOculusMR_CompositionMethod UOculusMR_Settings::GetCompositionMethod()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OculusMR_Settings", "GetCompositionMethod");

	Params::UOculusMR_Settings_GetCompositionMethod_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OculusMR.OculusMR_Settings.GetCapturingCamera
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EOculusMR_CameraDeviceEnumReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EOculusMR_CameraDeviceEnum UOculusMR_Settings::GetCapturingCamera()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OculusMR_Settings", "GetCapturingCamera");

	Params::UOculusMR_Settings_GetCapturingCamera_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OculusMR.OculusMR_Settings.GetBindToTrackedCameraIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UOculusMR_Settings::GetBindToTrackedCameraIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OculusMR_Settings", "GetBindToTrackedCameraIndex");

	Params::UOculusMR_Settings_GetBindToTrackedCameraIndex_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OculusMR.OculusMR_Settings.BindToTrackedCameraIndexIfAvailable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InTrackedCameraIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOculusMR_Settings::BindToTrackedCameraIndexIfAvailable(int32 InTrackedCameraIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OculusMR_Settings", "BindToTrackedCameraIndexIfAvailable");

	Params::UOculusMR_Settings_BindToTrackedCameraIndexIfAvailable_Params Parms{};

	Parms.InTrackedCameraIndex = InTrackedCameraIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class OculusMR.OculusMR_State
// (None)

class UClass* UOculusMR_State::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OculusMR_State");

	return Clss;
}


// OculusMR_State OculusMR.Default__OculusMR_State
// (Public, ClassDefaultObject, ArchetypeObject)

class UOculusMR_State* UOculusMR_State::GetDefaultObj()
{
	static class UOculusMR_State* Default = nullptr;

	if (!Default)
		Default = static_cast<UOculusMR_State*>(UOculusMR_State::StaticClass()->DefaultObject);

	return Default;
}


// Class OculusMR.OculusMRFunctionLibrary
// (None)

class UClass* UOculusMRFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OculusMRFunctionLibrary");

	return Clss;
}


// OculusMRFunctionLibrary OculusMR.Default__OculusMRFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UOculusMRFunctionLibrary* UOculusMRFunctionLibrary::GetDefaultObj()
{
	static class UOculusMRFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UOculusMRFunctionLibrary*>(UOculusMRFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function OculusMR.OculusMRFunctionLibrary.SetTrackingReferenceComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USceneComponent*             Component                                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOculusMRFunctionLibrary::SetTrackingReferenceComponent(class USceneComponent* Component)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OculusMRFunctionLibrary", "SetTrackingReferenceComponent");

	Params::UOculusMRFunctionLibrary_SetTrackingReferenceComponent_Params Parms{};

	Parms.Component = Component;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function OculusMR.OculusMRFunctionLibrary.IsMrcEnabled
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOculusMRFunctionLibrary::IsMrcEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OculusMRFunctionLibrary", "IsMrcEnabled");

	Params::UOculusMRFunctionLibrary_IsMrcEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OculusMR.OculusMRFunctionLibrary.IsMrcActive
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOculusMRFunctionLibrary::IsMrcActive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OculusMRFunctionLibrary", "IsMrcActive");

	Params::UOculusMRFunctionLibrary_IsMrcActive_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OculusMR.OculusMRFunctionLibrary.GetTrackingReferenceComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USceneComponent*             ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USceneComponent* UOculusMRFunctionLibrary::GetTrackingReferenceComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OculusMRFunctionLibrary", "GetTrackingReferenceComponent");

	Params::UOculusMRFunctionLibrary_GetTrackingReferenceComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OculusMR.OculusMRFunctionLibrary.GetOculusMRSettings
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOculusMR_Settings*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOculusMR_Settings* UOculusMRFunctionLibrary::GetOculusMRSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OculusMRFunctionLibrary", "GetOculusMRSettings");

	Params::UOculusMRFunctionLibrary_GetOculusMRSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


