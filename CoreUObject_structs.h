#pragma once

// Name: ArkUWP, Version: 1.0.0


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum CoreUObject.Object.ERangeBoundTypes
enum class CoreUObject_ERangeBoundTypes : uint8_t
{
	ERangeBoundTypes__Exclusive    = 0,
	ERangeBoundTypes__Inclusive    = 1,
	ERangeBoundTypes__Open         = 2,
	ERangeBoundTypes__ERangeBoundTypes_MAX = 3,

};

// Enum CoreUObject.Object.EMouseCursor
enum class CoreUObject_EMouseCursor : uint8_t
{
	EMouseCursor__None             = 0,
	EMouseCursor__Default          = 1,
	EMouseCursor__TextEditBeam     = 2,
	EMouseCursor__ResizeLeftRight  = 3,
	EMouseCursor__ResizeUpDown     = 4,
	EMouseCursor__ResizeSouthEast  = 5,
	EMouseCursor__ResizeSouthWest  = 6,
	EMouseCursor__CardinalCross    = 7,
	EMouseCursor__Crosshairs       = 8,
	EMouseCursor__Hand             = 9,
	EMouseCursor__GrabHand         = 10,
	EMouseCursor__GrabHandClosed   = 11,
	EMouseCursor__SlashedCircle    = 12,
	EMouseCursor__EyeDropper       = 13,
	EMouseCursor__EMouseCursor_MAX = 14,

};

// Enum CoreUObject.Object.EPixelFormat
enum class CoreUObject_EPixelFormat : uint8_t
{
	PF_Unknown                     = 0,
	PF_A32B32G32R32F               = 1,
	PF_B8G8R8A8                    = 2,
	PF_G8                          = 3,
	PF_G16                         = 4,
	PF_DXT1                        = 5,
	PF_DXT3                        = 6,
	PF_DXT5                        = 7,
	PF_UYVY                        = 8,
	PF_FloatRGB                    = 9,
	PF_FloatRGBA                   = 10,
	PF_DepthStencil                = 11,
	PF_ShadowDepth                 = 12,
	PF_R32_FLOAT                   = 13,
	PF_G16R16                      = 14,
	PF_G16R16F                     = 15,
	PF_G16R16F_FILTER              = 16,
	PF_G32R32F                     = 17,
	PF_A2B10G10R10                 = 18,
	PF_A16B16G16R16                = 19,
	PF_D24                         = 20,
	PF_R16F                        = 21,
	PF_R16F_FILTER                 = 22,
	PF_BC5                         = 23,
	PF_V8U8                        = 24,
	PF_A1                          = 25,
	PF_FloatR11G11B10              = 26,
	PF_A8                          = 27,
	PF_R32_UINT                    = 28,
	PF_R32_SINT                    = 29,
	PF_PVRTC2                      = 30,
	PF_PVRTC4                      = 31,
	PF_R16_UINT                    = 32,
	PF_R16_SINT                    = 33,
	PF_R16G16B16A16_UINT           = 34,
	PF_R16G16B16A16_SINT           = 35,
	PF_R5G6B5_UNORM                = 36,
	PF_R8G8B8A8                    = 37,
	PF_A8R8G8B8                    = 38,
	PF_BC4                         = 39,
	PF_R8G8                        = 40,
	PF_ATC_RGB                     = 41,
	PF_ATC_RGBA_E                  = 42,
	PF_ATC_RGBA_I                  = 43,
	PF_X24_G8                      = 44,
	PF_ETC1                        = 45,
	PF_ETC2_RGB                    = 46,
	PF_ETC2_RGBA                   = 47,
	PF_R32G32B32A32_UINT           = 48,
	PF_R16G16_UINT                 = 49,
	PF_ASTC_4x4                    = 50,
	PF_ASTC_6x6                    = 51,
	PF_ASTC_8x8                    = 52,
	PF_ASTC_10x10                  = 53,
	PF_ASTC_12x12                  = 54,
	PF_MAX_VALUE                   = 55,

};

