#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class OculusHMD.OculusFunctionLibrary
// (None)

class UClass* UOculusFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OculusFunctionLibrary");

	return Clss;
}


// OculusFunctionLibrary OculusHMD.Default__OculusFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UOculusFunctionLibrary* UOculusFunctionLibrary::GetDefaultObj()
{
	static class UOculusFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UOculusFunctionLibrary*>(UOculusFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function OculusHMD.OculusFunctionLibrary.ShowLoadingSplashScreen
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UOculusFunctionLibrary::ShowLoadingSplashScreen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OculusFunctionLibrary", "ShowLoadingSplashScreen");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function OculusHMD.OculusFunctionLibrary.ShowLoadingIcon
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UTexture2D*                  Texture                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOculusFunctionLibrary::ShowLoadingIcon(class UTexture2D* Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OculusFunctionLibrary", "ShowLoadingIcon");

	Params::UOculusFunctionLibrary_ShowLoadingIcon_Params Parms{};

	Parms.Texture = Texture;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function OculusHMD.OculusFunctionLibrary.SetReorientHMDOnControllerRecenter
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               RecenterMode                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOculusFunctionLibrary::SetReorientHMDOnControllerRecenter(bool RecenterMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OculusFunctionLibrary", "SetReorientHMDOnControllerRecenter");

	Params::UOculusFunctionLibrary_SetReorientHMDOnControllerRecenter_Params Parms{};

	Parms.RecenterMode = RecenterMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function OculusHMD.OculusFunctionLibrary.SetPositionScale3D
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     PosScale3D                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOculusFunctionLibrary::SetPositionScale3D(const struct FVector& PosScale3D)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OculusFunctionLibrary", "SetPositionScale3D");

	Params::UOculusFunctionLibrary_SetPositionScale3D_Params Parms{};

	Parms.PosScale3D = PosScale3D;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function OculusHMD.OculusFunctionLibrary.SetLoadingSplashParams
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      TexturePath                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     DistanceInMeters                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   SizeInMeters                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     RotationAxis                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              RotationDeltaInDeg                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOculusFunctionLibrary::SetLoadingSplashParams(const class FString& TexturePath, const struct FVector& DistanceInMeters, const struct FVector2D& SizeInMeters, const struct FVector& RotationAxis, float RotationDeltaInDeg)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OculusFunctionLibrary", "SetLoadingSplashParams");

	Params::UOculusFunctionLibrary_SetLoadingSplashParams_Params Parms{};

	Parms.TexturePath = TexturePath;
	Parms.DistanceInMeters = DistanceInMeters;
	Parms.SizeInMeters = SizeInMeters;
	Parms.RotationAxis = RotationAxis;
	Parms.RotationDeltaInDeg = RotationDeltaInDeg;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function OculusHMD.OculusFunctionLibrary.SetGuardianVisibility
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               GuardianVisible                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOculusFunctionLibrary::SetGuardianVisibility(bool GuardianVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OculusFunctionLibrary", "SetGuardianVisibility");

	Params::UOculusFunctionLibrary_SetGuardianVisibility_Params Parms{};

	Parms.GuardianVisible = GuardianVisible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function OculusHMD.OculusFunctionLibrary.SetFixedFoveatedRenderingLevel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class EFixedFoveatedRenderingLevelLevel                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOculusFunctionLibrary::SetFixedFoveatedRenderingLevel(enum class EFixedFoveatedRenderingLevel Level)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OculusFunctionLibrary", "SetFixedFoveatedRenderingLevel");

	Params::UOculusFunctionLibrary_SetFixedFoveatedRenderingLevel_Params Parms{};

	Parms.Level = Level;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function OculusHMD.OculusFunctionLibrary.SetDisplayFrequency
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                              RequestedFrequency                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOculusFunctionLibrary::SetDisplayFrequency(float RequestedFrequency)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OculusFunctionLibrary", "SetDisplayFrequency");

	Params::UOculusFunctionLibrary_SetDisplayFrequency_Params Parms{};

	Parms.RequestedFrequency = RequestedFrequency;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function OculusHMD.OculusFunctionLibrary.SetCPUAndGPULevels
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              CPULevel                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              GPULevel                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOculusFunctionLibrary::SetCPUAndGPULevels(int32 CPULevel, int32 GPULevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OculusFunctionLibrary", "SetCPUAndGPULevels");

	Params::UOculusFunctionLibrary_SetCPUAndGPULevels_Params Parms{};

	Parms.CPULevel = CPULevel;
	Parms.GPULevel = GPULevel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function OculusHMD.OculusFunctionLibrary.SetColorScaleAndOffset
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                ColorScale                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ColorOffset                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bApplyToAllLayers                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOculusFunctionLibrary::SetColorScaleAndOffset(const struct FLinearColor& ColorScale, const struct FLinearColor& ColorOffset, bool bApplyToAllLayers)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OculusFunctionLibrary", "SetColorScaleAndOffset");

	Params::UOculusFunctionLibrary_SetColorScaleAndOffset_Params Parms{};

	Parms.ColorScale = ColorScale;
	Parms.ColorOffset = ColorOffset;
	Parms.bApplyToAllLayers = bApplyToAllLayers;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function OculusHMD.OculusFunctionLibrary.SetBaseRotationAndPositionOffset
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                    BaseRot                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                     PosOffset                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EOrientPositionSelector Options                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOculusFunctionLibrary::SetBaseRotationAndPositionOffset(const struct FRotator& BaseRot, const struct FVector& PosOffset, enum class EOrientPositionSelector Options)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OculusFunctionLibrary", "SetBaseRotationAndPositionOffset");

	Params::UOculusFunctionLibrary_SetBaseRotationAndPositionOffset_Params Parms{};

	Parms.BaseRot = BaseRot;
	Parms.PosOffset = PosOffset;
	Parms.Options = Options;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function OculusHMD.OculusFunctionLibrary.SetBaseRotationAndBaseOffsetInMeters
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                    Rotation                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                     BaseOffsetInMeters                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EOrientPositionSelector Options                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOculusFunctionLibrary::SetBaseRotationAndBaseOffsetInMeters(const struct FRotator& Rotation, const struct FVector& BaseOffsetInMeters, enum class EOrientPositionSelector Options)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OculusFunctionLibrary", "SetBaseRotationAndBaseOffsetInMeters");

	Params::UOculusFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Params Parms{};

	Parms.Rotation = Rotation;
	Parms.BaseOffsetInMeters = BaseOffsetInMeters;
	Parms.Options = Options;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function OculusHMD.OculusFunctionLibrary.IsLoadingIconEnabled
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOculusFunctionLibrary::IsLoadingIconEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OculusFunctionLibrary", "IsLoadingIconEnabled");

	Params::UOculusFunctionLibrary_IsLoadingIconEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OculusHMD.OculusFunctionLibrary.IsGuardianDisplayed
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOculusFunctionLibrary::IsGuardianDisplayed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OculusFunctionLibrary", "IsGuardianDisplayed");

	Params::UOculusFunctionLibrary_IsGuardianDisplayed_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OculusHMD.OculusFunctionLibrary.IsGuardianConfigured
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOculusFunctionLibrary::IsGuardianConfigured()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OculusFunctionLibrary", "IsGuardianConfigured");

	Params::UOculusFunctionLibrary_IsGuardianConfigured_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OculusHMD.OculusFunctionLibrary.IsDeviceTracked
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class ETrackedDeviceType      DeviceType                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOculusFunctionLibrary::IsDeviceTracked(enum class ETrackedDeviceType DeviceType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OculusFunctionLibrary", "IsDeviceTracked");

	Params::UOculusFunctionLibrary_IsDeviceTracked_Params Parms{};

	Parms.DeviceType = DeviceType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OculusHMD.OculusFunctionLibrary.IsAutoLoadingSplashScreenEnabled
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOculusFunctionLibrary::IsAutoLoadingSplashScreenEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OculusFunctionLibrary", "IsAutoLoadingSplashScreenEnabled");

	Params::UOculusFunctionLibrary_IsAutoLoadingSplashScreenEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OculusHMD.OculusFunctionLibrary.HideLoadingSplashScreen
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               bClear                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOculusFunctionLibrary::HideLoadingSplashScreen(bool bClear)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OculusFunctionLibrary", "HideLoadingSplashScreen");

	Params::UOculusFunctionLibrary_HideLoadingSplashScreen_Params Parms{};

	Parms.bClear = bClear;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function OculusHMD.OculusFunctionLibrary.HideLoadingIcon
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UOculusFunctionLibrary::HideLoadingIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OculusFunctionLibrary", "HideLoadingIcon");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function OculusHMD.OculusFunctionLibrary.HasSystemOverlayPresent
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOculusFunctionLibrary::HasSystemOverlayPresent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OculusFunctionLibrary", "HasSystemOverlayPresent");

	Params::UOculusFunctionLibrary_HasSystemOverlayPresent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OculusHMD.OculusFunctionLibrary.HasInputFocus
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOculusFunctionLibrary::HasInputFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OculusFunctionLibrary", "HasInputFocus");

	Params::UOculusFunctionLibrary_HasInputFocus_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OculusHMD.OculusFunctionLibrary.GetUserProfile
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FHmdUserProfile             Profile                                                          (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOculusFunctionLibrary::GetUserProfile(struct FHmdUserProfile* Profile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OculusFunctionLibrary", "GetUserProfile");

	Params::UOculusFunctionLibrary_GetUserProfile_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Profile != nullptr)
		*Profile = std::move(Parms.Profile);

	return Parms.ReturnValue;

}


// Function OculusHMD.OculusFunctionLibrary.GetRawSensorData
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     AngularAcceleration                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     LinearAcceleration                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     AngularVelocity                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     LinearVelocity                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeInSeconds                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ETrackedDeviceType      DeviceType                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOculusFunctionLibrary::GetRawSensorData(struct FVector* AngularAcceleration, struct FVector* LinearAcceleration, struct FVector* AngularVelocity, struct FVector* LinearVelocity, float* TimeInSeconds, enum class ETrackedDeviceType DeviceType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OculusFunctionLibrary", "GetRawSensorData");

	Params::UOculusFunctionLibrary_GetRawSensorData_Params Parms{};

	Parms.DeviceType = DeviceType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AngularAcceleration != nullptr)
		*AngularAcceleration = std::move(Parms.AngularAcceleration);

	if (LinearAcceleration != nullptr)
		*LinearAcceleration = std::move(Parms.LinearAcceleration);

	if (AngularVelocity != nullptr)
		*AngularVelocity = std::move(Parms.AngularVelocity);

	if (LinearVelocity != nullptr)
		*LinearVelocity = std::move(Parms.LinearVelocity);

	if (TimeInSeconds != nullptr)
		*TimeInSeconds = Parms.TimeInSeconds;

}


// Function OculusHMD.OculusFunctionLibrary.GetPose
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRotator                    DeviceRotation                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                     DevicePosition                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     NeckPosition                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUseOrienationForPlayerCamera                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUsePositionForPlayerCamera                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     PositionScale                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOculusFunctionLibrary::GetPose(struct FRotator* DeviceRotation, struct FVector* DevicePosition, struct FVector* NeckPosition, bool bUseOrienationForPlayerCamera, bool bUsePositionForPlayerCamera, const struct FVector& PositionScale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OculusFunctionLibrary", "GetPose");

	Params::UOculusFunctionLibrary_GetPose_Params Parms{};

	Parms.bUseOrienationForPlayerCamera = bUseOrienationForPlayerCamera;
	Parms.bUsePositionForPlayerCamera = bUsePositionForPlayerCamera;
	Parms.PositionScale = PositionScale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (DeviceRotation != nullptr)
		*DeviceRotation = std::move(Parms.DeviceRotation);

	if (DevicePosition != nullptr)
		*DevicePosition = std::move(Parms.DevicePosition);

	if (NeckPosition != nullptr)
		*NeckPosition = std::move(Parms.NeckPosition);

}


// Function OculusHMD.OculusFunctionLibrary.GetPointGuardianIntersection
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     Point                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EBoundaryType           BoundaryType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGuardianTestResult         ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FGuardianTestResult UOculusFunctionLibrary::GetPointGuardianIntersection(const struct FVector& Point, enum class EBoundaryType BoundaryType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OculusFunctionLibrary", "GetPointGuardianIntersection");

	Params::UOculusFunctionLibrary_GetPointGuardianIntersection_Params Parms{};

	Parms.Point = Point;
	Parms.BoundaryType = BoundaryType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OculusHMD.OculusFunctionLibrary.GetPlayAreaTransform
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FTransform UOculusFunctionLibrary::GetPlayAreaTransform()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OculusFunctionLibrary", "GetPlayAreaTransform");

	Params::UOculusFunctionLibrary_GetPlayAreaTransform_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OculusHMD.OculusFunctionLibrary.GetNodeGuardianIntersection
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class ETrackedDeviceType      DeviceType                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EBoundaryType           BoundaryType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGuardianTestResult         ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FGuardianTestResult UOculusFunctionLibrary::GetNodeGuardianIntersection(enum class ETrackedDeviceType DeviceType, enum class EBoundaryType BoundaryType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OculusFunctionLibrary", "GetNodeGuardianIntersection");

	Params::UOculusFunctionLibrary_GetNodeGuardianIntersection_Params Parms{};

	Parms.DeviceType = DeviceType;
	Parms.BoundaryType = BoundaryType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OculusHMD.OculusFunctionLibrary.GetLoadingSplashParams
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      TexturePath                                                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     DistanceInMeters                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   SizeInMeters                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     RotationAxis                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              RotationDeltaInDeg                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOculusFunctionLibrary::GetLoadingSplashParams(class FString* TexturePath, struct FVector* DistanceInMeters, struct FVector2D* SizeInMeters, struct FVector* RotationAxis, float* RotationDeltaInDeg)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OculusFunctionLibrary", "GetLoadingSplashParams");

	Params::UOculusFunctionLibrary_GetLoadingSplashParams_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TexturePath != nullptr)
		*TexturePath = std::move(Parms.TexturePath);

	if (DistanceInMeters != nullptr)
		*DistanceInMeters = std::move(Parms.DistanceInMeters);

	if (SizeInMeters != nullptr)
		*SizeInMeters = std::move(Parms.SizeInMeters);

	if (RotationAxis != nullptr)
		*RotationAxis = std::move(Parms.RotationAxis);

	if (RotationDeltaInDeg != nullptr)
		*RotationDeltaInDeg = Parms.RotationDeltaInDeg;

}


// Function OculusHMD.OculusFunctionLibrary.GetGuardianPoints
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EBoundaryType           BoundaryType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               UsePawnSpace                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FVector> UOculusFunctionLibrary::GetGuardianPoints(enum class EBoundaryType BoundaryType, bool UsePawnSpace)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OculusFunctionLibrary", "GetGuardianPoints");

	Params::UOculusFunctionLibrary_GetGuardianPoints_Params Parms{};

	Parms.BoundaryType = BoundaryType;
	Parms.UsePawnSpace = UsePawnSpace;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OculusHMD.OculusFunctionLibrary.GetGuardianDimensions
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EBoundaryType           BoundaryType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UOculusFunctionLibrary::GetGuardianDimensions(enum class EBoundaryType BoundaryType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OculusFunctionLibrary", "GetGuardianDimensions");

	Params::UOculusFunctionLibrary_GetGuardianDimensions_Params Parms{};

	Parms.BoundaryType = BoundaryType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OculusHMD.OculusFunctionLibrary.GetGPUUtilization
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               IsGPUAvailable                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              GPUUtilization                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOculusFunctionLibrary::GetGPUUtilization(bool* IsGPUAvailable, float* GPUUtilization)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OculusFunctionLibrary", "GetGPUUtilization");

	Params::UOculusFunctionLibrary_GetGPUUtilization_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (IsGPUAvailable != nullptr)
		*IsGPUAvailable = Parms.IsGPUAvailable;

	if (GPUUtilization != nullptr)
		*GPUUtilization = Parms.GPUUtilization;

}


// Function OculusHMD.OculusFunctionLibrary.GetGPUFrameTime
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UOculusFunctionLibrary::GetGPUFrameTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OculusFunctionLibrary", "GetGPUFrameTime");

	Params::UOculusFunctionLibrary_GetGPUFrameTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OculusHMD.OculusFunctionLibrary.GetFixedFoveatedRenderingLevel
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EFixedFoveatedRenderingLevelReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EFixedFoveatedRenderingLevel UOculusFunctionLibrary::GetFixedFoveatedRenderingLevel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OculusFunctionLibrary", "GetFixedFoveatedRenderingLevel");

	Params::UOculusFunctionLibrary_GetFixedFoveatedRenderingLevel_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OculusHMD.OculusFunctionLibrary.GetDeviceName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UOculusFunctionLibrary::GetDeviceName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OculusFunctionLibrary", "GetDeviceName");

	Params::UOculusFunctionLibrary_GetDeviceName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OculusHMD.OculusFunctionLibrary.GetCurrentDisplayFrequency
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UOculusFunctionLibrary::GetCurrentDisplayFrequency()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OculusFunctionLibrary", "GetCurrentDisplayFrequency");

	Params::UOculusFunctionLibrary_GetCurrentDisplayFrequency_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OculusHMD.OculusFunctionLibrary.GetBaseRotationAndPositionOffset
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                    OutRot                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                     OutPosOffset                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOculusFunctionLibrary::GetBaseRotationAndPositionOffset(struct FRotator* OutRot, struct FVector* OutPosOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OculusFunctionLibrary", "GetBaseRotationAndPositionOffset");

	Params::UOculusFunctionLibrary_GetBaseRotationAndPositionOffset_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutRot != nullptr)
		*OutRot = std::move(Parms.OutRot);

	if (OutPosOffset != nullptr)
		*OutPosOffset = std::move(Parms.OutPosOffset);

}


// Function OculusHMD.OculusFunctionLibrary.GetBaseRotationAndBaseOffsetInMeters
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRotator                    OutRotation                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                     OutBaseOffsetInMeters                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOculusFunctionLibrary::GetBaseRotationAndBaseOffsetInMeters(struct FRotator* OutRotation, struct FVector* OutBaseOffsetInMeters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OculusFunctionLibrary", "GetBaseRotationAndBaseOffsetInMeters");

	Params::UOculusFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutRotation != nullptr)
		*OutRotation = std::move(Parms.OutRotation);

	if (OutBaseOffsetInMeters != nullptr)
		*OutBaseOffsetInMeters = std::move(Parms.OutBaseOffsetInMeters);

}


// Function OculusHMD.OculusFunctionLibrary.GetAvailableDisplayFrequencies
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<float>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<float> UOculusFunctionLibrary::GetAvailableDisplayFrequencies()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OculusFunctionLibrary", "GetAvailableDisplayFrequencies");

	Params::UOculusFunctionLibrary_GetAvailableDisplayFrequencies_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OculusHMD.OculusFunctionLibrary.EnablePositionTracking
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               bPositionTracking                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOculusFunctionLibrary::EnablePositionTracking(bool bPositionTracking)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OculusFunctionLibrary", "EnablePositionTracking");

	Params::UOculusFunctionLibrary_EnablePositionTracking_Params Parms{};

	Parms.bPositionTracking = bPositionTracking;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function OculusHMD.OculusFunctionLibrary.EnableOrientationTracking
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               bOrientationTracking                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOculusFunctionLibrary::EnableOrientationTracking(bool bOrientationTracking)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OculusFunctionLibrary", "EnableOrientationTracking");

	Params::UOculusFunctionLibrary_EnableOrientationTracking_Params Parms{};

	Parms.bOrientationTracking = bOrientationTracking;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function OculusHMD.OculusFunctionLibrary.EnableAutoLoadingSplashScreen
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               bAutoShowEnabled                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOculusFunctionLibrary::EnableAutoLoadingSplashScreen(bool bAutoShowEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OculusFunctionLibrary", "EnableAutoLoadingSplashScreen");

	Params::UOculusFunctionLibrary_EnableAutoLoadingSplashScreen_Params Parms{};

	Parms.bAutoShowEnabled = bAutoShowEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function OculusHMD.OculusFunctionLibrary.ClearLoadingSplashScreens
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UOculusFunctionLibrary::ClearLoadingSplashScreens()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OculusFunctionLibrary", "ClearLoadingSplashScreens");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function OculusHMD.OculusFunctionLibrary.AddLoadingSplashScreen
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UTexture2D*                  Texture                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     TranslationInMeters                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Rotation                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector2D                   SizeInMeters                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    DeltaRotation                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bClearBeforeAdd                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOculusFunctionLibrary::AddLoadingSplashScreen(class UTexture2D* Texture, const struct FVector& TranslationInMeters, const struct FRotator& Rotation, const struct FVector2D& SizeInMeters, const struct FRotator& DeltaRotation, bool bClearBeforeAdd)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OculusFunctionLibrary", "AddLoadingSplashScreen");

	Params::UOculusFunctionLibrary_AddLoadingSplashScreen_Params Parms{};

	Parms.Texture = Texture;
	Parms.TranslationInMeters = TranslationInMeters;
	Parms.Rotation = Rotation;
	Parms.SizeInMeters = SizeInMeters;
	Parms.DeltaRotation = DeltaRotation;
	Parms.bClearBeforeAdd = bClearBeforeAdd;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class OculusHMD.OculusHMDRuntimeSettings
// (None)

class UClass* UOculusHMDRuntimeSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OculusHMDRuntimeSettings");

	return Clss;
}


// OculusHMDRuntimeSettings OculusHMD.Default__OculusHMDRuntimeSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UOculusHMDRuntimeSettings* UOculusHMDRuntimeSettings::GetDefaultObj()
{
	static class UOculusHMDRuntimeSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UOculusHMDRuntimeSettings*>(UOculusHMDRuntimeSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class OculusHMD.OculusSceneCaptureCubemap
// (None)

class UClass* UOculusSceneCaptureCubemap::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OculusSceneCaptureCubemap");

	return Clss;
}


// OculusSceneCaptureCubemap OculusHMD.Default__OculusSceneCaptureCubemap
// (Public, ClassDefaultObject, ArchetypeObject)

class UOculusSceneCaptureCubemap* UOculusSceneCaptureCubemap::GetDefaultObj()
{
	static class UOculusSceneCaptureCubemap* Default = nullptr;

	if (!Default)
		Default = static_cast<UOculusSceneCaptureCubemap*>(UOculusSceneCaptureCubemap::StaticClass()->DefaultObject);

	return Default;
}

}


