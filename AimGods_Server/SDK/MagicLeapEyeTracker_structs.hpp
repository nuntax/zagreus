#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EMagicLeapEyeTrackingCalibrationStatus : uint8
{
	None                           = 0,
	Bad                            = 1,
	Good                           = 2,
	EMagicLeapEyeTrackingCalibrationStatus_MAX = 3,
};

enum class EMagicLeapEyeTrackingStatus : uint8
{
	NotConnected                   = 0,
	Disabled                       = 1,
	UserNotPresent                 = 2,
	UserPresent                    = 3,
	UserPresentAndWatchingWindow   = 4,
	EMagicLeapEyeTrackingStatus_MAX = 5,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// ScriptStruct MagicLeapEyeTracker.MagicLeapFixationComfort
struct FMagicLeapFixationComfort
{
public:
	bool                                         FixationDepthIsUncomfortable;                      // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         FixationDepthViolationHasOccurred;                 // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_51C[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RemainingTimeAtUncomfortableDepth;                 // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// ScriptStruct MagicLeapEyeTracker.MagicLeapEyeBlinkState
struct FMagicLeapEyeBlinkState
{
public:
	bool                                         LeftEyeBlinked;                                    // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RightEyeBlinked;                                   // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


