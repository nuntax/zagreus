#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EBoundaryType : uint8
{
	Boundary_Outer                 = 0,
	Boundary_PlayArea              = 1,
	Boundary_MAX                   = 2,
};

enum class EFixedFoveatedRenderingLevel : uint8
{
	FFR_Off                        = 0,
	FFR_Low                        = 1,
	FFR_Medium                     = 2,
	FFR_High                       = 3,
	FFR_HighTop                    = 4,
	FFR_MAX                        = 5,
};

enum class ETrackedDeviceType : uint8
{
	None                           = 0,
	HMD                            = 1,
	LTouch                         = 2,
	RTouch                         = 3,
	Touch                          = 4,
	DeviceObjectZero               = 5,
	All                            = 6,
	ETrackedDeviceType_MAX         = 7,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// ScriptStruct OculusHMD.GuardianTestResult
struct FGuardianTestResult
{
public:
	bool                                         IsTriggering;                                      // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETrackedDeviceType                DeviceType;                                        // 0x1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7E9[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ClosestDistance;                                   // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ClosestPoint;                                      // 0x8(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ClosestPointNormal;                                // 0x14(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct OculusHMD.HmdUserProfileField
struct FHmdUserProfileField
{
public:
	class FString                                FieldName;                                         // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FieldValue;                                        // 0x10(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct OculusHMD.HmdUserProfile
struct FHmdUserProfile
{
public:
	class FString                                Name;                                              // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Gender;                                            // 0x10(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayerHeight;                                      // 0x20(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EyeHeight;                                         // 0x24(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        IPD;                                               // 0x28(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             NeckToEyeDistance;                                 // 0x2C(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7EB[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FHmdUserProfileField>          ExtraFields;                                       // 0x38(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct OculusHMD.OculusSplashDesc
struct FOculusSplashDesc
{
public:
	struct FSoftObjectPath                       TexturePath;                                       // 0x0(0x18)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7EC[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            TransformInMeters;                                 // 0x20(0x30)(Edit, Config, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                             QuadSizeInMeters;                                  // 0x50(0x8)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7EE[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 DeltaRotation;                                     // 0x60(0x10)(Edit, Config, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                             TextureOffset;                                     // 0x70(0x8)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             TextureScale;                                      // 0x78(0x8)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNoAlphaChannel;                                   // 0x80(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7EF[0x1F];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}


