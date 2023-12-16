#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ELuminARLineTraceChannel : uint8
{
	None                           = 0,
	FeaturePoint                   = 1,
	InfinitePlane                  = 2,
	PlaneUsingExtent               = 4,
	PlaneUsingBoundaryPolygon      = 8,
	FeaturePointWithSurfaceNormal  = 16,
	ELuminARLineTraceChannel_MAX   = 17,
};

enum class ELuminARTrackingState : uint8
{
	Tracking                       = 0,
	NotTracking                    = 1,
	StoppedTracking                = 2,
	ELuminARTrackingState_MAX      = 3,
};

enum class ELuminARFunctionStatus : uint8
{
	Success                        = 0,
	Fatal                          = 1,
	SessionPaused                  = 2,
	NotTracking                    = 3,
	ResourceExhausted              = 4,
	NotAvailable                   = 5,
	InvalidType                    = 6,
	Unknown                        = 7,
	ELuminARFunctionStatus_MAX     = 8,
};

enum class ELuminARAvailability : uint8
{
	UnknownError                   = 0,
	SupportedInstalled             = 200,
	ELuminARAvailability_MAX       = 201,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0x14 - 0x0)
// ScriptStruct MagicLeapAR.LuminARLightEstimate
struct FLuminARLightEstimate
{
public:
	bool                                         bIsValid;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_288[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PixelIntensity;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               RGBScaleFactor;                                    // 0x8(0xC)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


