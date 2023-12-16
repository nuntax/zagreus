#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ELuminPrivilege : uint8
{
	Invalid                        = 0,
	BatteryInfo                    = 1,
	CameraCapture                  = 2,
	WorldReconstruction            = 3,
	InAppPurchase                  = 4,
	AudioCaptureMic                = 5,
	DrmCertificates                = 6,
	Occlusion                      = 7,
	LowLatencyLightwear            = 8,
	Internet                       = 9,
	IdentityRead                   = 10,
	BackgroundDownload             = 11,
	BackgroundUpload               = 12,
	MediaDrm                       = 13,
	Media                          = 14,
	MediaMetadata                  = 15,
	PowerInfo                      = 16,
	LocalAreaNetwork               = 17,
	VoiceInput                     = 18,
	Documents                      = 19,
	ConnectBackgroundMusicService  = 20,
	RegisterBackgroundMusicService = 21,
	PwFoundObjRead                 = 22,
	NormalNotificationsUsage       = 23,
	MusicService                   = 24,
	ControllerPose                 = 25,
	ScreensProvider                = 26,
	GesturesSubscribe              = 27,
	GesturesConfig                 = 28,
	AddressBookRead                = 29,
	AddressBookWrite               = 30,
	CoarseLocation                 = 31,
	HandMesh                       = 32,
	WifiStatusRead                 = 33,
	ELuminPrivilege_MAX            = 34,
};

enum class ELuminFrameTimingHint : uint8
{
	Unspecified                    = 0,
	Maximum                        = 1,
	FPS_60                         = 2,
	FPS_120                        = 3,
	ELuminFrameTimingHint_MAX      = 4,
};

enum class ELuminComponentType : uint8
{
	Universe                       = 0,
	Fullscreen                     = 1,
	SearchProvider                 = 2,
	MusicService                   = 3,
	Screens                        = 4,
	ScreensImmersive               = 5,
	Console                        = 6,
	SystemUI                       = 7,
	ELuminComponentType_MAX        = 8,
};

enum class ELuminComponentSubElementType : uint8
{
	FileExtension                  = 0,
	MimeType                       = 1,
	Mode                           = 2,
	MusicAttribute                 = 3,
	Schema                         = 4,
	ELuminComponentSubElementType_MAX = 5,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// ScriptStruct LuminRuntimeSettings.LuminComponentSubElement
struct FLuminComponentSubElement
{
public:
	enum class ELuminComponentSubElementType     ElementType;                                       // 0x0(0x1)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DA6[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Value;                                             // 0x8(0x10)(Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct LuminRuntimeSettings.LuminComponentElement
struct FLuminComponentElement
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                VisibleName;                                       // 0x10(0x10)(Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ExecutableName;                                    // 0x20(0x10)(Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELuminComponentType               ComponentType;                                     // 0x30(0x1)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DA9[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FLuminComponentSubElement>     ExtraComponentSubElements;                         // 0x38(0x10)(Edit, ZeroConstructor, Config, GlobalConfig, NativeAccessSpecifierPublic)
};

}


