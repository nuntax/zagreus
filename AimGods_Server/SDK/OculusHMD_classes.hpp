#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class OculusHMD.OculusFunctionLibrary
class UOculusFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UOculusFunctionLibrary* GetDefaultObj();

	void ShowLoadingSplashScreen();
	void ShowLoadingIcon(class UTexture2D* Texture);
	void SetReorientHMDOnControllerRecenter(bool RecenterMode);
	void SetPositionScale3D(const struct FVector& PosScale3D);
	void SetLoadingSplashParams(const class FString& TexturePath, const struct FVector& DistanceInMeters, const struct FVector2D& SizeInMeters, const struct FVector& RotationAxis, float RotationDeltaInDeg);
	void SetGuardianVisibility(bool GuardianVisible);
	void SetFixedFoveatedRenderingLevel(enum class EFixedFoveatedRenderingLevel Level);
	void SetDisplayFrequency(float RequestedFrequency);
	void SetCPUAndGPULevels(int32 CPULevel, int32 GPULevel);
	void SetColorScaleAndOffset(const struct FLinearColor& ColorScale, const struct FLinearColor& ColorOffset, bool bApplyToAllLayers);
	void SetBaseRotationAndPositionOffset(const struct FRotator& BaseRot, const struct FVector& PosOffset, enum class EOrientPositionSelector Options);
	void SetBaseRotationAndBaseOffsetInMeters(const struct FRotator& Rotation, const struct FVector& BaseOffsetInMeters, enum class EOrientPositionSelector Options);
	bool IsLoadingIconEnabled();
	bool IsGuardianDisplayed();
	bool IsGuardianConfigured();
	bool IsDeviceTracked(enum class ETrackedDeviceType DeviceType);
	bool IsAutoLoadingSplashScreenEnabled();
	void HideLoadingSplashScreen(bool bClear);
	void HideLoadingIcon();
	bool HasSystemOverlayPresent();
	bool HasInputFocus();
	bool GetUserProfile(struct FHmdUserProfile* Profile);
	void GetRawSensorData(struct FVector* AngularAcceleration, struct FVector* LinearAcceleration, struct FVector* AngularVelocity, struct FVector* LinearVelocity, float* TimeInSeconds, enum class ETrackedDeviceType DeviceType);
	void GetPose(struct FRotator* DeviceRotation, struct FVector* DevicePosition, struct FVector* NeckPosition, bool bUseOrienationForPlayerCamera, bool bUsePositionForPlayerCamera, const struct FVector& PositionScale);
	struct FGuardianTestResult GetPointGuardianIntersection(const struct FVector& Point, enum class EBoundaryType BoundaryType);
	struct FTransform GetPlayAreaTransform();
	struct FGuardianTestResult GetNodeGuardianIntersection(enum class ETrackedDeviceType DeviceType, enum class EBoundaryType BoundaryType);
	void GetLoadingSplashParams(class FString* TexturePath, struct FVector* DistanceInMeters, struct FVector2D* SizeInMeters, struct FVector* RotationAxis, float* RotationDeltaInDeg);
	TArray<struct FVector> GetGuardianPoints(enum class EBoundaryType BoundaryType, bool UsePawnSpace);
	struct FVector GetGuardianDimensions(enum class EBoundaryType BoundaryType);
	void GetGPUUtilization(bool* IsGPUAvailable, float* GPUUtilization);
	float GetGPUFrameTime();
	enum class EFixedFoveatedRenderingLevel GetFixedFoveatedRenderingLevel();
	class FString GetDeviceName();
	float GetCurrentDisplayFrequency();
	void GetBaseRotationAndPositionOffset(struct FRotator* OutRot, struct FVector* OutPosOffset);
	void GetBaseRotationAndBaseOffsetInMeters(struct FRotator* OutRotation, struct FVector* OutBaseOffsetInMeters);
	TArray<float> GetAvailableDisplayFrequencies();
	void EnablePositionTracking(bool bPositionTracking);
	void EnableOrientationTracking(bool bOrientationTracking);
	void EnableAutoLoadingSplashScreen(bool bAutoShowEnabled);
	void ClearLoadingSplashScreens();
	void AddLoadingSplashScreen(class UTexture2D* Texture, const struct FVector& TranslationInMeters, const struct FRotator& Rotation, const struct FVector2D& SizeInMeters, const struct FRotator& DeltaRotation, bool bClearBeforeAdd);
};

// 0x30 (0x58 - 0x28)
// Class OculusHMD.OculusHMDRuntimeSettings
class UOculusHMDRuntimeSettings : public UObject
{
public:
	bool                                         bAutoEnabled;                                      // 0x28(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7E1[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FOculusSplashDesc>             SplashDescs;                                       // 0x30(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	bool                                         bSupportsDash;                                     // 0x40(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCompositesDepth;                                  // 0x41(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHQDistortion;                                     // 0x42(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7E2[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PixelDensityMin;                                   // 0x44(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PixelDensityMax;                                   // 0x48(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CPULevel;                                          // 0x4C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GPULevel;                                          // 0x50(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFixedFoveatedRenderingLevel      FFRLevel;                                          // 0x54(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bChromaCorrection;                                 // 0x55(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRecenterHMDWithController;                        // 0x56(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7E4[0x1];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UOculusHMDRuntimeSettings* GetDefaultObj();

};

// 0x68 (0x90 - 0x28)
// Class OculusHMD.OculusSceneCaptureCubemap
class UOculusSceneCaptureCubemap : public UObject
{
public:
	uint8                                        Pad_7E6[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class USceneCaptureComponent2D*>      CaptureComponents;                                 // 0x38(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7E7[0x48];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UOculusSceneCaptureCubemap* GetDefaultObj();

};

}


