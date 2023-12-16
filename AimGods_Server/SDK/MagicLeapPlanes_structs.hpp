#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EMagicLeapPlaneQueryFlags : uint8
{
	Vertical                       = 0,
	Horizontal                     = 1,
	Arbitrary                      = 2,
	OrientToGravity                = 3,
	PreferInner                    = 4,
	Ceiling                        = 5,
	Floor                          = 6,
	Wall                           = 7,
	Polygons                       = 8,
	EMagicLeapPlaneQueryFlags_MAX  = 9,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct MagicLeapPlanes.MagicLeapPolygon
struct FMagicLeapPolygon
{
public:
	TArray<struct FVector>                       Vertices;                                          // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct MagicLeapPlanes.MagicLeapPlaneBoundary
struct FMagicLeapPlaneBoundary
{
public:
	struct FMagicLeapPolygon                     Polygon;                                           // 0x0(0x10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FMagicLeapPolygon>             Holes;                                             // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct MagicLeapPlanes.MagicLeapPlaneBoundaries
struct FMagicLeapPlaneBoundaries
{
public:
	struct FGuid                                 ID;                                                // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMagicLeapPlaneBoundary>       Boundaries;                                        // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct MagicLeapPlanes.MagicLeapPlaneResult
struct FMagicLeapPlaneResult
{
public:
	struct FVector                               PlanePosition;                                     // 0x0(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              PlaneOrientation;                                  // 0xC(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              ContentOrientation;                                // 0x18(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                             PlaneDimensions;                                   // 0x24(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_439[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EMagicLeapPlaneQueryFlags> PlaneFlags;                                        // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FGuid                                 ID;                                                // 0x40(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct MagicLeapPlanes.MagicLeapPlanesQuery
struct FMagicLeapPlanesQuery
{
public:
	TArray<enum class EMagicLeapPlaneQueryFlags> Flags;                                             // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class UBoxComponent*                         SearchVolume;                                      // 0x10(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxResults;                                        // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinHoleLength;                                     // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinPlaneArea;                                      // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SearchVolumePosition;                              // 0x24(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                 SearchVolumeOrientation;                           // 0x30(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               SearchVolumeExtents;                               // 0x40(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_43D[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

}