// Enum CoreUObject.Object.EInterpCurveMode
enum class CoreUObject_EInterpCurveMode : uint8_t
{
	CIM_Linear                     = 0,
	CIM_CurveAuto                  = 1,
	CIM_Constant                   = 2,
	CIM_CurveUser                  = 3,
	CIM_CurveBreak                 = 4,
	CIM_CurveAutoClamped           = 5,
	CIM_MAX                        = 6,

};

// Enum CoreUObject.Object.EAxis
enum class CoreUObject_EAxis : uint8_t
{
	EAxis__None                    = 0,
	EAxis__X                       = 1,
	EAxis__Y                       = 2,
	EAxis__Z                       = 3,
	EAxis__EAxis_MAX               = 4,

};

// Enum CoreUObject.Object.ESearchDir
enum class CoreUObject_ESearchDir : uint8_t
{
	ESearchDir__FromStart          = 0,
	ESearchDir__FromEnd            = 1,
	ESearchDir__ESearchDir_MAX     = 2,

};

// Enum CoreUObject.Object.ESearchCase
enum class CoreUObject_ESearchCase : uint8_t
{
	ESearchCase__CaseSensitive     = 0,
	ESearchCase__IgnoreCase        = 1,
	ESearchCase__ESearchCase_MAX   = 2,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct CoreUObject.Object.Int32RangeBound
// 0x0008
struct FInt32RangeBound
{
	TEnumAsByte<CoreUObject_ERangeBoundTypes>          Type;                                                      // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_DK8C[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Value;                                                     // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct CoreUObject.Object.Int32Range
// 0x0010
struct FInt32Range
{
	struct FInt32RangeBound                            LowerBound;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FInt32RangeBound                            UpperBound;                                                // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct CoreUObject.Object.FloatRangeBound
// 0x0008
struct FFloatRangeBound
{
	TEnumAsByte<CoreUObject_ERangeBoundTypes>          Type;                                                      // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ECHG[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Value;                                                     // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct CoreUObject.Object.FloatRange
// 0x0010
struct FFloatRange
{
	struct FFloatRangeBound                            LowerBound;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FFloatRangeBound                            UpperBound;                                                // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct CoreUObject.Object.FallbackStruct
// 0x0001
struct FFallbackStruct
{
	unsigned char                                      UnknownData_ZXTF[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct CoreUObject.Object.StringAssetReference
// 0x0010
struct FStringAssetReference
{
	struct FString                                     AssetLongPathname;                                         // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

};

// ScriptStruct CoreUObject.Object.StringClassReference
// 0x0000 (0x0010 - 0x0010)
struct FStringClassReference : public FStringAssetReference
{

};

// ScriptStruct CoreUObject.Object.Timespan
// 0x0008
struct FTimespan
{
	unsigned char                                      UnknownData_KKTF[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct CoreUObject.Object.DateTime
// 0x0008
struct FDateTime
{
	unsigned char                                      UnknownData_13U3[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct CoreUObject.Object.RandomStream
// 0x0008
struct FRandomStream
{
	int                                                InitialSeed;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_4B7O[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct CoreUObject.Object.Quat
// 0x0010
struct FQuat
{
	float                                              X;                                                         // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
	float                                              Y;                                                         // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
	float                                              Z;                                                         // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
	float                                              W;                                                         // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)

};

// ScriptStruct CoreUObject.Object.Vector
// 0x000C
struct FVector
{
	float                                              X;                                                         // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
	float                                              Y;                                                         // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
	float                                              Z;                                                         // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)

};

// ScriptStruct CoreUObject.Object.Transform
// 0x0030
struct UObject_FTransform
{
	struct FQuat                                       Rotation;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, SaveGame, IsPlainOldData, NoDestructor)
	struct FVector                                     Translation;                                               // 0x0010(0x000C) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_AEOW[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     Scale3D;                                                   // 0x0020(0x000C) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_6OO8[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct CoreUObject.Object.LinearColor
// 0x0010
struct FLinearColor
{
	float                                              R;                                                         // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
	float                                              G;                                                         // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
	float                                              B;                                                         // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
	float                                              A;                                                         // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)

};

// ScriptStruct CoreUObject.Object.InterpCurvePointLinearColor
// 0x0038
struct FInterpCurvePointLinearColor
{
	float                                              InVal;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                OutVal;                                                    // 0x0004(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                ArriveTangent;                                             // 0x0014(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                LeaveTangent;                                              // 0x0024(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<CoreUObject_EInterpCurveMode>          InterpMode;                                                // 0x0034(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_Y4ZL[0x3];                                     // 0x0035(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct CoreUObject.Object.InterpCurveLinearColor
// 0x0010
struct FInterpCurveLinearColor
{
	TArray<struct FInterpCurvePointLinearColor>        Points;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

};

// ScriptStruct CoreUObject.Object.TwoVectors
// 0x0018
struct FTwoVectors
{
	struct FVector                                     v1;                                                        // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
	struct FVector                                     v2;                                                        // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)

};

// ScriptStruct CoreUObject.Object.InterpCurvePointTwoVectors
// 0x0050
struct FInterpCurvePointTwoVectors
{
	float                                              InVal;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTwoVectors                                 OutVal;                                                    // 0x0004(0x0018) (Edit, BlueprintVisible, ZeroConstructor)
	struct FTwoVectors                                 ArriveTangent;                                             // 0x001C(0x0018) (Edit, BlueprintVisible, ZeroConstructor)
	struct FTwoVectors                                 LeaveTangent;                                              // 0x0034(0x0018) (Edit, BlueprintVisible, ZeroConstructor)
	TEnumAsByte<CoreUObject_EInterpCurveMode>          InterpMode;                                                // 0x004C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_KD55[0x3];                                     // 0x004D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct CoreUObject.Object.InterpCurveTwoVectors
// 0x0010
struct FInterpCurveTwoVectors
{
	TArray<struct FInterpCurvePointTwoVectors>         Points;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

};

// ScriptStruct CoreUObject.Object.InterpCurvePointVector
// 0x002C
struct FInterpCurvePointVector
{
	float                                              InVal;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     OutVal;                                                    // 0x0004(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     ArriveTangent;                                             // 0x0010(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     LeaveTangent;                                              // 0x001C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<CoreUObject_EInterpCurveMode>          InterpMode;                                                // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_C51J[0x3];                                     // 0x0029(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct CoreUObject.Object.InterpCurveVector
// 0x0010
struct FInterpCurveVector
{
	TArray<struct FInterpCurvePointVector>             Points;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

};

// ScriptStruct CoreUObject.Object.Vector2D
// 0x0008
struct FVector2D
{
	float                                              X;                                                         // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
	float                                              Y;                                                         // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)

};

// ScriptStruct CoreUObject.Object.InterpCurvePointVector2D
// 0x0020
struct FInterpCurvePointVector2D
{
	float                                              InVal;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   OutVal;                                                    // 0x0004(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   ArriveTangent;                                             // 0x000C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   LeaveTangent;                                              // 0x0014(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<CoreUObject_EInterpCurveMode>          InterpMode;                                                // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_DO1O[0x3];                                     // 0x001D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct CoreUObject.Object.InterpCurveVector2D
// 0x0010
struct FInterpCurveVector2D
{
	TArray<struct FInterpCurvePointVector2D>           Points;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

};

// ScriptStruct CoreUObject.Object.InterpCurvePointFloat
// 0x0014
struct FInterpCurvePointFloat
{
	float                                              InVal;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              OutVal;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              ArriveTangent;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              LeaveTangent;                                              // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<CoreUObject_EInterpCurveMode>          InterpMode;                                                // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_TOLB[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct CoreUObject.Object.InterpCurveFloat
// 0x0010
struct FInterpCurveFloat
{
	TArray<struct FInterpCurvePointFloat>              Points;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

};

// ScriptStruct CoreUObject.Object.Plane
// 0x0004 (0x0010 - 0x000C)
struct FPlane : public FVector
{
	float                                              W;                                                         // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)

};

// ScriptStruct CoreUObject.Object.Matrix
// 0x0040
struct FMatrix
{
	struct FPlane                                      XPlane;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
	struct FPlane                                      YPlane;                                                    // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
	struct FPlane                                      ZPlane;                                                    // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
	struct FPlane                                      WPlane;                                                    // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)

};

// ScriptStruct CoreUObject.Object.OrientedBox
// 0x003C
struct FOrientedBox
{
	struct FVector                                     Center;                                                    // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
	struct FVector                                     AxisX;                                                     // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
	struct FVector                                     AxisY;                                                     // 0x0018(0x000C) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
	struct FVector                                     AxisZ;                                                     // 0x0024(0x000C) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
	float                                              ExtentX;                                                   // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
	float                                              ExtentY;                                                   // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
	float                                              ExtentZ;                                                   // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)

};

// ScriptStruct CoreUObject.Object.BoxSphereBounds
// 0x001C
struct FBoxSphereBounds
{
	struct FVector                                     Origin;                                                    // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
	struct FVector                                     BoxExtent;                                                 // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
	float                                              SphereRadius;                                              // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)

};

// ScriptStruct CoreUObject.Object.Box
// 0x001C
struct FBox
{
	struct FVector                                     Min;                                                       // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
	struct FVector                                     Max;                                                       // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
	unsigned char                                      IsValid;                                                   // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_O8ZX[0x3];                                     // 0x0019(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct CoreUObject.Object.Color
// 0x0004
struct FColor
{
	unsigned char                                      B;                                                         // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
	unsigned char                                      G;                                                         // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
	unsigned char                                      R;                                                         // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
	unsigned char                                      A;                                                         // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)

};

// ScriptStruct CoreUObject.Object.IntVector
// 0x000C
struct FIntVector
{
	int                                                X;                                                         // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
	int                                                Y;                                                         // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
	int                                                Z;                                                         // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)

};

// ScriptStruct CoreUObject.Object.IntPoint
// 0x0008
struct FIntPoint
{
	int                                                X;                                                         // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
	int                                                Y;                                                         // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)

};

// ScriptStruct CoreUObject.Object.PackedNormal
// 0x0004
struct FPackedNormal
{
	unsigned char                                      X;                                                         // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
	unsigned char                                      Y;                                                         // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
	unsigned char                                      Z;                                                         // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
	unsigned char                                      W;                                                         // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)

};

// ScriptStruct CoreUObject.Object.Rotator
// 0x000C
struct FRotator
{
	float                                              Pitch;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
	float                                              Yaw;                                                       // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
	float                                              Roll;                                                      // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)

};

// ScriptStruct CoreUObject.Object.Vector4
// 0x0010
struct FVector4
{
	float                                              X;                                                         // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
	float                                              Y;                                                         // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
	float                                              Z;                                                         // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
	float                                              W;                                                         // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)

};

// ScriptStruct CoreUObject.Object.NetworkGUID
// 0x0004
struct FNetworkGUID
{
	uint32_t                                           Value;                                                     // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)

};

// ScriptStruct CoreUObject.Object.Guid
// 0x0010
struct FGuid
{
	int                                                A;                                                         // 0x0000(0x0004) (Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
	int                                                B;                                                         // 0x0004(0x0004) (Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
	int                                                C;                                                         // 0x0008(0x0004) (Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
	int                                                D;                                                         // 0x000C(0x0004) (Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
