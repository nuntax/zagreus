#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EOculusMR_BoundaryType : uint8
{
	BT_OuterBoundary               = 0,
	BT_PlayArea                    = 1,
	BT_MAX                         = 2,
};

enum class EOculusMR_CompositionMethod : uint8
{
	ExternalComposition            = 0,
	DirectComposition              = 1,
	EOculusMR_MAX                  = 2,
};

enum class EOculusMR_DepthQuality : uint8
{
	DQ_Low                         = 0,
	DQ_Medium                      = 1,
	DQ_High                        = 2,
	DQ_MAX                         = 3,
};

enum class EOculusMR_PostProcessEffects : uint8
{
	PPE_Off                        = 0,
	PPE_On                         = 1,
	PPE_MAX                        = 2,
};

enum class EOculusMR_VirtualGreenScreenType : uint8
{
	VGS_Off                        = 0,
	VGS_OuterBoundary              = 1,
	VGS_PlayArea                   = 2,
	VGS_MAX                        = 3,
};

enum class EOculusMR_ClippingReference : uint8
{
	CR_TrackingReference           = 0,
	CR_Head                        = 1,
	CR_MAX                         = 2,
};

enum class EOculusMR_CameraDeviceEnum : uint8
{
	CD_None                        = 0,
	CD_WebCamera0                  = 1,
	CD_WebCamera1                  = 2,
	CD_ZEDCamera                   = 3,
	CD_MAX                         = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x3C (0x3C - 0x0)
// ScriptStruct OculusMR.OculusMR_PlaneMeshTriangle
struct FOculusMR_PlaneMeshTriangle
{
public:
	struct FVector                               Vertex0;                                           // 0x0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             UV0;                                               // 0xC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Vertex1;                                           // 0x14(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             UV1;                                               // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Vertex2;                                           // 0x28(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             UV2;                                               // 0x34(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct OculusMR.TrackedCamera
struct FTrackedCamera
{
public:
	int32                                        Index;                                             // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_418[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Name;                                              // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FieldOfView;                                       // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SizeX;                                             // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SizeY;                                             // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETrackedDeviceType                AttachedTrackedDevice;                             // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_41B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              CalibratedRotation;                                // 0x28(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               CalibratedOffset;                                  // 0x34(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              UserRotation;                                      // 0x40(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               UserOffset;                                        // 0x4C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              RawRotation;                                       // 0x58(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               RawOffset;                                         // 0x64(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


