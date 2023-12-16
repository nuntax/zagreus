#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ELoadingWidgetType : uint8
{
	LWT_Horizontal                 = 0,
	LWT_Vertical                   = 1,
	LWT_MAX                        = 2,
};

enum class ELoadingIconType : uint8
{
	LIT_Throbber                   = 0,
	LIT_CircularThrobber           = 1,
	LIT_ImageSequence              = 2,
	LIT_MAX                        = 3,
};

enum class EAsyncLoadingScreenLayout : uint8
{
	ALSL_Classic                   = 0,
	ALSL_Center                    = 1,
	ALSL_Letterbox                 = 2,
	ALSL_Sidebar                   = 3,
	ALSL_DualSidebar               = 4,
	ALSL_MAX                       = 5,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x138 (0x138 - 0x0)
// ScriptStruct AsyncLoadingScreen.DualSidebarLayoutSettings
struct FDualSidebarLayoutSettings
{
public:
	bool                                         bIsLoadingWidgetAtRight;                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVerticalAlignment                LeftVerticalAlignment;                             // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVerticalAlignment                RightVerticalAlignment;                            // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVerticalAlignment                LeftBorderVerticalAlignment;                       // 0x3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVerticalAlignment                RightBorderVerticalAlignment;                      // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D8[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMargin                               LeftBorderPadding;                                 // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               RightBorderPadding;                                // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateBrush                           LeftBorderBackground;                              // 0x28(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           RightBorderBackground;                             // 0xB0(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// ScriptStruct AsyncLoadingScreen.WidgetAlignment
struct FWidgetAlignment
{
public:
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct AsyncLoadingScreen.SidebarLayoutSettings
struct FSidebarLayoutSettings
{
public:
	bool                                         bIsWidgetAtRight;                                  // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsLoadingWidgetAtTop;                             // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DD[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Space;                                             // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWidgetAlignment                      LoadingWidgetAlignment;                            // 0x9(0x2)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FWidgetAlignment                      TipAlignment;                                      // 0xB(0x2)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	enum class EVerticalAlignment                BorderVerticalAlignment;                           // 0xD(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DF[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BorderHorizontalOffset;                            // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                               BorderPadding;                                     // 0x14(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E0[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           BorderBackground;                                  // 0x28(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x138 (0x138 - 0x0)
// ScriptStruct AsyncLoadingScreen.LetterboxLayoutSettings
struct FLetterboxLayoutSettings
{
public:
	bool                                         bIsLoadingWidgetAtTop;                             // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWidgetAlignment                      TipAlignment;                                      // 0x1(0x2)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FWidgetAlignment                      LoadingWidgetAlignment;                            // 0x3(0x2)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	enum class EHorizontalAlignment              TopBorderHorizontalAlignment;                      // 0x5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHorizontalAlignment              BottomBorderHorizontalAlignment;                   // 0x6(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E2[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMargin                               TopBorderPadding;                                  // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               BottomBorderPadding;                               // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateBrush                           TopBorderBackground;                               // 0x28(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           BottomBorderBackground;                            // 0xB0(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct AsyncLoadingScreen.CenterLayoutSettings
struct FCenterLayoutSettings
{
public:
	bool                                         bIsTipAtBottom;                                    // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWidgetAlignment                      TipAlignment;                                      // 0x1(0x2)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	enum class EHorizontalAlignment              BorderHorizontalAlignment;                         // 0x3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BorderVerticalOffset;                              // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                               BorderPadding;                                     // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateBrush                           BorderBackground;                                  // 0x18(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct AsyncLoadingScreen.ClassicLayoutSettings
struct FClassicLayoutSettings
{
public:
	bool                                         bIsWidgetAtBottom;                                 // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsLoadingWidgetAtLeft;                            // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E3[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Space;                                             // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWidgetAlignment                      TipAlignment;                                      // 0x8(0x2)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	enum class EHorizontalAlignment              BorderHorizontalAlignment;                         // 0xA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E4[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMargin                               BorderPadding;                                     // 0xC(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E5[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           BorderBackground;                                  // 0x20(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct AsyncLoadingScreen.TextAppearance
struct FTextAppearance
{
public:
	struct FSlateColor                           ColorAndOpacity;                                   // 0x0(0x28)(Edit, BlueprintVisible, Config, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                        Font;                                              // 0x28(0x50)(Edit, BlueprintVisible, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ShadowOffset;                                      // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ShadowColorAndOpacity;                             // 0x80(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextJustify                      Justification;                                     // 0x90(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E6[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct AsyncLoadingScreen.TipSettings
struct FTipSettings
{
public:
	TArray<class FText>                          TipText;                                           // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FTextAppearance                       Appearance;                                        // 0x10(0x98)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        TipWrapAt;                                         // 0xA8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSetDisplayTipTextManually;                        // 0xAC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E8[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct AsyncLoadingScreen.BackgroundSettings
struct FBackgroundSettings
{
public:
	TArray<struct FSoftObjectPath>               Images;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EStretch                          ImageStretch;                                      // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E9[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMargin                               Padding;                                           // 0x14(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                          BackgroundColor;                                   // 0x24(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSetDisplayBackgroundManually;                     // 0x34(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EA[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct AsyncLoadingScreen.ImageSequenceSettings
struct FImageSequenceSettings
{
public:
	TArray<class UTexture2D*>                    Images;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FVector2D                             Scale;                                             // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Interval;                                          // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPlayReverse;                                      // 0x1C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EB[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// ScriptStruct AsyncLoadingScreen.ThrobberSettings
struct FThrobberSettings
{
public:
	int32                                        NumberOfPieces;                                    // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAnimateHorizontally;                              // 0x4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAnimateVertically;                                // 0x5(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAnimateOpacity;                                   // 0x6(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1ED[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           Image;                                             // 0x8(0x88)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct AsyncLoadingScreen.CircularThrobberSettings
struct FCircularThrobberSettings
{
public:
	int32                                        NumberOfPieces;                                    // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Period;                                            // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EF[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           Image;                                             // 0x10(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x228 (0x228 - 0x0)
// ScriptStruct AsyncLoadingScreen.LoadingWidgetSettings
struct FLoadingWidgetSettings
{
public:
	enum class ELoadingIconType                  LoadingIconType;                                   // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELoadingWidgetType                LoadingWidgetType;                                 // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F0[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             TransformTranslation;                              // 0x4(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             TransformScale;                                    // 0xC(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             TransformPivot;                                    // 0x14(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F1[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  LoadingText;                                       // 0x20(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         bLoadingTextRightPosition;                         // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLoadingTextTopPosition;                           // 0x39(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F2[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTextAppearance                       Appearance;                                        // 0x40(0x98)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FThrobberSettings                     ThrobberSettings;                                  // 0xD8(0x90)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FCircularThrobberSettings             CircularThrobberSettings;                          // 0x168(0x98)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FImageSequenceSettings                ImageSequenceSettings;                             // 0x200(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FWidgetAlignment                      TextAlignment;                                     // 0x220(0x2)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FWidgetAlignment                      LoadingIconAlignment;                              // 0x222(0x2)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Space;                                             // 0x224(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x330 (0x330 - 0x0)
// ScriptStruct AsyncLoadingScreen.ALoadingScreenSettings
struct FALoadingScreenSettings
{
public:
	float                                        MinimumLoadingScreenDisplayTime;                   // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoCompleteWhenLoadingCompletes;                 // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMoviesAreSkippable;                               // 0x5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWaitForManualStop;                                // 0x6(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMoviePlaybackType                PlaybackType;                                      // 0x7(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        MoviePaths;                                        // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bShuffle;                                          // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSetDisplayMovieIndexManually;                     // 0x19(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowWidgetOverlay;                                // 0x1A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAsyncLoadingScreenLayout         Layout;                                            // 0x1B(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F5[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBackgroundSettings                   Background;                                        // 0x20(0x38)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FTipSettings                          TipWidget;                                         // 0x58(0xB0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FLoadingWidgetSettings                LoadingWidget;                                     // 0x108(0x228)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

}


