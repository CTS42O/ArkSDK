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

// Enum Engine.ECameraProjectionMode
enum class Engine_ECameraProjectionMode : uint8_t
{
	ECameraProjectionMode__Perspective = 0,
	ECameraProjectionMode__Orthographic = 1,
	ECameraProjectionMode__ECameraProjectionMode_MAX = 2,

};

// Enum Engine.ECameraAnimPlaySpace
enum class Engine_ECameraAnimPlaySpace : uint8_t
{
	ECameraAnimPlaySpace__CameraLocal = 0,
	ECameraAnimPlaySpace__World    = 1,
	ECameraAnimPlaySpace__UserDefined = 2,
	ECameraAnimPlaySpace__ECameraAnimPlaySpace_MAX = 3,

};

// Enum Engine.EPrimalEquipmentType
enum class Engine_EPrimalEquipmentType : uint8_t
{
	EPrimalEquipmentType__Hat      = 0,
	EPrimalEquipmentType__Shirt    = 1,
	EPrimalEquipmentType__Pants    = 2,
	EPrimalEquipmentType__Boots    = 3,
	EPrimalEquipmentType__Gloves   = 4,
	EPrimalEquipmentType__DinoSaddle = 5,
	EPrimalEquipmentType__Trophy   = 6,
	EPrimalEquipmentType__Costume  = 7,
	EPrimalEquipmentType__Shield   = 8,
	EPrimalEquipmentType__Weapon   = 9,
	EPrimalEquipmentType__Snapshot = 10,
	EPrimalEquipmentType__MAX      = 11,
	EPrimalEquipmentType__EPrimalEquipmentType_MAX = 12,

};

// Enum Engine.ELockedAxis
enum class Engine_ELockedAxis : uint8_t
{
	ELockedAxis__Default           = 0,
	ELockedAxis__X                 = 1,
	ELockedAxis__Y                 = 2,
	ELockedAxis__Z                 = 3,
	ELockedAxis__Custom            = 4,
	ELockedAxis__None              = 5,
	ELockedAxis__ELockedAxis_MAX   = 6,

};

// Enum Engine.ELinearConstraintMotion
enum class Engine_ELinearConstraintMotion : uint8_t
{
	LCM_Free                       = 0,
	LCM_Limited                    = 1,
	LCM_Locked                     = 2,
	LCM_MAX                        = 3,

};

// Enum Engine.EConstraintFrame
enum class Engine_EConstraintFrame : uint8_t
{
	EConstraintFrame__Frame1       = 0,
	EConstraintFrame__Frame2       = 1,
	EConstraintFrame__EConstraintFrame_MAX = 2,

};

// Enum Engine.EAngularDriveMode
enum class Engine_EAngularDriveMode : uint8_t
{
	EAngularDriveMode__SLERP       = 0,
	EAngularDriveMode__TwistAndSwing = 1,
	EAngularDriveMode__EAngularDriveMode_MAX = 2,

};

// Enum Engine.TextureGroup
enum class Engine_ETextureGroup : uint8_t
{
	TEXTUREGROUP_World             = 0,
	TEXTUREGROUP_WorldNormalMap    = 1,
	TEXTUREGROUP_WorldSpecular     = 2,
	TEXTUREGROUP_Character         = 3,
	TEXTUREGROUP_CharacterNormalMap = 4,
	TEXTUREGROUP_CharacterSpecular = 5,
	TEXTUREGROUP_Weapon            = 6,
	TEXTUREGROUP_WeaponNormalMap   = 7,
	TEXTUREGROUP_WeaponSpecular    = 8,
	TEXTUREGROUP_Vehicle           = 9,
	TEXTUREGROUP_VehicleNormalMap  = 10,
	TEXTUREGROUP_VehicleSpecular   = 11,
	TEXTUREGROUP_Cinematic         = 12,
	TEXTUREGROUP_Effects           = 13,
	TEXTUREGROUP_EffectsNotFiltered = 14,
	TEXTUREGROUP_Skybox            = 15,
	TEXTUREGROUP_UI                = 16,
	TEXTUREGROUP_Lightmap          = 17,
	TEXTUREGROUP_RenderTarget      = 18,
	TEXTUREGROUP_MobileFlattened   = 19,
	TEXTUREGROUP_ProcBuilding_Face = 20,
	TEXTUREGROUP_ProcBuilding_LightMap = 21,
	TEXTUREGROUP_Shadowmap         = 22,
	TEXTUREGROUP_ColorLookupTable  = 23,
	TEXTUREGROUP_Terrain_Heightmap = 24,
	TEXTUREGROUP_Terrain_Weightmap = 25,
	TEXTUREGROUP_Bokeh             = 26,
	TEXTUREGROUP_IESLightProfile   = 27,
	TEXTUREGROUP_SourceRez         = 28,
	TEXTUREGROUP_MAX               = 29,

};

// Enum Engine.TextureMipGenSettings
enum class Engine_ETextureMipGenSettings : uint8_t
{
	TMGS_FromTextureGroup          = 0,
	TMGS_SimpleAverage             = 1,
	TMGS_Sharpen0                  = 2,
	TMGS_Sharpen1                  = 3,
	TMGS_Sharpen2                  = 4,
	TMGS_Sharpen3                  = 5,
	TMGS_Sharpen4                  = 6,
	TMGS_Sharpen5                  = 7,
	TMGS_Sharpen6                  = 8,
	TMGS_Sharpen7                  = 9,
	TMGS_Sharpen8                  = 10,
	TMGS_Sharpen9                  = 11,
	TMGS_Sharpen10                 = 12,
	TMGS_NoMipmaps                 = 13,
	TMGS_LeaveExistingMips         = 14,
	TMGS_Blur1                     = 15,
	TMGS_Blur2                     = 16,
	TMGS_Blur3                     = 17,
	TMGS_Blur4                     = 18,
	TMGS_Blur5                     = 19,
	TMGS_MAX                       = 20,

};

// Enum Engine.EPinHidingMode
enum class Engine_EPinHidingMode : uint8_t
{
	EPinHidingMode__NeverAsPin     = 0,
	EPinHidingMode__PinHiddenByDefault = 1,
	EPinHidingMode__PinShownByDefault = 2,
	EPinHidingMode__AlwaysAsPin    = 3,
	EPinHidingMode__EPinHidingMode_MAX = 4,

};

// Enum Engine.EPostCopyOperation
enum class Engine_EPostCopyOperation : uint8_t
{
	EPostCopyOperation__None       = 0,
	EPostCopyOperation__LogicalNegateBool = 1,
	EPostCopyOperation__EPostCopyOperation_MAX = 2,

};

// Enum Engine.EComponentType
enum class Engine_EComponentType : uint8_t
{
	EComponentType__None           = 0,
	EComponentType__TranslationX   = 1,
	EComponentType__TranslationY   = 2,
	EComponentType__TranslationZ   = 3,
	EComponentType__RotationX      = 4,
	EComponentType__RotationY      = 5,
	EComponentType__RotationZ      = 6,
	EComponentType__Scale          = 7,
	EComponentType__EComponentType_MAX = 8,

};

// Enum Engine.EAxisOption
enum class Engine_EAxisOption : uint8_t
{
	EAxisOption__X                 = 0,
	EAxisOption__Y                 = 1,
	EAxisOption__Z                 = 2,
	EAxisOption__X_Neg             = 3,
	EAxisOption__Y_Neg             = 4,
	EAxisOption__Z_Neg             = 5,
	EAxisOption__EAxisOption_MAX   = 6,

};

// Enum Engine.EBoneModificationMode
enum class Engine_EBoneModificationMode : uint8_t
{
	BMM_Ignore                     = 0,
	BMM_Replace                    = 1,
	BMM_Additive                   = 2,
	BMM_MAX                        = 3,

};

// Enum Engine.ERefPoseType
enum class Engine_ERefPoseType : uint8_t
{
	EIT_LocalSpace                 = 0,
	EIT_Additive                   = 1,
	EIT_MAX                        = 2,

};

// Enum Engine.EBoneAxis
enum class Engine_EBoneAxis : uint8_t
{
	BA_X                           = 0,
	BA_Y                           = 1,
	BA_Z                           = 2,
	BA_MAX                         = 3,

};

// Enum Engine.EEvaluatorDataSource
enum class Engine_EEvaluatorDataSource : uint8_t
{
	EEvaluatorDataSource__EDS_SourcePose = 0,
	EEvaluatorDataSource__EDS_DestinationPose = 1,
	EEvaluatorDataSource__EDS_MAX  = 2,

};

// Enum Engine.EEvaluatorMode
enum class Engine_EEvaluatorMode : uint8_t
{
	EEvaluatorMode__EM_Standard    = 0,
	EEvaluatorMode__EM_Freeze      = 1,
	EEvaluatorMode__EM_DelayedFreeze = 2,
	EEvaluatorMode__EM_MAX         = 3,

};

// Enum Engine.ECameraAlphaBlendMode
enum class Engine_ECameraAlphaBlendMode : uint8_t
{
	ECameraAlphaBlendMode__CABM_Linear = 0,
	ECameraAlphaBlendMode__CABM_Cubic = 1,
	ECameraAlphaBlendMode__CABM_MAX = 2,

};

// Enum Engine.EngineTypes.EAngularConstraintMotion
enum class Engine_EAngularConstraintMotion : uint8_t
{
	ACM_Free                       = 0,
	ACM_Limited                    = 1,
	ACM_Locked                     = 2,
	ACM_MAX                        = 3,

};

// Enum Engine.EngineTypes.EComponentSocketType
enum class Engine_EComponentSocketType : uint8_t
{
	EComponentSocketType__Invalid  = 0,
	EComponentSocketType__Bone     = 1,
	EComponentSocketType__Socket   = 2,
	EComponentSocketType__EComponentSocketType_MAX = 3,

};

// Enum Engine.EngineTypes.EComponentMobility
enum class Engine_EComponentMobility : uint8_t
{
	EComponentMobility__Static     = 0,
	EComponentMobility__Stationary = 1,
	EComponentMobility__Movable    = 2,
	EComponentMobility__EComponentMobility_MAX = 3,

};

// Enum Engine.EngineTypes.EPhysicalSurface
enum class Engine_EPhysicalSurface : uint8_t
{
	SurfaceType_Default            = 0,
	SurfaceType1                   = 1,
	SurfaceType2                   = 2,
	SurfaceType3                   = 3,
	SurfaceType4                   = 4,
	SurfaceType5                   = 5,
	SurfaceType6                   = 6,
	SurfaceType7                   = 7,
	SurfaceType8                   = 8,
	SurfaceType9                   = 9,
	SurfaceType10                  = 10,
	SurfaceType11                  = 11,
	SurfaceType12                  = 12,
	SurfaceType13                  = 13,
	SurfaceType14                  = 14,
	SurfaceType15                  = 15,
	SurfaceType16                  = 16,
	SurfaceType17                  = 17,
	SurfaceType18                  = 18,
	SurfaceType19                  = 19,
	SurfaceType20                  = 20,
	SurfaceType21                  = 21,
	SurfaceType22                  = 22,
	SurfaceType23                  = 23,
	SurfaceType24                  = 24,
	SurfaceType25                  = 25,
	SurfaceType26                  = 26,
	SurfaceType27                  = 27,
	SurfaceType28                  = 28,
	SurfaceType29                  = 29,
	SurfaceType30                  = 30,
	SurfaceType31                  = 31,
	SurfaceType32                  = 32,
	SurfaceType33                  = 33,
	SurfaceType34                  = 34,
	SurfaceType35                  = 35,
	SurfaceType36                  = 36,
	SurfaceType37                  = 37,
	SurfaceType38                  = 38,
	SurfaceType39                  = 39,
	SurfaceType40                  = 40,
	SurfaceType41                  = 41,
	SurfaceType42                  = 42,
	SurfaceType43                  = 43,
	SurfaceType44                  = 44,
	SurfaceType45                  = 45,
	SurfaceType46                  = 46,
	SurfaceType47                  = 47,
	SurfaceType48                  = 48,
	SurfaceType49                  = 49,
	SurfaceType50                  = 50,
	SurfaceType51                  = 51,
	SurfaceType52                  = 52,
	SurfaceType53                  = 53,
	SurfaceType54                  = 54,
	SurfaceType55                  = 55,
	SurfaceType56                  = 56,
	SurfaceType57                  = 57,
	SurfaceType58                  = 58,
	SurfaceType59                  = 59,
	SurfaceType60                  = 60,
	SurfaceType61                  = 61,
	SurfaceType62                  = 62,
	SurfaceType_Max                = 63,
	EPhysicalSurface_MAX           = 64,

};

// Enum Engine.EngineTypes.EWalkableSlopeBehavior
enum class Engine_EWalkableSlopeBehavior : uint8_t
{
	WalkableSlope_Default          = 0,
	WalkableSlope_Increase         = 1,
	WalkableSlope_Decrease         = 2,
	WalkableSlope_Unwalkable       = 3,
	WalkableSlope_Max              = 4,

};

// Enum Engine.EngineTypes.EEndPlayReason
enum class Engine_EEndPlayReason : uint8_t
{
	EEndPlayReason__ActorDestroyed = 0,
	EEndPlayReason__LevelTransition = 1,
	EEndPlayReason__EndPlayInEditor = 2,
	EEndPlayReason__RemovedFromWorld = 3,
	EEndPlayReason__Quit           = 4,
	EEndPlayReason__EEndPlayReason_MAX = 5,

};

// Enum Engine.EngineTypes.EAutoReceiveInput
enum class Engine_EAutoReceiveInput : uint8_t
{
	EAutoReceiveInput__Disabled    = 0,
	EAutoReceiveInput__Player0     = 1,
	EAutoReceiveInput__Player1     = 2,
	EAutoReceiveInput__Player2     = 3,
	EAutoReceiveInput__Player3     = 4,
	EAutoReceiveInput__Player4     = 5,
	EAutoReceiveInput__Player5     = 6,
	EAutoReceiveInput__Player6     = 7,
	EAutoReceiveInput__Player7     = 8,
	EAutoReceiveInput__EAutoReceiveInput_MAX = 9,

};

// Enum Engine.EngineTypes.ENetDormancy
enum class Engine_ENetDormancy : uint8_t
{
	DORM_Never                     = 0,
	DORM_Awake                     = 1,
	DORM_DormantAll                = 2,
	DORM_DormantPartial            = 3,
	DORM_Initial                   = 4,
	DORN_MAX                       = 5,
	ENetDormancy_MAX               = 6,

};

// Enum Engine.EngineTypes.ENetRole
enum class Engine_ENetRole : uint8_t
{
	ROLE_None                      = 0,
	ROLE_SimulatedProxy            = 1,
	ROLE_AutonomousProxy           = 2,
	ROLE_Authority                 = 3,
	ROLE_MAX                       = 4,

};

// Enum Engine.EngineTypes.EMeshFeatureImportance
enum class Engine_EMeshFeatureImportance : uint8_t
{
	EMeshFeatureImportance__Off    = 0,
	EMeshFeatureImportance__Lowest = 1,
	EMeshFeatureImportance__Low    = 2,
	EMeshFeatureImportance__Normal = 3,
	EMeshFeatureImportance__High   = 4,
	EMeshFeatureImportance__Highest = 5,
	EMeshFeatureImportance__EMeshFeatureImportance_MAX = 6,

};

// Enum Engine.EngineTypes.EShadowMapFlags
enum class Engine_EShadowMapFlags : uint8_t
{
	SMF_None                       = 0,
	SMF_Streamed                   = 1,
	SMF_MAX                        = 2,

};

// Enum Engine.EngineTypes.ELightMapPaddingType
enum class Engine_ELightMapPaddingType : uint8_t
{
	LMPT_NormalPadding             = 0,
	LMPT_PrePadding                = 1,
	LMPT_NoPadding                 = 2,
	LMPT_MAX                       = 3,

};

// Enum Engine.EngineTypes.ELocalizedLanguage
enum class Engine_ELocalizedLanguage : uint8_t
{
	ca                             = 0,
	cs                             = 1,
	da                             = 2,
	de                             = 3,
	en                             = 4,
	es                             = 5,
	eu                             = 6,
	fi                             = 7,
	fr                             = 8,
	hu                             = 9,
	it                             = 10,
	ja                             = 11,
	ka                             = 12,
	ko                             = 13,
	nl                             = 14,
	pl                             = 15,
	pt_BR                          = 16,
	ru                             = 17,
	sv                             = 18,
	th                             = 19,
	tr                             = 20,
	uk                             = 21,
	zh                             = 22,
	zh__Hans__CN                   = 23,
	zh__TW                         = 24,
	Max                            = 25,
	ELocalizedLanguage_MAX         = 26,

};

// Enum Engine.EngineTypes.ECollisionEnabled
enum class Engine_ECollisionEnabled : uint8_t
{
	ECollisionEnabled__NoCollision = 0,
	ECollisionEnabled__QueryOnly   = 1,
	ECollisionEnabled__QueryAndPhysics = 2,
	ECollisionEnabled__ECollisionEnabled_MAX = 3,

};

// Enum Engine.EngineTypes.ETimelineSigType
enum class Engine_ETimelineSigType : uint8_t
{
	ETS_EventSignature             = 0,
	ETS_FloatSignature             = 1,
	ETS_VectorSignature            = 2,
	ETS_LinearColorSignature       = 3,
	ETS_InvalidSignature           = 4,
	ETS_MAX                        = 5,

};

// Enum Engine.EngineTypes.ESleepFamily
enum class Engine_ESleepFamily : uint8_t
{
	SF_Normal                      = 0,
	SF_Sensitive                   = 1,
	SF_MAX                         = 2,

};

// Enum Engine.EngineTypes.ERadialImpulseFalloff
enum class Engine_ERadialImpulseFalloff : uint8_t
{
	RIF_Constant                   = 0,
	RIF_Linear                     = 1,
	RIF_MAX                        = 2,

};

// Enum Engine.EngineTypes.EInputConsumeOptions
enum class Engine_EInputConsumeOptions : uint8_t
{
	ICO_ConsumeAll                 = 0,
	ICO_ConsumeBoundKeys           = 1,
	ICO_ConsumeNone                = 2,
	ICO_MAX                        = 3,

};

// Enum Engine.EngineTypes.EFilterInterpolationType
enum class Engine_EFilterInterpolationType : uint8_t
{
	BSIT_Average                   = 0,
	BSIT_Linear                    = 1,
	BSIT_Cubic                     = 2,
	BSIT_MAX                       = 3,

};

// Enum Engine.EngineTypes.ECollisionResponse
enum class Engine_ECollisionResponse : uint8_t
{
	ECR_Ignore                     = 0,
	ECR_Overlap                    = 1,
	ECR_Block                      = 2,
	ECR_MAX                        = 3,

};

// Enum Engine.EngineTypes.EPhysicsSceneType
enum class Engine_EPhysicsSceneType : uint8_t
{
	PST_Sync                       = 0,
	PST_Cloth                      = 1,
	PST_Async                      = 2,
	PST_MAX                        = 3,

};

// Enum Engine.EngineTypes.ETraceTypeQuery
enum class Engine_ETraceTypeQuery : uint8_t
{
	TraceTypeQuery1                = 0,
	TraceTypeQuery2                = 1,
	TraceTypeQuery3                = 2,
	TraceTypeQuery4                = 3,
	TraceTypeQuery5                = 4,
	TraceTypeQuery6                = 5,
	TraceTypeQuery7                = 6,
	TraceTypeQuery8                = 7,
	TraceTypeQuery9                = 8,
	TraceTypeQuery10               = 9,
	TraceTypeQuery11               = 10,
	TraceTypeQuery12               = 11,
	TraceTypeQuery13               = 12,
	TraceTypeQuery14               = 13,
	TraceTypeQuery15               = 14,
	TraceTypeQuery16               = 15,
	TraceTypeQuery17               = 16,
	TraceTypeQuery18               = 17,
	TraceTypeQuery19               = 18,
	TraceTypeQuery20               = 19,
	TraceTypeQuery21               = 20,
	TraceTypeQuery22               = 21,
	TraceTypeQuery23               = 22,
	TraceTypeQuery24               = 23,
	TraceTypeQuery25               = 24,
	TraceTypeQuery26               = 25,
	TraceTypeQuery27               = 26,
	TraceTypeQuery28               = 27,
	TraceTypeQuery29               = 28,
	TraceTypeQuery30               = 29,
	TraceTypeQuery31               = 30,
	TraceTypeQuery32               = 31,
	TraceTypeQuery_MAX             = 32,
	ETraceTypeQuery_MAX            = 33,

};

// Enum Engine.EngineTypes.EObjectTypeQuery
enum class Engine_EObjectTypeQuery : uint8_t
{
	ObjectTypeQuery1               = 0,
	ObjectTypeQuery2               = 1,
	ObjectTypeQuery3               = 2,
	ObjectTypeQuery4               = 3,
	ObjectTypeQuery5               = 4,
	ObjectTypeQuery6               = 5,
	ObjectTypeQuery7               = 6,
	ObjectTypeQuery8               = 7,
	ObjectTypeQuery9               = 8,
	ObjectTypeQuery10              = 9,
	ObjectTypeQuery11              = 10,
	ObjectTypeQuery12              = 11,
	ObjectTypeQuery13              = 12,
	ObjectTypeQuery14              = 13,
	ObjectTypeQuery15              = 14,
	ObjectTypeQuery16              = 15,
	ObjectTypeQuery17              = 16,
	ObjectTypeQuery18              = 17,
	ObjectTypeQuery19              = 18,
	ObjectTypeQuery20              = 19,
	ObjectTypeQuery21              = 20,
	ObjectTypeQuery22              = 21,
	ObjectTypeQuery23              = 22,
	ObjectTypeQuery24              = 23,
	ObjectTypeQuery25              = 24,
	ObjectTypeQuery26              = 25,
	ObjectTypeQuery27              = 26,
	ObjectTypeQuery28              = 27,
	ObjectTypeQuery29              = 28,
	ObjectTypeQuery30              = 29,
	ObjectTypeQuery31              = 30,
	ObjectTypeQuery32              = 31,
	ObjectTypeQuery_MAX            = 32,
	EObjectTypeQuery_MAX           = 33,

};

// Enum Engine.EngineTypes.EOverlapFilterOption
enum class Engine_EOverlapFilterOption : uint8_t
{
	OverlapFilter_All              = 0,
	OverlapFilter_DynamicOnly      = 1,
	OverlapFilter_StaticOnly       = 2,
	OverlapFilter_MAX              = 3,

};

// Enum Engine.EngineTypes.ECollisionChannel
enum class Engine_ECollisionChannel : uint8_t
{
	ECC_WorldStatic                = 0,
	ECC_WorldDynamic               = 1,
	ECC_Visibility                 = 2,
	ECC_PhysicsBody                = 3,
	ECC_Destructible               = 4,
	ECC_GameTraceChannel1          = 5,
	ECC_GameTraceChannel2          = 6,
	ECC_GameTraceChannel3          = 7,
	ECC_GameTraceChannel4          = 8,
	ECC_GameTraceChannel5          = 9,
	ECC_GameTraceChannel6          = 10,
	ECC_GameTraceChannel7          = 11,
	ECC_GameTraceChannel8          = 12,
	ECC_GameTraceChannel9          = 13,
	ECC_GameTraceChannel10         = 14,
	ECC_GameTraceChannel11         = 15,
	ECC_GameTraceChannel12         = 16,
	ECC_GameTraceChannel13         = 17,
	ECC_GameTraceChannel14         = 18,
	ECC_GameTraceChannel15         = 19,
	ECC_GameTraceChannel16         = 20,
	ECC_GameTraceChannel17         = 21,
	ECC_GameTraceChannel18         = 22,
	ECC_GameTraceChannel19         = 23,
	ECC_GameTraceChannel20         = 24,
	ECC_GameTraceChannel21         = 25,
	ECC_GameTraceChannel22         = 26,
	ECC_GameTraceChannel23         = 27,
	ECC_GameTraceChannel24         = 28,
	ECC_GameTraceChannel25         = 29,
	ECC_GameTraceChannel26         = 30,
	ECC_GameTraceChannel27         = 31,
	ECC_OverlapAll_Deprecated      = 32,
	ECC_OverlapAllDynamic_Deprecated = 33,
	ECC_OverlapAllStatic_Deprecated = 34,
	ECC_MAX                        = 35,

};

// Enum Engine.EngineTypes.EMovementMode
enum class Engine_EMovementMode : uint8_t
{
	MOVE_None                      = 0,
	MOVE_Walking                   = 1,
	MOVE_Falling                   = 2,
	MOVE_Swimming                  = 3,
	MOVE_Flying                    = 4,
	MOVE_Custom                    = 5,
	MOVE_MAX                       = 6,

};

// Enum Engine.EngineTypes.ETriangleSortAxis
enum class Engine_ETriangleSortAxis : uint8_t
{
	TSA_X_Axis                     = 0,
	TSA_Y_Axis                     = 1,
	TSA_Z_Axis                     = 2,
	TSA_MAX                        = 3,

};

// Enum Engine.EngineTypes.ETriangleSortOption
enum class Engine_ETriangleSortOption : uint8_t
{
	TRISORT_None                   = 0,
	TRISORT_CenterRadialDistance   = 1,
	TRISORT_Random                 = 2,
	TRISORT_MergeContiguous        = 3,
	TRISORT_Custom                 = 4,
	TRISORT_CustomLeftRight        = 5,
	TRISORT_MAX                    = 6,

};

// Enum Engine.EngineTypes.ELightingBuildQuality
enum class Engine_ELightingBuildQuality : uint8_t
{
	Quality_Preview                = 0,
	Quality_Medium                 = 1,
	Quality_High                   = 2,
	Quality_Production             = 3,
	Quality_MAX                    = 4,

};

// Enum Engine.EngineTypes.EMaterialSamplerType
enum class Engine_EMaterialSamplerType : uint8_t
{
	SAMPLERTYPE_Color              = 0,
	SAMPLERTYPE_Grayscale          = 1,
	SAMPLERTYPE_Alpha              = 2,
	SAMPLERTYPE_Normal             = 3,
	SAMPLERTYPE_Masks              = 4,
	SAMPLERTYPE_DistanceFieldFont  = 5,
	SAMPLERTYPE_LinearColor        = 6,
	SAMPLERTYPE_LinearGrayscale    = 7,
	SAMPLERTYPE_MAX                = 8,

};

// Enum Engine.EngineTypes.EMaterialTessellationMode
enum class Engine_EMaterialTessellationMode : uint8_t
{
	MTM_NoTessellation             = 0,
	MTM_FlatTessellation           = 1,
	MTM_PNTriangles                = 2,
	MTM_MAX                        = 3,

};

// Enum Engine.EngineTypes.EMaterialShadingModel
enum class Engine_EMaterialShadingModel : uint8_t
{
	MSM_Unlit                      = 0,
	MSM_DefaultLit                 = 1,
	MSM_Subsurface                 = 2,
	MSM_PreintegratedSkin          = 3,
	MSM_ClearCoat                  = 4,
	MSM_SubsurfaceProfile          = 5,
	MSM_TwoSidedFoliage            = 6,
	MSM_MAX                        = 7,

};

// Enum Engine.EngineTypes.ETrailWidthMode
enum class Engine_ETrailWidthMode : uint8_t
{
	ETrailWidthMode_FromCentre     = 0,
	ETrailWidthMode_FromFirst      = 1,
	ETrailWidthMode_FromSecond     = 2,
	ETrailWidthMode_MAX            = 3,

};

// Enum Engine.EngineTypes.ETranslucencyLightingMode
enum class Engine_ETranslucencyLightingMode : uint8_t
{
	TLM_VolumetricNonDirectional   = 0,
	TLM_VolumetricDirectional      = 1,
	TLM_Surface                    = 2,
	TLM_MAX                        = 3,

};

// Enum Engine.EngineTypes.ESamplerSourceMode
enum class Engine_ESamplerSourceMode : uint8_t
{
	SSM_FromTextureAsset           = 0,
	SSM_Wrap_WorldGroupSettings    = 1,
	SSM_Clamp_WorldGroupSettings   = 2,
	SSM_MAX                        = 3,

};

// Enum Engine.EngineTypes.EBlendMode
enum class Engine_EBlendMode : uint8_t
{
	BLEND_Opaque                   = 0,
	BLEND_Masked                   = 1,
	BLEND_Translucent              = 2,
	BLEND_Additive                 = 3,
	BLEND_Modulate                 = 4,
	BLEND_MAX                      = 5,

};

// Enum Engine.EngineTypes.EIndirectLightingCacheQuality
enum class Engine_EIndirectLightingCacheQuality : uint8_t
{
	ILCQ_Off                       = 0,
	ILCQ_Point                     = 1,
	ILCQ_Volume                    = 2,
	ILCQ_MAX                       = 3,

};

// Enum Engine.EngineTypes.ESceneDepthPriorityGroup
enum class Engine_ESceneDepthPriorityGroup : uint8_t
{
	SDPG_World                     = 0,
	SDPG_Foreground                = 1,
	SDPG_MAX                       = 2,

};

// Enum Engine.EngineTypes.EAttachLocation
enum class Engine_EAttachLocation : uint8_t
{
	EAttachLocation__KeepRelativeOffset = 0,
	EAttachLocation__KeepWorldPosition = 1,
	EAttachLocation__SnapToTarget  = 2,
	EAttachLocation__EAttachLocation_MAX = 3,

};

// Enum Engine.EngineTypes.EActorMetricsType
enum class Engine_EActorMetricsType : uint8_t
{
	METRICS_VERTS                  = 0,
	METRICS_TRIS                   = 1,
	METRICS_SECTIONS               = 2,
	METRICS_MAX                    = 3,

};

// Enum Engine.EngineTypes.EAspectRatioAxisConstraint
enum class Engine_EAspectRatioAxisConstraint : uint8_t
{
	AspectRatio_MaintainYFOV       = 0,
	AspectRatio_MaintainXFOV       = 1,
	AspectRatio_MajorAxisFOV       = 2,
	AspectRatio_MAX                = 3,

};

// Enum Engine.DialogueTypes.EGrammaticalNumber
enum class Engine_EGrammaticalNumber : uint8_t
{
	EGrammaticalNumber__Singular   = 0,
	EGrammaticalNumber__Plural     = 1,
	EGrammaticalNumber__EGrammaticalNumber_MAX = 2,

};

// Enum Engine.DialogueTypes.EGrammaticalGender
enum class Engine_EGrammaticalGender : uint8_t
{
	EGrammaticalGender__Neuter     = 0,
	EGrammaticalGender__Masculine  = 1,
	EGrammaticalGender__Feminine   = 2,
	EGrammaticalGender__Mixed      = 3,
	EGrammaticalGender__EGrammaticalGender_MAX = 4,

};

// Enum Engine.Texture.ETextureSourceFormat
enum class Engine_ETextureSourceFormat : uint8_t
{
	TSF_Invalid                    = 0,
	TSF_G8                         = 1,
	TSF_BGRA8                      = 2,
	TSF_BGRE8                      = 3,
	TSF_RGBA16                     = 4,
	TSF_RGBA16F                    = 5,
	TSF_RGBA8                      = 6,
	TSF_RGBE8                      = 7,
	TSF_MAX                        = 8,

};

// Enum Engine.Texture.ETextureSourceArtType
enum class Engine_ETextureSourceArtType : uint8_t
{
	TSAT_Uncompressed              = 0,
	TSAT_PNGCompressed             = 1,
	TSAT_DDSFile                   = 2,
	TSAT_MAX                       = 3,

};

// Enum Engine.Texture.ETextureMipCount
enum class Engine_ETextureMipCount : uint8_t
{
	TMC_ResidentMips               = 0,
	TMC_AllMips                    = 1,
	TMC_AllMipsBiased              = 2,
	TMC_MAX                        = 3,

};

// Enum Engine.Texture.ECompositeTextureMode
enum class Engine_ECompositeTextureMode : uint8_t
{
	CTM_Disabled                   = 0,
	CTM_NormalRoughnessToRed       = 1,
	CTM_NormalRoughnessToGreen     = 2,
	CTM_NormalRoughnessToBlue      = 3,
	CTM_NormalRoughnessToAlpha     = 4,
	CTM_MAX                        = 5,

};

// Enum Engine.Texture.TextureAddress
enum class Engine_ETextureAddress : uint8_t
{
	TA_Wrap                        = 0,
	TA_Clamp                       = 1,
	TA_Mirror                      = 2,
	TA_MAX                         = 3,

};

// Enum Engine.Texture.TextureFilter
enum class Engine_ETextureFilter : uint8_t
{
	TF_Nearest                     = 0,
	TF_Bilinear                    = 1,
	TF_Trilinear                   = 2,
	TF_Default                     = 3,
	TF_MAX                         = 4,

};

// Enum Engine.Texture.TextureCompressionSettings
enum class Engine_ETextureCompressionSettings : uint8_t
{
	TC_Default                     = 0,
	TC_Normalmap                   = 1,
	TC_Masks                       = 2,
	TC_Grayscale                   = 3,
	TC_Displacementmap             = 4,
	TC_VectorDisplacementmap       = 5,
	TC_HDR                         = 6,
	TC_EditorIcon                  = 7,
	TC_Alpha                       = 8,
	TC_DistanceFieldFont           = 9,
	TC_MAX                         = 10,

};

// Enum Engine.TextureRenderTarget2D.ETextureRenderTargetFormat
enum class Engine_ETextureRenderTargetFormat : uint8_t
{
	RTF_R8                         = 0,
	RTF_RG8                        = 1,
	RTF_RGBA8                      = 2,
	RTF_R16f                       = 3,
	RTF_RG16f                      = 4,
	RTF_RGBA16f                    = 5,
	RTF_R32f                       = 6,
	RTF_RG32f                      = 7,
	RTF_RGBA32f                    = 8,
	RTF_MAX                        = 9,

};

// Enum Engine.KismetSystemLibrary.ENetModeBP
enum class Engine_ENetModeBP : uint8_t
{
	ENetModeBP__Standalone         = 0,
	ENetModeBP__DedicatedServer    = 1,
	ENetModeBP__ListenServer       = 2,
	ENetModeBP__Client             = 3,
	ENetModeBP__ENetModeBP_MAX     = 4,

};

// Enum Engine.KismetSystemLibrary.ENetworkModeResult
enum class Engine_ENetworkModeResult : uint8_t
{
	ENetworkModeResult__Yes        = 0,
	ENetworkModeResult__No         = 1,
	ENetworkModeResult__ENetworkModeResult_MAX = 2,

};

// Enum Engine.KismetSystemLibrary.EQuitPreference
enum class Engine_EQuitPreference : uint8_t
{
	EQuitPreference__Quit          = 0,
	EQuitPreference__Background    = 1,
	EQuitPreference__EQuitPreference_MAX = 2,

};

// Enum Engine.KismetSystemLibrary.EMoveComponentAction
enum class Engine_EMoveComponentAction : uint8_t
{
	EMoveComponentAction__Move     = 0,
	EMoveComponentAction__Stop     = 1,
	EMoveComponentAction__Return   = 2,
	EMoveComponentAction__EMoveComponentAction_MAX = 3,

};

// Enum Engine.KismetSystemLibrary.EDrawDebugTrace
enum class Engine_EDrawDebugTrace : uint8_t
{
	EDrawDebugTrace__None          = 0,
	EDrawDebugTrace__ForOneFrame   = 1,
	EDrawDebugTrace__ForDuration   = 2,
	EDrawDebugTrace__Persistent    = 3,
	EDrawDebugTrace__EDrawDebugTrace_MAX = 4,

};

// Enum Engine.KismetTextLibrary.ERoundingMode
enum class Engine_ERoundingMode : uint8_t
{
	HalfToEven                     = 0,
	HalfFromZero                   = 1,
	HalfToZero                     = 2,
	FromZero                       = 3,
	ToZero                         = 4,
	ToNegativeInfinity             = 5,
	ToPositiveInfinity             = 6,
	ERoundingMode_MAX              = 7,

};

// Enum Engine.BodySetup.EBodyCollisionResponse
enum class Engine_EBodyCollisionResponse : uint8_t
{
	EBodyCollisionResponse__BodyCollision_Enabled = 0,
	EBodyCollisionResponse__BodyCollision_Disabled = 1,
	EBodyCollisionResponse__BodyCollision_MAX = 2,

};

// Enum Engine.BodySetup.EPhysicsType
enum class Engine_EPhysicsType : uint8_t
{
	PhysType_Default               = 0,
	PhysType_Kinematic             = 1,
	PhysType_Simulated             = 2,
	PhysType_MAX                   = 3,

};

// Enum Engine.BodySetup.ECollisionTraceFlag
enum class Engine_ECollisionTraceFlag : uint8_t
{
	CTF_UseDefault                 = 0,
	CTF_UseSimpleAsComplex         = 1,
	CTF_UseComplexAsSimple         = 2,
	CTF_MAX                        = 3,

};

// Enum Engine.CameraShake.EInitialOscillatorOffset
enum class Engine_EInitialOscillatorOffset : uint8_t
{
	EOO_OffsetRandom               = 0,
	EOO_OffsetZero                 = 1,
	EOO_MAX                        = 2,

};

// Enum Engine.DistributionVector.EDistributionVectorMirrorFlags
enum class Engine_EDistributionVectorMirrorFlags : uint8_t
{
	EDVMF_Same                     = 0,
	EDVMF_Different                = 1,
	EDVMF_Mirror                   = 2,
	EDVMF_MAX                      = 3,

};

// Enum Engine.DistributionVector.EDistributionVectorLockFlags
enum class Engine_EDistributionVectorLockFlags : uint8_t
{
	EDVLF_None                     = 0,
	EDVLF_XY                       = 1,
	EDVLF_XZ                       = 2,
	EDVLF_YZ                       = 3,
	EDVLF_XYZ                      = 4,
	EDVLF_MAX                      = 5,

};

// Enum Engine.EdGraphSchema.ECanCreateConnectionResponse
enum class Engine_ECanCreateConnectionResponse : uint8_t
{
	CONNECT_RESPONSE_MAKE          = 0,
	CONNECT_RESPONSE_DISALLOW      = 1,
	CONNECT_RESPONSE_BREAK_OTHERS_A = 2,
	CONNECT_RESPONSE_BREAK_OTHERS_B = 3,
	CONNECT_RESPONSE_BREAK_OTHERS_AB = 4,
	CONNECT_RESPONSE_MAKE_WITH_CONVERSION_NODE = 5,
	CONNECT_RESPONSE_MAX           = 6,

};

// Enum Engine.EdGraphSchema.EGraphType
enum class Engine_EGraphType : uint8_t
{
	GT_Function                    = 0,
	GT_Ubergraph                   = 1,
	GT_Macro                       = 2,
	GT_Animation                   = 3,
	GT_StateMachine                = 4,
	GT_MAX                         = 5,

};

// Enum Engine.Engine.EMatineeCaptureType
enum class Engine_EMatineeCaptureType : uint8_t
{
	EMatineeCaptureType__AVI       = 0,
	EMatineeCaptureType__BMP       = 1,
	EMatineeCaptureType__PNG       = 2,
	EMatineeCaptureType__JPEG      = 3,
	EMatineeCaptureType__EMatineeCaptureType_MAX = 4,

};

// Enum Engine.Engine.EConsoleType
enum class Engine_EConsoleType : uint8_t
{
	CONSOLE_Any                    = 0,
	CONSOLE_Mobile                 = 1,
	CONSOLE_XBOXONE                = 2,
	CONSOLE_MAX                    = 3,

};

// Enum Engine.Engine.ETransitionType
enum class Engine_ETransitionType : uint8_t
{
	TT_None                        = 0,
	TT_Paused                      = 1,
	TT_Loading                     = 2,
	TT_Saving                      = 3,
	TT_Connecting                  = 4,
	TT_Precaching                  = 5,
	TT_WaitingToConnect            = 6,
	TT_MAX                         = 7,

};

// Enum Engine.Engine.EFullyLoadPackageType
enum class Engine_EFullyLoadPackageType : uint8_t
{
	FULLYLOAD_Map                  = 0,
	FULLYLOAD_Game_PreLoadClass    = 1,
	FULLYLOAD_Game_PostLoadClass   = 2,
	FULLYLOAD_Always               = 3,
	FULLYLOAD_Mutator              = 4,
	FULLYLOAD_MAX                  = 5,

};

// Enum Engine.FontImportOptions.EFontImportCharacterSet
enum class Engine_EFontImportCharacterSet : uint8_t
{
	FontICS_Default                = 0,
	FontICS_Ansi                   = 1,
	FontICS_Symbol                 = 2,
	FontICS_MAX                    = 3,

};

// Enum Engine.Font.EFontCacheType
enum class Engine_EFontCacheType : uint8_t
{
	EFontCacheType__Offline        = 0,
	EFontCacheType__Runtime        = 1,
	EFontCacheType__EFontCacheType_MAX = 2,

};

// Enum Engine.InterpTrack.ETrackActiveCondition
enum class Engine_ETrackActiveCondition : uint8_t
{
	ETAC_Always                    = 0,
	ETAC_GoreEnabled               = 1,
	ETAC_GoreDisabled              = 2,
	ETAC_MAX                       = 3,

};

// Enum Engine.InterpTrackFloatBase.ETrackInterpMode
enum class Engine_ETrackInterpMode : uint8_t
{
	FTI_Set                        = 0,
	FTI_Add                        = 1,
	FTI_Multiply                   = 2,
	FTI_MAX                        = 3,

};

// Enum Engine.InterpTrackMove.EInterpTrackMoveRotMode
enum class Engine_EInterpTrackMoveRotMode : uint8_t
{
	IMR_Keyframed                  = 0,
	IMR_LookAtGroup                = 1,
	IMR_Ignore                     = 2,
	IMR_MAX                        = 3,

};

// Enum Engine.InterpTrackToggle.ETrackToggleAction
enum class Engine_ETrackToggleAction : uint8_t
{
	ETTA_Off                       = 0,
	ETTA_On                        = 1,
	ETTA_Toggle                    = 2,
	ETTA_Trigger                   = 3,
	ETTA_MAX                       = 4,

};

// Enum Engine.InterpTrackVisibility.EVisibilityTrackCondition
enum class Engine_EVisibilityTrackCondition : uint8_t
{
	EVTC_Always                    = 0,
	EVTC_GoreEnabled               = 1,
	EVTC_GoreDisabled              = 2,
	EVTC_MAX                       = 3,

};

// Enum Engine.InterpTrackVisibility.EVisibilityTrackAction
enum class Engine_EVisibilityTrackAction : uint8_t
{
	EVTA_Hide                      = 0,
	EVTA_Show                      = 1,
	EVTA_Toggle                    = 2,
	EVTA_MAX                       = 3,

};

// Enum Engine.LandscapeSplineSegment.LandscapeSplineMeshOrientation
enum class Engine_ELandscapeSplineMeshOrientation : uint8_t
{
	LSMO_XUp                       = 0,
	LSMO_YUp                       = 1,
	LSMO_MAX                       = 2,

};

// Enum Engine.MaterialExpressionCustom.ECustomMaterialOutputType
enum class Engine_ECustomMaterialOutputType : uint8_t
{
	CMOT_Float1                    = 0,
	CMOT_Float2                    = 1,
	CMOT_Float3                    = 2,
	CMOT_Float4                    = 3,
	CMOT_MAX                       = 4,

};

// Enum Engine.MaterialExpressionLandscapeLayerBlend.ELandscapeLayerBlendType
enum class Engine_ELandscapeLayerBlendType : uint8_t
{
	LB_WeightBlend                 = 0,
	LB_AlphaBlend                  = 1,
	LB_HeightBlend                 = 2,
	LB_MAX                         = 3,

};

// Enum Engine.Material.EMaterialDecalResponse
enum class Engine_EMaterialDecalResponse : uint8_t
{
	MDR_None                       = 0,
	MDR_ColorNormalRoughness       = 1,
	MDR_Color                      = 2,
	MDR_ColorNormal                = 3,
	MDR_ColorRoughness             = 4,
	MDR_Normal                     = 5,
	MDR_NormalRoughness            = 6,
	MDR_Roughness                  = 7,
	MDR_MAX                        = 8,

};

// Enum Engine.Material.EMaterialDomain
enum class Engine_EMaterialDomain : uint8_t
{
	MD_Surface                     = 0,
	MD_DeferredDecal               = 1,
	MD_LightFunction               = 2,
	MD_PostProcess                 = 3,
	MD_MAX                         = 4,

};

// Enum Engine.Material.EDecalBlendMode
enum class Engine_EDecalBlendMode : uint8_t
{
	DBM_Translucent                = 0,
	DBM_Stain                      = 1,
	DBM_Normal                     = 2,
	DBM_Emissive                   = 3,
	DBM_DBuffer_ColorNormalRoughness = 4,
	DBM_DBuffer_Color              = 5,
	DBM_DBuffer_ColorNormal        = 6,
	DBM_DBuffer_ColorRoughness     = 7,
	DBM_DBuffer_Normal             = 8,
	DBM_DBuffer_NormalRoughness    = 9,
	DBM_DBuffer_Roughness          = 10,
	DBM_MAX                        = 11,

};

// Enum Engine.BlendableInterface.EBlendableLocation
enum class Engine_EBlendableLocation : uint8_t
{
	BL_AfterTonemapping            = 0,
	BL_BeforeTonemapping           = 1,
	BL_BeforeTranslucency          = 2,
	BL_MAX                         = 3,

};

// Enum Engine.ParticleEmitter.EEmitterRenderMode
enum class Engine_EEmitterRenderMode : uint8_t
{
	ERM_Normal                     = 0,
	ERM_Point                      = 1,
	ERM_Cross                      = 2,
	ERM_LightsOnly                 = 3,
	ERM_None                       = 4,
	ERM_MAX                        = 5,

};

// Enum Engine.ParticleEmitter.EParticleSubUVInterpMethod
enum class Engine_EParticleSubUVInterpMethod : uint8_t
{
	PSUVIM_None                    = 0,
	PSUVIM_Linear                  = 1,
	PSUVIM_Linear_Blend            = 2,
	PSUVIM_Random                  = 3,
	PSUVIM_Random_Blend            = 4,
	PSUVIM_MAX                     = 5,

};

// Enum Engine.ParticleEmitter.EParticleBurstMethod
enum class Engine_EParticleBurstMethod : uint8_t
{
	EPBM_Instant                   = 0,
	EPBM_Interpolated              = 1,
	EPBM_MAX                       = 2,

};

// Enum Engine.ParticleModule.EParticleSourceSelectionMethod
enum class Engine_EParticleSourceSelectionMethod : uint8_t
{
	EPSSM_Random                   = 0,
	EPSSM_Sequential               = 1,
	EPSSM_MAX                      = 2,

};

// Enum Engine.ParticleModule.EModuleType
enum class Engine_EModuleType : uint8_t
{
	EPMT_General                   = 0,
	EPMT_TypeData                  = 1,
	EPMT_Beam                      = 2,
	EPMT_Trail                     = 3,
	EPMT_Spawn                     = 4,
	EPMT_Required                  = 5,
	EPMT_Event                     = 6,
	EPMT_Light                     = 7,
	EPMT_MAX                       = 8,

};

// Enum Engine.ParticleModuleBeamBase.Beam2SourceTargetTangentMethod
enum class Engine_EBeam2SourceTargetTangentMethod : uint8_t
{
	PEB2STTM_Direct                = 0,
	PEB2STTM_UserSet               = 1,
	PEB2STTM_Distribution          = 2,
	PEB2STTM_Emitter               = 3,
	PEB2STTM_MAX                   = 4,

};

// Enum Engine.ParticleModuleBeamBase.Beam2SourceTargetMethod
enum class Engine_EBeam2SourceTargetMethod : uint8_t
{
	PEB2STM_Default                = 0,
	PEB2STM_UserSet                = 1,
	PEB2STM_Emitter                = 2,
	PEB2STM_Particle               = 3,
	PEB2STM_Actor                  = 4,
	PEB2STM_MAX                    = 5,

};

// Enum Engine.ParticleModuleBeamModifier.BeamModifierType
enum class Engine_EBeamModifierType : uint8_t
{
	PEB2MT_Source                  = 0,
	PEB2MT_Target                  = 1,
	PEB2MT_MAX                     = 2,

};

// Enum Engine.ParticleModuleLocationBoneSocket.ELocationBoneSocketSelectionMethod
enum class Engine_ELocationBoneSocketSelectionMethod : uint8_t
{
	BONESOCKETSEL_Sequential       = 0,
	BONESOCKETSEL_Random           = 1,
	BONESOCKETSEL_MAX              = 2,

};

// Enum Engine.ParticleModuleLocationBoneSocket.ELocationBoneSocketSource
enum class Engine_ELocationBoneSocketSource : uint8_t
{
	BONESOCKETSOURCE_Bones         = 0,
	BONESOCKETSOURCE_Sockets       = 1,
	BONESOCKETSOURCE_MAX           = 2,

};

// Enum Engine.ParticleModuleOrbit.EOrbitChainMode
enum class Engine_EOrbitChainMode : uint8_t
{
	EOChainMode_Add                = 0,
	EOChainMode_Scale              = 1,
	EOChainMode_Link               = 2,
	EOChainMode_MAX                = 3,

};

// Enum Engine.ParticleModuleParameterDynamic.EEmitterDynamicParameterValue
enum class Engine_EEmitterDynamicParameterValue : uint8_t
{
	EDPV_UserSet                   = 0,
	EDPV_VelocityX                 = 1,
	EDPV_VelocityY                 = 2,
	EDPV_VelocityZ                 = 3,
	EDPV_VelocityMag               = 4,
	EDPV_MAX                       = 5,

};

// Enum Engine.ParticleModuleTypeDataBeam2.EBeamTaperMethod
enum class Engine_EBeamTaperMethod : uint8_t
{
	PEBTM_None                     = 0,
	PEBTM_Full                     = 1,
	PEBTM_Partial                  = 2,
	PEBTM_MAX                      = 3,

};

// Enum Engine.ParticleModuleTypeDataBeam2.EBeam2Method
enum class Engine_EBeam2Method : uint8_t
{
	PEB2M_Distance                 = 0,
	PEB2M_Target                   = 1,
	PEB2M_Branch                   = 2,
	PEB2M_MAX                      = 3,

};

// Enum Engine.ParticleModuleOrientationAxisLock.EParticleAxisLock
enum class Engine_EParticleAxisLock : uint8_t
{
	EPAL_NONE                      = 0,
	EPAL_X                         = 1,
	EPAL_Y                         = 2,
	EPAL_Z                         = 3,
	EPAL_NEGATIVE_X                = 4,
	EPAL_NEGATIVE_Y                = 5,
	EPAL_NEGATIVE_Z                = 6,
	EPAL_ROTATE_X                  = 7,
	EPAL_ROTATE_Y                  = 8,
	EPAL_ROTATE_Z                  = 9,
	EPAL_MAX                       = 10,

};

// Enum Engine.ParticleSpriteEmitter.EParticleScreenAlignment
enum class Engine_EParticleScreenAlignment : uint8_t
{
	PSA_FacingCameraPosition       = 0,
	PSA_Square                     = 1,
	PSA_Rectangle                  = 2,
	PSA_Velocity                   = 3,
	PSA_AwayFromCenter             = 4,
	PSA_TypeSpecific               = 5,
	PSA_MAX                        = 6,

};

// Enum Engine.PhysicsSettings.ESettingsLockedAxis
enum class Engine_ESettingsLockedAxis : uint8_t
{
	ESettingsLockedAxis__None      = 0,
	ESettingsLockedAxis__X         = 1,
	ESettingsLockedAxis__Y         = 2,
	ESettingsLockedAxis__Z         = 3,
	ESettingsLockedAxis__ESettingsLockedAxis_MAX = 4,

};

// Enum Engine.PhysicsSettings.EFrictionCombineMode
enum class Engine_EFrictionCombineMode : uint8_t
{
	EFrictionCombineMode__Average  = 0,
	EFrictionCombineMode__Min      = 1,
	EFrictionCombineMode__Multiply = 2,
	EFrictionCombineMode__Max      = 3,
	EFrictionCombineMode__EFrictionCombineMode_MAX = 4,

};

// Enum Engine.PlatformInterfaceBase.EPlatformInterfaceDataType
enum class Engine_EPlatformInterfaceDataType : uint8_t
{
	PIDT_None                      = 0,
	PIDT_Int                       = 1,
	PIDT_Float                     = 2,
	PIDT_String                    = 3,
	PIDT_Object                    = 4,
	PIDT_Custom                    = 5,
	PIDT_MAX                       = 6,

};

// Enum Engine.MicroTransactionBase.EMicroTransactionResult
enum class Engine_EMicroTransactionResult : uint8_t
{
	MTR_Succeeded                  = 0,
	MTR_Failed                     = 1,
	MTR_Canceled                   = 2,
	MTR_RestoredFromServer         = 3,
	MTR_MAX                        = 4,

};

// Enum Engine.MicroTransactionBase.EMicroTransactionDelegate
enum class Engine_EMicroTransactionDelegate : uint8_t
{
	MTD_PurchaseQueryComplete      = 0,
	MTD_PurchaseComplete           = 1,
	MTD_MAX                        = 2,

};

// Enum Engine.Rig.EConstraintTransform
enum class Engine_EConstraintTransform : uint8_t
{
	EConstraintTransform__Absoluate = 0,
	EConstraintTransform__Relative = 1,
	EConstraintTransform__EConstraintTransform_MAX = 2,

};

// Enum Engine.Rig.EControlConstraint
enum class Engine_EControlConstraint : uint8_t
{
	EControlConstraint__Orientation = 0,
	EControlConstraint__Translation = 1,
	EControlConstraint__Max        = 2,
	EControlConstraint__EControlConstraint_MAX = 3,

};

// Enum Engine.DestructibleMesh.EImpactDamageOverride
enum class Engine_EImpactDamageOverride : uint8_t
{
	IDO_None                       = 0,
	IDO_On                         = 1,
	IDO_Off                        = 2,
	IDO_MAX                        = 3,

};

// Enum Engine.SoundBase.EMaxConcurrentResolutionRule
enum class Engine_EMaxConcurrentResolutionRule : uint8_t
{
	EMaxConcurrentResolutionRule__PreventNew = 0,
	EMaxConcurrentResolutionRule__StopOldest = 1,
	EMaxConcurrentResolutionRule__StopFarthestThenPreventNew = 2,
	EMaxConcurrentResolutionRule__StopFarthestThenOldest = 3,
	EMaxConcurrentResolutionRule__EMaxConcurrentResolutionRule_MAX = 4,

};

// Enum Engine.SoundGroups.ESoundGroup
enum class Engine_ESoundGroup : uint8_t
{
	SOUNDGROUP_Default             = 0,
	SOUNDGROUP_Effects             = 1,
	SOUNDGROUP_UI                  = 2,
	SOUNDGROUP_Music               = 3,
	SOUNDGROUP_Voice               = 4,
	SOUNDGROUP_GameSoundGroup1     = 5,
	SOUNDGROUP_GameSoundGroup2     = 6,
	SOUNDGROUP_GameSoundGroup3     = 7,
	SOUNDGROUP_GameSoundGroup4     = 8,
	SOUNDGROUP_GameSoundGroup5     = 9,
	SOUNDGROUP_GameSoundGroup6     = 10,
	SOUNDGROUP_GameSoundGroup7     = 11,
	SOUNDGROUP_GameSoundGroup8     = 12,
	SOUNDGROUP_GameSoundGroup9     = 13,
	SOUNDGROUP_GameSoundGroup10    = 14,
	SOUNDGROUP_GameSoundGroup11    = 15,
	SOUNDGROUP_GameSoundGroup12    = 16,
	SOUNDGROUP_GameSoundGroup13    = 17,
	SOUNDGROUP_GameSoundGroup14    = 18,
	SOUNDGROUP_GameSoundGroup15    = 19,
	SOUNDGROUP_GameSoundGroup16    = 20,
	SOUNDGROUP_GameSoundGroup17    = 21,
	SOUNDGROUP_GameSoundGroup18    = 22,
	SOUNDGROUP_GameSoundGroup19    = 23,
	SOUNDGROUP_GameSoundGroup20    = 24,
	SOUNDGROUP_MAX                 = 25,

};

// Enum Engine.SoundWave.EDecompressionType
enum class Engine_EDecompressionType : uint8_t
{
	DTYPE_Setup                    = 0,
	DTYPE_Invalid                  = 1,
	DTYPE_Preview                  = 2,
	DTYPE_Native                   = 3,
	DTYPE_RealTime                 = 4,
	DTYPE_Procedural               = 5,
	DTYPE_Xenon                    = 6,
	DTYPE_Streaming                = 7,
	DTYPE_MAX                      = 8,

};

// Enum Engine.SoundClass.EAudioOutputTarget
enum class Engine_EAudioOutputTarget : uint8_t
{
	EAudioOutputTarget__Speaker    = 0,
	EAudioOutputTarget__Controller = 1,
	EAudioOutputTarget__ControllerFallbackToSpeaker = 2,
	EAudioOutputTarget__EAudioOutputTarget_MAX = 3,

};

// Enum Engine.SoundNodeModulatorContinuous.ModulationParamMode
enum class Engine_EModulationParamMode : uint8_t
{
	MPM_Normal                     = 0,
	MPM_Abs                        = 1,
	MPM_Direct                     = 2,
	MPM_MAX                        = 3,

};

// Enum Engine.StaticMesh.EDistanceFieldTwoSidedOverride
enum class Engine_EDistanceFieldTwoSidedOverride : uint8_t
{
	DFTSO_NotOverriden             = 0,
	DFTSO_OverrideTrue             = 1,
	DFTSO_OverrideFalse            = 2,
	DFTSO_Max                      = 3,

};

// Enum Engine.StaticMesh.EOptimizationType
enum class Engine_EOptimizationType : uint8_t
{
	OT_NumOfTriangles              = 0,
	OT_MaxDeviation                = 1,
	OT_MAX                         = 2,

};

// Enum Engine.StaticMesh.EImportanceLevel
enum class Engine_EImportanceLevel : uint8_t
{
	IL_Off                         = 0,
	IL_Lowest                      = 1,
	IL_Low                         = 2,
	IL_Normal                      = 3,
	IL_High                        = 4,
	IL_Highest                     = 5,
	TEMP_BROKEN2                   = 6,
	EImportanceLevel_MAX           = 7,

};

// Enum Engine.StaticMesh.ENormalMode
enum class Engine_ENormalMode : uint8_t
{
	NM_PreserveSmoothingGroups     = 0,
	NM_RecalculateNormals          = 1,
	NM_RecalculateNormalsSmooth    = 2,
	NM_RecalculateNormalsHard      = 3,
	TEMP_BROKEN                    = 4,
	ENormalMode_MAX                = 5,

};

// Enum Engine.LevelStreamingVolume.EStreamingVolumeUsage
enum class Engine_EStreamingVolumeUsage : uint8_t
{
	SVB_Loading                    = 0,
	SVB_LoadingAndVisibility       = 1,
	SVB_VisibilityBlockingOnLoad   = 2,
	SVB_BlockingOnLoad             = 3,
	SVB_LoadingNotVisible          = 4,
	SVB_MAX                        = 5,

};

// Enum Engine.PostProcessVolume.EPostProcessVolumeType
enum class Engine_EPostProcessVolumeType : uint8_t
{
	EPostProcessVolumeType__Generic = 0,
	EPostProcessVolumeType__Cave   = 1,
	EPostProcessVolumeType__Water  = 2,
	EPostProcessVolumeType__EPostProcessVolumeType_MAX = 3,

};

// Enum Engine.GameNetworkManager.EStandbyType
enum class Engine_EStandbyType : uint8_t
{
	STDBY_Rx                       = 0,
	STDBY_Tx                       = 1,
	STDBY_BadPing                  = 2,
	STDBY_MAX                      = 3,

};

// Enum Engine.Landscape.ELandscapeSetupErrors
enum class Engine_ELandscapeSetupErrors : uint8_t
{
	LSE_None                       = 0,
	LSE_NoLandscapeInfo            = 1,
	LSE_CollsionXY                 = 2,
	LSE_NoLayerInfo                = 3,
	LSE_MAX                        = 4,

};

// Enum Engine.RecastNavMesh.ERecastPartitioning
enum class Engine_ERecastPartitioning : uint8_t
{
	ERecastPartitioning__Monotone  = 0,
	ERecastPartitioning__Watershed = 1,
	ERecastPartitioning__ChunkyMonotone = 2,
	ERecastPartitioning__ERecastPartitioning_MAX = 3,

};

// Enum Engine.NavigationTestingActor.ENavCostDisplay
enum class Engine_ENavCostDisplay : uint8_t
{
	ENavCostDisplay__TotalCost     = 0,
	ENavCostDisplay__HeuristicOnly = 1,
	ENavCostDisplay__RealCostOnly  = 2,
	ENavCostDisplay__ENavCostDisplay_MAX = 3,

};

// Enum Engine.PoseableMeshComponent.EBoneSpaces
enum class Engine_EBoneSpaces : uint8_t
{
	EBoneSpaces__WorldSpace        = 0,
	EBoneSpaces__ComponentSpace    = 1,
	EBoneSpaces__EBoneSpaces_MAX   = 2,

};

// Enum Engine.NiagaraComponent.ERenderModuleType
enum class Engine_ERenderModuleType : uint8_t
{
	Sprites                        = 0,
	Ribbon                         = 1,
	ERenderModuleType_MAX          = 2,

};

// Enum Engine.TextRenderComponent.EVerticalTextAligment
enum class Engine_EVerticalTextAligment : uint8_t
{
	EVRTA_TextTop                  = 0,
	EVRTA_TextCenter               = 1,
	EVRTA_TextBottom               = 2,
	EVRTA_QuadTop                  = 3,
	EVRTA_MAX                      = 4,

};

// Enum Engine.TextRenderComponent.EHorizTextAligment
enum class Engine_EHorizTextAligment : uint8_t
{
	EHTA_Left                      = 0,
	EHTA_Center                    = 1,
	EHTA_Right                     = 2,
	EHTA_MAX                       = 3,

};

// Enum Engine.ReflectionCaptureComponent.EReflectionDFAOOption
enum class Engine_EReflectionDFAOOption : uint8_t
{
	EReflectionDFAOOption__Default = 0,
	EReflectionDFAOOption__UsedWithDFAO = 1,
	EReflectionDFAOOption__NotUsedWithDFAO = 2,
	EReflectionDFAOOption__EReflectionDFAOOption_MAX = 3,

};

// Enum Engine.SceneCaptureComponent2D.ESceneCaptureSource
enum class Engine_ESceneCaptureSource : uint8_t
{
	SCS_SceneColorHDR              = 0,
	SCS_FinalColorLDR              = 1,
	SCS_MAX                        = 2,

};

// Enum Engine.SplineComponent.ESplineCoordinateSpace
enum class Engine_ESplineCoordinateSpace : uint8_t
{
	ESplineCoordinateSpace__Local  = 0,
	ESplineCoordinateSpace__World  = 1,
	ESplineCoordinateSpace__ESplineCoordinateSpace_MAX = 2,

};

// Enum Engine.SplineComponent.ESplinePointType
enum class Engine_ESplinePointType : uint8_t
{
	ESplinePointType__Linear       = 0,
	ESplinePointType__Curve        = 1,
	ESplinePointType__Constant     = 2,
	ESplinePointType__CurveClamped = 3,
	ESplinePointType__CurveCustomTangent = 4,
	ESplinePointType__ESplinePointType_MAX = 5,

};

// Enum Engine.DataTableFunctionLibrary.EEvaluateCurveTableResult
enum class Engine_EEvaluateCurveTableResult : uint8_t
{
	EEvaluateCurveTableResult__RowFound = 0,
	EEvaluateCurveTableResult__RowNotFound = 1,
	EEvaluateCurveTableResult__EEvaluateCurveTableResult_MAX = 2,

};

// Enum Engine.GameplayStatics.ESuggestProjVelocityTraceOption
enum class Engine_ESuggestProjVelocityTraceOption : uint8_t
{
	ESuggestProjVelocityTraceOption__DoNotTrace = 0,
	ESuggestProjVelocityTraceOption__TraceFullPath = 1,
	ESuggestProjVelocityTraceOption__OnlyTraceWhileAsceding = 2,
	ESuggestProjVelocityTraceOption__ESuggestProjVelocityTraceOption_MAX = 3,

};

// Enum Engine.KismetMathLibrary.EEasingFunc
enum class Engine_EEasingFunc : uint8_t
{
	EEasingFunc__Linear            = 0,
	EEasingFunc__Step              = 1,
	EEasingFunc__SinusoidalIn      = 2,
	EEasingFunc__SinusoidalOut     = 3,
	EEasingFunc__SinusoidalInOut   = 4,
	EEasingFunc__EaseIn            = 5,
	EEasingFunc__EaseOut           = 6,
	EEasingFunc__EaseInOut         = 7,
	EEasingFunc__ExpoIn            = 8,
	EEasingFunc__ExpoOut           = 9,
	EEasingFunc__ExpoInOut         = 10,
	EEasingFunc__CircularIn        = 11,
	EEasingFunc__CircularOut       = 12,
	EEasingFunc__CircularInOut     = 13,
	EEasingFunc__EEasingFunc_MAX   = 14,

};

// Enum Engine.DistributionFloatParameterBase.DistributionParamMode
enum class Engine_EDistributionParamMode : uint8_t
{
	DPM_Normal                     = 0,
	DPM_Abs                        = 1,
	DPM_Direct                     = 2,
	DPM_MAX                        = 3,

};

// Enum Engine.EdGraphNode_Comment.ECommentBoxMode
enum class Engine_ECommentBoxMode : uint8_t
{
	ECommentBoxMode__GroupMovement = 0,
	ECommentBoxMode__NoGroupMovement = 1,
	ECommentBoxMode__ECommentBoxMode_MAX = 2,

};

// Enum Engine.FoliageType.FoliageVertexColorMask
enum class Engine_EFoliageVertexColorMask : uint8_t
{
	FOLIAGEVERTEXCOLORMASK_Disabled = 0,
	FOLIAGEVERTEXCOLORMASK_Red     = 1,
	FOLIAGEVERTEXCOLORMASK_Green   = 2,
	FOLIAGEVERTEXCOLORMASK_Blue    = 3,
	FOLIAGEVERTEXCOLORMASK_Alpha   = 4,
	FOLIAGEVERTEXCOLORMASK_MAX     = 5,

};

// Enum Engine.InterpTrackMoveAxis.EInterpMoveAxis
enum class Engine_EInterpMoveAxis : uint8_t
{
	AXIS_TranslationX              = 0,
	AXIS_TranslationY              = 1,
	AXIS_TranslationZ              = 2,
	AXIS_RotationX                 = 3,
	AXIS_RotationY                 = 4,
	AXIS_RotationZ                 = 5,
	AXIS_MAX                       = 6,

};

// Enum Engine.MaterialExpressionClamp.EClampMode
enum class Engine_EClampMode : uint8_t
{
	CMODE_Clamp                    = 0,
	CMODE_ClampMin                 = 1,
	CMODE_ClampMax                 = 2,
	CMODE_MAX                      = 3,

};

// Enum Engine.MaterialExpressionDepthOfFieldFunction.EDepthOfFieldFunctionValue
enum class Engine_EDepthOfFieldFunctionValue : uint8_t
{
	TDOF_NearAndFarMask            = 0,
	TDOF_NearMask                  = 1,
	TDOF_FarMask                   = 2,
	TDOF_MAX                       = 3,

};

// Enum Engine.MaterialExpressionFunctionInput.EFunctionInputType
enum class Engine_EFunctionInputType : uint8_t
{
	FunctionInput_Scalar           = 0,
	FunctionInput_Vector2          = 1,
	FunctionInput_Vector3          = 2,
	FunctionInput_Vector4          = 3,
	FunctionInput_Texture2D        = 4,
	FunctionInput_TextureCube      = 5,
	FunctionInput_StaticBool       = 6,
	FunctionInput_MaterialAttributes = 7,
	FunctionInput_MAX              = 8,

};

// Enum Engine.MaterialExpressionLandscapeLayerCoords.ELandscapeCustomizedCoordType
enum class Engine_ELandscapeCustomizedCoordType : uint8_t
{
	LCCT_None                      = 0,
	LCCT_CustomUV0                 = 1,
	LCCT_CustomUV1                 = 2,
	LCCT_CustomUV2                 = 3,
	LCCT_WeightMapUV               = 4,
	LCCT_MAX                       = 5,

};

// Enum Engine.MaterialExpressionLandscapeLayerCoords.ETerrainCoordMappingType
enum class Engine_ETerrainCoordMappingType : uint8_t
{
	TCMT_Auto                      = 0,
	TCMT_XY                        = 1,
	TCMT_XZ                        = 2,
	TCMT_YZ                        = 3,
	TCMT_MAX                       = 4,

};

// Enum Engine.MaterialExpressionNoise.ENoiseFunction
enum class Engine_ENoiseFunction : uint8_t
{
	NOISEFUNCTION_Simplex          = 0,
	NOISEFUNCTION_Perlin           = 1,
	NOISEFUNCTION_Gradient         = 2,
	NOISEFUNCTION_FastGradient     = 3,
	NOISEFUNCTION_MAX              = 4,

};

// Enum Engine.MaterialExpressionSceneColor.EMaterialSceneAttributeInputMode
enum class Engine_EMaterialSceneAttributeInputMode : uint8_t
{
	EMaterialSceneAttributeInputMode__Coordinates = 0,
	EMaterialSceneAttributeInputMode__OffsetFraction = 1,
	EMaterialSceneAttributeInputMode__EMaterialSceneAttributeInputMode_MAX = 2,

};

// Enum Engine.MaterialExpressionSceneTexture.ESceneTextureId
enum class Engine_ESceneTextureId : uint8_t
{
	PPI_SceneColor                 = 0,
	PPI_SceneDepth                 = 1,
	PPI_DiffuseColor               = 2,
	PPI_SpecularColor              = 3,
	PPI_SubsurfaceColor            = 4,
	PPI_BaseColor                  = 5,
	PPI_Specular                   = 6,
	PPI_Metallic                   = 7,
	PPI_WorldNormal                = 8,
	PPI_SeparateTranslucency       = 9,
	PPI_Opacity                    = 10,
	PPI_Roughness                  = 11,
	PPI_MaterialAO                 = 12,
	PPI_CustomDepth                = 13,
	PPI_PostProcessInput0          = 14,
	PPI_PostProcessInput1          = 15,
	PPI_PostProcessInput2          = 16,
	PPI_PostProcessInput3          = 17,
	PPI_PostProcessInput4          = 18,
	PPI_PostProcessInput5          = 19,
	PPI_PostProcessInput6          = 20,
	PPI_DecalMask                  = 21,
	PPI_ShadingModel               = 22,
	PPI_AmbientOcclusion           = 23,
	PPI_MAX                        = 24,

};

// Enum Engine.MaterialExpressionSpeedTree.ESpeedTreeLODType
enum class Engine_ESpeedTreeLODType : uint8_t
{
	STLOD_Pop                      = 0,
	STLOD_Smooth                   = 1,
	STLOD_MAX                      = 2,

};

// Enum Engine.MaterialExpressionSpeedTree.ESpeedTreeWindType
enum class Engine_ESpeedTreeWindType : uint8_t
{
	STW_None                       = 0,
	STW_Fastest                    = 1,
	STW_Fast                       = 2,
	STW_Better                     = 3,
	STW_Best                       = 4,
	STW_Palm                       = 5,
	STW_MAX                        = 6,

};

// Enum Engine.MaterialExpressionSpeedTree.ESpeedTreeGeometryType
enum class Engine_ESpeedTreeGeometryType : uint8_t
{
	STG_Branch                     = 0,
	STG_Frond                      = 1,
	STG_Leaf                       = 2,
	STG_FacingLeaf                 = 3,
	STG_Billboard                  = 4,
	STG_MAX                        = 5,

};

// Enum Engine.MaterialExpressionTextureSample.ETextureMipValueMode
enum class Engine_ETextureMipValueMode : uint8_t
{
	TMVM_None                      = 0,
	TMVM_MipLevel                  = 1,
	TMVM_MipBias                   = 2,
	TMVM_Derivative                = 3,
	TMVM_MAX                       = 4,

};

// Enum Engine.MaterialExpressionAntialiasedTextureMask.ETextureColorChannel
enum class Engine_ETextureColorChannel : uint8_t
{
	TCC_Red                        = 0,
	TCC_Green                      = 1,
	TCC_Blue                       = 2,
	TCC_Alpha                      = 3,
	TCC_MAX                        = 4,

};

// Enum Engine.MaterialExpressionTransform.EMaterialVectorCoordTransform
enum class Engine_EMaterialVectorCoordTransform : uint8_t
{
	TRANSFORM_World                = 0,
	TRANSFORM_View                 = 1,
	TRANSFORM_Local                = 2,
	TRANSFORM_Tangent              = 3,
	TRANSFORM_MAX                  = 4,

};

// Enum Engine.MaterialExpressionTransform.EMaterialVectorCoordTransformSource
enum class Engine_EMaterialVectorCoordTransformSource : uint8_t
{
	TRANSFORMSOURCE_World          = 0,
	TRANSFORMSOURCE_Local          = 1,
	TRANSFORMSOURCE_Tangent        = 2,
	TRANSFORMSOURCE_View           = 3,
	TRANSFORMSOURCE_RefPose        = 4,
	TRANSFORMSOURCE_MAX            = 5,

};

// Enum Engine.MaterialExpressionTransformPosition.EMaterialPositionTransformSource
enum class Engine_EMaterialPositionTransformSource : uint8_t
{
	TRANSFORMPOSSOURCE_Local       = 0,
	TRANSFORMPOSSOURCE_World       = 1,
	TRANSFORMPOSSOURCE_MAX         = 2,

};

// Enum Engine.MaterialExpressionWorldPosition.EWorldPositionIncludedOffsets
enum class Engine_EWorldPositionIncludedOffsets : uint8_t
{
	WPT_Default                    = 0,
	WPT_ExcludeAllShaderOffsets    = 1,
	WPT_CameraRelative             = 2,
	WPT_CameraRelativeNoOffsets    = 3,
	WPT_MAX                        = 4,

};

// Enum Engine.ParticleModuleAttractorParticle.EAttractorParticleSelectionMethod
enum class Engine_EAttractorParticleSelectionMethod : uint8_t
{
	EAPSM_Random                   = 0,
	EAPSM_Sequential               = 1,
	EAPSM_MAX                      = 2,

};

// Enum Engine.ParticleModuleCameraOffset.EParticleCameraOffsetUpdateMethod
enum class Engine_EParticleCameraOffsetUpdateMethod : uint8_t
{
	EPCOUM_DirectSet               = 0,
	EPCOUM_Additive                = 1,
	EPCOUM_Scalar                  = 2,
	EPCOUM_MAX                     = 3,

};

// Enum Engine.ParticleModuleCollisionBase.EParticleCollisionComplete
enum class Engine_EParticleCollisionComplete : uint8_t
{
	EPCC_Kill                      = 0,
	EPCC_Freeze                    = 1,
	EPCC_HaltCollisions            = 2,
	EPCC_FreezeTranslation         = 3,
	EPCC_FreezeRotation            = 4,
	EPCC_FreezeMovement            = 5,
	EPCC_MAX                       = 6,

};

// Enum Engine.ParticleModuleCollisionGPU.EParticleCollisionResponse
enum class Engine_EParticleCollisionResponse : uint8_t
{
	EParticleCollisionResponse__Bounce = 0,
	EParticleCollisionResponse__Stop = 1,
	EParticleCollisionResponse__Kill = 2,
	EParticleCollisionResponse__EParticleCollisionResponse_MAX = 3,

};

// Enum Engine.ParticleModuleLocationEmitter.ELocationEmitterSelectionMethod
enum class Engine_ELocationEmitterSelectionMethod : uint8_t
{
	ELESM_Random                   = 0,
	ELESM_Sequential               = 1,
	ELESM_MAX                      = 2,

};

// Enum Engine.ParticleModuleLocationPrimitiveCylinder.CylinderHeightAxis
enum class Engine_ECylinderHeightAxis : uint8_t
{
	PMLPC_HEIGHTAXIS_X             = 0,
	PMLPC_HEIGHTAXIS_Y             = 1,
	PMLPC_HEIGHTAXIS_Z             = 2,
	PMLPC_HEIGHTAXIS_MAX           = 3,

};

// Enum Engine.ParticleModuleLocationSkelVertSurface.ELocationSkelVertSurfaceSource
enum class Engine_ELocationSkelVertSurfaceSource : uint8_t
{
	VERTSURFACESOURCE_Vert         = 0,
	VERTSURFACESOURCE_Surface      = 1,
	VERTSURFACESOURCE_MAX          = 2,

};

// Enum Engine.ParticleModuleRequired.EEmitterNormalsMode
enum class Engine_EEmitterNormalsMode : uint8_t
{
	ENM_CameraFacing               = 0,
	ENM_Spherical                  = 1,
	ENM_Cylindrical                = 2,
	ENM_MAX                        = 3,

};

// Enum Engine.ParticleModuleRequired.EParticleSortMode
enum class Engine_EParticleSortMode : uint8_t
{
	PSORTMODE_None                 = 0,
	PSORTMODE_ViewProjDepth        = 1,
	PSORTMODE_DistanceToView       = 2,
	PSORTMODE_Age_OldestFirst      = 3,
	PSORTMODE_Age_NewestFirst      = 4,
	PSORTMODE_MAX                  = 5,

};

// Enum Engine.ParticleModuleTrailSource.ETrail2SourceMethod
enum class Engine_ETrail2SourceMethod : uint8_t
{
	PET2SRCM_Default               = 0,
	PET2SRCM_Particle              = 1,
	PET2SRCM_Actor                 = 2,
	PET2SRCM_MAX                   = 3,

};

// Enum Engine.ParticleModuleTypeDataMesh.EMeshCameraFacingOptions
enum class Engine_EMeshCameraFacingOptions : uint8_t
{
	XAxisFacing_NoUp               = 0,
	XAxisFacing_ZUp                = 1,
	XAxisFacing_NegativeZUp        = 2,
	XAxisFacing_YUp                = 3,
	XAxisFacing_NegativeYUp        = 4,
	LockedAxis_ZAxisFacing         = 5,
	LockedAxis_NegativeZAxisFacing = 6,
	LockedAxis_YAxisFacing         = 7,
	LockedAxis_NegativeYAxisFacing = 8,
	VelocityAligned_ZAxisFacing    = 9,
	VelocityAligned_NegativeZAxisFacing = 10,
	VelocityAligned_YAxisFacing    = 11,
	VelocityAligned_NegativeYAxisFacing = 12,
	EMeshCameraFacingOptions_MAX   = 13,

};

// Enum Engine.ParticleModuleTypeDataMesh.EMeshCameraFacingUpAxis
enum class Engine_EMeshCameraFacingUpAxis : uint8_t
{
	CameraFacing_NoneUP            = 0,
	CameraFacing_ZUp               = 1,
	CameraFacing_NegativeZUp       = 2,
	CameraFacing_YUp               = 3,
	CameraFacing_NegativeYUp       = 4,
	CameraFacing_MAX               = 5,

};

// Enum Engine.ParticleModuleTypeDataMesh.EMeshScreenAlignment
enum class Engine_EMeshScreenAlignment : uint8_t
{
	PSMA_MeshFaceCameraWithRoll    = 0,
	PSMA_MeshFaceCameraWithSpin    = 1,
	PSMA_MeshFaceCameraWithLockedAxis = 2,
	PSMA_MAX                       = 3,

};

// Enum Engine.ParticleModuleTypeDataRibbon.ETrailsRenderAxisOption
enum class Engine_ETrailsRenderAxisOption : uint8_t
{
	Trails_CameraUp                = 0,
	Trails_SourceUp                = 1,
	Trails_WorldUp                 = 2,
	Trails_MAX                     = 3,

};

// Enum Engine.CloudStorageBase.ECloudStorageDelegate
enum class Engine_ECloudStorageDelegate : uint8_t
{
	CSD_KeyValueReadComplete       = 0,
	CSD_KeyValueWriteComplete      = 1,
	CSD_ValueChanged               = 2,
	CSD_DocumentQueryComplete      = 3,
	CSD_DocumentReadComplete       = 4,
	CSD_DocumentWriteComplete      = 5,
	CSD_DocumentConflictDetected   = 6,
	CSD_MAX                        = 7,

};

// Enum Engine.InGameAdManager.EAdManagerDelegate
enum class Engine_EAdManagerDelegate : uint8_t
{
	AMD_ClickedBanner              = 0,
	AMD_UserClosedAd               = 1,
	AMD_MAX                        = 2,

};

// Enum Engine.TwitterIntegrationBase.ETwitterIntegrationDelegate
enum class Engine_ETwitterIntegrationDelegate : uint8_t
{
	TID_AuthorizeComplete          = 0,
	TID_TweetUIComplete            = 1,
	TID_RequestComplete            = 2,
	TID_MAX                        = 3,

};

// Enum Engine.TwitterIntegrationBase.ETwitterRequestMethod
enum class Engine_ETwitterRequestMethod : uint8_t
{
	TRM_Get                        = 0,
	TRM_Post                       = 1,
	TRM_Delete                     = 2,
	TRM_MAX                        = 3,

};

// Enum Engine.RendererSettings.EUIScalingRule
enum class Engine_EUIScalingRule : uint8_t
{
	EUIScalingRule__ShortestSide   = 0,
	EUIScalingRule__LongestSide    = 1,
	EUIScalingRule__Horizontal     = 2,
	EUIScalingRule__Vertical       = 3,
	EUIScalingRule__SmallestCurve  = 4,
	EUIScalingRule__EUIScalingRule_MAX = 5,

};

// Enum Engine.RendererSettings.EAntiAliasingMethodUI
enum class Engine_EAntiAliasingMethodUI : uint8_t
{
	EAntiAliasingMethodUI__AAM_None = 0,
	EAntiAliasingMethodUI__AAM_FXAA = 1,
	EAntiAliasingMethodUI__AAM_TemporalAA = 2,
	EAntiAliasingMethodUI__AAM_MAX = 3,

};

// Enum Engine.RendererSettings.EEarlyZPass
enum class Engine_EEarlyZPass : uint8_t
{
	EEarlyZPass__None              = 0,
	EEarlyZPass__OpaqueOnly        = 1,
	EEarlyZPass__OpaqueAndMasked   = 2,
	EEarlyZPass__Auto              = 3,
	EEarlyZPass__EEarlyZPass_MAX   = 4,

};

// Enum Engine.RendererSettings.ECustomDepth
enum class Engine_ECustomDepth : uint8_t
{
	ECustomDepth__Disabled         = 0,
	ECustomDepth__Enabled          = 1,
	ECustomDepth__EnabledOnDemand  = 2,
	ECustomDepth__ECustomDepth_MAX = 3,

};

// Enum Engine.RendererSettings.ECompositingSampleCount
enum class Engine_ECompositingSampleCount : uint8_t
{
	ECompositingSampleCount__UnusedSpacer = 0,
	ECompositingSampleCount__One   = 1,
	ECompositingSampleCount__Two   = 2,
	ECompositingSampleCount__UnusedSpacer01 = 3,
	ECompositingSampleCount__Four  = 4,
	ECompositingSampleCount__UnusedSpacer02 = 5,
	ECompositingSampleCount__UnusedSpacer03 = 6,
	ECompositingSampleCount__UnusedSpacer04 = 7,
	ECompositingSampleCount__Eight = 8,
	ECompositingSampleCount__ECompositingSampleCount_MAX = 9,

};

// Enum Engine.RendererSettings.EClearSceneOptions
enum class Engine_EClearSceneOptions : uint8_t
{
	EClearSceneOptions__NoClear    = 0,
	EClearSceneOptions__HardwareClear = 1,
	EClearSceneOptions__QuadAtMaxZ = 2,
	EClearSceneOptions__EClearSceneOptions_MAX = 3,

};

// Enum Engine.ReporterBase.EReporterLineStyle
enum class Engine_EReporterLineStyle : uint8_t
{
	EReporterLineStyle__Line       = 0,
	EReporterLineStyle__Dash       = 1,
	EReporterLineStyle__EReporterLineStyle_MAX = 2,

};

// Enum Engine.ReporterGraph.ELegendPosition
enum class Engine_ELegendPosition : uint8_t
{
	ELegendPosition__Outside       = 0,
	ELegendPosition__Inside        = 1,
	ELegendPosition__ELegendPosition_MAX = 2,

};

// Enum Engine.ReporterGraph.EGraphDataStyle
enum class Engine_EGraphDataStyle : uint8_t
{
	EGraphDataStyle__Lines         = 0,
	EGraphDataStyle__Filled        = 1,
	EGraphDataStyle__EGraphDataStyle_MAX = 2,

};

// Enum Engine.ReporterGraph.EGraphAxisStyle
enum class Engine_EGraphAxisStyle : uint8_t
{
	EGraphAxisStyle__Lines         = 0,
	EGraphAxisStyle__Notches       = 1,
	EGraphAxisStyle__Grid          = 2,
	EGraphAxisStyle__EGraphAxisStyle_MAX = 3,

};

// Enum Engine.UserDefinedStruct.EUserDefinedStructureStatus
enum class Engine_EUserDefinedStructureStatus : uint8_t
{
	UDSS_UpToDate                  = 0,
	UDSS_Dirty                     = 1,
	UDSS_Error                     = 2,
	UDSS_Duplicate                 = 3,
	UDSS_MAX                       = 4,

};

// Enum Engine.VectorFieldAnimated.EVectorFieldConstructionOp
enum class Engine_EVectorFieldConstructionOp : uint8_t
{
	VFCO_Extrude                   = 0,
	VFCO_Revolve                   = 1,
	VFCO_MAX                       = 2,

};

// Enum Engine.Actor.EBPMapCheckSeverity
enum class Engine_EBPMapCheckSeverity : uint8_t
{
	EBPMapCheckSeverity__Info      = 0,
	EBPMapCheckSeverity__Warning   = 1,
	EBPMapCheckSeverity__PerformanceWarning = 2,
	EBPMapCheckSeverity__Error     = 3,
	EBPMapCheckSeverity__EBPMapCheckSeverity_MAX = 4,

};

// Enum Engine.EngineBaseTypes.EViewModeIndex
enum class Engine_EViewModeIndex : uint8_t
{
	VMI_BrushWireframe             = 0,
	VMI_Wireframe                  = 1,
	VMI_Unlit                      = 2,
	VMI_Lit                        = 3,
	VMI_Lit_DetailLighting         = 4,
	VMI_LightingOnly               = 5,
	VMI_LightComplexity            = 6,
	EViewModeIndex__UnusedSpacer   = 7,
	VMI_ShaderComplexity           = 8,
	VMI_LightmapDensity            = 9,
	VMI_LitLightmapDensity         = 10,
	VMI_ReflectionOverride         = 11,
	VMI_VisualizeBuffer            = 12,
	EViewModeIndex__UnusedSpacer01 = 13,
	VMI_StationaryLightOverlap     = 14,
	VMI_CollisionPawn              = 15,
	VMI_CollisionVisibility        = 16,
	VMI_Max                        = 17,
	EViewModeIndex__UnusedSpacer02 = 18,
	EViewModeIndex__UnusedSpacer03 = 19,
	EViewModeIndex__UnusedSpacer04 = 20,
	EViewModeIndex__UnusedSpacer05 = 21,
	EViewModeIndex__UnusedSpacer06 = 22,
	EViewModeIndex__UnusedSpacer07 = 23,
	EViewModeIndex__UnusedSpacer08 = 24,
	EViewModeIndex__UnusedSpacer09 = 25,
	EViewModeIndex__UnusedSpacer10 = 26,
	EViewModeIndex__UnusedSpacer11 = 27,
	EViewModeIndex__UnusedSpacer12 = 28,
	EViewModeIndex__UnusedSpacer13 = 29,
	EViewModeIndex__UnusedSpacer14 = 30,
	EViewModeIndex__UnusedSpacer15 = 31,
	EViewModeIndex__UnusedSpacer16 = 32,
	EViewModeIndex__UnusedSpacer17 = 33,
	EViewModeIndex__UnusedSpacer18 = 34,
	EViewModeIndex__UnusedSpacer19 = 35,
	EViewModeIndex__UnusedSpacer20 = 36,
	EViewModeIndex__UnusedSpacer21 = 37,
	EViewModeIndex__UnusedSpacer22 = 38,
	EViewModeIndex__UnusedSpacer23 = 39,
	EViewModeIndex__UnusedSpacer24 = 40,
	EViewModeIndex__UnusedSpacer25 = 41,
	EViewModeIndex__UnusedSpacer26 = 42,
	EViewModeIndex__UnusedSpacer27 = 43,
	EViewModeIndex__UnusedSpacer28 = 44,
	EViewModeIndex__UnusedSpacer29 = 45,
	EViewModeIndex__UnusedSpacer30 = 46,
	EViewModeIndex__UnusedSpacer31 = 47,
	EViewModeIndex__UnusedSpacer32 = 48,
	EViewModeIndex__UnusedSpacer33 = 49,
	EViewModeIndex__UnusedSpacer34 = 50,
	EViewModeIndex__UnusedSpacer35 = 51,
	EViewModeIndex__UnusedSpacer36 = 52,
	EViewModeIndex__UnusedSpacer37 = 53,
	EViewModeIndex__UnusedSpacer38 = 54,
	EViewModeIndex__UnusedSpacer39 = 55,
	EViewModeIndex__UnusedSpacer40 = 56,
	EViewModeIndex__UnusedSpacer41 = 57,
	EViewModeIndex__UnusedSpacer42 = 58,
	EViewModeIndex__UnusedSpacer43 = 59,
	EViewModeIndex__UnusedSpacer44 = 60,
	EViewModeIndex__UnusedSpacer45 = 61,
	EViewModeIndex__UnusedSpacer46 = 62,
	EViewModeIndex__UnusedSpacer47 = 63,
	EViewModeIndex__UnusedSpacer48 = 64,
	EViewModeIndex__UnusedSpacer49 = 65,
	EViewModeIndex__UnusedSpacer50 = 66,
	EViewModeIndex__UnusedSpacer51 = 67,
	EViewModeIndex__UnusedSpacer52 = 68,
	EViewModeIndex__UnusedSpacer53 = 69,
	EViewModeIndex__UnusedSpacer54 = 70,
	EViewModeIndex__UnusedSpacer55 = 71,
	EViewModeIndex__UnusedSpacer56 = 72,
	EViewModeIndex__UnusedSpacer57 = 73,
	EViewModeIndex__UnusedSpacer58 = 74,
	EViewModeIndex__UnusedSpacer59 = 75,
	EViewModeIndex__UnusedSpacer60 = 76,
	EViewModeIndex__UnusedSpacer61 = 77,
	EViewModeIndex__UnusedSpacer62 = 78,
	EViewModeIndex__UnusedSpacer63 = 79,
	EViewModeIndex__UnusedSpacer64 = 80,
	EViewModeIndex__UnusedSpacer65 = 81,
	EViewModeIndex__UnusedSpacer66 = 82,
	EViewModeIndex__UnusedSpacer67 = 83,
	EViewModeIndex__UnusedSpacer68 = 84,
	EViewModeIndex__UnusedSpacer69 = 85,
	EViewModeIndex__UnusedSpacer70 = 86,
	EViewModeIndex__UnusedSpacer71 = 87,
	EViewModeIndex__UnusedSpacer72 = 88,
	EViewModeIndex__UnusedSpacer73 = 89,
	EViewModeIndex__UnusedSpacer74 = 90,
	EViewModeIndex__UnusedSpacer75 = 91,
	EViewModeIndex__UnusedSpacer76 = 92,
	EViewModeIndex__UnusedSpacer77 = 93,
	EViewModeIndex__UnusedSpacer78 = 94,
	EViewModeIndex__UnusedSpacer79 = 95,
	EViewModeIndex__UnusedSpacer80 = 96,
	EViewModeIndex__UnusedSpacer81 = 97,
	EViewModeIndex__UnusedSpacer82 = 98,
	EViewModeIndex__UnusedSpacer83 = 99,
	EViewModeIndex__UnusedSpacer84 = 100,
	EViewModeIndex__UnusedSpacer85 = 101,
	EViewModeIndex__UnusedSpacer86 = 102,
	EViewModeIndex__UnusedSpacer87 = 103,
	EViewModeIndex__UnusedSpacer88 = 104,
	EViewModeIndex__UnusedSpacer89 = 105,
	EViewModeIndex__UnusedSpacer90 = 106,
	EViewModeIndex__UnusedSpacer91 = 107,
	EViewModeIndex__UnusedSpacer92 = 108,
	EViewModeIndex__UnusedSpacer93 = 109,
	EViewModeIndex__UnusedSpacer94 = 110,
	EViewModeIndex__UnusedSpacer95 = 111,
	EViewModeIndex__UnusedSpacer96 = 112,
	EViewModeIndex__UnusedSpacer97 = 113,
	EViewModeIndex__UnusedSpacer98 = 114,
	EViewModeIndex__UnusedSpacer99 = 115,
	EViewModeIndex__UnusedSpacer100 = 116,
	EViewModeIndex__UnusedSpacer101 = 117,
	EViewModeIndex__UnusedSpacer102 = 118,
	EViewModeIndex__UnusedSpacer103 = 119,
	EViewModeIndex__UnusedSpacer104 = 120,
	EViewModeIndex__UnusedSpacer105 = 121,
	EViewModeIndex__UnusedSpacer106 = 122,
	EViewModeIndex__UnusedSpacer107 = 123,
	EViewModeIndex__UnusedSpacer108 = 124,
	EViewModeIndex__UnusedSpacer109 = 125,
	EViewModeIndex__UnusedSpacer110 = 126,
	EViewModeIndex__UnusedSpacer111 = 127,
	EViewModeIndex__UnusedSpacer112 = 128,
	EViewModeIndex__UnusedSpacer113 = 129,
	EViewModeIndex__UnusedSpacer114 = 130,
	EViewModeIndex__UnusedSpacer115 = 131,
	EViewModeIndex__UnusedSpacer116 = 132,
	EViewModeIndex__UnusedSpacer117 = 133,
	EViewModeIndex__UnusedSpacer118 = 134,
	EViewModeIndex__UnusedSpacer119 = 135,
	EViewModeIndex__UnusedSpacer120 = 136,
	EViewModeIndex__UnusedSpacer121 = 137,
	EViewModeIndex__UnusedSpacer122 = 138,
	EViewModeIndex__UnusedSpacer123 = 139,
	EViewModeIndex__UnusedSpacer124 = 140,
	EViewModeIndex__UnusedSpacer125 = 141,
	EViewModeIndex__UnusedSpacer126 = 142,
	EViewModeIndex__UnusedSpacer127 = 143,
	EViewModeIndex__UnusedSpacer128 = 144,
	EViewModeIndex__UnusedSpacer129 = 145,
	EViewModeIndex__UnusedSpacer130 = 146,
	EViewModeIndex__UnusedSpacer131 = 147,
	EViewModeIndex__UnusedSpacer132 = 148,
	EViewModeIndex__UnusedSpacer133 = 149,
	EViewModeIndex__UnusedSpacer134 = 150,
	EViewModeIndex__UnusedSpacer135 = 151,
	EViewModeIndex__UnusedSpacer136 = 152,
	EViewModeIndex__UnusedSpacer137 = 153,
	EViewModeIndex__UnusedSpacer138 = 154,
	EViewModeIndex__UnusedSpacer139 = 155,
	EViewModeIndex__UnusedSpacer140 = 156,
	EViewModeIndex__UnusedSpacer141 = 157,
	EViewModeIndex__UnusedSpacer142 = 158,
	EViewModeIndex__UnusedSpacer143 = 159,
	EViewModeIndex__UnusedSpacer144 = 160,
	EViewModeIndex__UnusedSpacer145 = 161,
	EViewModeIndex__UnusedSpacer146 = 162,
	EViewModeIndex__UnusedSpacer147 = 163,
	EViewModeIndex__UnusedSpacer148 = 164,
	EViewModeIndex__UnusedSpacer149 = 165,
	EViewModeIndex__UnusedSpacer150 = 166,
	EViewModeIndex__UnusedSpacer151 = 167,
	EViewModeIndex__UnusedSpacer152 = 168,
	EViewModeIndex__UnusedSpacer153 = 169,
	EViewModeIndex__UnusedSpacer154 = 170,
	EViewModeIndex__UnusedSpacer155 = 171,
	EViewModeIndex__UnusedSpacer156 = 172,
	EViewModeIndex__UnusedSpacer157 = 173,
	EViewModeIndex__UnusedSpacer158 = 174,
	EViewModeIndex__UnusedSpacer159 = 175,
	EViewModeIndex__UnusedSpacer160 = 176,
	EViewModeIndex__UnusedSpacer161 = 177,
	EViewModeIndex__UnusedSpacer162 = 178,
	EViewModeIndex__UnusedSpacer163 = 179,
	EViewModeIndex__UnusedSpacer164 = 180,
	EViewModeIndex__UnusedSpacer165 = 181,
	EViewModeIndex__UnusedSpacer166 = 182,
	EViewModeIndex__UnusedSpacer167 = 183,
	EViewModeIndex__UnusedSpacer168 = 184,
	EViewModeIndex__UnusedSpacer169 = 185,
	EViewModeIndex__UnusedSpacer170 = 186,
	EViewModeIndex__UnusedSpacer171 = 187,
	EViewModeIndex__UnusedSpacer172 = 188,
	EViewModeIndex__UnusedSpacer173 = 189,
	EViewModeIndex__UnusedSpacer174 = 190,
	EViewModeIndex__UnusedSpacer175 = 191,
	EViewModeIndex__UnusedSpacer176 = 192,
	EViewModeIndex__UnusedSpacer177 = 193,
	EViewModeIndex__UnusedSpacer178 = 194,
	EViewModeIndex__UnusedSpacer179 = 195,
	EViewModeIndex__UnusedSpacer180 = 196,
	EViewModeIndex__UnusedSpacer181 = 197,
	EViewModeIndex__UnusedSpacer182 = 198,
	EViewModeIndex__UnusedSpacer183 = 199,
	EViewModeIndex__UnusedSpacer184 = 200,
	EViewModeIndex__UnusedSpacer185 = 201,
	EViewModeIndex__UnusedSpacer186 = 202,
	EViewModeIndex__UnusedSpacer187 = 203,
	EViewModeIndex__UnusedSpacer188 = 204,
	EViewModeIndex__UnusedSpacer189 = 205,
	EViewModeIndex__UnusedSpacer190 = 206,
	EViewModeIndex__UnusedSpacer191 = 207,
	EViewModeIndex__UnusedSpacer192 = 208,
	EViewModeIndex__UnusedSpacer193 = 209,
	EViewModeIndex__UnusedSpacer194 = 210,
	EViewModeIndex__UnusedSpacer195 = 211,
	EViewModeIndex__UnusedSpacer196 = 212,
	EViewModeIndex__UnusedSpacer197 = 213,
	EViewModeIndex__UnusedSpacer198 = 214,
	EViewModeIndex__UnusedSpacer199 = 215,
	EViewModeIndex__UnusedSpacer200 = 216,
	EViewModeIndex__UnusedSpacer201 = 217,
	EViewModeIndex__UnusedSpacer202 = 218,
	EViewModeIndex__UnusedSpacer203 = 219,
	EViewModeIndex__UnusedSpacer204 = 220,
	EViewModeIndex__UnusedSpacer205 = 221,
	EViewModeIndex__UnusedSpacer206 = 222,
	EViewModeIndex__UnusedSpacer207 = 223,
	EViewModeIndex__UnusedSpacer208 = 224,
	EViewModeIndex__UnusedSpacer209 = 225,
	EViewModeIndex__UnusedSpacer210 = 226,
	EViewModeIndex__UnusedSpacer211 = 227,
	EViewModeIndex__UnusedSpacer212 = 228,
	EViewModeIndex__UnusedSpacer213 = 229,
	EViewModeIndex__UnusedSpacer214 = 230,
	EViewModeIndex__UnusedSpacer215 = 231,
	EViewModeIndex__UnusedSpacer216 = 232,
	EViewModeIndex__UnusedSpacer217 = 233,
	EViewModeIndex__UnusedSpacer218 = 234,
	EViewModeIndex__UnusedSpacer219 = 235,
	EViewModeIndex__UnusedSpacer220 = 236,
	EViewModeIndex__UnusedSpacer221 = 237,
	EViewModeIndex__UnusedSpacer222 = 238,
	EViewModeIndex__UnusedSpacer223 = 239,
	EViewModeIndex__UnusedSpacer224 = 240,
	EViewModeIndex__UnusedSpacer225 = 241,
	EViewModeIndex__UnusedSpacer226 = 242,
	EViewModeIndex__UnusedSpacer227 = 243,
	EViewModeIndex__UnusedSpacer228 = 244,
	EViewModeIndex__UnusedSpacer229 = 245,
	EViewModeIndex__UnusedSpacer230 = 246,
	EViewModeIndex__UnusedSpacer231 = 247,
	EViewModeIndex__UnusedSpacer232 = 248,
	EViewModeIndex__UnusedSpacer233 = 249,
	EViewModeIndex__UnusedSpacer234 = 250,
	EViewModeIndex__UnusedSpacer235 = 251,
	EViewModeIndex__UnusedSpacer236 = 252,
	EViewModeIndex__UnusedSpacer237 = 253,
	EViewModeIndex__UnusedSpacer238 = 254,
	VMI_Unknown                    = 255,
	EViewModeIndex_MAX             = 256,

};

// Enum Engine.EngineBaseTypes.ETravelType
enum class Engine_ETravelType : uint8_t
{
	TRAVEL_Absolute                = 0,
	TRAVEL_Partial                 = 1,
	TRAVEL_Relative                = 2,
	TRAVEL_MAX                     = 3,

};

// Enum Engine.EngineBaseTypes.ETickingGroup
enum class Engine_ETickingGroup : uint8_t
{
	TG_PrePhysics                  = 0,
	TG_StartPhysics                = 1,
	TG_DuringPhysics               = 2,
	TG_EndPhysics                  = 3,
	TG_PreCloth                    = 4,
	TG_StartCloth                  = 5,
	TG_EndCloth                    = 6,
	TG_PostPhysics                 = 7,
	TG_PostUpdateWork              = 8,
	TG_NewlySpawned                = 9,
	TG_MAX                         = 10,

};

// Enum Engine.EngineBaseTypes.EInputEvent
enum class Engine_EInputEvent : uint8_t
{
	IE_Pressed                     = 0,
	IE_Released                    = 1,
	IE_Repeat                      = 2,
	IE_DoubleClick                 = 3,
	IE_Axis                        = 4,
	IE_MAX                         = 5,

};

// Enum Engine.PlayerController.EDynamicForceFeedbackAction
enum class Engine_EDynamicForceFeedbackAction : uint8_t
{
	EDynamicForceFeedbackAction__Start = 0,
	EDynamicForceFeedbackAction__Update = 1,
	EDynamicForceFeedbackAction__Stop = 2,
	EDynamicForceFeedbackAction__EDynamicForceFeedbackAction_MAX = 3,

};

// Enum Engine.PlayerCameraManager.EViewTargetBlendFunction
enum class Engine_EViewTargetBlendFunction : uint8_t
{
	VTBlend_Linear                 = 0,
	VTBlend_Cubic                  = 1,
	VTBlend_EaseIn                 = 2,
	VTBlend_EaseOut                = 3,
	VTBlend_EaseInOut              = 4,
	VTBlend_MAX                    = 5,

};

// Enum Engine.Scene.EAntiAliasingMethod
enum class Engine_EAntiAliasingMethod : uint8_t
{
	AAM_None                       = 0,
	AAM_FXAA                       = 1,
	AAM_TemporalAA                 = 2,
	AAM_MAX                        = 3,

};

// Enum Engine.Scene.EDepthOfFieldMethod
enum class Engine_EDepthOfFieldMethod : uint8_t
{
	DOFM_BokehDOF                  = 0,
	DOFM_Gaussian                  = 1,
	DOFM_MAX                       = 2,

};

// Enum Engine.InputComponent.EControllerAnalogStick
enum class Engine_EControllerAnalogStick : uint8_t
{
	EControllerAnalogStick__CAS_LeftStick = 0,
	EControllerAnalogStick__CAS_RightStick = 1,
	EControllerAnalogStick__CAS_MAX = 2,

};

// Enum Engine.CurveBase.ERichCurveTangentWeightMode
enum class Engine_ERichCurveTangentWeightMode : uint8_t
{
	RCTWM_WeightedNone             = 0,
	RCTWM_WeightedArrive           = 1,
	RCTWM_WeightedLeave            = 2,
	RCTWM_WeightedBoth             = 3,
	RCTWM_MAX                      = 4,

};

// Enum Engine.CurveBase.ERichCurveTangentMode
enum class Engine_ERichCurveTangentMode : uint8_t
{
	RCTM_Auto                      = 0,
	RCTM_User                      = 1,
	RCTM_Break                     = 2,
	RCTM_MAX                       = 3,

};

// Enum Engine.CurveBase.ERichCurveInterpMode
enum class Engine_ERichCurveInterpMode : uint8_t
{
	RCIM_Linear                    = 0,
	RCIM_Constant                  = 1,
	RCIM_Cubic                     = 2,
	RCIM_MAX                       = 3,

};

// Enum Engine.Brush.EBrushType
enum class Engine_EBrushType : uint8_t
{
	Brush_Default                  = 0,
	Brush_Add                      = 1,
	Brush_Subtract                 = 2,
	Brush_MAX                      = 3,

};

// Enum Engine.Brush.ECsgOper
enum class Engine_ECsgOper : uint8_t
{
	CSG_Active                     = 0,
	CSG_Add                        = 1,
	CSG_Subtract                   = 2,
	CSG_Intersect                  = 3,
	CSG_Deintersect                = 4,
	CSG_None                       = 5,
	CSG_MAX                        = 6,

};

// Enum Engine.SceneComponent.ERelativeTransformSpace
enum class Engine_ERelativeTransformSpace : uint8_t
{
	RTS_World                      = 0,
	RTS_Actor                      = 1,
	RTS_Component                  = 2,
	RTS_MAX                        = 3,

};

// Enum Engine.SceneComponent.EDetailMode
enum class Engine_EDetailMode : uint8_t
{
	DM_Low                         = 0,
	DM_Medium                      = 1,
	DM_High                        = 2,
	DM_MAX                         = 3,

};

// Enum Engine.PrimitiveComponent.ECanBeCharacterBase
enum class Engine_ECanBeCharacterBase : uint8_t
{
	ECB_No                         = 0,
	ECB_Yes                        = 1,
	ECB_Owner                      = 2,
	ECB_MAX                        = 3,

};

// Enum Engine.SkinnedMeshComponent.EMeshComponentUpdateFlag
enum class Engine_EMeshComponentUpdateFlag : uint8_t
{
	EMeshComponentUpdateFlag__AlwaysTickPoseAndRefreshBones = 0,
	EMeshComponentUpdateFlag__AlwaysTickPose = 1,
	EMeshComponentUpdateFlag__OnlyTickPoseWhenRendered = 2,
	EMeshComponentUpdateFlag__LocalControlTickPoseAndRefreshBones = 3,
	EMeshComponentUpdateFlag__EMeshComponentUpdateFlag_MAX = 4,

};

// Enum Engine.SkinnedMeshComponent.EPhysBodyOp
enum class Engine_EPhysBodyOp : uint8_t
{
	PBO_None                       = 0,
	PBO_Term                       = 1,
	PBO_Disable                    = 2,
	PBO_MAX                        = 3,

};

// Enum Engine.SkinnedMeshComponent.EBoneVisibilityStatus
enum class Engine_EBoneVisibilityStatus : uint8_t
{
	BVS_HiddenByParent             = 0,
	BVS_Visible                    = 1,
	BVS_ExplicitlyHidden           = 2,
	BVS_MAX                        = 3,

};

// Enum Engine.SkeletalMeshComponent.EAnimationMode
enum class Engine_EAnimationMode : uint8_t
{
	EAnimationMode__AnimationBlueprint = 0,
	EAnimationMode__AnimationSingleNode = 1,
	EAnimationMode__EAnimationMode_MAX = 2,

};

// Enum Engine.SkeletalMeshComponent.EKinematicBonesUpdateToPhysics
enum class Engine_EKinematicBonesUpdateToPhysics : uint8_t
{
	EKinematicBonesUpdateToPhysics__SkipSimulatingBones = 0,
	EKinematicBonesUpdateToPhysics__SkipAllBones = 1,
	EKinematicBonesUpdateToPhysics__EKinematicBonesUpdateToPhysics_MAX = 2,

};

// Enum Engine.SkeletalMesh.SkeletalMeshOptimizationType
enum class Engine_ESkeletalMeshOptimizationType : uint8_t
{
	SMOT_NumOfTriangles            = 0,
	SMOT_MaxDeviation              = 1,
	SMOT_MAX                       = 2,

};

// Enum Engine.SkeletalMesh.SkeletalMeshOptimizationImportance
enum class Engine_ESkeletalMeshOptimizationImportance : uint8_t
{
	SMOI_Off                       = 0,
	SMOI_Lowest                    = 1,
	SMOI_Low                       = 2,
	SMOI_Normal                    = 3,
	SMOI_High                      = 4,
	SMOI_Highest                   = 5,
	SMOI_MAX                       = 6,

};

// Enum Engine.AnimationAsset.EAnimGroupRole
enum class Engine_EAnimGroupRole : uint8_t
{
	EAnimGroupRole__CanBeLeader    = 0,
	EAnimGroupRole__AlwaysFollower = 1,
	EAnimGroupRole__AlwaysLeader   = 2,
	EAnimGroupRole__EAnimGroupRole_MAX = 3,

};

// Enum Engine.AnimationAsset.ERootMotionRootLock
enum class Engine_ERootMotionRootLock : uint8_t
{
	ERootMotionRootLock__RefPose   = 0,
	ERootMotionRootLock__AnimFirstFrame = 1,
	ERootMotionRootLock__Zero      = 2,
	ERootMotionRootLock__ERootMotionRootLock_MAX = 3,

};

// Enum Engine.WorldSettings.EActorListsBP
enum class Engine_EActorListsBP : uint8_t
{
	EActorListsBP__AL_PLAYERS      = 0,
	EActorListsBP__AL_PLAYERSTATES = 1,
	EActorListsBP__AL_FLOATINGHUD  = 2,
	EActorListsBP__AL_UNSTASISEDACTORS = 3,
	EActorListsBP__AL_NPC          = 4,
	EActorListsBP__AL_NPC_ACTIVE   = 5,
	EActorListsBP__AL_FORCEDHUD    = 6,
	EActorListsBP__AL_NPCZONEMANAGERS = 7,
	EActorListsBP__AL_PLAYERCONTROLLERS = 8,
	EActorListsBP__AL_BEDS         = 9,
	EActorListsBP__AL_BIOMEZONEVOLUMES = 10,
	EActorListsBP__AL_NPC_DEAD     = 11,
	EActorListsBP__AL_DAYCYCLEAMBIENTSOUNDS = 12,
	EActorListsBP__AL_STRUCTURESCLIENT = 13,
	EActorListsBP__AL_STRUCTUREPREVENTIONVOLUMES = 14,
	EActorListsBP__AL_TRANSPONDERS = 15,
	EActorListsBP__AL_CUSTOMACTORLISTS = 16,
	EActorListsBP__AL_BLOCKINGVOLUMES = 17,
	EActorListsBP__AL_AMBIENTSOUNDS = 18,
	EActorListsBP__AL_CONNECTEDSHOOTERCHARACTERS = 19,
	EActorListsBP__AL_EXPLORERNOTECHESTS = 20,
	EActorListsBP__AL_SUPPLYCRATEVOLUMES = 21,
	EActorListsBP__AL_TAMED_DINOS  = 22,
	EActorListsBP__MAX             = 23,
	EActorListsBP__EActorListsBP_MAX = 24,

};

// Enum Engine.WorldSettings.EVisibilityAggressiveness
enum class Engine_EVisibilityAggressiveness : uint8_t
{
	VIS_LeastAggressive            = 0,
	VIS_ModeratelyAggressive       = 1,
	VIS_MostAggressive             = 2,
	VIS_Max                        = 3,

};

// Enum Engine.ReverbVolume.ReverbPreset
enum class Engine_EReverbPreset : uint8_t
{
	REVERB_Default                 = 0,
	REVERB_Bathroom                = 1,
	REVERB_StoneRoom               = 2,
	REVERB_Auditorium              = 3,
	REVERB_ConcertHall             = 4,
	REVERB_Cave                    = 5,
	REVERB_Hallway                 = 6,
	REVERB_StoneCorridor           = 7,
	REVERB_Alley                   = 8,
	REVERB_Forest                  = 9,
	REVERB_City                    = 10,
	REVERB_Mountains               = 11,
	REVERB_Quarry                  = 12,
	REVERB_Plain                   = 13,
	REVERB_ParkingLot              = 14,
	REVERB_SewerPipe               = 15,
	REVERB_Underwater              = 16,
	REVERB_SmallRoom               = 17,
	REVERB_MediumRoom              = 18,
	REVERB_LargeRoom               = 19,
	REVERB_MediumHall              = 20,
	REVERB_LargeHall               = 21,
	REVERB_Plate                   = 22,
	REVERB_MAX                     = 23,

};

// Enum Engine.SkyLightComponent.ESkyLightSourceType
enum class Engine_ESkyLightSourceType : uint8_t
{
	SLS_CapturedScene              = 0,
	SLS_SpecifiedCubemap           = 1,
	SLS_MAX                        = 2,

};

// Enum Engine.AntiDupeTransactionLog.EAntiDupeTransactionLog
enum class Engine_EAntiDupeTransactionLog : uint8_t
{
	Item_Upload                    = 0,
	Dino_Upload                    = 1,
	Player_Upload                  = 2,
	MAX_ENTRY                      = 3,
	EAntiDupeTransactionLog_MAX    = 4,

};

// Enum Engine.LandscapeGizmoActiveActor.ELandscapeGizmoType
enum class Engine_ELandscapeGizmoType : uint8_t
{
	LGT_None                       = 0,
	LGT_Height                     = 1,
	LGT_Weight                     = 2,
	LGT_MAX                        = 3,

};

// Enum Engine.LandscapeProxy.ELandscapeLODFalloff
enum class Engine_ELandscapeLODFalloff : uint8_t
{
	ELandscapeLODFalloff__Linear   = 0,
	ELandscapeLODFalloff__SquareRoot = 1,
	ELandscapeLODFalloff__ELandscapeLODFalloff_MAX = 2,

};

// Enum Engine.LandscapeProxy.ELandscapeLayerPaintingRestriction
enum class Engine_ELandscapeLayerPaintingRestriction : uint8_t
{
	ELandscapeLayerPaintingRestriction__None = 0,
	ELandscapeLayerPaintingRestriction__UseMaxLayers = 1,
	ELandscapeLayerPaintingRestriction__ExistingOnly = 2,
	ELandscapeLayerPaintingRestriction__ELandscapeLayerPaintingRestriction_MAX = 3,

};

// Enum Engine.NavigationTypes.ENavigationQueryResult
enum class Engine_ENavigationQueryResult : uint8_t
{
	ENavigationQueryResult__Invalid = 0,
	ENavigationQueryResult__Error  = 1,
	ENavigationQueryResult__Fail   = 2,
	ENavigationQueryResult__Success = 3,
	ENavigationQueryResult__ENavigationQueryResult_MAX = 4,

};

// Enum Engine.NavigationTypes.ENavPathEvent
enum class Engine_ENavPathEvent : uint8_t
{
	ENavPathEvent__Cleared         = 0,
	ENavPathEvent__NewPath         = 1,
	ENavPathEvent__UpdatedDueToGoalMoved = 2,
	ENavPathEvent__UpdatedDueToNavigationChanged = 3,
	ENavPathEvent__Invalidated     = 4,
	ENavPathEvent__RePathFailed    = 5,
	ENavPathEvent__Custom          = 6,
	ENavPathEvent__ENavPathEvent_MAX = 7,

};

// Enum Engine.NavigationTypes.ENavigationOptionFlag
enum class Engine_ENavigationOptionFlag : uint8_t
{
	ENavigationOptionFlag__Default = 0,
	ENavigationOptionFlag__Enable  = 1,
	ENavigationOptionFlag__Disable = 2,
	ENavigationOptionFlag__MAX     = 3,
	ENavigationOptionFlag__ENavigationOptionFlag_MAX = 4,

};

// Enum Engine.NavLinkDefinition.ENavLinkDirection
enum class Engine_ENavLinkDirection : uint8_t
{
	ENavLinkDirection__BothWays    = 0,
	ENavLinkDirection__LeftToRight = 1,
	ENavLinkDirection__RightToLeft = 2,
	ENavLinkDirection__ENavLinkDirection_MAX = 3,

};

// Enum Engine.Skeleton.EBoneTranslationRetargetingMode
enum class Engine_EBoneTranslationRetargetingMode : uint8_t
{
	EBoneTranslationRetargetingMode__Animation = 0,
	EBoneTranslationRetargetingMode__Skeleton = 1,
	EBoneTranslationRetargetingMode__AnimationScaled = 2,
	EBoneTranslationRetargetingMode__EBoneTranslationRetargetingMode_MAX = 3,

};

// Enum Engine.CharacterMovementComponent.ENetMoveType
enum class Engine_ENetMoveType : uint8_t
{
	ENetMoveType__ServerMove       = 0,
	ENetMoveType__ServerMoveOld    = 1,
	ENetMoveType__ServerMoveWithRotation = 2,
	ENetMoveType__ServerMoveOldWithRotation = 3,
	ENetMoveType__ServerMoveOnlyRotation = 4,
	ENetMoveType__ENetMoveType_MAX = 5,

};

// Enum Engine.WheeledVehicleMovementComponent4W.EVehicleDifferential4W
enum class Engine_EVehicleDifferential4W : uint8_t
{
	EVehicleDifferential4W__LimitedSlip_4W = 0,
	EVehicleDifferential4W__LimitedSlip_FrontDrive = 1,
	EVehicleDifferential4W__LimitedSlip_RearDrive = 2,
	EVehicleDifferential4W__Open_4W = 3,
	EVehicleDifferential4W__Open_FrontDrive = 4,
	EVehicleDifferential4W__Open_RearDrive = 5,
	EVehicleDifferential4W__EVehicleDifferential4W_MAX = 6,

};

// Enum Engine.SoundAttenuation.EAttenuationShape
enum class Engine_EAttenuationShape : uint8_t
{
	EAttenuationShape__Sphere      = 0,
	EAttenuationShape__Capsule     = 1,
	EAttenuationShape__Box         = 2,
	EAttenuationShape__Cone        = 3,
	EAttenuationShape__EAttenuationShape_MAX = 4,

};

// Enum Engine.SoundAttenuation.ESoundDistanceCalc
enum class Engine_ESoundDistanceCalc : uint8_t
{
	SOUNDDISTANCE_Normal           = 0,
	SOUNDDISTANCE_InfiniteXYPlane  = 1,
	SOUNDDISTANCE_InfiniteXZPlane  = 2,
	SOUNDDISTANCE_InfiniteYZPlane  = 3,
	SOUNDDISTANCE_MAX              = 4,

};

// Enum Engine.SoundAttenuation.ESoundDistanceModel
enum class Engine_ESoundDistanceModel : uint8_t
{
	ATTENUATION_Linear             = 0,
	ATTENUATION_Logarithmic        = 1,
	ATTENUATION_Inverse            = 2,
	ATTENUATION_LogReverse         = 3,
	ATTENUATION_NaturalSound       = 4,
	ATTENUATION_MAX                = 5,

};

// Enum Engine.SplineMeshComponent.ESplineMeshAxis
enum class Engine_ESplineMeshAxis : uint8_t
{
	ESplineMeshAxis__X             = 0,
	ESplineMeshAxis__Y             = 1,
	ESplineMeshAxis__Z             = 2,
	ESplineMeshAxis__ESplineMeshAxis_MAX = 3,

};

// Enum Engine.MaterialInterface.EMaterialUsage
enum class Engine_EMaterialUsage : uint8_t
{
	MATUSAGE_SkeletalMesh          = 0,
	MATUSAGE_ParticleSprites       = 1,
	MATUSAGE_BeamTrails            = 2,
	MATUSAGE_MeshParticles         = 3,
	MATUSAGE_StaticLighting        = 4,
	MATUSAGE_MorphTargets          = 5,
	MATUSAGE_SplineMesh            = 6,
	MATUSAGE_Landscape             = 7,
	MATUSAGE_InstancedStaticMeshes = 8,
	MATUSAGE_Clothing              = 9,
	MATUSAGE_UI                    = 10,
	MATUSAGE_GroundClutter         = 11,
	MATUSAGE_StaticMesh            = 12,
	MATUSAGE_MAX                   = 13,

};

// Enum Engine.ParticleSystem.EParticleSystemOcclusionBoundsMethod
enum class Engine_EParticleSystemOcclusionBoundsMethod : uint8_t
{
	EPSOBM_None                    = 0,
	EPSOBM_ParticleBounds          = 1,
	EPSOBM_CustomBounds            = 2,
	EPSOBM_MAX                     = 3,

};

// Enum Engine.ParticleSystem.ParticleSystemLODMethod
enum class Engine_EParticleSystemLODMethod : uint8_t
{
	PARTICLESYSTEMLODMETHOD_Automatic = 0,
	PARTICLESYSTEMLODMETHOD_DirectSet = 1,
	PARTICLESYSTEMLODMETHOD_ActivateAutomatic = 2,
	PARTICLESYSTEMLODMETHOD_MAX    = 3,

};

// Enum Engine.ParticleSystem.EParticleSystemUpdateMode
enum class Engine_EParticleSystemUpdateMode : uint8_t
{
	EPSUM_RealTime                 = 0,
	EPSUM_FixedTime                = 1,
	EPSUM_MAX                      = 2,

};

// Enum Engine.ParticleSystemComponent.EParticleEventType
enum class Engine_EParticleEventType : uint8_t
{
	EPET_Any                       = 0,
	EPET_Spawn                     = 1,
	EPET_Death                     = 2,
	EPET_Collision                 = 3,
	EPET_Burst                     = 4,
	EPET_Blueprint                 = 5,
	EPET_MAX                       = 6,

};

// Enum Engine.ParticleSystemComponent.ParticleReplayState
enum class Engine_EParticleReplayState : uint8_t
{
	PRS_Disabled                   = 0,
	PRS_Capturing                  = 1,
	PRS_Replaying                  = 2,
	PRS_MAX                        = 3,

};

// Enum Engine.ParticleSystemComponent.EParticleSysParamType
enum class Engine_EParticleSysParamType : uint8_t
{
	PSPT_None                      = 0,
	PSPT_Scalar                    = 1,
	PSPT_ScalarRand                = 2,
	PSPT_Vector                    = 3,
	PSPT_VectorRand                = 4,
	PSPT_Color                     = 5,
	PSPT_Actor                     = 6,
	PSPT_Material                  = 7,
	PSPT_MAX                       = 8,

};

// Enum Engine.TimelineComponent.ETimelineDirection
enum class Engine_ETimelineDirection : uint8_t
{
	ETimelineDirection__Forward    = 0,
	ETimelineDirection__Backward   = 1,
	ETimelineDirection__ETimelineDirection_MAX = 2,

};

// Enum Engine.TimelineComponent.ETimelineLengthMode
enum class Engine_ETimelineLengthMode : uint8_t
{
	TL_TimelineLength              = 0,
	TL_LastKeyFrame                = 1,
	TL_MAX                         = 2,

};

// Enum Engine.AnimSequenceBase.ETypeAdvanceAnim
enum class Engine_ETypeAdvanceAnim : uint8_t
{
	ETAA_Default                   = 0,
	ETAA_Finished                  = 1,
	ETAA_Looped                    = 2,
	ETAA_MAX                       = 3,

};

// Enum Engine.AnimSequence.EAdditiveBasePoseType
enum class Engine_EAdditiveBasePoseType : uint8_t
{
	ABPT_None                      = 0,
	ABPT_RefPose                   = 1,
	ABPT_AnimScaled                = 2,
	ABPT_AnimFrame                 = 3,
	ABPT_MAX                       = 4,

};

// Enum Engine.AnimSequence.EAdditiveAnimationType
enum class Engine_EAdditiveAnimationType : uint8_t
{
	AAT_None                       = 0,
	AAT_LocalSpaceBase             = 1,
	AAT_RotationOffsetMeshSpace    = 2,
	AAT_MAX                        = 3,

};

// Enum Engine.AnimSequence.AnimationKeyFormat
enum class Engine_EAnimationKeyFormat : uint8_t
{
	AKF_ConstantKeyLerp            = 0,
	AKF_VariableKeyLerp            = 1,
	AKF_PerTrackCompression        = 2,
	AKF_MAX                        = 3,

};

// Enum Engine.AnimSequence.AnimationCompressionFormat
enum class Engine_EAnimationCompressionFormat : uint8_t
{
	ACF_None                       = 0,
	ACF_Float96NoW                 = 1,
	ACF_Fixed48NoW                 = 2,
	ACF_IntervalFixed32NoW         = 3,
	ACF_Fixed32NoW                 = 4,
	ACF_Float32NoW                 = 5,
	ACF_Identity                   = 6,
	ACF_MAX                        = 7,

};

// Enum Engine.AnimInstance.EBoneRotationSource
enum class Engine_EBoneRotationSource : uint8_t
{
	BRS_KeepComponentSpaceRotation = 0,
	BRS_KeepLocalSpaceRotation     = 1,
	BRS_CopyFromTarget             = 2,
	BRS_MAX                        = 3,

};

// Enum Engine.AnimInstance.EBoneControlSpace
enum class Engine_EBoneControlSpace : uint8_t
{
	BCS_WorldSpace                 = 0,
	BCS_ComponentSpace             = 1,
	BCS_ParentBoneSpace            = 2,
	BCS_BoneSpace                  = 3,
	BCS_MAX                        = 4,

};

// Enum Engine.BlendSpaceBase.ENotifyTriggerMode
enum class Engine_ENotifyTriggerMode : uint8_t
{
	ENotifyTriggerMode__AllAnimations = 0,
	ENotifyTriggerMode__HighestWeightedAnimation = 1,
	ENotifyTriggerMode__None       = 2,
	ENotifyTriggerMode__ENotifyTriggerMode_MAX = 3,

};

// Enum Engine.BlendSpaceBase.EBlendSpaceAxis
enum class Engine_EBlendSpaceAxis : uint8_t
{
	BSA_None                       = 0,
	BSA_X                          = 1,
	BSA_Y                          = 2,
	BSA_Max                        = 3,

};

// Enum Engine.AnimStateMachineTypes.ETransitionLogicType
enum class Engine_ETransitionLogicType : uint8_t
{
	ETransitionLogicType__TLT_StandardBlend = 0,
	ETransitionLogicType__TLT_Custom = 1,
	ETransitionLogicType__TLT_MAX  = 2,

};

// Enum Engine.AnimStateMachineTypes.ETransitionBlendMode
enum class Engine_ETransitionBlendMode : uint8_t
{
	ETransitionBlendMode__TBM_Linear = 0,
	ETransitionBlendMode__TBM_Cubic = 1,
	ETransitionBlendMode__TBM_MAX  = 2,

};

// Enum Engine.EdGraphPin.EBlueprintPinStyleType
enum class Engine_EBlueprintPinStyleType : uint8_t
{
	BPST_Original                  = 0,
	BPST_VariantA                  = 1,
	BPST_MAX                       = 2,

};

// Enum Engine.EdGraphNode.ENodeAdvancedPins
enum class Engine_ENodeAdvancedPins : uint8_t
{
	ENodeAdvancedPins__NoPins      = 0,
	ENodeAdvancedPins__Shown       = 1,
	ENodeAdvancedPins__Hidden      = 2,
	ENodeAdvancedPins__ENodeAdvancedPins_MAX = 3,

};

// Enum Engine.EdGraphNode.ENodeTitleType
enum class Engine_ENodeTitleType : uint8_t
{
	ENodeTitleType__FullTitle      = 0,
	ENodeTitleType__ListView       = 1,
	ENodeTitleType__EditableTitle  = 2,
	ENodeTitleType__MenuTitle      = 3,
	ENodeTitleType__MAX_TitleTypes = 4,
	ENodeTitleType__ENodeTitleType_MAX = 5,

};

// Enum Engine.EdGraphNode.EEdGraphPinDirection
enum class Engine_EEdGraphPinDirection : uint8_t
{
	EGPD_Input                     = 0,
	EGPD_Output                    = 1,
	EGPD_MAX                       = 2,

};

// Enum Engine.Blueprint.EBlueprintType
enum class Engine_EBlueprintType : uint8_t
{
	BPTYPE_Normal                  = 0,
	BPTYPE_Const                   = 1,
	BPTYPE_MacroLibrary            = 2,
	BPTYPE_Interface               = 3,
	BPTYPE_LevelScript             = 4,
	BPTYPE_FunctionLibrary         = 5,
	BPTYPE_MAX                     = 6,

};

// Enum Engine.Blueprint.EBlueprintStatus
enum class Engine_EBlueprintStatus : uint8_t
{
	BS_Unknown                     = 0,
	BS_Dirty                       = 1,
	BS_Error                       = 2,
	BS_UpToDate                    = 3,
	BS_BeingCreated                = 4,
	BS_UpToDateWithWarnings        = 5,
	BS_MAX                         = 6,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Engine.EngineBaseTypes.TickFunction
// 0x0048
struct FTickFunction
{
	unsigned char                                      UnknownData_Q0T8[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<Engine_ETickingGroup>                  TickGroup;                                                 // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_7N1X[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bTickEvenWhenPaused : 1;                                   // 0x000C(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bCanEverTick : 1;                                          // 0x000C(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bStartWithTickEnabled : 1;                                 // 0x000C(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bAllowTickOnDedicatedServer : 1;                           // 0x000C(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      UnknownData_B0NF[0x3B];                                    // 0x000D(0x003B) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.EngineBaseTypes.ActorTickFunction
// 0x0010 (0x0058 - 0x0048)
struct FActorTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData_PU80[0x8];                                     // 0x0048(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bSavedActorTickState : 1;                                  // 0x0050(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bSavedActorTickStateValue : 1;                             // 0x0050(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      UnknownData_BM26[0x7];                                     // 0x0051(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.Vector_NetQuantizeLow
// 0x0000 (0x000C - 0x000C)
struct FVector_NetQuantizeLow : public FVector
{

};

// ScriptStruct Engine.Vector_NetQuantize
// 0x0000 (0x000C - 0x000C)
struct FVector_NetQuantize : public FVector
{

};

// ScriptStruct Engine.Vector_NetQuantize100
// 0x0000 (0x000C - 0x000C)
struct FVector_NetQuantize100 : public FVector
{

};

// ScriptStruct Engine.Actor.BPNetExecParams
// 0x0040
struct FBPNetExecParams
{
	int                                                IntParam1;                                                 // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                IntParam2;                                                 // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                IntParam3;                                                 // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              FloatParam1;                                               // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              FloatParam2;                                               // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              FloatParam3;                                               // 0x0014(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     ObjParam1;                                                 // 0x0018(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     ObjParam2;                                                 // 0x0020(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     ObjParam3;                                                 // 0x0028(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     StringParam1;                                              // 0x0030(0x0010) (BlueprintVisible, ZeroConstructor)

};

// ScriptStruct Engine.Vector_NetQuantizeNormal
// 0x0000 (0x000C - 0x000C)
struct FVector_NetQuantizeNormal : public FVector
{

};

// ScriptStruct Engine.Actor.BPMapCheckEntry
// 0x0028
struct FBPMapCheckEntry
{
	TEnumAsByte<Engine_EBPMapCheckSeverity>            Severity;                                                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_0MDX[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Message;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class AActor*>                              ActorLinks;                                                // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

};

// ScriptStruct Engine.AnimSequence.TranslationTrack
// 0x0020
struct FTranslationTrack
{
	TArray<struct FVector>                             PosKeys;                                                   // 0x0000(0x0010) (ZeroConstructor)
	TArray<float>                                      Times;                                                     // 0x0010(0x0010) (ZeroConstructor)

};

// ScriptStruct Engine.AnimSequence.RotationTrack
// 0x0020
struct FRotationTrack
{
	TArray<struct FQuat>                               RotKeys;                                                   // 0x0000(0x0010) (ZeroConstructor)
	TArray<float>                                      Times;                                                     // 0x0010(0x0010) (ZeroConstructor)

};

// ScriptStruct Engine.Material.MaterialInput
// 0x0038
struct FMaterialInput
{
	class UMaterialExpression*                         Expression;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                OutputIndex;                                               // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_D1F5[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     InputName;                                                 // 0x0010(0x0010) (ZeroConstructor)
	int                                                Mask;                                                      // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                MaskR;                                                     // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                MaskG;                                                     // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                MaskB;                                                     // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                MaskA;                                                     // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                GCC64_Padding;                                             // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.Material.VectorMaterialInput
// 0x0010 (0x0048 - 0x0038)
struct FVectorMaterialInput : public FMaterialInput
{
	unsigned char                                      UseConstant : 1;                                           // 0x0038(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      UnknownData_TD4E[0x3];                                     // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     Constant;                                                  // 0x003C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.Distribution.DistributionLookupTable
// 0x0028
struct FDistributionLookupTable
{
	unsigned char                                      Op;                                                        // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      EntryCount;                                                // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      EntryStride;                                               // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      SubEntryStride;                                            // 0x0003(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              TimeScale;                                                 // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              TimeBias;                                                  // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ZBPG[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<float>                                      Values;                                                    // 0x0010(0x0010) (ZeroConstructor)
	unsigned char                                      LockFlag;                                                  // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_XQHN[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.Distribution.RawDistribution
// 0x0028
struct FRawDistribution
{
	struct FDistributionLookupTable                    Table;                                                     // 0x0000(0x0028) (ZeroConstructor)

};

// ScriptStruct Engine.DistributionVector.RawDistributionVector
// 0x0010 (0x0038 - 0x0028)
struct FRawDistributionVector : public FRawDistribution
{
	float                                              MinValue;                                                  // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              MaxValue;                                                  // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	class UDistributionVector*                         Distribution;                                              // 0x0030(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, NoClear, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.PhysicalMaterial.TireFrictionScalePair
// 0x0010
struct FTireFrictionScalePair
{
	class UTireType*                                   TireType;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              FrictionScale;                                             // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_TXV1[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.PlatformInterfaceBase.DelegateArray
// 0x0010
struct FDelegateArray
{
	TArray<struct FScriptDelegate>                     Delegates;                                                 // 0x0000(0x0010) (ZeroConstructor, ContainsInstancedReference)

};

// ScriptStruct Engine.PlatformInterfaceBase.PlatformInterfaceData
// 0x0030
struct FPlatformInterfaceData
{
	struct FName                                       DataName;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_EPlatformInterfaceDataType>     Type;                                                      // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_SKNS[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                IntValue;                                                  // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              FloatValue;                                                // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_I4F3[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     StringValue;                                               // 0x0018(0x0010) (ZeroConstructor)
	class UObject*                                     ObjectValue;                                               // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.EngineTypes.LocalizedSpokenText
// 0x0018
struct FLocalizedSpokenText
{
	TEnumAsByte<Engine_ELocalizedLanguage>             LanguageCode;                                              // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_JA3T[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     SpokenText;                                                // 0x0008(0x0010) (Edit, ZeroConstructor)

};

// ScriptStruct Engine.SoundGroups.SoundGroup
// 0x0020
struct FSoundGroup
{
	TEnumAsByte<Engine_ESoundGroup>                    SoundGroup;                                                // 0x0000(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_KD02[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     DisplayName;                                               // 0x0008(0x0010) (ZeroConstructor, Config)
	unsigned char                                      bAlwaysDecompressOnLoad : 1;                               // 0x0018(0x0001) BIT_FIELD (Config, NoDestructor)
	unsigned char                                      UnknownData_R52E[0x3];                                     // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DecompressedDuration;                                      // 0x001C(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.EngineTypes.SubtitleCue
// 0x0030
struct FSubtitleCue
{
	struct FText                                       Text;                                                      // 0x0000(0x0018) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible)
	unsigned char                                      UnknownData_34S4[0x10];                                    // 0x0000(0x0010) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              Time;                                                      // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_HX6K[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.EngineTypes.LocalizedSubtitle
// 0x0028
struct FLocalizedSubtitle
{
	struct FString                                     LanguageExt;                                               // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FSubtitleCue>                        Subtitles;                                                 // 0x0010(0x0010) (ZeroConstructor)
	unsigned char                                      bMature : 1;                                               // 0x0020(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bManualWordWrap : 1;                                       // 0x0020(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bSingleLine : 1;                                           // 0x0020(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      UnknownData_6612[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.SoundClass.SoundClassProperties
// 0x0024
struct FSoundClassProperties
{
	float                                              Volume;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Pitch;                                                     // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              StereoBleed;                                               // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              LFEBleed;                                                  // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              VoiceCenterChannelVolume;                                  // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              RadioFilterVolume;                                         // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              RadioFilterVolumeThreshold;                                // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      bApplyEffects : 1;                                         // 0x001C(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bAlwaysPlay : 1;                                           // 0x001C(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bIsUISound : 1;                                            // 0x001C(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bIsMusic : 1;                                              // 0x001C(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bReverb : 1;                                               // 0x001C(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bCenterChannelOnly : 1;                                    // 0x001C(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bApplyAmbientVolumes : 1;                                  // 0x001C(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      UnknownData_0D65[0x3];                                     // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<Engine_EAudioOutputTarget>             OutputTarget;                                              // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_6Z87[0x3];                                     // 0x0021(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.SoundClass.PassiveSoundMixModifier
// 0x0010
struct FPassiveSoundMixModifier
{
	class USoundMix*                                   SoundMix;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              MinVolumeThreshold;                                        // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              MaxVolumeThreshold;                                        // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.SoundMix.AudioEQEffect
// 0x0028
struct FAudioEQEffect
{
	unsigned char                                      UnknownData_R6FD[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              HFFrequency;                                               // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              HFGain;                                                    // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              MFCutoffFrequency;                                         // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              MFBandwidth;                                               // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              MFGain;                                                    // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              LFFrequency;                                               // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              LFGain;                                                    // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_RBVL[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.SoundMix.SoundClassAdjuster
// 0x0020
struct FSoundClassAdjuster
{
	struct FName                                       SoundClass;                                                // 0x0000(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor)
	class USoundClass*                                 SoundClassObject;                                          // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              VolumeAdjuster;                                            // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              PitchAdjuster;                                             // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      bApplyToChildren : 1;                                      // 0x0018(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      UnknownData_CZV1[0x3];                                     // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              VoiceCenterChannelVolumeAdjuster;                          // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.SoundNodeAmbient.AmbientSoundSlot
// 0x0020
struct FAmbientSoundSlot
{
	class USoundNodeWave*                              Wave;                                                      // 0x0000(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor)
	class USoundWave*                                  SoundWave;                                                 // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              PitchScale;                                                // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              VolumeScale;                                               // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Weight;                                                    // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_DA6M[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.ExposedValueCopyRecord
// 0x0048
struct FExposedValueCopyRecord
{
	class UProperty*                                   SourceProperty;                                            // 0x0000(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor)
	struct FName                                       SourcePropertyName;                                        // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       SourceSubPropertyName;                                     // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                SourceArrayIndex;                                          // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_4KLV[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UProperty*                                   DestProperty;                                              // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                DestArrayIndex;                                            // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Size;                                                      // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_EPostCopyOperation>             PostCopyOperation;                                         // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_4Y1R[0x17];                                    // 0x0031(0x0017) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.ExposedValueHandler
// 0x0028
struct FExposedValueHandler
{
	struct FName                                       BoundFunction;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FExposedValueCopyRecord>             CopyRecords;                                               // 0x0008(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData_VHTQ[0x10];                                    // 0x0018(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.AnimNode_Base
// 0x0030
struct FAnimNode_Base
{
	unsigned char                                      UnknownData_BGTH[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FExposedValueHandler                        EvaluateGraphExposedInputs;                                // 0x0008(0x0028)

};

// ScriptStruct Engine.PoseLinkBase
// 0x0018
struct FPoseLinkBase
{
	int                                                LinkID;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_7BTR[0x14];                                    // 0x0004(0x0014) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.PoseLink
// 0x0000 (0x0018 - 0x0018)
struct FPoseLink : public FPoseLinkBase
{

};

// ScriptStruct Engine.InputScaleBias
// 0x0008
struct FInputScaleBias
{
	float                                              Scale;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Bias;                                                      // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.AnimNode_ApplyAdditive
// 0x0040 (0x0070 - 0x0030)
struct FAnimNode_ApplyAdditive : public FAnimNode_Base
{
	struct FPoseLink                                   Base;                                                      // 0x0030(0x0018) (Edit, BlueprintVisible)
	struct FPoseLink                                   additive;                                                  // 0x0048(0x0018) (Edit, BlueprintVisible)
	float                                              Alpha;                                                     // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FInputScaleBias                             AlphaScaleBias;                                            // 0x0064(0x0008) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData_S8GH[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.AnimNode_BlendListBase
// 0x0048 (0x0078 - 0x0030)
struct FAnimNode_BlendListBase : public FAnimNode_Base
{
	TArray<struct FPoseLink>                           BlendPose;                                                 // 0x0030(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor)
	TArray<float>                                      BlendTime;                                                 // 0x0040(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor)
	TArray<float>                                      BlendWeights;                                              // 0x0050(0x0010) (ZeroConstructor, Protected)
	TArray<float>                                      RemainingBlendTimes;                                       // 0x0060(0x0010) (ZeroConstructor, Protected)
	int                                                LastActiveChildIndex;                                      // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected)
	unsigned char                                      UnknownData_TAEW[0x4];                                     // 0x0074(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.AnimNode_BlendListByBool
// 0x0008 (0x0080 - 0x0078)
struct FAnimNode_BlendListByBool : public FAnimNode_BlendListBase
{
	bool                                               bActiveValue;                                              // 0x0078(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_O79W[0x7];                                     // 0x0079(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.AnimNode_BlendListByEnum
// 0x0018 (0x0090 - 0x0078)
struct FAnimNode_BlendListByEnum : public FAnimNode_BlendListBase
{
	TArray<int>                                        EnumToPoseIndex;                                           // 0x0078(0x0010) (ZeroConstructor)
	unsigned char                                      ActiveEnumValue;                                           // 0x0088(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_3S3Y[0x7];                                     // 0x0089(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.AnimNode_BlendListByInt
// 0x0008 (0x0080 - 0x0078)
struct FAnimNode_BlendListByInt : public FAnimNode_BlendListBase
{
	int                                                ActiveChildIndex;                                          // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_P19D[0x4];                                     // 0x007C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.AnimationAsset.BlendFilter
// 0x0090
struct FBlendFilter
{
	unsigned char                                      UnknownData_UU6J[0x90];                                    // 0x0000(0x0090) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.AnimationAsset.BlendSampleData
// 0x0020
struct FBlendSampleData
{
	int                                                SampleDataIndex;                                           // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              TotalWeight;                                               // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Time;                                                      // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_SAIO[0x14];                                    // 0x000C(0x0014) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.AnimNode_BlendSpacePlayer
// 0x00D0 (0x0100 - 0x0030)
struct FAnimNode_BlendSpacePlayer : public FAnimNode_Base
{
	float                                              X;                                                         // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Y;                                                         // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Z;                                                         // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              PlayRate;                                                  // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bLoop;                                                     // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_XIEQ[0x7];                                     // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBlendSpaceBase*                             BlendSpace;                                                // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                groupIndex;                                                // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_EAnimGroupRole>                 GroupRole;                                                 // 0x0054(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_TATV[0x3];                                     // 0x0055(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              InternalTimeAccumulator;                                   // 0x0058(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected)
	unsigned char                                      UnknownData_USID[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBlendFilter                                BlendFilter;                                               // 0x0060(0x0090) (Protected)
	TArray<struct FBlendSampleData>                    BlendSampleDataCache;                                      // 0x00F0(0x0010) (ZeroConstructor, Protected)

};

// ScriptStruct Engine.AnimNode_BlendSpaceEvaluator
// 0x0008 (0x0108 - 0x0100)
struct FAnimNode_BlendSpaceEvaluator : public FAnimNode_BlendSpacePlayer
{
	float                                              NormalizedTime;                                            // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_02M8[0x4];                                     // 0x0104(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.ComponentSpacePoseLink
// 0x0000 (0x0018 - 0x0018)
struct FComponentSpacePoseLink : public FPoseLinkBase
{

};

// ScriptStruct Engine.AnimNode_SkeletalControlBase
// 0x0028 (0x0058 - 0x0030)
struct FAnimNode_SkeletalControlBase : public FAnimNode_Base
{
	struct FComponentSpacePoseLink                     ComponentPose;                                             // 0x0030(0x0018) (Edit, BlueprintVisible)
	float                                              Alpha;                                                     // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FInputScaleBias                             AlphaScaleBias;                                            // 0x004C(0x0008) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData_4L74[0x4];                                     // 0x0054(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.SkeletalMesh.BoneReference
// 0x000C
struct FBoneReference
{
	struct FName                                       BoneName;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_FGUZ[0x4];                                     // 0x0008(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.AnimNode_BoneDrivenController
// 0x0030 (0x0088 - 0x0058)
struct FAnimNode_BoneDrivenController : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              SourceBone;                                                // 0x0058(0x000C) (Edit, BlueprintVisible)
	struct FBoneReference                              TargetBone;                                                // 0x0064(0x000C) (Edit, BlueprintVisible)
	TEnumAsByte<Engine_EComponentType>                 SourceComponent;                                           // 0x0070(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_EComponentType>                 TargetComponent;                                           // 0x0071(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_GZG6[0x2];                                     // 0x0072(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Multiplier;                                                // 0x0074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bUseRange;                                                 // 0x0078(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_YEXC[0x3];                                     // 0x0079(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RangeMin;                                                  // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              RangeMax;                                                  // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_O4AK[0x4];                                     // 0x0084(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.AnimNode_CopyBone
// 0x0020 (0x0078 - 0x0058)
struct FAnimNode_CopyBone : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              TargetBone;                                                // 0x0058(0x000C) (Edit, BlueprintVisible)
	struct FBoneReference                              SourceBone;                                                // 0x0064(0x000C) (Edit, BlueprintVisible)
	bool                                               bCopyTranslation;                                          // 0x0070(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bCopyRotation;                                             // 0x0071(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bCopyScale;                                                // 0x0072(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_GQUJ[0x5];                                     // 0x0073(0x0005) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.ABRIKChainLink
// 0x0028
struct FABRIKChainLink
{
	unsigned char                                      UnknownData_30YT[0x18];                                    // 0x0000(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<int>                                        ChildZeroLengthTransformIndices;                           // 0x0018(0x0010) (ZeroConstructor)

};

// ScriptStruct Engine.AnimNode_Fabrik
// 0x0078 (0x00D0 - 0x0058)
struct FAnimNode_Fabrik : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData_RTB5[0x8];                                     // 0x0058(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct UObject_FTransform                          EffectorTransform;                                         // 0x0060(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_EBoneControlSpace>              EffectorTransformSpace;                                    // 0x0090(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_Z56A[0x3];                                     // 0x0091(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBoneReference                              EffectorTransformBone;                                     // 0x0094(0x000C) (Edit, BlueprintVisible)
	TEnumAsByte<Engine_EBoneRotationSource>            EffectorRotationSource;                                    // 0x00A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_G43E[0x3];                                     // 0x00A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBoneReference                              TipBone;                                                   // 0x00A4(0x000C) (Edit, BlueprintVisible)
	struct FBoneReference                              RootBone;                                                  // 0x00B0(0x000C) (Edit, BlueprintVisible)
	float                                              Precision;                                                 // 0x00BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                MaxIterations;                                             // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bEnableDebugDraw;                                          // 0x00C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_4F78[0xB];                                     // 0x00C5(0x000B) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.AnimNode_GroundBones
// 0x0080 (0x00D8 - 0x0058)
struct FAnimNode_GroundBones : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      bDebug : 1;                                                // 0x0058(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      UnknownData_CI1P[0x7F];                                    // 0x0059(0x007F) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.AnimNode_HandIKRetargeting
// 0x0048 (0x00A0 - 0x0058)
struct FAnimNode_HandIKRetargeting : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              RightHandFK;                                               // 0x0058(0x000C) (Edit, BlueprintVisible)
	struct FBoneReference                              LeftHandFK;                                                // 0x0064(0x000C) (Edit, BlueprintVisible)
	struct FBoneReference                              RightHandIK;                                               // 0x0070(0x000C) (Edit, BlueprintVisible)
	struct FBoneReference                              LeftHandIK;                                                // 0x007C(0x000C) (Edit, BlueprintVisible)
	TArray<struct FBoneReference>                      IKBonesToMove;                                             // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              HandFKWeight;                                              // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_MQH0[0x4];                                     // 0x009C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.BoneMaskFilter.BranchFilter
// 0x000C
struct FBranchFilter
{
	struct FName                                       BoneName;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                BlendDepth;                                                // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.BoneMaskFilter.InputBlendPose
// 0x0010
struct FInputBlendPose
{
	TArray<struct FBranchFilter>                       BranchFilters;                                             // 0x0000(0x0010) (Edit, ZeroConstructor)

};

// ScriptStruct Engine.AnimNode_LayeredBoneBlend
// 0x0070 (0x00A0 - 0x0030)
struct FAnimNode_LayeredBoneBlend : public FAnimNode_Base
{
	struct FPoseLink                                   BasePose;                                                  // 0x0030(0x0018) (Edit, BlueprintVisible)
	TArray<struct FPoseLink>                           BlendPoses;                                                // 0x0048(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor)
	TArray<struct FInputBlendPose>                     LayerSetup;                                                // 0x0058(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor)
	TArray<float>                                      BlendWeights;                                              // 0x0068(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor)
	bool                                               bMeshSpaceRotationBlend;                                   // 0x0078(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_S87K[0x27];                                    // 0x0079(0x0027) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.AnimNode_LookAt
// 0x0038 (0x0090 - 0x0058)
struct FAnimNode_LookAt : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              BoneToModify;                                              // 0x0058(0x000C) (Edit, BlueprintVisible)
	struct FBoneReference                              LookAtBone;                                                // 0x0064(0x000C) (Edit, BlueprintVisible)
	struct FVector                                     LookAtLocation;                                            // 0x0070(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_EAxisOption>                    LookAtAxis;                                                // 0x007C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ICEE[0x13];                                    // 0x007D(0x0013) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.AnimNode_ModifyBone
// 0x0078 (0x00D0 - 0x0058)
struct FAnimNode_ModifyBone : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              BoneToModify;                                              // 0x0058(0x000C) (Edit, BlueprintVisible)
	struct FVector                                     Translation;                                               // 0x0064(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                                    Rotation;                                                  // 0x0070(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_XONW[0x4];                                     // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct UObject_FTransform                          BoneTransform;                                             // 0x0080(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	bool                                               bUseRotationTransform;                                     // 0x00B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bIgnoreOnDedicatedServer;                                  // 0x00B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bAllowUpdatingOutsideOfGameWorld;                          // 0x00B2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_XLH3[0x1];                                     // 0x00B3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     Scale;                                                     // 0x00B4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_EBoneModificationMode>          TranslationMode;                                           // 0x00C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_EBoneModificationMode>          RotationMode;                                              // 0x00C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_EBoneModificationMode>          ScaleMode;                                                 // 0x00C2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_EBoneControlSpace>              TranslationSpace;                                          // 0x00C3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_EBoneControlSpace>              RotationSpace;                                             // 0x00C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_EBoneControlSpace>              ScaleSpace;                                                // 0x00C5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_IX6T[0xA];                                     // 0x00C6(0x000A) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.AnimNode_ModifyBones
// 0x0008 (0x0060 - 0x0058)
struct FAnimNode_ModifyBones : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData_A6PB[0x8];                                     // 0x0058(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.AnimNode_MultiFabrik
// 0x0010 (0x0068 - 0x0058)
struct FAnimNode_MultiFabrik : public FAnimNode_SkeletalControlBase
{
	float                                              Precision;                                                 // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bEnableDebugDraw;                                          // 0x005C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_TWHV[0x3];                                     // 0x005D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       NodeName;                                                  // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected)

};

// ScriptStruct Engine.AnimNode_MultiFabrik_Dinos
// 0x0020 (0x0078 - 0x0058)
struct FAnimNode_MultiFabrik_Dinos : public FAnimNode_SkeletalControlBase
{
	float                                              Precision;                                                 // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bEnableDebugDraw;                                          // 0x005C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_8JGA[0x3];                                     // 0x005D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RootOffset;                                                // 0x0060(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected)
	struct FRotator                                    RootRotationOffset;                                        // 0x0064(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected)
	bool                                               bInitOffset;                                               // 0x0070(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected)
	unsigned char                                      UnknownData_MLM1[0x7];                                     // 0x0071(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.AnimNode_RefPose
// 0x0008 (0x0038 - 0x0030)
struct FAnimNode_RefPose : public FAnimNode_Base
{
	TEnumAsByte<Engine_ERefPoseType>                   RefPoseType;                                               // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_8V2D[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.AnimNode_MeshSpaceRefPose
// 0x0000 (0x0030 - 0x0030)
struct FAnimNode_MeshSpaceRefPose : public FAnimNode_Base
{

};

// ScriptStruct Engine.AnimNode_Root
// 0x0018 (0x0048 - 0x0030)
struct FAnimNode_Root : public FAnimNode_Base
{
	struct FPoseLink                                   Result;                                                    // 0x0030(0x0018) (Edit, BlueprintVisible)

};

// ScriptStruct Engine.AnimNode_RotateRootBone
// 0x0030 (0x0060 - 0x0030)
struct FAnimNode_RotateRootBone : public FAnimNode_Base
{
	struct FPoseLink                                   BasePose;                                                  // 0x0030(0x0018) (Edit, BlueprintVisible)
	float                                              Pitch;                                                     // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Yaw;                                                       // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                                    MeshToComponent;                                           // 0x0050(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_0ZQP[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.AnimNode_RotationMultiplier
// 0x0020 (0x0078 - 0x0058)
struct FAnimNode_RotationMultiplier : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              TargetBone;                                                // 0x0058(0x000C) (Edit, BlueprintVisible)
	struct FBoneReference                              SourceBone;                                                // 0x0064(0x000C) (Edit, BlueprintVisible)
	float                                              Multiplier;                                                // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_EBoneAxis>                      RotationAxisToRefer;                                       // 0x0074(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_1KK0[0x3];                                     // 0x0075(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.AnimNode_SaveCachedPose
// 0x0030 (0x0060 - 0x0030)
struct FAnimNode_SaveCachedPose : public FAnimNode_Base
{
	int16_t                                            LastInitializedContextCounter;                             // 0x0030(0x0002) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	int16_t                                            LastCacheBonesContextCounter;                              // 0x0032(0x0002) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	int16_t                                            LastUpdatedContextCounter;                                 // 0x0034(0x0002) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	int16_t                                            LastEvaluatedContextCounter;                               // 0x0036(0x0002) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	struct FPoseLink                                   Pose;                                                      // 0x0038(0x0018) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData_A8GZ[0x10];                                    // 0x0050(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.AnimNode_SequenceEvaluator
// 0x0010 (0x0040 - 0x0030)
struct FAnimNode_SequenceEvaluator : public FAnimNode_Base
{
	class UAnimSequenceBase*                           Sequence;                                                  // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              ExplicitTime;                                              // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_UXZW[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.AnimNode_SequencePlayer
// 0x0020 (0x0050 - 0x0030)
struct FAnimNode_SequencePlayer : public FAnimNode_Base
{
	class UAnimSequenceBase*                           Sequence;                                                  // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              InternalTimeAccumulator;                                   // 0x0038(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	bool                                               bLoopAnimation;                                            // 0x003C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_S51W[0x3];                                     // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PlayRate;                                                  // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                groupIndex;                                                // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_EAnimGroupRole>                 GroupRole;                                                 // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_4TGO[0x7];                                     // 0x0049(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.AnimNode_Slot
// 0x0028 (0x0058 - 0x0030)
struct FAnimNode_Slot : public FAnimNode_Base
{
	struct FPoseLink                                   Source;                                                    // 0x0030(0x0018) (Edit, BlueprintVisible)
	struct FName                                       SlotName;                                                  // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_INKM[0x8];                                     // 0x0050(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.AnimNode_SpringBone
// 0x0048 (0x00A0 - 0x0058)
struct FAnimNode_SpringBone : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              SpringBone;                                                // 0x0058(0x000C) (Edit, BlueprintVisible)
	bool                                               bLimitDisplacement;                                        // 0x0064(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_8P4W[0x3];                                     // 0x0065(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxDisplacement;                                           // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              SpringStiffness;                                           // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              SpringDamping;                                             // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              ErrorResetThresh;                                          // 0x0074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bNoZSpring;                                                // 0x0078(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_523L[0x27];                                    // 0x0079(0x0027) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.AnimationActiveTransitionEntry
// 0x0060
struct FAnimationActiveTransitionEntry
{
	unsigned char                                      UnknownData_PAJI[0x60];                                    // 0x0000(0x0060) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.AnimationPotentialTransition
// 0x0010
struct FAnimationPotentialTransition
{
	unsigned char                                      UnknownData_LQUA[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.AnimNode_StateMachine
// 0x0050 (0x0080 - 0x0030)
struct FAnimNode_StateMachine : public FAnimNode_Base
{
	int                                                StateMachineIndexInClass;                                  // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                MaxTransitionsPerFrame;                                    // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_CQPY[0x8];                                     // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                CurrentState;                                              // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected)
	float                                              ElapsedTime;                                               // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected)
	unsigned char                                      UnknownData_V0ID[0x38];                                    // 0x0048(0x0038) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.AnimNode_Trail
// 0x0088 (0x00E0 - 0x0058)
struct FAnimNode_Trail : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              TrailBone;                                                 // 0x0058(0x000C) (Edit, BlueprintVisible)
	int                                                ChainLength;                                               // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<CoreUObject_EAxis>                     ChainBoneAxis;                                             // 0x0068(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bInvertChainBoneAxis;                                      // 0x0069(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bLimitStretch;                                             // 0x006A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_4FIH[0x1];                                     // 0x006B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TrailRelaxation;                                           // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              StretchLimit;                                              // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     FakeVelocity;                                              // 0x0074(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bActorSpaceFakeVel;                                        // 0x0080(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_SCHO[0x5F];                                    // 0x0081(0x005F) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.AnimInstance.A2Pose
// 0x0010
struct FA2Pose
{
	TArray<struct UObject_FTransform>                  Bones;                                                     // 0x0000(0x0010) (ZeroConstructor)

};

// ScriptStruct Engine.AnimNode_TransitionPoseEvaluator
// 0x0020 (0x0050 - 0x0030)
struct FAnimNode_TransitionPoseEvaluator : public FAnimNode_Base
{
	TEnumAsByte<Engine_EEvaluatorDataSource>           DataSource;                                                // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_EEvaluatorMode>                 EvaluatorMode;                                             // 0x0031(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_982V[0x2];                                     // 0x0032(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                FramesToCachePose;                                         // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FA2Pose                                     CachedPose;                                                // 0x0038(0x0010) (Transient)
	int                                                CacheFramesRemaining;                                      // 0x0048(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_DT42[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.AnimNode_TransitionResult
// 0x0008 (0x0038 - 0x0030)
struct FAnimNode_TransitionResult : public FAnimNode_Base
{
	bool                                               bCanEnterTransition;                                       // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_4OGS[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.AnimNode_TwoBoneIK
// 0x0048 (0x00A0 - 0x0058)
struct FAnimNode_TwoBoneIK : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              IKBone;                                                    // 0x0058(0x000C) (Edit, BlueprintVisible)
	struct FVector                                     EffectorLocation;                                          // 0x0064(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     JointTargetLocation;                                       // 0x0070(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   StretchLimits;                                             // 0x007C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       EffectorSpaceBoneName;                                     // 0x0084(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      bTakeRotationFromEffectorSpace : 1;                        // 0x008C(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bMaintainEffectorRelRot : 1;                               // 0x008C(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bAllowStretching : 1;                                      // 0x008C(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      UnknownData_VSLN[0x3];                                     // 0x008D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<Engine_EBoneControlSpace>              EffectorLocationSpace;                                     // 0x0090(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_EBoneControlSpace>              JointTargetLocationSpace;                                  // 0x0091(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_8FL2[0x2];                                     // 0x0092(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       JointTargetSpaceBoneName;                                  // 0x0094(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_7W1H[0x4];                                     // 0x009C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.AnimationNode_TwoWayBlend
// 0x0040 (0x0070 - 0x0030)
struct FAnimationNode_TwoWayBlend : public FAnimNode_Base
{
	struct FPoseLink                                   A;                                                         // 0x0030(0x0018) (Edit, BlueprintVisible)
	struct FPoseLink                                   B;                                                         // 0x0048(0x0018) (Edit, BlueprintVisible)
	float                                              Alpha;                                                     // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FInputScaleBias                             AlphaScaleBias;                                            // 0x0064(0x0008) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData_H12Z[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.AnimNode_UseCachedPose
// 0x0018 (0x0048 - 0x0030)
struct FAnimNode_UseCachedPose : public FAnimNode_Base
{
	struct FPoseLink                                   LinkToCachingNode;                                         // 0x0030(0x0018)

};

// ScriptStruct Engine.AnimNode_WheelHandler
// 0x0018 (0x0070 - 0x0058)
struct FAnimNode_WheelHandler : public FAnimNode_SkeletalControlBase
{
	class UWheeledVehicleMovementComponent*            VehicleSimComponent;                                       // 0x0058(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_TW2N[0x10];                                    // 0x0060(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.AnimNode_ConvertComponentToLocalSpace
// 0x0018 (0x0048 - 0x0030)
struct FAnimNode_ConvertComponentToLocalSpace : public FAnimNode_Base
{
	struct FComponentSpacePoseLink                     ComponentPose;                                             // 0x0030(0x0018) (Edit, BlueprintVisible)

};

// ScriptStruct Engine.EngineTypes.RepMovement
// 0x0034
struct FRepMovement
{
	struct FVector_NetQuantizeLow                      LinearVelocity;                                            // 0x0000(0x000C)
	struct FVector_NetQuantize                         AngularVelocity;                                           // 0x000C(0x000C)
	struct FVector_NetQuantize                         Location;                                                  // 0x0018(0x000C)
	struct FRotator                                    Rotation;                                                  // 0x0024(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      bSimulatedPhysicSleep : 1;                                 // 0x0030(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bRepPhysics : 1;                                           // 0x0030(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bRepCompressedRotation : 1;                                // 0x0030(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bRepCompressedRotationPitch : 1;                           // 0x0030(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bRepLinearVelocityHQ : 1;                                  // 0x0030(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      UnknownData_57HR[0x3];                                     // 0x0031(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.EngineTypes.RepAttachment
// 0x0040
struct FRepAttachment
{
	class AActor*                                      AttachParent;                                              // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector_NetQuantize100                      LocationOffset;                                            // 0x0008(0x000C)
	struct FVector_NetQuantize100                      RelativeScale3D;                                           // 0x0014(0x000C)
	struct FRotator                                    RotationOffset;                                            // 0x0020(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       AttachSocket;                                              // 0x002C(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_N9AF[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USceneComponent*                             AttachComponent;                                           // 0x0038(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.EngineTypes.HitResult
// 0x0088
struct FHitResult
{
	unsigned char                                      bBlockingHit : 1;                                          // 0x0000(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bStartPenetrating : 1;                                     // 0x0000(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      UnknownData_HYSO[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Time;                                                      // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector_NetQuantize                         Location;                                                  // 0x0008(0x000C)
	struct FVector_NetQuantizeNormal                   Normal;                                                    // 0x0014(0x000C)
	struct FVector_NetQuantize                         ImpactPoint;                                               // 0x0020(0x000C)
	struct FVector_NetQuantizeNormal                   ImpactNormal;                                              // 0x002C(0x000C)
	struct FVector_NetQuantize                         TraceStart;                                                // 0x0038(0x000C)
	struct FVector_NetQuantize                         TraceEnd;                                                  // 0x0044(0x000C)
	float                                              PenetrationDepth;                                          // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Item;                                                      // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TWeakObjectPtr<class UPhysicalMaterial>            PhysMaterial;                                              // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TWeakObjectPtr<class AActor>                       Actor;                                                     // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TWeakObjectPtr<class UPrimitiveComponent>          Component;                                                 // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor)
	unsigned char                                      UnknownData_HTW6[0x8];                                     // 0x0070(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       BoneName;                                                  // 0x0078(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                FaceIndex;                                                 // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_RF5T[0x4];                                     // 0x0084(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.WheeledVehicleMovementComponent.WheelSetup
// 0x0020
struct FWheelSetup
{
	class UClass*                                      WheelClass;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       BoneName;                                                  // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     AdditionalOffset;                                          // 0x0010(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_SJ9Z[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.Actor.MultiUseEntry
// 0x0048
struct FMultiUseEntry
{
	class UActorComponent*                             ForComponent;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor)
	struct FString                                     UseString;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                UseIndex;                                                  // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int                                                Priority;                                                  // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      bHideFromUI : 1;                                           // 0x0020(0x0001) BIT_FIELD (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bDisableUse : 1;                                           // 0x0020(0x0001) BIT_FIELD (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bHideActivationKey : 1;                                    // 0x0020(0x0001) BIT_FIELD (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bRepeatMultiUse : 1;                                       // 0x0020(0x0001) BIT_FIELD (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bDisplayOnInventoryUI : 1;                                 // 0x0020(0x0001) BIT_FIELD (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bDisplayOnInventoryUISecondary : 1;                        // 0x0020(0x0001) BIT_FIELD (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bHarvestable : 1;                                          // 0x0020(0x0001) BIT_FIELD (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bIsSecondaryUse : 1;                                       // 0x0020(0x0001) BIT_FIELD (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bPersistWheelOnActivation : 1;                             // 0x0021(0x0001) BIT_FIELD (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bOverrideUseTextColor : 1;                                 // 0x0021(0x0001) BIT_FIELD (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bDisplayOnInventoryUITertiary : 1;                         // 0x0021(0x0001) BIT_FIELD (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bClientSideOnly : 1;                                       // 0x0021(0x0001) BIT_FIELD (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bPersistWheelRequiresDirectActivation : 1;                 // 0x0021(0x0001) BIT_FIELD (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bDrawTooltip : 1;                                          // 0x0021(0x0001) BIT_FIELD (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	unsigned char                                      UnknownData_SFKH[0x2];                                     // 0x0022(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                WheelCategory;                                             // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FColor                                      DisableUseColor;                                           // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FColor                                      UseTextColor;                                              // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              EntryActivationTimer;                                      // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              DefaultEntryActivationTimer;                               // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  ActivationSound;                                           // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int                                                UseInventoryButtonStyleOverrideIndex;                      // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_K4BV[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.AnimStateMachineTypes.BakedStateExitTransition
// 0x0020
struct FBakedStateExitTransition
{
	int                                                CanTakeDelegateIndex;                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                CustomResultNodeIndex;                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                TransitionIndex;                                           // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bDesiredTransitionReturnValue;                             // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_QU4R[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<int>                                        PoseEvaluatorLinks;                                        // 0x0010(0x0010) (ZeroConstructor)

};

// ScriptStruct Engine.AnimStateMachineTypes.BakedAnimationState
// 0x0030
struct FBakedAnimationState
{
	struct FName                                       StateName;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FBakedStateExitTransition>           Transitions;                                               // 0x0008(0x0010) (ZeroConstructor)
	int                                                StateRootNodeIndex;                                        // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                StartNotify;                                               // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                EndNotify;                                                 // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                FullyBlendedNotify;                                        // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bIsAConduit;                                               // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_X2HB[0x3];                                     // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                EntryRuleNodeIndex;                                        // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.EngineTypes.CanvasUVTri
// 0x0060
struct FCanvasUVTri
{
	struct FVector2D                                   V0_Pos;                                                    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   V0_UV;                                                     // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                V0_Color;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   V1_Pos;                                                    // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   V1_UV;                                                     // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                V1_Color;                                                  // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   V2_Pos;                                                    // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   V2_UV;                                                     // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                V2_Color;                                                  // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.CollisionProfile.CustomChannelSetup
// 0x0010
struct FCustomChannelSetup
{
	TEnumAsByte<Engine_ECollisionChannel>              Channel;                                                   // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_B47V[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       Name;                                                      // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ECollisionResponse>             DefaultResponse;                                           // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bTraceType;                                                // 0x000D(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bStaticObject;                                             // 0x000E(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_UI1R[0x1];                                     // 0x000F(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.EngineTypes.Redirector
// 0x0010
struct FRedirector
{
	struct FName                                       OldName;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       NewName;                                                   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.DestructibleFractureSettings.DestructibleChunkParameters
// 0x0004
struct FDestructibleChunkParameters
{
	bool                                               bIsSupportChunk;                                           // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bDoNotFracture;                                            // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bDoNotDamage;                                              // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bDoNotCrumble;                                             // 0x0003(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.DialogueTypes.DialogueContext
// 0x0018
struct FDialogueContext
{
	class UDialogueVoice*                              Speaker;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class UDialogueVoice*>                      Targets;                                                   // 0x0008(0x0010) (Edit, ZeroConstructor)

};

// ScriptStruct Engine.DialogueWave.DialogueContextMapping
// 0x0028
struct FDialogueContextMapping
{
	struct FDialogueContext                            Context;                                                   // 0x0000(0x0018) (Edit)
	class USoundWave*                                  SoundWave;                                                 // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UDialogueSoundWaveProxy*                     Proxy;                                                     // 0x0020(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.ComponentDelegateBinding.BlueprintComponentDelegateBinding
// 0x0018
struct FBlueprintComponentDelegateBinding
{
	struct FName                                       ComponentPropertyName;                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       DelegatePropertyName;                                      // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       FunctionNameToBind;                                        // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.InputDelegateBinding.BlueprintInputDelegateBinding
// 0x0004
struct FBlueprintInputDelegateBinding
{
	unsigned char                                      bConsumeInput : 1;                                         // 0x0000(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bExecuteWhenPaused : 1;                                    // 0x0000(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bOverrideParentBinding : 1;                                // 0x0000(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      UnknownData_W0QZ[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.InputActionDelegateBinding.BlueprintInputActionDelegateBinding
// 0x0014 (0x0018 - 0x0004)
struct FBlueprintInputActionDelegateBinding : public FBlueprintInputDelegateBinding
{
	struct FName                                       InputActionName;                                           // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_EInputEvent>                    InputKeyEvent;                                             // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ZJHO[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       FunctionNameToBind;                                        // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.InputAxisDelegateBinding.BlueprintInputAxisDelegateBinding
// 0x0010 (0x0014 - 0x0004)
struct FBlueprintInputAxisDelegateBinding : public FBlueprintInputDelegateBinding
{
	struct FName                                       InputAxisName;                                             // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       FunctionNameToBind;                                        // 0x000C(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.InputAxisKeyDelegateBinding.BlueprintInputAxisKeyDelegateBinding
// 0x0024 (0x0028 - 0x0004)
struct FBlueprintInputAxisKeyDelegateBinding : public FBlueprintInputDelegateBinding
{
	unsigned char                                      UnknownData_2UA2[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FKey                                        AxisKey;                                                   // 0x0008(0x0018)
	struct FName                                       FunctionNameToBind;                                        // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.InputComponent.InputChord
// 0x0020
struct FInputChord
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)
	unsigned char                                      bShift : 1;                                                // 0x0018(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bCtrl : 1;                                                 // 0x0018(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bAlt : 1;                                                  // 0x0018(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bCmd : 1;                                                  // 0x0018(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      UnknownData_O4BA[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.InputKeyDelegateBinding.BlueprintInputKeyDelegateBinding
// 0x0034 (0x0038 - 0x0004)
struct FBlueprintInputKeyDelegateBinding : public FBlueprintInputDelegateBinding
{
	unsigned char                                      UnknownData_H4W6[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FInputChord                                 InputChord;                                                // 0x0008(0x0020)
	TEnumAsByte<Engine_EInputEvent>                    InputKeyEvent;                                             // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_1XJP[0x3];                                     // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       FunctionNameToBind;                                        // 0x002C(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_77QD[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.InputTouchDelegateBinding.BlueprintInputTouchDelegateBinding
// 0x000C (0x0010 - 0x0004)
struct FBlueprintInputTouchDelegateBinding : public FBlueprintInputDelegateBinding
{
	TEnumAsByte<Engine_EInputEvent>                    InputKeyEvent;                                             // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_N2RK[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       FunctionNameToBind;                                        // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.FontImportOptions.FontImportOptionsData
// 0x00B0
struct FFontImportOptionsData
{
	struct FString                                     FontName;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor)
	float                                              Height;                                                    // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      bEnableAntialiasing : 1;                                   // 0x0014(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bEnableBold : 1;                                           // 0x0014(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bEnableItalic : 1;                                         // 0x0014(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bEnableUnderline : 1;                                      // 0x0014(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bAlphaOnly : 1;                                            // 0x0014(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      UnknownData_BZRI[0x3];                                     // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<Engine_EFontImportCharacterSet>        CharacterSet;                                              // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_SMY7[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Chars;                                                     // 0x0020(0x0010) (Edit, ZeroConstructor)
	struct FString                                     UnicodeRange;                                              // 0x0030(0x0010) (Edit, ZeroConstructor)
	struct FString                                     CharsFilePath;                                             // 0x0040(0x0010) (Edit, ZeroConstructor)
	struct FString                                     CharsFileWildcard;                                         // 0x0050(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      bCreatePrintableOnly : 1;                                  // 0x0060(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bIncludeASCIIRange : 1;                                    // 0x0060(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      UnknownData_N490[0x3];                                     // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                ForegroundColor;                                           // 0x0064(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      bEnableDropShadow : 1;                                     // 0x0074(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      UnknownData_NEE9[0x3];                                     // 0x0075(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                TexturePageWidth;                                          // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                TexturePageMaxHeight;                                      // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                XPadding;                                                  // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                YPadding;                                                  // 0x0084(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                ExtendBoxTop;                                              // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                ExtendBoxBottom;                                           // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                ExtendBoxRight;                                            // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                ExtendBoxLeft;                                             // 0x0094(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      bEnableLegacyMode : 1;                                     // 0x0098(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      UnknownData_W5HQ[0x3];                                     // 0x0099(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Kerning;                                                   // 0x009C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      bUseDistanceFieldAlpha : 1;                                // 0x00A0(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      UnknownData_U44K[0x3];                                     // 0x00A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                DistanceFieldScaleFactor;                                  // 0x00A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              DistanceFieldScanRadiusScale;                              // 0x00A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_7H6T[0x4];                                     // 0x00AC(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.Font.FontCharacter
// 0x0018
struct FFontCharacter
{
	int                                                StartU;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                StartV;                                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                USize;                                                     // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                VSize;                                                     // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      TextureIndex;                                              // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_Q83K[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                VerticalOffset;                                            // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.PlayerInput.KeyBind
// 0x0030
struct FKeyBind
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018) (Config)
	struct FString                                     Command;                                                   // 0x0018(0x0010) (ZeroConstructor, Config)
	unsigned char                                      Control : 1;                                               // 0x0028(0x0001) BIT_FIELD (Config, NoDestructor)
	unsigned char                                      Shift : 1;                                                 // 0x0028(0x0001) BIT_FIELD (Config, NoDestructor)
	unsigned char                                      Alt : 1;                                                   // 0x0028(0x0001) BIT_FIELD (Config, NoDestructor)
	unsigned char                                      Cmd : 1;                                                   // 0x0028(0x0001) BIT_FIELD (Config, NoDestructor)
	unsigned char                                      bIgnoreCtrl : 1;                                           // 0x0028(0x0001) BIT_FIELD (Config, NoDestructor)
	unsigned char                                      bIgnoreShift : 1;                                          // 0x0028(0x0001) BIT_FIELD (Config, NoDestructor)
	unsigned char                                      bIgnoreAlt : 1;                                            // 0x0028(0x0001) BIT_FIELD (Config, NoDestructor)
	unsigned char                                      bIgnoreCmd : 1;                                            // 0x0028(0x0001) BIT_FIELD (Config, NoDestructor)
	unsigned char                                      UnknownData_TGEA[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.PlayerInput.InputAxisProperties
// 0x0010
struct FInputAxisProperties
{
	float                                              DeadZone;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Sensitivity;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Exponent;                                                  // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      bInvert : 1;                                               // 0x000C(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      UnknownData_BDY0[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.PlayerInput.InputAxisKeyMapping
// 0x0028
struct FInputAxisKeyMapping
{
	struct FName                                       AxisName;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FKey                                        Key;                                                       // 0x0008(0x0018) (Edit)
	float                                              Scale;                                                     // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_0EA9[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.InterpCurveEdSetup.CurveEdEntry
// 0x0038
struct FCurveEdEntry
{
	class UObject*                                     CurveObject;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FColor                                      CurveColor;                                                // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_PQSI[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     CurveName;                                                 // 0x0010(0x0010) (ZeroConstructor)
	int                                                bHideCurve;                                                // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                bColorCurve;                                               // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                bFloatingPointColorCurve;                                  // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                bClamp;                                                    // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              ClampLow;                                                  // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              ClampHigh;                                                 // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.InterpCurveEdSetup.CurveEdTab
// 0x0030
struct FCurveEdTab
{
	struct FString                                     TabName;                                                   // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FCurveEdEntry>                       Curves;                                                    // 0x0010(0x0010) (ZeroConstructor)
	float                                              ViewStartInput;                                            // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              ViewEndInput;                                              // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              ViewStartOutput;                                           // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              ViewEndOutput;                                             // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.InterpData.AnimSetBakeAndPruneStatus
// 0x0018
struct FAnimSetBakeAndPruneStatus
{
	struct FString                                     AnimSetName;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, EditConst)
	unsigned char                                      bReferencedButUnused : 1;                                  // 0x0010(0x0001) BIT_FIELD (Edit, BlueprintVisible, EditConst, NoDestructor)
	unsigned char                                      bSkipBakeAndPrune : 1;                                     // 0x0010(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      UnknownData_0ETX[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.InterpTrackBoolProp.BoolTrackKey
// 0x0008
struct FBoolTrackKey
{
	float                                              Time;                                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      Value : 1;                                                 // 0x0004(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      UnknownData_LKQ2[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.InterpTrackDirector.DirectorTrackCut
// 0x0014
struct FDirectorTrackCut
{
	float                                              Time;                                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              TransitionTime;                                            // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       TargetCamGroup;                                            // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                ShotNumber;                                                // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.InterpTrackEvent.EventTrackKey
// 0x000C
struct FEventTrackKey
{
	float                                              Time;                                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       EventName;                                                 // 0x0004(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.InterpTrackAnimControl.AnimControlTrackKey
// 0x0020
struct FAnimControlTrackKey
{
	float                                              StartTime;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_Y1B0[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimSequence*                               AnimSeq;                                                   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              AnimStartOffset;                                           // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              AnimEndOffset;                                             // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              AnimPlayRate;                                              // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      bLooping : 1;                                              // 0x001C(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bReverse : 1;                                              // 0x001C(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      UnknownData_CMKR[0x3];                                     // 0x001D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.InterpTrackMove.InterpLookupPoint
// 0x000C
struct FInterpLookupPoint
{
	struct FName                                       GroupName;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Time;                                                      // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.InterpTrackParticleReplay.ParticleReplayTrackKey
// 0x000C
struct FParticleReplayTrackKey
{
	float                                              Time;                                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Duration;                                                  // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                ClipIDNumber;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.InterpTrackToggle.ToggleTrackKey
// 0x0008
struct FToggleTrackKey
{
	float                                              Time;                                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETrackToggleAction>             ToggleAction;                                              // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_WF5C[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.InterpTrackSound.SoundTrackKey
// 0x0018
struct FSoundTrackKey
{
	float                                              Time;                                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Volume;                                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Pitch;                                                     // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_YNMN[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundBase*                                  Sound;                                                     // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.InterpTrackVisibility.VisibilityTrackKey
// 0x0008
struct FVisibilityTrackKey
{
	float                                              Time;                                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_EVisibilityTrackAction>         Action;                                                    // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_EVisibilityTrackCondition>      ActiveCondition;                                           // 0x0005(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_HBVC[0x2];                                     // 0x0006(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.EngineTypes.PrimitiveMaterialRef
// 0x0018
struct FPrimitiveMaterialRef
{
	class UPrimitiveComponent*                         Primitive;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	class UDecalComponent*                             Decal;                                                     // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                ElementIndex;                                              // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_3J8R[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.LandscapeSplineSegment.LandscapeSplineSegmentConnection
// 0x0018
struct FLandscapeSplineSegmentConnection
{
	class ULandscapeSplineControlPoint*                ControlPoint;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              TangentLen;                                                // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       SocketName;                                                // 0x000C(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_5BWQ[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.LandscapeSplineSegment.LandscapeSplineInterpPoint
// 0x0040
struct FLandscapeSplineInterpPoint
{
	struct FVector                                     Center;                                                    // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Left;                                                      // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Right;                                                     // 0x0018(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     FalloffLeft;                                               // 0x0024(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     FalloffRight;                                              // 0x0030(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              StartEndFalloff;                                           // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.LandscapeSplineControlPoint.LandscapeSplineConnection
// 0x0010
struct FLandscapeSplineConnection
{
	class ULandscapeSplineSegment*                     Segment;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      End : 1;                                                   // 0x0008(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      UnknownData_LPWJ[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.Layer.LayerActorStats
// 0x0010
struct FLayerActorStats
{
	class UClass*                                      Type;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Total;                                                     // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_JONF[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.MaterialExpression.ExpressionInput
// 0x0038
struct FExpressionInput
{
	class UMaterialExpression*                         Expression;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                OutputIndex;                                               // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_8DBB[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     InputName;                                                 // 0x0010(0x0010) (ZeroConstructor)
	int                                                Mask;                                                      // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                MaskR;                                                     // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                MaskG;                                                     // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                MaskB;                                                     // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                MaskA;                                                     // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                GCC64_Padding;                                             // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.MaterialExpression.MaterialAttributesInput
// 0x0000 (0x0038 - 0x0038)
struct FMaterialAttributesInput : public FExpressionInput
{

};

// ScriptStruct Engine.MaterialExpressionCustom.CustomInput
// 0x0048
struct FCustomInput
{
	struct FString                                     InputName;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FExpressionInput                            Input;                                                     // 0x0010(0x0038) (ZeroConstructor)

};

// ScriptStruct Engine.MaterialExpressionLandscapeLayerBlend.LayerBlendInput
// 0x0098
struct FLayerBlendInput
{
	struct FName                                       LayerName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ELandscapeLayerBlendType>       BlendType;                                                 // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_MH0G[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FExpressionInput                            LayerInput;                                                // 0x0010(0x0038) (ZeroConstructor)
	struct FExpressionInput                            HeightInput;                                               // 0x0048(0x0038) (ZeroConstructor)
	float                                              PreviewWeight;                                             // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     ConstLayerInput;                                           // 0x0084(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              ConstHeightInput;                                          // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_BPU3[0x4];                                     // 0x0094(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.MaterialExpression.ExpressionOutput
// 0x0028
struct FExpressionOutput
{
	struct FString                                     OutputName;                                                // 0x0000(0x0010) (ZeroConstructor)
	int                                                Mask;                                                      // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                MaskR;                                                     // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                MaskG;                                                     // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                MaskB;                                                     // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                MaskA;                                                     // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_4V21[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.MaterialExpressionMaterialFunctionCall.FunctionExpressionOutput
// 0x0040
struct FFunctionExpressionOutput
{
	class UMaterialExpressionFunctionOutput*           ExpressionOutput;                                          // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	struct FGuid                                       ExpressionOutputId;                                        // 0x0008(0x0010) (ZeroConstructor)
	struct FExpressionOutput                           Output;                                                    // 0x0018(0x0028) (ZeroConstructor)

};

// ScriptStruct Engine.Material.ScalarMaterialInput
// 0x0008 (0x0040 - 0x0038)
struct FScalarMaterialInput : public FMaterialInput
{
	unsigned char                                      UseConstant : 1;                                           // 0x0038(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      UnknownData_FFMN[0x3];                                     // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Constant;                                                  // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.Material.Vector2MaterialInput
// 0x0010 (0x0048 - 0x0038)
struct FVector2MaterialInput : public FMaterialInput
{
	unsigned char                                      UseConstant : 1;                                           // 0x0038(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      UnknownData_D1OC[0x3];                                     // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ConstantX;                                                 // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              ConstantY;                                                 // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_VS7J[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.MaterialInstanceBasePropertyOverrides
// 0x0010
struct FMaterialInstanceBasePropertyOverrides
{
	bool                                               bOverride_OpacityMaskClipValue;                            // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bOverride_BlendMode;                                       // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bOverride_ShadingModel;                                    // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bOverride_TwoSided;                                        // 0x0003(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              OpacityMaskClipValue;                                      // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_EBlendMode>                     BlendMode;                                                 // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_EMaterialShadingModel>          ShadingModel;                                              // 0x0009(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_51DF[0x2];                                     // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      TwoSided : 1;                                              // 0x000C(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      UnknownData_JXC4[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.Material.MaterialInstanceUsedWithOverride
// 0x0004
struct FMaterialInstanceUsedWithOverride
{
	unsigned char                                      bUsedWithSkeletalMesh : 1;                                 // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bUsedWithLandscape : 1;                                    // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bUsedWithParticleSprites : 1;                              // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bUsedWithBeamTrails : 1;                                   // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bUsedWithMeshParticles : 1;                                // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bUsedWithInstancedStaticMeshes : 1;                        // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bUsedWithGroundClutter : 1;                                // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bUsedWithStaticMesh : 1;                                   // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      UnknownData_8DR9[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.MaterialParameterCollection.CollectionParameterBase
// 0x0018
struct FCollectionParameterBase
{
	struct FName                                       ParameterName;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGuid                                       ID;                                                        // 0x0008(0x0010) (ZeroConstructor)

};

// ScriptStruct Engine.MaterialParameterCollection.CollectionVectorParameter
// 0x0010 (0x0028 - 0x0018)
struct FCollectionVectorParameter : public FCollectionParameterBase
{
	struct FLinearColor                                DefaultValue;                                              // 0x0018(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.MountedDLCManager.MountedDLCInfo
// 0x0058
struct FMountedDLCInfo
{
	struct FString                                     Name;                                                      // 0x0000(0x0010) (ZeroConstructor, Config, GlobalConfig)
	struct FString                                     Path;                                                      // 0x0010(0x0010) (ZeroConstructor, Config, GlobalConfig)
	struct FString                                     ID;                                                        // 0x0020(0x0010) (ZeroConstructor, Config, GlobalConfig)
	struct FString                                     ProductId;                                                 // 0x0030(0x0010) (ZeroConstructor, Config, GlobalConfig)
	unsigned char                                      bAutoMount : 1;                                            // 0x0040(0x0001) BIT_FIELD (Config, GlobalConfig, NoDestructor)
	unsigned char                                      UnknownData_0W8G[0x7];                                     // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     StoreProductIdOverride;                                    // 0x0048(0x0010) (ZeroConstructor, Config, GlobalConfig)

};

// ScriptStruct Engine.MountedDLCManager.MountedDLCMapInfo
// 0x0020
struct FMountedDLCMapInfo
{
	struct FString                                     ID;                                                        // 0x0000(0x0010) (ZeroConstructor, Config, GlobalConfig)
	struct FString                                     Map;                                                       // 0x0010(0x0010) (ZeroConstructor, Config, GlobalConfig)

};

// ScriptStruct Engine.NavCollision.NavCollisionCylinder
// 0x0014
struct FNavCollisionCylinder
{
	struct FVector                                     Offset;                                                    // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Radius;                                                    // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Height;                                                    // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.ParticleModuleTypeDataGpu.GPUSpriteLocalVectorFieldInfo
// 0x0070
struct FGPUSpriteLocalVectorFieldInfo
{
	class UVectorField*                                Field;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_T6GN[0x8];                                     // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct UObject_FTransform                          Transform;                                                 // 0x0010(0x0030) (IsPlainOldData, NoDestructor)
	struct FRotator                                    MinInitialRotation;                                        // 0x0040(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                                    MaxInitialRotation;                                        // 0x004C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                                    RotationRate;                                              // 0x0058(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Intensity;                                                 // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Tightness;                                                 // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      bIgnoreComponentTransform : 1;                             // 0x006C(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bTileX : 1;                                                // 0x006C(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bTileY : 1;                                                // 0x006C(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bTileZ : 1;                                                // 0x006C(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      UnknownData_85IV[0x3];                                     // 0x006D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.DistributionFloat.FloatDistribution
// 0x0028
struct FFloatDistribution
{
	struct FDistributionLookupTable                    Table;                                                     // 0x0000(0x0028) (ZeroConstructor)

};

// ScriptStruct Engine.DistributionFloat.RawDistributionFloat
// 0x0010 (0x0038 - 0x0028)
struct FRawDistributionFloat : public FRawDistribution
{
	float                                              MinValue;                                                  // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              MaxValue;                                                  // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	class UDistributionFloat*                          Distribution;                                              // 0x0030(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, NoClear, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.ParticleModuleTypeDataGpu.GPUSpriteEmitterInfo
// 0x0280
struct FGPUSpriteEmitterInfo
{
	class UParticleModuleRequired*                     RequiredModule;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	class UParticleModuleSpawn*                        SpawnModule;                                               // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	class UParticleModuleSpawnPerUnit*                 SpawnPerUnitModule;                                        // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class UParticleModule*>                     SpawnModules;                                              // 0x0018(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData_3VB8[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGPUSpriteLocalVectorFieldInfo              LocalVectorField;                                          // 0x0030(0x0070)
	struct FFloatDistribution                          VectorFieldScale;                                          // 0x00A0(0x0028) (ZeroConstructor)
	struct FFloatDistribution                          DragCoefficient;                                           // 0x00C8(0x0028) (ZeroConstructor)
	struct FFloatDistribution                          PointAttractorStrength;                                    // 0x00F0(0x0028) (ZeroConstructor)
	struct FFloatDistribution                          Resilience;                                                // 0x0118(0x0028) (ZeroConstructor)
	struct FVector                                     ConstantAcceleration;                                      // 0x0140(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     PointAttractorPosition;                                    // 0x014C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              PointAttractorRadiusSq;                                    // 0x0158(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     OrbitOffsetBase;                                           // 0x015C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     OrbitOffsetRange;                                          // 0x0168(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   InvMaxSize;                                                // 0x0174(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              InvRotationRateScale;                                      // 0x017C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              MaxLifetime;                                               // 0x0180(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                MaxParticleCount;                                          // 0x0184(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_EParticleScreenAlignment>       ScreenAlignment;                                           // 0x0188(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_EParticleAxisLock>              LockAxisFlag;                                              // 0x0189(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_F7GI[0x2];                                     // 0x018A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bEnableCollision : 1;                                      // 0x018C(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      UnknownData_UQWG[0x3];                                     // 0x018D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRawDistributionVector                      DynamicColor;                                              // 0x0190(0x0038) (ContainsInstancedReference)
	struct FRawDistributionFloat                       DynamicAlpha;                                              // 0x01C8(0x0038) (ContainsInstancedReference)
	struct FRawDistributionVector                      DynamicColorScale;                                         // 0x0200(0x0038) (ContainsInstancedReference)
	struct FRawDistributionFloat                       DynamicAlphaScale;                                         // 0x0238(0x0038) (ContainsInstancedReference)
	unsigned char                                      UnknownData_UG1G[0x10];                                    // 0x0270(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.AnimationAsset.AnimTickRecord
// 0x0040
struct FAnimTickRecord
{
	class UAnimationAsset*                             SourceAsset;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_F0IV[0x38];                                    // 0x0008(0x0038) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.AnimationAsset.AnimGroupInstance
// 0x0018
struct FAnimGroupInstance
{
	unsigned char                                      UnknownData_T44M[0x18];                                    // 0x0000(0x0018) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.EngineBaseTypes.ActorComponentTickFunction
// 0x0010 (0x0058 - 0x0048)
struct FActorComponentTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData_71UX[0x8];                                     // 0x0048(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bSavedComponentTickState : 1;                              // 0x0050(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bSavedComponentTickStateValue : 1;                         // 0x0050(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      UnknownData_SHVJ[0x7];                                     // 0x0051(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.EngineTypes.CollisionResponseContainer
// 0x0020
struct FCollisionResponseContainer
{
	TEnumAsByte<Engine_ECollisionResponse>             WorldStatic;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ECollisionResponse>             WorldDynamic;                                              // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ECollisionResponse>             Visibility;                                                // 0x0002(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ECollisionResponse>             PhysicsBody;                                               // 0x0003(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ECollisionResponse>             Destructible;                                              // 0x0004(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ECollisionResponse>             GameTraceChannel1;                                         // 0x0005(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ECollisionResponse>             GameTraceChannel2;                                         // 0x0006(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ECollisionResponse>             GameTraceChannel3;                                         // 0x0007(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ECollisionResponse>             GameTraceChannel4;                                         // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ECollisionResponse>             GameTraceChannel5;                                         // 0x0009(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ECollisionResponse>             GameTraceChannel6;                                         // 0x000A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ECollisionResponse>             GameTraceChannel7;                                         // 0x000B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ECollisionResponse>             GameTraceChannel8;                                         // 0x000C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ECollisionResponse>             GameTraceChannel9;                                         // 0x000D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ECollisionResponse>             GameTraceChannel10;                                        // 0x000E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ECollisionResponse>             GameTraceChannel11;                                        // 0x000F(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ECollisionResponse>             GameTraceChannel12;                                        // 0x0010(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ECollisionResponse>             GameTraceChannel13;                                        // 0x0011(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ECollisionResponse>             GameTraceChannel14;                                        // 0x0012(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ECollisionResponse>             GameTraceChannel15;                                        // 0x0013(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ECollisionResponse>             GameTraceChannel16;                                        // 0x0014(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ECollisionResponse>             GameTraceChannel17;                                        // 0x0015(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ECollisionResponse>             GameTraceChannel18;                                        // 0x0016(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ECollisionResponse>             GameTraceChannel19;                                        // 0x0017(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ECollisionResponse>             GameTraceChannel20;                                        // 0x0018(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ECollisionResponse>             GameTraceChannel21;                                        // 0x0019(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ECollisionResponse>             GameTraceChannel22;                                        // 0x001A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ECollisionResponse>             GameTraceChannel23;                                        // 0x001B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ECollisionResponse>             GameTraceChannel24;                                        // 0x001C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ECollisionResponse>             GameTraceChannel25;                                        // 0x001D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ECollisionResponse>             GameTraceChannel26;                                        // 0x001E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ECollisionResponse>             GameTraceChannel27;                                        // 0x001F(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.EngineTypes.ResponseChannel
// 0x000C
struct FResponseChannel
{
	struct FName                                       Channel;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ECollisionResponse>             Response;                                                  // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ZFZA[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.EngineTypes.WalkableSlopeOverride
// 0x0008
struct FWalkableSlopeOverride
{
	TEnumAsByte<Engine_EWalkableSlopeBehavior>         WalkableSlopeBehavior;                                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_UCD8[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              WalkableSlopeAngle;                                        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.EngineBaseTypes.PrimitiveComponentPostPhysicsTickFunction
// 0x0008 (0x0050 - 0x0048)
struct FPrimitiveComponentPostPhysicsTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData_FT6Q[0x8];                                     // 0x0048(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.PrimitiveComponent.CollisionResponseSet
// 0x0020
struct FCollisionResponseSet
{
	TArray<TEnumAsByte<Engine_ECollisionChannel>>      Channels;                                                  // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
	TArray<TEnumAsByte<Engine_ECollisionResponse>>     Responses;                                                 // 0x0010(0x0010) (BlueprintVisible, ZeroConstructor)

};

// ScriptStruct Engine.SceneComponent.OverlapInfo
// 0x0098
struct FOverlapInfo
{
	unsigned char                                      UnknownData_XOJ6[0x98];                                    // 0x0000(0x0098) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.SkinnedMeshComponent.SkelMeshComponentLODInfo
// 0x0010
struct FSkelMeshComponentLODInfo
{
	TArray<bool>                                       HiddenMaterials;                                           // 0x0000(0x0010) (ZeroConstructor)

};

// ScriptStruct Engine.EngineTypes.AnimUpdateRateParameters
// 0x000C
struct FAnimUpdateRateParameters
{
	int                                                UpdateRate;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                EvaluationRate;                                            // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bInterpolateSkippedFrames;                                 // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bSkipUpdate;                                               // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bSkipEvaluation;                                           // 0x000A(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_4C2A[0x1];                                     // 0x000B(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.SkinnedMeshComponent.ActiveVertexAnim
// 0x0010
struct FActiveVertexAnim
{
	class UVertexAnimBase*                             VertAnim;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Weight;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Time;                                                      // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.CurveBase.KeyHandleMap
// 0x0050
struct FKeyHandleMap
{
	unsigned char                                      UnknownData_NYLU[0x50];                                    // 0x0000(0x0050) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.Scene.ClutterData
// 0x0030
struct FClutterData
{
	float                                              Density;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              MinSize;                                                   // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              MaxSize;                                                   // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                GenerationSeed;                                            // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bAllowShadows;                                             // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_1WM6[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UStaticMesh*                                 StaticMesh;                                                // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UTexture2D*                                  VisibilityTexture;                                         // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                TextureChannel;                                            // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_YOQL[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.Scene.ClutterPropertyOverride
// 0x0050
struct FClutterPropertyOverride
{
	int                                                LayerID;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                ArrayIndex;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               OverrideDensity;                                           // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_9X6Y[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Density;                                                   // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               OverrideMinSize;                                           // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_99K7[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MinSize;                                                   // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               OverrideMaxSize;                                           // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_BMWF[0x3];                                     // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxSize;                                                   // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               OverrideGenerationSeed;                                    // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_XLI4[0x3];                                     // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                GenerationSeed;                                            // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               OverrideAllowShadows;                                      // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bAllowShadows;                                             // 0x0029(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               OverrideStaticMesh;                                        // 0x002A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_4XO6[0x5];                                     // 0x002B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UStaticMesh*                                 StaticMesh;                                                // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               OverrideVisibilityTexture;                                 // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_9GVH[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2D*                                  VisibilityTexture;                                         // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               OverrideTextureChannel;                                    // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_CTFY[0x3];                                     // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                TextureChannel;                                            // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.UniqueNetIdRepl
// 0x0010
struct FUniqueNetIdRepl
{
	unsigned char                                      UnknownData_S6JV[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.LatentActionInfo
// 0x0018
struct FLatentActionInfo
{
	int                                                Linkage;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                UUID;                                                      // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       ExecutionFunction;                                         // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     CallbackTarget;                                            // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.EngineTypes.Rotator_NetQuantize
// 0x0000 (0x000C - 0x000C)
struct FRotator_NetQuantize : public FRotator
{

};

// ScriptStruct Engine.Actor.NetExecParams
// 0x0018
struct FNetExecParams
{
	int                                                IntParam1;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                IntParam2;                                                 // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              FloatParam1;                                               // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_M404[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     ObjParam1;                                                 // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.Brush.GeomSelection
// 0x000C
struct FGeomSelection
{
	int                                                Type;                                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                index;                                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                SelectionIndex;                                            // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.EngineTypes.DamageEvent
// 0x0020
struct FDamageEvent
{
	unsigned char                                      UnknownData_UO59[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Impulse;                                                   // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              OriginalDamage;                                            // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                InstanceBodyIndex;                                         // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_NE55[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      DamageTypeClass;                                           // 0x0018(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.EngineTypes.Rotator_NetQuantizeSmartPitch
// 0x0000 (0x000C - 0x000C)
struct FRotator_NetQuantizeSmartPitch : public FRotator
{

};

// ScriptStruct Engine.Vector_NetQuantize10
// 0x0000 (0x000C - 0x000C)
struct FVector_NetQuantize10 : public FVector
{

};

// ScriptStruct Engine.Character.RepRootMotionMontage
// 0x0040
struct FRepRootMotionMontage
{
	class UAnimMontage*                                AnimMontage;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Position;                                                  // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector_NetQuantize10                       Location;                                                  // 0x000C(0x000C)
	struct FRotator                                    Rotation;                                                  // 0x0018(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_8K61[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPrimitiveComponent*                         MovementBase;                                              // 0x0028(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FName                                       MovementBaseBoneName;                                      // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bRelativePosition;                                         // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bRelativeRotation;                                         // 0x0039(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_UP1C[0x6];                                     // 0x003A(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.Character.SimulatedRootMotionReplicatedMove
// 0x0048
struct FSimulatedRootMotionReplicatedMove
{
	float                                              Time;                                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_Q5ID[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRepRootMotionMontage                       RootMotion;                                                // 0x0008(0x0040) (ContainsInstancedReference)

};

// ScriptStruct Engine.WorldSettings.GameModePrefix
// 0x0020
struct FGameModePrefix
{
	struct FString                                     Prefix;                                                    // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     GameMode;                                                  // 0x0010(0x0010) (ZeroConstructor)

};

// ScriptStruct Engine.ReverbVolume.InteriorSettings
// 0x0024
struct FInteriorSettings
{
	unsigned char                                      bIsWorldSettings : 1;                                      // 0x0000(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      UnknownData_FVS3[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ExteriorVolume;                                            // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              ExteriorTime;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              ExteriorLPF;                                               // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              ExteriorLPFTime;                                           // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              InteriorVolume;                                            // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              InteriorTime;                                              // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              InteriorLPF;                                               // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              InteriorLPFTime;                                           // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.WorldSettings.ProxyMeshSettings
// 0x000C
struct FProxyMeshSettings
{
	float                                              MaxDrawDistance;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              TransitionDistance;                                        // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              TrianglePercent;                                           // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.Material.ColorMaterialInput
// 0x0008 (0x0040 - 0x0038)
struct FColorMaterialInput : public FMaterialInput
{
	unsigned char                                      UseConstant : 1;                                           // 0x0038(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      UnknownData_4EZR[0x3];                                     // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FColor                                      Constant;                                                  // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.MaterialParameterCollection.CollectionScalarParameter
// 0x0004 (0x001C - 0x0018)
struct FCollectionScalarParameter : public FCollectionParameterBase
{
	float                                              DefaultValue;                                              // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.CollisionResponse
// 0x0030
struct FCollisionResponse
{
	struct FCollisionResponseContainer                 ResponseToChannels;                                        // 0x0000(0x0020) (Transient)
	TArray<struct FResponseChannel>                    ResponseArray;                                             // 0x0020(0x0010) (ZeroConstructor)

};

// ScriptStruct Engine.BodyInstance
// 0x0160
struct FBodyInstance
{
	unsigned char                                      UnknownData_BIRT[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     Scale3D;                                                   // 0x0004(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_JL5V[0x8];                                     // 0x0010(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bEnableCollision : 1;                                      // 0x0018(0x0001) BIT_FIELD (Deprecated, NoDestructor)
	unsigned char                                      UnknownData_VVUH[0x3];                                     // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FCollisionResponseContainer                 ResponseToChannels;                                        // 0x001C(0x0020) (Deprecated)
	unsigned char                                      UnknownData_098C[0x1C];                                    // 0x003C(0x001C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       CollisionProfileName;                                      // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ECollisionEnabled>              CollisionEnabled;                                          // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ECollisionChannel>              ObjectType;                                                // 0x0061(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_2FV6[0x6];                                     // 0x0062(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FCollisionResponse                          CollisionResponses;                                        // 0x0068(0x0030) (Edit)
	unsigned char                                      bUseCCD : 1;                                               // 0x0098(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay)
	unsigned char                                      bNotifyRigidBodyCollision : 1;                             // 0x0098(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bSimulatePhysics : 1;                                      // 0x0098(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bAutoWeld : 1;                                             // 0x0098(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      UnknownData_6WTW : 1;                                      // 0x0098(0x0001) BIT_FIELD (PADDING)
	unsigned char                                      bStartAwake : 1;                                           // 0x0098(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bEnableGravity : 1;                                        // 0x0098(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay)
	unsigned char                                      bUseSpecificBodyArmorType : 1;                             // 0x0098(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bIsShieldHolder : 1;                                       // 0x0099(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bUseAsyncScene : 1;                                        // 0x0099(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, AdvancedDisplay)
	unsigned char                                      bUpdateMassWhenScaleChanges : 1;                           // 0x0099(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      UnknownData_7RIS[0x2];                                     // 0x009A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<Engine_ELockedAxis>                    LockedAxisMode;                                            // 0x009C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_I5M2[0x3];                                     // 0x009D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     CustomLockedAxis;                                          // 0x00A0(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_QCHC[0x14];                                    // 0x00AC(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bOverrideWalkableSlopeOnInstance : 1;                      // 0x00C0(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, Protected)
	unsigned char                                      UnknownData_VHST[0x3];                                     // 0x00C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FWalkableSlopeOverride                      WalkableSlopeOverride;                                     // 0x00C4(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, AdvancedDisplay, Protected)
	unsigned char                                      bOverrideMaxDepenetrationVelocity : 1;                     // 0x00CC(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, Protected)
	unsigned char                                      UnknownData_YYON[0x3];                                     // 0x00CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxDepenetrationVelocity;                                  // 0x00D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected)
	unsigned char                                      UnknownData_3E3Z[0x4];                                     // 0x00D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPhysicalMaterial*                           PhysMaterialOverride;                                      // 0x00D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected)
	struct FVector                                     COMNudge;                                                  // 0x00E0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	TEnumAsByte<Engine_ESleepFamily>                   SleepFamily;                                               // 0x00EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	TEnumAsByte<Engine_EPrimalEquipmentType>           BodyArmorType;                                             // 0x00ED(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_21ER[0x2];                                     // 0x00EE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MassScale;                                                 // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	float                                              AngularDamping;                                            // 0x00F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	float                                              LinearDamping;                                             // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	float                                              MaxAngularVelocity;                                        // 0x00FC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	float                                              PhysicsBlendWeight;                                        // 0x0100(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                PositionSolverIterationCount;                              // 0x0104(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	int                                                VelocitySolverIterationCount;                              // 0x0108(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	unsigned char                                      UnknownData_3NAO[0x54];                                    // 0x010C(0x0054) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.Scene.OverrideClutterLayer
// 0x0018
struct FOverrideClutterLayer
{
	int                                                LayerID;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_OO2Q[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FClutterData>                        ClutterLayers;                                             // 0x0008(0x0010) (Edit, ZeroConstructor)

};

// ScriptStruct Engine.Scene.PostProcessSettingsMaterialAdjuster
// 0x0050
struct FPostProcessSettingsMaterialAdjuster
{
	class UMaterialInterface*                          PostProcessParentMaterial;                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMaterialParameterCollection*                MaterialParamCollecton;                                    // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FName>                               ScalarParameterNames;                                      // 0x0010(0x0010) (Edit, ZeroConstructor)
	TArray<float>                                      ScalarParameterValues;                                     // 0x0020(0x0010) (Edit, ZeroConstructor)
	TArray<struct FName>                               VectorParameterNames;                                      // 0x0030(0x0010) (Edit, ZeroConstructor)
	TArray<struct FVector>                             VectorParameterValues;                                     // 0x0040(0x0010) (Edit, ZeroConstructor)

};

// ScriptStruct Engine.Scene.PostProcessSettings
// 0x0358
struct FPostProcessSettings
{
	unsigned char                                      bOverride_FilmWhitePoint : 1;                              // 0x0000(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_FilmSaturation : 1;                              // 0x0000(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_FilmChannelMixerRed : 1;                         // 0x0000(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_FilmChannelMixerGreen : 1;                       // 0x0000(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_FilmChannelMixerBlue : 1;                        // 0x0000(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_FilmContrast : 1;                                // 0x0000(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_FilmDynamicRange : 1;                            // 0x0000(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_FilmHealAmount : 1;                              // 0x0000(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_FilmToeAmount : 1;                               // 0x0001(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_MinExposureFilmToeAmount : 1;                    // 0x0001(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_MinFilmToeAmount : 1;                            // 0x0001(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_MaxExposureFilmToeAmount : 1;                    // 0x0001(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_MaxFilmToeAmount : 1;                            // 0x0001(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_FilmShadowTint : 1;                              // 0x0001(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_FilmShadowTintBlend : 1;                         // 0x0001(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_FilmShadowTintAmount : 1;                        // 0x0001(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_SceneColorTint : 1;                              // 0x0002(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_SceneFringeIntensity : 1;                        // 0x0002(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_SceneFringeSaturation : 1;                       // 0x0002(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_AmbientCubemapTint : 1;                          // 0x0002(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_AmbientCubemapIntensity : 1;                     // 0x0002(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_BloomIntensity : 1;                              // 0x0002(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_BloomThreshold : 1;                              // 0x0002(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_Bloom1Tint : 1;                                  // 0x0002(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_Bloom1Size : 1;                                  // 0x0003(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_Bloom2Size : 1;                                  // 0x0003(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_Bloom2Tint : 1;                                  // 0x0003(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_Bloom3Tint : 1;                                  // 0x0003(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_Bloom3Size : 1;                                  // 0x0003(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_Bloom4Tint : 1;                                  // 0x0003(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_Bloom4Size : 1;                                  // 0x0003(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_Bloom5Tint : 1;                                  // 0x0003(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_Bloom5Size : 1;                                  // 0x0004(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_BloomDirtMaskIntensity : 1;                      // 0x0004(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_BloomDirtMaskTint : 1;                           // 0x0004(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_BloomDirtMask : 1;                               // 0x0004(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_AutoExposureLowPercent : 1;                      // 0x0004(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_AutoExposureHighPercent : 1;                     // 0x0004(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_AutoExposureMinBrightness : 1;                   // 0x0004(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_AutoExposureMaxBrightness : 1;                   // 0x0004(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_AutoExposureSpeedUp : 1;                         // 0x0005(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_AutoExposureSpeedDown : 1;                       // 0x0005(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_AutoExposureBias : 1;                            // 0x0005(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_HistogramLogMin : 1;                             // 0x0005(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_HistogramLogMax : 1;                             // 0x0005(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_LensFlareIntensity : 1;                          // 0x0005(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_LensFlareTint : 1;                               // 0x0005(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_LensFlareTints : 1;                              // 0x0005(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_LensFlareBokehSize : 1;                          // 0x0006(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_LensFlareBokehShape : 1;                         // 0x0006(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_LensFlareThreshold : 1;                          // 0x0006(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_VignetteIntensity : 1;                           // 0x0006(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_VignetteColor : 1;                               // 0x0006(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_GrainIntensity : 1;                              // 0x0006(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_GrainJitter : 1;                                 // 0x0006(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_AmbientOcclusionIntensity : 1;                   // 0x0006(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_AmbientOcclusionStaticFraction : 1;              // 0x0007(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_AmbientOcclusionRadius : 1;                      // 0x0007(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_AmbientOcclusionFadeDistance : 1;                // 0x0007(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_AmbientOcclusionFadeRadius : 1;                  // 0x0007(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_AmbientOcclusionDistance : 1;                    // 0x0007(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_AmbientOcclusionRadiusInWS : 1;                  // 0x0007(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_AmbientOcclusionPower : 1;                       // 0x0007(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_AmbientOcclusionBias : 1;                        // 0x0007(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_AmbientOcclusionQuality : 1;                     // 0x0008(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_AmbientOcclusionMipBlend : 1;                    // 0x0008(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_AmbientOcclusionMipScale : 1;                    // 0x0008(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_AmbientOcclusionMipThreshold : 1;                // 0x0008(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_LPVIntensity : 1;                                // 0x0008(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_LPVWarpIntensity : 1;                            // 0x0008(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_LPVSize : 1;                                     // 0x0008(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_LPVSecondaryOcclusionIntensity : 1;              // 0x0008(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_LPVSecondaryBounceIntensity : 1;                 // 0x0009(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_LPVGeometryVolumeBias : 1;                       // 0x0009(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_LPVVplInjectionBias : 1;                         // 0x0009(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_LPVEmissiveInjectionIntensity : 1;               // 0x0009(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_LPVTransmissionIntensity : 1;                    // 0x0009(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_IndirectLightingColor : 1;                       // 0x0009(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_IndirectLightingIntensity : 1;                   // 0x0009(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_ColorGradingIntensity : 1;                       // 0x0009(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_ColorGradingLUT : 1;                             // 0x000A(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_DepthOfFieldFocalDistance : 1;                   // 0x000A(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_DepthOfFieldFocalRegion : 1;                     // 0x000A(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_DepthOfFieldNearTransitionRegion : 1;            // 0x000A(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_DepthOfFieldFarTransitionRegion : 1;             // 0x000A(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_DepthOfFieldScale : 1;                           // 0x000A(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_DepthOfFieldMaxBokehSize : 1;                    // 0x000A(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_DepthOfFieldNearBlurSize : 1;                    // 0x000A(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_DepthOfFieldFarBlurSize : 1;                     // 0x000B(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_DepthOfFieldMethod : 1;                          // 0x000B(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_DepthOfFieldBokehShape : 1;                      // 0x000B(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_DepthOfFieldOcclusion : 1;                       // 0x000B(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_DepthOfFieldColorThreshold : 1;                  // 0x000B(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_DepthOfFieldSizeThreshold : 1;                   // 0x000B(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_DepthOfFieldSkyFocusDistance : 1;                // 0x000B(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_MotionBlurAmount : 1;                            // 0x000B(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_MotionBlurMax : 1;                               // 0x000C(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_MotionBlurPerObjectSize : 1;                     // 0x000C(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_ScreenPercentage : 1;                            // 0x000C(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_AntiAliasingMethod : 1;                          // 0x000C(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_ScreenSpaceReflectionIntensity : 1;              // 0x000C(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_ScreenSpaceReflectionQuality : 1;                // 0x000C(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_ScreenSpaceReflectionMaxRoughness : 1;           // 0x000C(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_ScreenSpaceReflectionRoughnessScale : 1;         // 0x000C(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_UseIBLDrivenSSR : 1;                             // 0x000D(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_AdditionalMaterialSetSkyLightMultiplier : 1;     // 0x000D(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      bOverride_ClutterLayers : 1;                               // 0x000D(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      UnknownData_1H0G[0x2];                                     // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FOverrideClutterLayer>               OverrideClutterLayers;                                     // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, AdvancedDisplay)
	TArray<struct FClutterPropertyOverride>            ClutterPropertyOverrides;                                  // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay)
	struct FLinearColor                                FilmWhitePoint;                                            // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	struct FLinearColor                                FilmShadowTint;                                            // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay)
	float                                              FilmShadowTintBlend;                                       // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay)
	float                                              FilmShadowTintAmount;                                      // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay)
	float                                              FilmSaturation;                                            // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	struct FLinearColor                                FilmChannelMixerRed;                                       // 0x005C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay)
	struct FLinearColor                                FilmChannelMixerGreen;                                     // 0x006C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay)
	struct FLinearColor                                FilmChannelMixerBlue;                                      // 0x007C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay)
	float                                              FilmContrast;                                              // 0x008C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	float                                              FilmToeAmount;                                             // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay)
	float                                              FilmHealAmount;                                            // 0x0094(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay)
	float                                              FilmDynamicRange;                                          // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay)
	float                                              MinExposureFilmToeAmount;                                  // 0x009C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay)
	float                                              MinFilmToeAmount;                                          // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay)
	float                                              MaxExposureFilmToeAmount;                                  // 0x00A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay)
	float                                              MaxFilmToeAmount;                                          // 0x00A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay)
	struct FLinearColor                                SceneColorTint;                                            // 0x00AC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay)
	float                                              SceneFringeIntensity;                                      // 0x00BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	float                                              SceneFringeSaturation;                                     // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay)
	float                                              BloomIntensity;                                            // 0x00C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	float                                              BloomThreshold;                                            // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay)
	float                                              Bloom1Size;                                                // 0x00CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay)
	float                                              Bloom2Size;                                                // 0x00D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay)
	float                                              Bloom3Size;                                                // 0x00D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay)
	float                                              Bloom4Size;                                                // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay)
	float                                              Bloom5Size;                                                // 0x00DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay)
	struct FLinearColor                                Bloom1Tint;                                                // 0x00E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay)
	struct FLinearColor                                Bloom2Tint;                                                // 0x00F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay)
	struct FLinearColor                                Bloom3Tint;                                                // 0x0100(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay)
	struct FLinearColor                                Bloom4Tint;                                                // 0x0110(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay)
	struct FLinearColor                                Bloom5Tint;                                                // 0x0120(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay)
	float                                              BloomDirtMaskIntensity;                                    // 0x0130(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	struct FLinearColor                                BloomDirtMaskTint;                                         // 0x0134(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay)
	unsigned char                                      UnknownData_WG62[0xC];                                     // 0x0144(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LPVIntensity;                                              // 0x0150(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	float                                              LPVWarpIntensity;                                          // 0x0154(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay)
	float                                              LPVVplInjectionBias;                                       // 0x0158(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	float                                              LPVSize;                                                   // 0x015C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              LPVSecondaryOcclusionIntensity;                            // 0x0160(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	float                                              LPVSecondaryBounceIntensity;                               // 0x0164(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	float                                              LPVGeometryVolumeBias;                                     // 0x0168(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay)
	float                                              LPVEmissiveInjectionIntensity;                             // 0x016C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	float                                              LPVTransmissionIntensity;                                  // 0x0170(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	struct FLinearColor                                AmbientCubemapTint;                                        // 0x0174(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay)
	float                                              AmbientCubemapIntensity;                                   // 0x0184(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	class UTextureCube*                                AmbientCubemap;                                            // 0x0188(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              AutoExposureLowPercent;                                    // 0x0190(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay)
	float                                              AutoExposureHighPercent;                                   // 0x0194(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay)
	float                                              AutoExposureMinBrightness;                                 // 0x0198(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	float                                              AutoExposureMaxBrightness;                                 // 0x019C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	float                                              AutoExposureSpeedUp;                                       // 0x01A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay)
	float                                              AutoExposureSpeedDown;                                     // 0x01A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay)
	float                                              AutoExposureBias;                                          // 0x01A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	float                                              HistogramLogMin;                                           // 0x01AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay)
	float                                              HistogramLogMax;                                           // 0x01B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay)
	float                                              LensFlareIntensity;                                        // 0x01B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	struct FLinearColor                                LensFlareTint;                                             // 0x01B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay)
	float                                              LensFlareBokehSize;                                        // 0x01C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	float                                              LensFlareThreshold;                                        // 0x01CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay)
	class UTexture*                                    LensFlareBokehShape;                                       // 0x01D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                LensFlareTints[0x8];                                       // 0x01D8(0x0080) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              VignetteIntensity;                                         // 0x0258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	struct FLinearColor                                VignetteColor;                                             // 0x025C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay)
	float                                              GrainJitter;                                               // 0x026C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay)
	float                                              GrainIntensity;                                            // 0x0270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	float                                              AmbientOcclusionIntensity;                                 // 0x0274(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	float                                              AmbientOcclusionStaticFraction;                            // 0x0278(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay)
	float                                              AmbientOcclusionRadius;                                    // 0x027C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	unsigned char                                      AmbientOcclusionRadiusInWS : 1;                            // 0x0280(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, AdvancedDisplay)
	unsigned char                                      UnknownData_QB5A[0x3];                                     // 0x0281(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AmbientOcclusionFadeDistance;                              // 0x0284(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay)
	float                                              AmbientOcclusionFadeRadius;                                // 0x0288(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay)
	float                                              AmbientOcclusionDistance;                                  // 0x028C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay)
	float                                              AmbientOcclusionPower;                                     // 0x0290(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay)
	float                                              AmbientOcclusionBias;                                      // 0x0294(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay)
	float                                              AmbientOcclusionQuality;                                   // 0x0298(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay)
	float                                              AmbientOcclusionMipBlend;                                  // 0x029C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay)
	float                                              AmbientOcclusionMipScale;                                  // 0x02A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay)
	float                                              AmbientOcclusionMipThreshold;                              // 0x02A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay)
	struct FLinearColor                                IndirectLightingColor;                                     // 0x02A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	float                                              IndirectLightingIntensity;                                 // 0x02B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	float                                              ColorGradingIntensity;                                     // 0x02BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	class UTexture*                                    ColorGradingLUT;                                           // 0x02C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_EDepthOfFieldMethod>            DepthOfFieldMethod;                                        // 0x02C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_Z1VA[0x3];                                     // 0x02C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DepthOfFieldFocalDistance;                                 // 0x02CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	float                                              DepthOfFieldFocalRegion;                                   // 0x02D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	float                                              DepthOfFieldNearTransitionRegion;                          // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	float                                              DepthOfFieldFarTransitionRegion;                           // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	float                                              DepthOfFieldScale;                                         // 0x02DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	float                                              DepthOfFieldMaxBokehSize;                                  // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	float                                              DepthOfFieldNearBlurSize;                                  // 0x02E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	float                                              DepthOfFieldFarBlurSize;                                   // 0x02E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	unsigned char                                      UnknownData_SL8Z[0x4];                                     // 0x02EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture*                                    DepthOfFieldBokehShape;                                    // 0x02F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	float                                              DepthOfFieldOcclusion;                                     // 0x02F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay)
	float                                              DepthOfFieldColorThreshold;                                // 0x02FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay)
	float                                              DepthOfFieldSizeThreshold;                                 // 0x0300(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay)
	float                                              DepthOfFieldSkyFocusDistance;                              // 0x0304(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay)
	float                                              MotionBlurAmount;                                          // 0x0308(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	float                                              MotionBlurMax;                                             // 0x030C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	float                                              MotionBlurPerObjectSize;                                   // 0x0310(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay)
	float                                              ScreenPercentage;                                          // 0x0314(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay)
	TEnumAsByte<Engine_EAntiAliasingMethod>            AntiAliasingMethod;                                        // 0x0318(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	unsigned char                                      UnknownData_C34B[0x3];                                     // 0x0319(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ScreenSpaceReflectionIntensity;                            // 0x031C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	float                                              ScreenSpaceReflectionQuality;                              // 0x0320(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	float                                              ScreenSpaceReflectionMaxRoughness;                         // 0x0324(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	unsigned char                                      IBLDrivenSSR : 1;                                          // 0x0328(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, AdvancedDisplay)
	unsigned char                                      UnknownData_S2KI[0x3];                                     // 0x0329(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AdditionalMaterialSetSkyLightMultiplier;                   // 0x032C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	TArray<class UObject*>                             Blendables;                                                // 0x0330(0x0010) (Edit, ZeroConstructor)
	TArray<struct FPostProcessSettingsMaterialAdjuster> PostProcessSettingsMaterialAdjusters;                      // 0x0340(0x0010) (Edit, ZeroConstructor)
	class USoundBase*                                  PostProcessAmbientSound;                                   // 0x0350(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.MinimalViewInfo
// 0x0398
struct FMinimalViewInfo
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                                    Rotation;                                                  // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                                    AimRotation;                                               // 0x0018(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      bUseTPVAim : 1;                                            // 0x0024(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      UnknownData_3H6S[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FOV;                                                       // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              OrthoWidth;                                                // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              AspectRatio;                                               // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      bConstrainAspectRatio : 1;                                 // 0x0034(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      UnknownData_Y5FG[0x3];                                     // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<Engine_ECameraProjectionMode>          ProjectionMode;                                            // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_1XTA[0x3];                                     // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PostProcessBlendWeight;                                    // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FPostProcessSettings                        PostProcessSettings;                                       // 0x0040(0x0358)

};

// ScriptStruct Engine.PlayerCameraManager.TViewTarget
// 0x03A8
struct FTViewTarget
{
	class AActor*                                      Target;                                                    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FMinimalViewInfo                            POV;                                                       // 0x0008(0x0398) (Edit, BlueprintVisible)
	class APlayerState*                                PlayerState;                                               // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected)

};

// ScriptStruct Engine.Character.BasedMovementInfo
// 0x0030
struct FBasedMovementInfo
{
	class UPrimitiveComponent*                         MovementBase;                                              // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FName                                       BoneName;                                                  // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector_NetQuantize100                      Location;                                                  // 0x0010(0x000C)
	struct FRotator                                    Rotation;                                                  // 0x001C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bServerHasBaseComponent;                                   // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bRelativeRotation;                                         // 0x0029(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bServerHasVelocity;                                        // 0x002A(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_GQVY[0x5];                                     // 0x002B(0x0005) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.ParticleSystemComponent.ParticleSysParam
// 0x0040
struct FParticleSysParam
{
	struct FName                                       Name;                                                      // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_EParticleSysParamType>          ParamType;                                                 // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_K61I[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Scalar;                                                    // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Scalar_Low;                                                // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Vector;                                                    // 0x0014(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Vector_Low;                                                // 0x0020(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FColor                                      Color;                                                     // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                      Actor;                                                     // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMaterialInterface*                          Material;                                                  // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.SkeletalMeshComponent.IKGroundPlaneOverrideInfo
// 0x004C
struct FIKGroundPlaneOverrideInfo
{
	struct FVector                                     RootLocationOffset;                                        // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      bUseActorRootInstead : 1;                                  // 0x000C(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      UnknownData_JHN1[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     HitLocationWS;                                             // 0x0010(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	struct FVector                                     HitLocationCS;                                             // 0x001C(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	struct FVector                                     CachedHitLocationWS;                                       // 0x0028(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	struct FVector                                     CachedHitLocationCS;                                       // 0x0034(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	struct FVector                                     HitLocationTargetWS;                                       // 0x0040(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.SkeletalMeshComponent.IKRootAdjustmentInfo
// 0x0030
struct FIKRootAdjustmentInfo
{
	struct FName                                       RootBoneName;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     NonBoneRootLocationOffset;                                 // 0x0008(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              TraceExtraZBuffer;                                         // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              TraceLength;                                               // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      bUseActorRootInsteadForNonBone : 1;                        // 0x001C(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      UnknownData_TPQX[0x3];                                     // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DistanceTracedFromStartPoint;                              // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	struct FVector                                     CachedDistanceTraced;                                      // 0x0024(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.InstancedStaticMeshComponent.InstancedStaticMeshInstanceData
// 0x0050
struct FInstancedStaticMeshInstanceData
{
	struct FMatrix                                     Transform;                                                 // 0x0000(0x0040) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   LightmapUVBias;                                            // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   ShadowmapUVBias;                                           // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.TimelineComponent.TimelineEventEntry
// 0x0014
struct FTimelineEventEntry
{
	float                                              Time;                                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FScriptDelegate                             EventFunc;                                                 // 0x0004(0x0010) (ZeroConstructor, InstancedReference, NoDestructor)

};

// ScriptStruct Engine.TimelineComponent.TimelineVectorTrack
// 0x0030
struct FTimelineVectorTrack
{
	class UCurveVector*                                VectorCurve;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FScriptDelegate                             InterpFunc;                                                // 0x0008(0x0010) (ZeroConstructor, InstancedReference, NoDestructor)
	struct FName                                       VectorPropertyName;                                        // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	class UStructProperty*                             VectorProperty;                                            // 0x0020(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_PDCO[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.TimelineComponent.TimelineFloatTrack
// 0x0030
struct FTimelineFloatTrack
{
	class UCurveFloat*                                 FloatCurve;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FScriptDelegate                             InterpFunc;                                                // 0x0008(0x0010) (ZeroConstructor, InstancedReference, NoDestructor)
	struct FName                                       FloatPropertyName;                                         // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	class UFloatProperty*                              FloatProperty;                                             // 0x0020(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_586O[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.TimelineComponent.TimelineLinearColorTrack
// 0x0030
struct FTimelineLinearColorTrack
{
	class UCurveLinearColor*                           LinearColorCurve;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FScriptDelegate                             InterpFunc;                                                // 0x0008(0x0010) (ZeroConstructor, InstancedReference, NoDestructor)
	struct FName                                       LinearColorPropertyName;                                   // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	class UStructProperty*                             LinearColorProperty;                                       // 0x0020(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_F3Q0[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.TimelineComponent.Timeline
// 0x0098
struct FTimeline
{
	TEnumAsByte<Engine_ETimelineLengthMode>            LengthMode;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor)
	unsigned char                                      UnknownData_LWO4[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Length;                                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor)
	unsigned char                                      bLooping : 1;                                              // 0x0008(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bReversePlayback : 1;                                      // 0x0008(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bPlaying : 1;                                              // 0x0008(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      UnknownData_FLIB[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PlayRate;                                                  // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Position;                                                  // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_MP95[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FTimelineEventEntry>                 Events;                                                    // 0x0018(0x0010) (ZeroConstructor, RepSkip, ContainsInstancedReference)
	TArray<struct FTimelineVectorTrack>                InterpVectors;                                             // 0x0028(0x0010) (ZeroConstructor, RepSkip, ContainsInstancedReference)
	TArray<struct FTimelineFloatTrack>                 InterpFloats;                                              // 0x0038(0x0010) (ZeroConstructor, RepSkip, ContainsInstancedReference)
	TArray<struct FTimelineLinearColorTrack>           InterpLinearColors;                                        // 0x0048(0x0010) (ZeroConstructor, RepSkip, ContainsInstancedReference)
	struct FScriptDelegate                             TimelinePostUpdateFunc;                                    // 0x0058(0x0010) (ZeroConstructor, InstancedReference, RepSkip, NoDestructor)
	struct FScriptDelegate                             TimelineFinishedFunc;                                      // 0x0068(0x0010) (ZeroConstructor, InstancedReference, RepSkip, NoDestructor)
	unsigned char                                      UnknownData_DF2E[0x8];                                     // 0x0078(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TWeakObjectPtr<class UObject>                      PropertySetObject;                                         // 0x0080(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor)
	struct FName                                       DirectionPropertyName;                                     // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor)
	class UByteProperty*                               DirectionProperty;                                         // 0x0090(0x0008) (ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)

};

// ScriptStruct Engine.AnimSequenceBase.AnimNotifyEvent
// 0x0030
struct FAnimNotifyEvent
{
	float                                              DisplayTime;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              TriggerTimeOffset;                                         // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              EndTriggerTimeOffset;                                      // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              TriggerWeightThreshold;                                    // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       NotifyName;                                                // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UAnimNotify*                                 Notify;                                                    // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UAnimNotifyState*                            NotifyStateClass;                                          // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bIgnoreOnDediServer;                                       // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_YWS9[0x3];                                     // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Duration;                                                  // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.AnimSequenceBase.AnimCurveBase
// 0x0018
struct FAnimCurveBase
{
	unsigned char                                      UnknownData_GGXF[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       LastObservedName;                                          // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_518Q[0x8];                                     // 0x0010(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.CurveBase.IndexedCurve
// 0x0058
struct FIndexedCurve
{
	unsigned char                                      UnknownData_1PI2[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FKeyHandleMap                               KeyHandlesToIndices;                                       // 0x0008(0x0050) (Transient, Protected)

};

// ScriptStruct Engine.CurveBase.RichCurveKey
// 0x001C
struct FRichCurveKey
{
	TEnumAsByte<Engine_ERichCurveInterpMode>           InterpMode;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ERichCurveTangentMode>          TangentMode;                                               // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ERichCurveTangentWeightMode>    TangentWeightMode;                                         // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_D1QH[0x1];                                     // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Time;                                                      // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Value;                                                     // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              ArriveTangent;                                             // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              ArriveTangentWeight;                                       // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              LeaveTangent;                                              // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              LeaveTangentWeight;                                        // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.CurveBase.RichCurve
// 0x0010 (0x0068 - 0x0058)
struct FRichCurve : public FIndexedCurve
{
	TArray<struct FRichCurveKey>                       Keys;                                                      // 0x0058(0x0010) (ZeroConstructor)

};

// ScriptStruct Engine.AnimSequenceBase.FloatCurve
// 0x0070 (0x0088 - 0x0018)
struct FFloatCurve : public FAnimCurveBase
{
	struct FRichCurve                                  FloatCurve;                                                // 0x0018(0x0068)
	int                                                CurveTypeFlags;                                            // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_T4HU[0x4];                                     // 0x0084(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.AnimSequenceBase.RawCurveTracks
// 0x0010
struct FRawCurveTracks
{
	TArray<struct FFloatCurve>                         FloatCurves;                                               // 0x0000(0x0010) (ZeroConstructor)

};

// ScriptStruct Engine.AnimCompositeBase.AnimSegment
// 0x0028
struct FAnimSegment
{
	class UAnimSequenceBase*                           AnimReference;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              StartPos;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor)
	float                                              AnimStartOffset;                                           // 0x000C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor)
	float                                              AnimEndOffset;                                             // 0x0010(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor)
	float                                              AnimStartTime;                                             // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              AnimEndTime;                                               // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              AnimPlayRate;                                              // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                LoopingCount;                                              // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_C2T2[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.AnimCompositeBase.AnimTrack
// 0x0010
struct FAnimTrack
{
	TArray<struct FAnimSegment>                        AnimSegments;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor)

};

// ScriptStruct Engine.AnimSequence.TrackToSkeletonMap
// 0x0008
struct FTrackToSkeletonMap
{
	int                                                SkeletonIndex;                                             // 0x0000(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor)
	int                                                BoneTreeIndex;                                             // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.AnimSequence.CurveTrack
// 0x0018
struct FCurveTrack
{
	struct FName                                       CurveName;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<float>                                      CurveWeights;                                              // 0x0008(0x0010) (ZeroConstructor)

};

// ScriptStruct Engine.AnimSequence.CompressedOffsetData
// 0x0018
struct FCompressedOffsetData
{
	TArray<int>                                        OffsetData;                                                // 0x0000(0x0010) (ZeroConstructor)
	int                                                StripSize;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_F6IV[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.AnimMontage.CompositeSection
// 0x0018
struct FCompositeSection
{
	struct FName                                       SectionName;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              StarTime;                                                  // 0x0008(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor)
	float                                              StartTime;                                                 // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       NextSectionName;                                           // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.AnimMontage.BranchingPoint
// 0x0010
struct FBranchingPoint
{
	struct FName                                       EventName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              DisplayTime;                                               // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              TriggerTimeOffset;                                         // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.BlendSpaceBase.BlendParameter
// 0x0020
struct FBlendParameter
{
	struct FString                                     DisplayName;                                               // 0x0000(0x0010) (Edit, ZeroConstructor)
	float                                              Min;                                                       // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Max;                                                       // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Offset;                                                    // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                GridNum;                                                   // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.BlendSpaceBase.InterpolationParameter
// 0x0008
struct FInterpolationParameter
{
	float                                              InterpolationTime;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_EFilterInterpolationType>       InterpolationType;                                         // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_NZEZ[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.BlendSpaceBase.EditorElement
// 0x0018
struct FEditorElement
{
	int                                                Indices[0x3];                                              // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Weights[0x3];                                              // 0x000C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.AnimSet.AnimSetMeshLinkup
// 0x0010
struct FAnimSetMeshLinkup
{
	TArray<int>                                        BoneToTrackTable;                                          // 0x0000(0x0010) (ZeroConstructor)

};

// ScriptStruct Engine.EngineTypes.FilePath
// 0x0010
struct FFilePath
{
	struct FString                                     FilePath;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor)

};

// ScriptStruct Engine.AutomationTestSettings.ImportFactorySettingValues
// 0x0020
struct FImportFactorySettingValues
{
	struct FString                                     SettingName;                                               // 0x0000(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     Value;                                                     // 0x0010(0x0010) (Edit, ZeroConstructor, Config)

};

// ScriptStruct Engine.EngineTypes.DirectoryPath
// 0x0010
struct FDirectoryPath
{
	struct FString                                     Path;                                                      // 0x0000(0x0010) (Edit, ZeroConstructor)

};

// ScriptStruct Engine.CurveFloat.RuntimeFloatCurve
// 0x0070
struct FRuntimeFloatCurve
{
	struct FRichCurve                                  EditorCurveData;                                           // 0x0000(0x0068)
	class UCurveFloat*                                 ExternalCurve;                                             // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.ForceFeedbackEffect.ForceFeedbackChannelDetails
// 0x0078
struct FForceFeedbackChannelDetails
{
	unsigned char                                      bAffectsLeftLarge : 1;                                     // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bAffectsLeftSmall : 1;                                     // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bAffectsRightLarge : 1;                                    // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bAffectsRightSmall : 1;                                    // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      UnknownData_YK7H[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRuntimeFloatCurve                          Curve;                                                     // 0x0008(0x0070) (Edit)

};

// ScriptStruct Engine.ForceFeedbackEffect.ActiveForceFeedbackEffect
// 0x0018
struct FActiveForceFeedbackEffect
{
	class UForceFeedbackEffect*                        ForceFeedbackEffect;                                       // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_AJO2[0x10];                                    // 0x0008(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.AutomationTestSettings.BuildPromotionNewProjectSettings
// 0x0020
struct FBuildPromotionNewProjectSettings
{
	struct FDirectoryPath                              NewProjectFolderOverride;                                  // 0x0000(0x0010) (Edit)
	struct FString                                     NewProjectNameOverride;                                    // 0x0010(0x0010) (Edit, ZeroConstructor)

};

// ScriptStruct Engine.AutomationTestSettings.EditorImportWorkflowDefinition
// 0x0020
struct FEditorImportWorkflowDefinition
{
	struct FFilePath                                   ImportFilePath;                                            // 0x0000(0x0010) (Edit, Config)
	TArray<struct FImportFactorySettingValues>         FactorySettings;                                           // 0x0010(0x0010) (Edit, ZeroConstructor, Config)

};

// ScriptStruct Engine.AutomationTestSettings.BuildPromotionImportWorkflowSettings
// 0x0150
struct FBuildPromotionImportWorkflowSettings
{
	struct FEditorImportWorkflowDefinition             Diffuse;                                                   // 0x0000(0x0020) (Edit, Config)
	struct FEditorImportWorkflowDefinition             Normal;                                                    // 0x0020(0x0020) (Edit, Config)
	struct FEditorImportWorkflowDefinition             StaticMesh;                                                // 0x0040(0x0020) (Edit, Config)
	struct FEditorImportWorkflowDefinition             ReimportStaticMesh;                                        // 0x0060(0x0020) (Edit, Config)
	struct FEditorImportWorkflowDefinition             BlendShapeMesh;                                            // 0x0080(0x0020) (Edit, Config)
	struct FEditorImportWorkflowDefinition             MorphMesh;                                                 // 0x00A0(0x0020) (Edit, Config)
	struct FEditorImportWorkflowDefinition             SkeletalMesh;                                              // 0x00C0(0x0020) (Edit, Config)
	struct FEditorImportWorkflowDefinition             Animation;                                                 // 0x00E0(0x0020) (Edit, Config)
	struct FEditorImportWorkflowDefinition             Sound;                                                     // 0x0100(0x0020) (Edit, Config)
	struct FEditorImportWorkflowDefinition             SurroundSound;                                             // 0x0120(0x0020) (Edit, Config)
	TArray<struct FEditorImportWorkflowDefinition>     OtherAssetsToImport;                                       // 0x0140(0x0010) (Edit, ZeroConstructor, Config)

};

// ScriptStruct Engine.AutomationTestSettings.BuildPromotionOpenAssetSettings
// 0x0060
struct FBuildPromotionOpenAssetSettings
{
	struct FFilePath                                   BlueprintAsset;                                            // 0x0000(0x0010) (Edit, Config)
	struct FFilePath                                   MaterialAsset;                                             // 0x0010(0x0010) (Edit, Config)
	struct FFilePath                                   ParticleSystemAsset;                                       // 0x0020(0x0010) (Edit, Config)
	struct FFilePath                                   SkeletalMeshAsset;                                         // 0x0030(0x0010) (Edit, Config)
	struct FFilePath                                   StaticMeshAsset;                                           // 0x0040(0x0010) (Edit, Config)
	struct FFilePath                                   TextureAsset;                                              // 0x0050(0x0010) (Edit, Config)

};

// ScriptStruct Engine.AutomationTestSettings.BuildPromotionBlueprintSettings
// 0x0020
struct FBuildPromotionBlueprintSettings
{
	struct FFilePath                                   FirstMeshPath;                                             // 0x0000(0x0010) (Edit)
	struct FFilePath                                   SecondMeshPath;                                            // 0x0010(0x0010) (Edit)

};

// ScriptStruct Engine.AutomationTestSettings.BuildPromotionTestSettings
// 0x0210
struct FBuildPromotionTestSettings
{
	struct FFilePath                                   DefaultStaticMeshAsset;                                    // 0x0000(0x0010) (Edit)
	struct FBuildPromotionImportWorkflowSettings       ImportWorkflow;                                            // 0x0010(0x0150) (Edit)
	struct FBuildPromotionOpenAssetSettings            OpenAssets;                                                // 0x0160(0x0060) (Edit)
	struct FBuildPromotionBlueprintSettings            BlueprintSettings;                                         // 0x01C0(0x0020) (Edit)
	struct FBuildPromotionNewProjectSettings           NewProjectSettings;                                        // 0x01E0(0x0020) (Edit)
	struct FFilePath                                   SourceControlMaterial;                                     // 0x0200(0x0010) (Edit)

};

// ScriptStruct Engine.Material.MaterialFunctionInfo
// 0x0018
struct FMaterialFunctionInfo
{
	struct FGuid                                       StateId;                                                   // 0x0000(0x0010) (ZeroConstructor)
	class UMaterialFunction*                           Function;                                                  // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.PlayerCameraManager.CameraCacheEntry
// 0x03A0
struct FCameraCacheEntry
{
	float                                              TimeStamp;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_WNQV[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMinimalViewInfo                            POV;                                                       // 0x0008(0x0398)

};

// ScriptStruct Engine.PlayerCameraManager.ViewTargetTransitionParams
// 0x0010
struct FViewTargetTransitionParams
{
	float                                              BlendTime;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_EViewTargetBlendFunction>       BlendFunction;                                             // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_06LZ[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              BlendExp;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      bLockOutgoing : 1;                                         // 0x000C(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      UnknownData_NJG9[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.CharacterMovementComponent.FindFloorResult
// 0x0098
struct FFindFloorResult
{
	unsigned char                                      bBlockingHit : 1;                                          // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NoDestructor)
	unsigned char                                      bShouldSlide : 1;                                          // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NoDestructor)
	unsigned char                                      bWalkableFloor : 1;                                        // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NoDestructor)
	unsigned char                                      bLineTrace : 1;                                            // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NoDestructor)
	unsigned char                                      UnknownData_E5GF[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FloorDist;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor)
	float                                              LineDist;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_JLV0[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FHitResult                                  HitResult;                                                 // 0x0010(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst)

};

// ScriptStruct Engine.HUD.DebugTextInfo
// 0x0060
struct FDebugTextInfo
{
	class AActor*                                      SrcActor;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     SrcActorOffset;                                            // 0x0008(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     SrcActorDesiredOffset;                                     // 0x0014(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     DebugText;                                                 // 0x0020(0x0010) (ZeroConstructor)
	float                                              TimeRemaining;                                             // 0x0030(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	float                                              Duration;                                                  // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FColor                                      TextColor;                                                 // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      bAbsoluteLocation : 1;                                     // 0x003C(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bKeepAttachedToActor : 1;                                  // 0x003C(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      UnknownData_CZ1D[0x3];                                     // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     OrigActorLocation;                                         // 0x0040(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_HBG8[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UFont*                                       Font;                                                      // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              FontScale;                                                 // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_CK3I[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.AnimationAsset.RootMotionMovementParams
// 0x0040
struct FRootMotionMovementParams
{
	bool                                               bHasRootMotion;                                            // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_2BNJ[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct UObject_FTransform                          RootMotionTransform;                                       // 0x0010(0x0030) (IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.NavLinkDefinition.NavigationLinkBase
// 0x0020
struct FNavigationLinkBase
{
	float                                              MaxFallDownLength;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ENavLinkDirection>              Direction;                                                 // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_YHUK[0x7];                                     // 0x0005(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SnapRadius;                                                // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UClass*                                      AreaClass;                                                 // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      bSupportsAgent0 : 1;                                       // 0x0018(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bSupportsAgent1 : 1;                                       // 0x0018(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bSupportsAgent2 : 1;                                       // 0x0018(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bSupportsAgent3 : 1;                                       // 0x0018(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bSupportsAgent4 : 1;                                       // 0x0018(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bSupportsAgent5 : 1;                                       // 0x0018(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bSupportsAgent6 : 1;                                       // 0x0018(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bSupportsAgent7 : 1;                                       // 0x0018(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bSupportsAgent8 : 1;                                       // 0x0019(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bSupportsAgent9 : 1;                                       // 0x0019(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bSupportsAgent10 : 1;                                      // 0x0019(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bSupportsAgent11 : 1;                                      // 0x0019(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bSupportsAgent12 : 1;                                      // 0x0019(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bSupportsAgent13 : 1;                                      // 0x0019(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bSupportsAgent14 : 1;                                      // 0x0019(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bSupportsAgent15 : 1;                                      // 0x0019(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      UnknownData_51HH[0x6];                                     // 0x001A(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.NavLinkDefinition.NavigationLink
// 0x0018 (0x0038 - 0x0020)
struct FNavigationLink : public FNavigationLinkBase
{
	struct FVector                                     Left;                                                      // 0x0020(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Right;                                                     // 0x002C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.WorldSettings.LightmassWorldInfoSettings
// 0x0044
struct FLightmassWorldInfoSettings
{
	float                                              StaticLightingLevelScale;                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	int                                                NumIndirectLightingBounces;                                // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              IndirectLightingQuality;                                   // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	float                                              IndirectLightingSmoothness;                                // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	struct FColor                                      EnvironmentColor;                                          // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              EnvironmentIntensity;                                      // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              EmissiveBoost;                                             // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              DiffuseBoost;                                              // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      bUseAmbientOcclusion : 1;                                  // 0x0020(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      UnknownData_UO8I[0x3];                                     // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DirectIlluminationOcclusionFraction;                       // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              IndirectIlluminationOcclusionFraction;                     // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              OcclusionExponent;                                         // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              FullyOccludedSamplesFraction;                              // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              MaxOcclusionDistance;                                      // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      bVisualizeMaterialDiffuse : 1;                             // 0x0038(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay)
	unsigned char                                      bVisualizeAmbientOcclusion : 1;                            // 0x0038(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay)
	unsigned char                                      UnknownData_L7OE[0x3];                                     // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              VolumeLightSamplePlacementScale;                           // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	unsigned char                                      bCompressLightmaps : 1;                                    // 0x0040(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay)
	unsigned char                                      UnknownData_Z3PR[0x3];                                     // 0x0041(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.WheeledVehicleMovementComponent4W.VehicleEngineData
// 0x0088
struct FVehicleEngineData
{
	struct FRuntimeFloatCurve                          TorqueCurve;                                               // 0x0000(0x0070) (Edit)
	float                                              MaxRPM;                                                    // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              MOI;                                                       // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              DampingRateFullThrottle;                                   // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	float                                              DampingRateZeroThrottleClutchEngaged;                      // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	float                                              DampingRateZeroThrottleClutchDisengaged;                   // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	unsigned char                                      UnknownData_WTCK[0x4];                                     // 0x0084(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.ReverbVolume.ReverbSettings
// 0x0018
struct FReverbSettings
{
	unsigned char                                      bApplyReverb : 1;                                          // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      UnknownData_CF09[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<Engine_EReverbPreset>                  ReverbType;                                                // 0x0004(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_EMNP[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UReverbEffect*                               ReverbEffect;                                              // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Volume;                                                    // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              FadeTime;                                                  // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.NavigationTypes.MovementProperties
// 0x0004
struct FMovementProperties
{
	unsigned char                                      bCanCrouch : 1;                                            // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bCanJump : 1;                                              // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bCanWalk : 1;                                              // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bCanSwim : 1;                                              // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bCanFly : 1;                                               // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      UnknownData_V1NO[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.NavigationTypes.NavAgentProperties
// 0x000C (0x0010 - 0x0004)
struct FNavAgentProperties : public FMovementProperties
{
	float                                              AgentRadius;                                               // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              AgentHeight;                                               // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              AgentStepHeight;                                           // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.CharacterMovementComponent.CharacterMovementComponentPreClothTickFunction
// 0x0008 (0x0050 - 0x0048)
struct FCharacterMovementComponentPreClothTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData_DHHD[0x8];                                     // 0x0048(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.CharacterMovementComponent.StoredMoveData
// 0x0048
struct FStoredMoveData
{
	unsigned char                                      UnknownData_CT4A[0x48];                                    // 0x0000(0x0048) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.Engine.GameNameRedirect
// 0x0020
struct FGameNameRedirect
{
	struct FString                                     OldGameName;                                               // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     NewGameName;                                               // 0x0010(0x0010) (ZeroConstructor)

};

// ScriptStruct Engine.Engine.ClassRedirect
// 0x0058
struct FClassRedirect
{
	struct FString                                     ObjectName;                                                // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     OldClassName;                                              // 0x0010(0x0010) (ZeroConstructor)
	struct FString                                     NewClassName;                                              // 0x0020(0x0010) (ZeroConstructor)
	struct FString                                     OldSubobjName;                                             // 0x0030(0x0010) (ZeroConstructor)
	struct FString                                     NewSubobjName;                                             // 0x0040(0x0010) (ZeroConstructor)
	bool                                               InstanceOnly;                                              // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_X1S1[0x7];                                     // 0x0051(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.Engine.PluginRedirect
// 0x0020
struct FPluginRedirect
{
	struct FString                                     OldPluginName;                                             // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     NewPluginName;                                             // 0x0010(0x0010) (ZeroConstructor)

};

// ScriptStruct Engine.Engine.StructRedirect
// 0x0020
struct FStructRedirect
{
	struct FString                                     OldStructName;                                             // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     NewStructName;                                             // 0x0010(0x0010) (ZeroConstructor)

};

// ScriptStruct Engine.EngineTypes.RigidBodyErrorCorrection
// 0x001C
struct FRigidBodyErrorCorrection
{
	float                                              LinearDeltaThresholdSq;                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              LinearInterpAlpha;                                         // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              LinearRecipFixTime;                                        // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              AngularDeltaThreshold;                                     // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              AngularInterpAlpha;                                        // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              AngularRecipFixTime;                                       // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              BodySpeedThresholdSq;                                      // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.Engine.NetDriverDefinition
// 0x0018
struct FNetDriverDefinition
{
	struct FName                                       DefName;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       DriverClassName;                                           // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       DriverClassNameFallback;                                   // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.GameMode.GameClassShortName
// 0x0020
struct FGameClassShortName
{
	struct FString                                     ShortName;                                                 // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     GameClassName;                                             // 0x0010(0x0010) (ZeroConstructor)

};

// ScriptStruct Engine.SkeletalMesh.GroundBoneModifier
// 0x0010
struct FGroundBoneModifier
{
	struct FName                                       BoneName;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              TraceDistance;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              ZOffset;                                                   // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.SkeletalMesh.GroundBoneChain
// 0x0020
struct FGroundBoneChain
{
	struct FName                                       LeafGroundBoneName;                                        // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FGroundBoneModifier>                 GroundBones;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bIsAfterIk;                                                // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bUpdateRoll;                                               // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_IAOF[0x6];                                     // 0x001A(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.Engine.StatColorMapEntry
// 0x0008
struct FStatColorMapEntry
{
	float                                              In;                                                        // 0x0000(0x0004) (ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor)
	struct FColor                                      Out;                                                       // 0x0004(0x0004) (ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.Engine.StatColorMapping
// 0x0028
struct FStatColorMapping
{
	struct FString                                     StatName;                                                  // 0x0000(0x0010) (ZeroConstructor, Config, GlobalConfig)
	TArray<struct FStatColorMapEntry>                  ColorMap;                                                  // 0x0010(0x0010) (ZeroConstructor, Config, GlobalConfig)
	unsigned char                                      DisableBlend : 1;                                          // 0x0020(0x0001) BIT_FIELD (Config, GlobalConfig, NoDestructor)
	unsigned char                                      UnknownData_4ZMG[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.Engine.DropNoteInfo
// 0x0028
struct FDropNoteInfo
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                                    Rotation;                                                  // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     Comment;                                                   // 0x0018(0x0010) (ZeroConstructor)

};

// ScriptStruct Engine.GameViewportClient.DebugDisplayProperty
// 0x0020
struct FDebugDisplayProperty
{
	class UObject*                                     Obj;                                                       // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	class UClass*                                      WithinClass;                                               // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_F315[0x10];                                    // 0x0010(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.MaterialInterface.LightmassMaterialInterfaceSettings
// 0x0018
struct FLightmassMaterialInterfaceSettings
{
	unsigned char                                      bCastShadowAsMasked : 1;                                   // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      UnknownData_REU6[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              EmissiveBoost;                                             // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              DiffuseBoost;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              ExportResolutionScale;                                     // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              DistanceFieldPenumbraScale;                                // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      bOverrideCastShadowAsMasked : 1;                           // 0x0014(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bOverrideEmissiveBoost : 1;                                // 0x0014(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bOverrideDiffuseBoost : 1;                                 // 0x0014(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bOverrideExportResolutionScale : 1;                        // 0x0014(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bOverrideDistanceFieldPenumbraScale : 1;                   // 0x0014(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      UnknownData_TGQK[0x3];                                     // 0x0015(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.MaterialInterface.MaterialRelevance
// 0x0004
struct FMaterialRelevance
{
	unsigned char                                      bOpaque : 1;                                               // 0x0000(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bMasked : 1;                                               // 0x0000(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bDistortion : 1;                                           // 0x0000(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bSeparateTranslucency : 1;                                 // 0x0000(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bNormalTranslucency : 1;                                   // 0x0000(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bDisableDepthTest : 1;                                     // 0x0000(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bSubsurfaceProfile : 1;                                    // 0x0000(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      UnknownData_KQQ5[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.CullDistanceVolume.CullDistanceSizePair
// 0x0008
struct FCullDistanceSizePair
{
	float                                              Size;                                                      // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              CullDistance;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.DynamicCaptureManager.OverrideCaptureData
// 0x0018
struct FOverrideCaptureData
{
	struct FStringAssetReference                       SnapshotAsset;                                             // 0x0000(0x0010) (Edit, ZeroConstructor)
	float                                              Brightness;                                                // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_TJZO[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.EngineTypes.LightmassPrimitiveSettings
// 0x0018
struct FLightmassPrimitiveSettings
{
	unsigned char                                      bUseTwoSidedLighting : 1;                                  // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bShadowIndirectOnly : 1;                                   // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bUseEmissiveForStaticLighting : 1;                         // 0x0000(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      UnknownData_VDZV[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              EmissiveLightFalloffExponent;                              // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              EmissiveLightExplicitInfluenceRadius;                      // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              EmissiveBoost;                                             // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              DiffuseBoost;                                              // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              FullyOccludedSamplesFraction;                              // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.LandscapeProxy.LandscapeLayerStruct
// 0x0008
struct FLandscapeLayerStruct
{
	class ULandscapeLayerInfoObject*                   LayerInfoObj;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.MatineeActor.InterpGroupActorInfo
// 0x0020
struct FInterpGroupActorInfo
{
	struct FName                                       GroupName;                                                 // 0x0000(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor)
	struct FName                                       ObjectName;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class AActor*>                              actors;                                                    // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

};

// ScriptStruct Engine.MatineeActor.CameraCutInfo
// 0x0010
struct FCameraCutInfo
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              TimeStamp;                                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.NavigationQueryFilter.NavigationFilterArea
// 0x0018
struct FNavigationFilterArea
{
	class UClass*                                      AreaClass;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              TravelCostOverride;                                        // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              EnteringCostOverride;                                      // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      bIsExcluded : 1;                                           // 0x0010(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bOverrideTravelCost : 1;                                   // 0x0010(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bOverrideEnteringCost : 1;                                 // 0x0010(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      UnknownData_CRXG[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.NavigationQueryFilter.NavigationFilterFlags
// 0x0004
struct FNavigationFilterFlags
{
	unsigned char                                      bNavFlag0 : 1;                                             // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bNavFlag1 : 1;                                             // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bNavFlag2 : 1;                                             // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bNavFlag3 : 1;                                             // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bNavFlag4 : 1;                                             // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bNavFlag5 : 1;                                             // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bNavFlag6 : 1;                                             // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bNavFlag7 : 1;                                             // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bNavFlag8 : 1;                                             // 0x0001(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bNavFlag9 : 1;                                             // 0x0001(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bNavFlag10 : 1;                                            // 0x0001(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bNavFlag11 : 1;                                            // 0x0001(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bNavFlag12 : 1;                                            // 0x0001(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bNavFlag13 : 1;                                            // 0x0001(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bNavFlag14 : 1;                                            // 0x0001(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bNavFlag15 : 1;                                            // 0x0001(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      UnknownData_2ZPT[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.NavigationData.SupportedAreaData
// 0x0020
struct FSupportedAreaData
{
	struct FString                                     AreaClassName;                                             // 0x0000(0x0010) (ZeroConstructor)
	int                                                AreaID;                                                    // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_WAI2[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      AreaClass;                                                 // 0x0018(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.SkeletalMesh.SkeletalMeshOptimizationSettings
// 0x0048
struct FSkeletalMeshOptimizationSettings
{
	TEnumAsByte<Engine_ESkeletalMeshOptimizationType>  ReductionMethod;                                           // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_M1EM[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              NumOfTrianglesPercentage;                                  // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              MaxDeviationPercentage;                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              WeldingThreshold;                                          // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bRecalcNormals;                                            // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_XVY6[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              NormalsThreshold;                                          // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ESkeletalMeshOptimizationImportance> SilhouetteImportance;                                      // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ESkeletalMeshOptimizationImportance> TextureImportance;                                         // 0x0019(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ESkeletalMeshOptimizationImportance> ShadingImportance;                                         // 0x001A(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ESkeletalMeshOptimizationImportance> SkinningImportance;                                        // 0x001B(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              BoneReductionRatio;                                        // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                MaxBonesPerVertex;                                         // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_C4DR[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FBoneReference>                      BonesToRemove;                                             // 0x0028(0x0010) (Edit, ZeroConstructor)
	int                                                BaseLODModel;                                              // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                LODChainLastIndex;                                         // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	uint32_t                                           MinTrianglesForLOD;                                        // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	uint32_t                                           MaxTrianglesForLOD;                                        // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.SkeletalMesh.TriangleSortSettings
// 0x000C
struct FTriangleSortSettings
{
	TEnumAsByte<Engine_ETriangleSortOption>            TriangleSorting;                                           // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETriangleSortAxis>              CustomLeftRightAxis;                                       // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_O2RQ[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       CustomLeftRightBoneName;                                   // 0x0004(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.SkeletalMesh.SkeletalMeshLODInfo
// 0x00A0
struct FSkeletalMeshLODInfo
{
	float                                              ScreenSize;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              LODHysteresis;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<int>                                        LODMaterialMap;                                            // 0x0008(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	TArray<bool>                                       bEnableShadowCasting;                                      // 0x0018(0x0010) (ZeroConstructor, Deprecated)
	TArray<TEnumAsByte<Engine_ETriangleSortOption>>    TriangleSorting;                                           // 0x0028(0x0010) (ZeroConstructor, Deprecated)
	TArray<struct FTriangleSortSettings>               TriangleSortSettings;                                      // 0x0038(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	unsigned char                                      bHasBeenSimplified : 1;                                    // 0x0048(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      UnknownData_4QPS[0x7];                                     // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSkeletalMeshOptimizationSettings           ReductionSettings;                                         // 0x0050(0x0048) (Edit)
	int                                                StaggeredUpdateFrequency;                                  // 0x0098(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_O5KG[0x4];                                     // 0x009C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.SplineMeshComponent.SplineMeshParams
// 0x0058
struct FSplineMeshParams
{
	struct FVector                                     StartPos;                                                  // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     StartTangent;                                              // 0x000C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   StartScale;                                                // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	float                                              StartRoll;                                                 // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	struct FVector2D                                   StartOffset;                                               // 0x0024(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	struct FVector                                     EndPos;                                                    // 0x002C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     EndTangent;                                                // 0x0038(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   EndScale;                                                  // 0x0044(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	float                                              EndRoll;                                                   // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	struct FVector2D                                   EndOffset;                                                 // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)

};

// ScriptStruct Engine.AnimMontage.SlotAnimationTrack
// 0x0018
struct FSlotAnimationTrack
{
	struct FName                                       SlotName;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FAnimTrack                                  AnimTrack;                                                 // 0x0008(0x0010) (Edit)

};

// ScriptStruct Engine.BodySetup.KSphylElem
// 0x0070
struct FKSphylElem
{
	struct FMatrix                                     TM;                                                        // 0x0000(0x0040) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor)
	struct FVector                                     Center;                                                    // 0x0040(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_S6PH[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FQuat                                       Orientation;                                               // 0x0050(0x0010) (Edit, EditConst, IsPlainOldData, NoDestructor)
	float                                              Radius;                                                    // 0x0060(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor)
	float                                              Length;                                                    // 0x0064(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_BLJ8[0x8];                                     // 0x0068(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.MaterialInstance.VectorParameterValue
// 0x0028
struct FVectorParameterValue
{
	struct FName                                       ParameterName;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                ParameterValue;                                            // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGuid                                       ExpressionGUID;                                            // 0x0018(0x0010) (ZeroConstructor)

};

// ScriptStruct Engine.Rig.Node
// 0x0060
struct FNode
{
	struct FName                                       Name;                                                      // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor)
	struct FName                                       ParentName;                                                // 0x0008(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor)
	struct UObject_FTransform                          Transform;                                                 // 0x0010(0x0030) (IsPlainOldData, NoDestructor)
	struct FString                                     DisplayName;                                               // 0x0040(0x0010) (Edit, ZeroConstructor)
	bool                                               bAdvanced;                                                 // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_KBX6[0xF];                                     // 0x0051(0x000F) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.Blueprint.BPVariableMetaDataEntry
// 0x0018
struct FBPVariableMetaDataEntry
{
	struct FName                                       DataKey;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     DataValue;                                                 // 0x0008(0x0010) (Edit, ZeroConstructor)

};

// ScriptStruct Engine.DestructibleMesh.DestructibleDamageParameters
// 0x0014
struct FDestructibleDamageParameters
{
	float                                              DamageThreshold;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              DamageSpread;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              ImpactDamage;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              ImpactResistance;                                          // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                DefaultImpactDamageDepth;                                  // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.DestructibleMesh.DestructibleAdvancedParameters
// 0x0010
struct FDestructibleAdvancedParameters
{
	float                                              DamageCap;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              ImpactVelocityThreshold;                                   // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              MaxChunkSpeed;                                             // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              FractureImpulseScale;                                      // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.DestructibleMesh.DestructibleSpecialHierarchyDepths
// 0x0010
struct FDestructibleSpecialHierarchyDepths
{
	int                                                SupportDepth;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                MinimumFractureDepth;                                      // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                DebrisDepth;                                               // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                EssentialDepth;                                            // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.DestructibleMesh.DestructibleDepthParameters
// 0x0001
struct FDestructibleDepthParameters
{
	TEnumAsByte<Engine_EImpactDamageOverride>          ImpactDamageOverride;                                      // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.DestructibleMesh.DestructibleParametersFlag
// 0x0004
struct FDestructibleParametersFlag
{
	unsigned char                                      bAccumulateDamage : 1;                                     // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bAssetDefinedSupport : 1;                                  // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bWorldSupport : 1;                                         // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bDebrisTimeout : 1;                                        // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bDebrisMaxSeparation : 1;                                  // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bCrumbleSmallestChunks : 1;                                // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bAccurateRaycasts : 1;                                     // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bUseValidBounds : 1;                                       // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bFormExtendedStructures : 1;                               // 0x0001(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      UnknownData_2G5Z[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.Skeleton.ReferencePose
// 0x0018
struct FReferencePose
{
	struct FName                                       PoseName;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct UObject_FTransform>                  ReferencePose;                                             // 0x0008(0x0010) (ZeroConstructor)

};

// ScriptStruct Engine.Interface_CollisionDataProvider.TriIndices
// 0x000C
struct FTriIndices
{
	int                                                v0;                                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                v1;                                                        // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                v2;                                                        // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.Interface_CollisionDataProvider.TriMeshCollisionData
// 0x0038
struct FTriMeshCollisionData
{
	TArray<struct FVector>                             Vertices;                                                  // 0x0000(0x0010) (ZeroConstructor, Transient)
	TArray<struct FTriIndices>                         Indices;                                                   // 0x0010(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      bFlipNormals : 1;                                          // 0x0020(0x0001) BIT_FIELD (Transient, NoDestructor)
	unsigned char                                      UnknownData_J7RB[0x17];                                    // 0x0021(0x0017) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.NavAvoidanceMask
// 0x0004
struct FNavAvoidanceMask
{
	unsigned char                                      bGroup0 : 1;                                               // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bGroup1 : 1;                                               // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bGroup2 : 1;                                               // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bGroup3 : 1;                                               // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bGroup4 : 1;                                               // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bGroup5 : 1;                                               // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bGroup6 : 1;                                               // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bGroup7 : 1;                                               // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bGroup8 : 1;                                               // 0x0001(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bGroup9 : 1;                                               // 0x0001(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bGroup10 : 1;                                              // 0x0001(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bGroup11 : 1;                                              // 0x0001(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bGroup12 : 1;                                              // 0x0001(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bGroup13 : 1;                                              // 0x0001(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bGroup14 : 1;                                              // 0x0001(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bGroup15 : 1;                                              // 0x0001(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bGroup16 : 1;                                              // 0x0002(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bGroup17 : 1;                                              // 0x0002(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bGroup18 : 1;                                              // 0x0002(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bGroup19 : 1;                                              // 0x0002(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bGroup20 : 1;                                              // 0x0002(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bGroup21 : 1;                                              // 0x0002(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bGroup22 : 1;                                              // 0x0002(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bGroup23 : 1;                                              // 0x0002(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bGroup24 : 1;                                              // 0x0003(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bGroup25 : 1;                                              // 0x0003(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bGroup26 : 1;                                              // 0x0003(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bGroup27 : 1;                                              // 0x0003(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bGroup28 : 1;                                              // 0x0003(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bGroup29 : 1;                                              // 0x0003(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bGroup30 : 1;                                              // 0x0003(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bGroup31 : 1;                                              // 0x0003(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)

};

// ScriptStruct Engine.LineBatchComponent.BatchedPoint
// 0x0028
struct FBatchedPoint
{
	struct FVector                                     Position;                                                  // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Color;                                                     // 0x000C(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              PointSize;                                                 // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              RemainingLifeTime;                                         // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      DepthPriority;                                             // 0x0024(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_73MA[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.LineBatchComponent.BatchedLine
// 0x0034
struct FBatchedLine
{
	struct FVector                                     Start;                                                     // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     End;                                                       // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Color;                                                     // 0x0018(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Thickness;                                                 // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              RemainingLifeTime;                                         // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      DepthPriority;                                             // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_QBUR[0x3];                                     // 0x0031(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.InstancedStaticMeshComponent.InstancedStaticMeshMappingInfo
// 0x0018
struct FInstancedStaticMeshMappingInfo
{
	class UTexture2D*                                  LightmapTexture;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_8GKS[0x10];                                    // 0x0008(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.HierarchicalInstancedStaticMeshComponent.ClusterNode
// 0x0028
struct FClusterNode
{
	struct FVector                                     BoundMin;                                                  // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                FirstChild;                                                // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     BoundMax;                                                  // 0x0010(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                LastChild;                                                 // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                FirstInstance;                                             // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                LastInstance;                                              // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.HierarchicalInstancedStaticMeshComponent.ExpandedUniqueOctreeNode
// 0x004C
struct FExpandedUniqueOctreeNode
{
	struct FBox                                        CurrentBox;                                                // 0x0000(0x001C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Children[0x8];                                             // 0x001C(0x0020) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      bIsLeaf;                                                   // 0x003C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_VGWZ[0x3];                                     // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                InstanceStart;                                             // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                InstanceEnd;                                               // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                OcclusionIndex;                                            // 0x0048(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.NavigationTypes.NavDataConfig
// 0x0018 (0x0028 - 0x0010)
struct FNavDataConfig : public FNavAgentProperties
{
	struct FName                                       Name;                                                      // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FColor                                      Color;                                                     // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     DefaultQueryExtent;                                        // 0x001C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.NavLinkDefinition.NavigationSegmentLink
// 0x0030 (0x0050 - 0x0020)
struct FNavigationSegmentLink : public FNavigationLinkBase
{
	struct FVector                                     LeftStart;                                                 // 0x0020(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     LeftEnd;                                                   // 0x002C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     RightStart;                                                // 0x0038(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     RightEnd;                                                  // 0x0044(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.Skeleton.BoneNode
// 0x0010
struct FBoneNode
{
	struct FName                                       Name;                                                      // 0x0000(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor)
	int                                                ParentIndex;                                               // 0x0008(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_EBoneTranslationRetargetingMode> TranslationRetargetingMode;                                // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bLockBone;                                                 // 0x000D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bRemoveBone;                                               // 0x000E(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_EX6L[0x1];                                     // 0x000F(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.Skeleton.SkeletonToMeshLinkup
// 0x0020
struct FSkeletonToMeshLinkup
{
	TArray<int>                                        SkeletonToMeshTable;                                       // 0x0000(0x0010) (ZeroConstructor)
	TArray<int>                                        MeshToSkeletonTable;                                       // 0x0010(0x0010) (ZeroConstructor)

};

// ScriptStruct Engine.SmartNameContainer
// 0x0050
struct FSmartNameContainer
{
	unsigned char                                      UnknownData_ZXQQ[0x50];                                    // 0x0000(0x0050) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.Skeleton.AnimSlotGroup
// 0x0018
struct FAnimSlotGroup
{
	struct FName                                       GroupName;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FName>                               SlotNames;                                                 // 0x0008(0x0010) (ZeroConstructor)

};

// ScriptStruct Engine.SkeletalMesh.SkeletalMaterial
// 0x0010
struct FSkeletalMaterial
{
	class UMaterialInterface*                          MaterialInterface;                                         // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	bool                                               bEnableShadowCasting;                                      // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_T1AV[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.SkeletalMesh.BoneMirrorInfo
// 0x0008
struct FBoneMirrorInfo
{
	int                                                SourceIndex;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<CoreUObject_EAxis>                     BoneFlipAxis;                                              // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_WQSD[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.SkeletalMesh.MorphTargetMap
// 0x0010
struct FMorphTargetMap
{
	struct FName                                       Name;                                                      // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMorphTarget*                                MorphTarget;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.SkeletalMesh.ClothPhysicsProperties
// 0x0024
struct FClothPhysicsProperties
{
	float                                              BendResistance;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              ShearResistance;                                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              StretchLimit;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Friction;                                                  // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Damping;                                                   // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Drag;                                                      // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              GravityScale;                                              // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              InertiaBlend;                                              // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              SelfCollisionThickness;                                    // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.SkeletalMesh.ClothingAssetData
// 0x0040
struct FClothingAssetData
{
	struct FName                                       AssetName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     ApexFileName;                                              // 0x0008(0x0010) (Edit, ZeroConstructor)
	bool                                               bClothPropertiesChanged;                                   // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_DC4T[0x3];                                     // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FClothPhysicsProperties                     PhysicsProperties;                                         // 0x001C(0x0024) (Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.EngineTypes.ConstrainComponentPropName
// 0x0008
struct FConstrainComponentPropName
{
	struct FName                                       ComponentName;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.SkeletalMeshComponent.SingleAnimationPlayData
// 0x0020
struct FSingleAnimationPlayData
{
	class UAnimationAsset*                             AnimToPlay;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UVertexAnimation*                            VertexAnimToPlay;                                          // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      bSavedLooping : 1;                                         // 0x0010(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bSavedPlaying : 1;                                         // 0x0010(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      UnknownData_G42E[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SavedPosition;                                             // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              SavedPlayRate;                                             // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	unsigned char                                      UnknownData_8GGN[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.SkeletalMeshComponent.BoneModifier
// 0x0020
struct FBoneModifier
{
	int                                                BoneIndex;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Scale;                                                     // 0x0004(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Translation;                                               // 0x0010(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Recursive;                                                 // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_3Q71[0x3];                                     // 0x001D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.SkeletalMeshComponent.BoneModifierNamed
// 0x0028
struct FBoneModifierNamed
{
	struct FName                                       TheBoneName;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FBoneModifier                               TheBoneModifier;                                           // 0x0008(0x0020) (Edit, BlueprintVisible)

};

// ScriptStruct Engine.WheeledVehicleMovementComponent.ReplicatedVehicleState
// 0x0014
struct FReplicatedVehicleState
{
	float                                              SteeringInput;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              ThrottleInput;                                             // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              BrakeInput;                                                // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              HandbrakeInput;                                            // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                CurrentGear;                                               // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.WheeledVehicleMovementComponent.VehicleInputRate
// 0x0008
struct FVehicleInputRate
{
	float                                              RiseRate;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              FallRate;                                                  // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.WheeledVehicleMovementComponent4W.VehicleDifferential4WData
// 0x001C
struct FVehicleDifferential4WData
{
	TEnumAsByte<Engine_EVehicleDifferential4W>         DifferentialType;                                          // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_3EN1[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FrontRearSplit;                                            // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              FrontLeftRightSplit;                                       // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              RearLeftRightSplit;                                        // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              CentreBias;                                                // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              FrontBias;                                                 // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              RearBias;                                                  // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.WheeledVehicleMovementComponent4W.VehicleGearData
// 0x000C
struct FVehicleGearData
{
	float                                              Ratio;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              DownRatio;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              UpRatio;                                                   // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.WheeledVehicleMovementComponent4W.VehicleTransmissionData
// 0x0030
struct FVehicleTransmissionData
{
	bool                                               bUseGearAutoBox;                                           // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_3LLR[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              GearSwitchTime;                                            // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              GearAutoBoxLatency;                                        // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              FinalRatio;                                                // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	TArray<struct FVehicleGearData>                    ForwardGears;                                              // 0x0010(0x0010) (Edit, ZeroConstructor, AdvancedDisplay)
	float                                              ReverseGearRatio;                                          // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	float                                              NeutralGearUpRatio;                                        // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	float                                              ClutchStrength;                                            // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	unsigned char                                      UnknownData_HIGN[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.AtmosphericFogComponent.AtmospherePrecomputeParameters
// 0x002C
struct FAtmospherePrecomputeParameters
{
	float                                              DensityHeight;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              DecayHeight;                                               // 0x0004(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor)
	int                                                MaxScatteringOrder;                                        // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                TransmittanceTexWidth;                                     // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                TransmittanceTexHeight;                                    // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                IrradianceTexWidth;                                        // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                IrradianceTexHeight;                                       // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                InscatterAltitudeSampleNum;                                // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                InscatterMuNum;                                            // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                InscatterMuSNum;                                           // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                InscatterNuNum;                                            // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.SoundAttenuation.AttenuationSettings
// 0x0034
struct FAttenuationSettings
{
	unsigned char                                      bAttenuate : 1;                                            // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bSpatialize : 1;                                           // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bAttenuateWithLPF : 1;                                     // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      UnknownData_B0SL[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<Engine_ESoundDistanceModel>            DistanceAlgorithm;                                         // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ESoundDistanceCalc>             DistanceType;                                              // 0x0005(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_EAttenuationShape>              AttenuationShape;                                          // 0x0006(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_KMOV[0x1];                                     // 0x0007(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              dBAttenuationAtMax;                                        // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              OmniRadius;                                                // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              RadiusMin;                                                 // 0x0010(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor)
	float                                              RadiusMax;                                                 // 0x0014(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor)
	struct FVector                                     AttenuationShapeExtents;                                   // 0x0018(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              ConeOffset;                                                // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              FalloffDistance;                                           // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              LPFRadiusMin;                                              // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              LPFRadiusMax;                                              // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.AudioComponent.AudioComponentParam
// 0x0028
struct FAudioComponentParam
{
	struct FName                                       ParamName;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              FloatParam;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               BoolParam;                                                 // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_FWLX[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                IntParam;                                                  // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_X4C6[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundNodeWave*                              WaveParam;                                                 // 0x0018(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor)
	class USoundWave*                                  SoundWaveParam;                                            // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.EngineTypes.LightmassLightSettings
// 0x000C
struct FLightmassLightSettings
{
	float                                              IndirectLightingScale;                                     // 0x0000(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor)
	float                                              IndirectLightingSaturation;                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              ShadowExponent;                                            // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.EngineTypes.LightmassDirectionalLightSettings
// 0x0004 (0x0010 - 0x000C)
struct FLightmassDirectionalLightSettings : public FLightmassLightSettings
{
	float                                              LightSourceAngle;                                          // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.EngineTypes.LightmassPointLightSettings
// 0x0000 (0x000C - 0x000C)
struct FLightmassPointLightSettings : public FLightmassLightSettings
{

};

// ScriptStruct Engine.NavigationGraph.NavGraphNode
// 0x0018
struct FNavGraphNode
{
	class UObject*                                     Owner;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_21RB[0x10];                                    // 0x0008(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.LandscapeComponent.WeightmapLayerAllocationInfo
// 0x0018
struct FWeightmapLayerAllocationInfo
{
	struct FName                                       LayerName;                                                 // 0x0000(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor)
	class ULandscapeLayerInfoObject*                   LayerInfo;                                                 // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      WeightmapTextureIndex;                                     // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      WeightmapTextureChannel;                                   // 0x0011(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_B4RP[0x6];                                     // 0x0012(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.MaterialBillboardComponent.MaterialSpriteElement
// 0x0028
struct FMaterialSpriteElement
{
	class UMaterialInterface*                          Material;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UCurveFloat*                                 DistanceToOpacityCurve;                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      bSizeIsInScreenSpace : 1;                                  // 0x0010(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      UnknownData_F7YI[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              BaseSizeX;                                                 // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              BaseSizeY;                                                 // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_XLZH[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 DistanceToSizeCurve;                                       // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.EngineTypes.FractureEffect
// 0x0010
struct FFractureEffect
{
	class UParticleSystem*                             ParticleSystem;                                            // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class USoundBase*                                  Sound;                                                     // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.StaticMeshComponent.PaintedVertex
// 0x0014
struct FPaintedVertex
{
	struct FVector                                     Position;                                                  // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FPackedNormal                               Normal;                                                    // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FColor                                      Color;                                                     // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.StaticMeshComponent.StaticMeshComponentLODInfo
// 0x0028
struct FStaticMeshComponentLODInfo
{
	unsigned char                                      UnknownData_2VLF[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FPaintedVertex>                      PaintedVertices;                                           // 0x0010(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData_DUG2[0x8];                                     // 0x0020(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.ParticleSystem.ParticleSystemLOD
// 0x0001
struct FParticleSystemLOD
{
	unsigned char                                      UnknownData_MEO3[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.ParticleSystem.LODSoloTrack
// 0x0010
struct FLODSoloTrack
{
	TArray<unsigned char>                              SoloEnableSetting;                                         // 0x0000(0x0010) (ZeroConstructor, Transient)

};

// ScriptStruct Engine.ParticleSystem.NamedEmitterMaterial
// 0x0010
struct FNamedEmitterMaterial
{
	struct FName                                       Name;                                                      // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMaterialInterface*                          Material;                                                  // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.PlayerInput.InputAxisConfigEntry
// 0x0018
struct FInputAxisConfigEntry
{
	struct FName                                       AxisKeyName;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor)
	struct FInputAxisProperties                        AxisProperties;                                            // 0x0008(0x0010) (Edit)

};

// ScriptStruct Engine.ParticleModuleLocationBoneSocket.LocationBoneSocketInfo
// 0x0014
struct FLocationBoneSocketInfo
{
	struct FName                                       BoneSocketName;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Offset;                                                    // 0x0008(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.ConstraintInstance
// 0x0160
struct FConstraintInstance
{
	unsigned char                                      UnknownData_1EZR[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USceneComponent*                             OwnerComponent;                                            // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ZN1O[0xC];                                     // 0x0010(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       JointName;                                                 // 0x001C(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor)
	struct FName                                       ConstraintBone1;                                           // 0x0024(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       ConstraintBone2;                                           // 0x002C(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Pos1;                                                      // 0x0034(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     PriAxis1;                                                  // 0x0040(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     SecAxis1;                                                  // 0x004C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Pos2;                                                      // 0x0058(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     PriAxis2;                                                  // 0x0064(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     SecAxis2;                                                  // 0x0070(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      bDisableCollision : 1;                                     // 0x007C(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bEnableProjection : 1;                                     // 0x007C(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      UnknownData_83N5[0x3];                                     // 0x007D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ProjectionLinearTolerance;                                 // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              ProjectionAngularTolerance;                                // 0x0084(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ELinearConstraintMotion>        LinearXMotion;                                             // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ELinearConstraintMotion>        LinearYMotion;                                             // 0x0089(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ELinearConstraintMotion>        LinearZMotion;                                             // 0x008A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_KGFR[0x1];                                     // 0x008B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LinearLimitSize;                                           // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      bLinearLimitSoft : 1;                                      // 0x0090(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay)
	unsigned char                                      UnknownData_K4WC[0x3];                                     // 0x0091(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LinearLimitStiffness;                                      // 0x0094(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	float                                              LinearLimitDamping;                                        // 0x0098(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	unsigned char                                      bLinearBreakable : 1;                                      // 0x009C(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay)
	unsigned char                                      UnknownData_MPQ6[0x3];                                     // 0x009D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LinearBreakThreshold;                                      // 0x00A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	unsigned char                                      bSwingLimited : 1;                                         // 0x00A4(0x0001) BIT_FIELD (Deprecated, NoDestructor)
	unsigned char                                      bTwistLimited : 1;                                         // 0x00A4(0x0001) BIT_FIELD (Deprecated, NoDestructor)
	unsigned char                                      UnknownData_UKME[0x3];                                     // 0x00A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<Engine_EAngularConstraintMotion>       AngularSwing1Motion;                                       // 0x00A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_EAngularConstraintMotion>       AngularTwistMotion;                                        // 0x00A9(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_EAngularConstraintMotion>       AngularSwing2Motion;                                       // 0x00AA(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_JIDE[0x1];                                     // 0x00AB(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bSwingLimitSoft : 1;                                       // 0x00AC(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay)
	unsigned char                                      bTwistLimitSoft : 1;                                       // 0x00AC(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay)
	unsigned char                                      UnknownData_41C1[0x3];                                     // 0x00AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Swing1LimitAngle;                                          // 0x00B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              TwistLimitAngle;                                           // 0x00B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Swing2LimitAngle;                                          // 0x00B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              SwingLimitStiffness;                                       // 0x00BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	float                                              SwingLimitDamping;                                         // 0x00C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	float                                              TwistLimitStiffness;                                       // 0x00C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	float                                              TwistLimitDamping;                                         // 0x00C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	struct FRotator                                    AngularRotationOffset;                                     // 0x00CC(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      bAngularBreakable : 1;                                     // 0x00D8(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay)
	unsigned char                                      UnknownData_DLTU[0x3];                                     // 0x00D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AngularBreakThreshold;                                     // 0x00DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	unsigned char                                      bLinearXPositionDrive : 1;                                 // 0x00E0(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bLinearXVelocityDrive : 1;                                 // 0x00E0(0x0001) BIT_FIELD (Deprecated, NoDestructor)
	unsigned char                                      bLinearYPositionDrive : 1;                                 // 0x00E0(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bLinearYVelocityDrive : 1;                                 // 0x00E0(0x0001) BIT_FIELD (Deprecated, NoDestructor)
	unsigned char                                      bLinearZPositionDrive : 1;                                 // 0x00E0(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bLinearZVelocityDrive : 1;                                 // 0x00E0(0x0001) BIT_FIELD (Deprecated, NoDestructor)
	unsigned char                                      bLinearPositionDrive : 1;                                  // 0x00E0(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bLinearVelocityDrive : 1;                                  // 0x00E0(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      UnknownData_ZY73[0x3];                                     // 0x00E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     LinearPositionTarget;                                      // 0x00E4(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     LinearVelocityTarget;                                      // 0x00F0(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              LinearDriveSpring;                                         // 0x00FC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              LinearDriveDamping;                                        // 0x0100(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              LinearDriveForceLimit;                                     // 0x0104(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      bSwingPositionDrive : 1;                                   // 0x0108(0x0001) BIT_FIELD (Deprecated, NoDestructor)
	unsigned char                                      bSwingVelocityDrive : 1;                                   // 0x0108(0x0001) BIT_FIELD (Deprecated, NoDestructor)
	unsigned char                                      bTwistPositionDrive : 1;                                   // 0x0108(0x0001) BIT_FIELD (Deprecated, NoDestructor)
	unsigned char                                      bTwistVelocityDrive : 1;                                   // 0x0108(0x0001) BIT_FIELD (Deprecated, NoDestructor)
	unsigned char                                      bAngularSlerpDrive : 1;                                    // 0x0108(0x0001) BIT_FIELD (Deprecated, NoDestructor)
	unsigned char                                      bAngularOrientationDrive : 1;                              // 0x0108(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bAngularVelocityDrive : 1;                                 // 0x0108(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      UnknownData_ZR23[0x7];                                     // 0x0109(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FQuat                                       AngularPositionTarget;                                     // 0x0110(0x0010) (Deprecated, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_EAngularDriveMode>              AngularDriveMode;                                          // 0x0120(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_QQOK[0x3];                                     // 0x0121(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRotator                                    AngularOrientationTarget;                                  // 0x0124(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     AngularVelocityTarget;                                     // 0x0130(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              AngularDriveSpring;                                        // 0x013C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              AngularDriveDamping;                                       // 0x0140(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              AngularDriveForceLimit;                                    // 0x0144(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_7OBM[0x18];                                    // 0x0148(0x0018) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.PlayerInput.InputActionKeyMapping
// 0x0028
struct FInputActionKeyMapping
{
	struct FName                                       ActionName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FKey                                        Key;                                                       // 0x0008(0x0018) (Edit)
	unsigned char                                      bShift : 1;                                                // 0x0020(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bCtrl : 1;                                                 // 0x0020(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bAlt : 1;                                                  // 0x0020(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bCmd : 1;                                                  // 0x0020(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      UnknownData_6WNB[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.MaterialInstance.FontParameterValue
// 0x0028
struct FFontParameterValue
{
	struct FName                                       ParameterName;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UFont*                                       FontValue;                                                 // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                FontPage;                                                  // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGuid                                       ExpressionGUID;                                            // 0x0014(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData_V05B[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.NavCollision.NavCollisionBox
// 0x0018
struct FNavCollisionBox
{
	struct FVector                                     Offset;                                                    // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Extent;                                                    // 0x000C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.ParticleModuleBeamModifier.BeamModifierOptions
// 0x0004
struct FBeamModifierOptions
{
	unsigned char                                      bModify : 1;                                               // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bScale : 1;                                                // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bLock : 1;                                                 // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      UnknownData_YOYU[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.ParticleModule.ParticleRandomSeedInfo
// 0x0020
struct FParticleRandomSeedInfo
{
	struct FName                                       ParameterName;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      bGetSeedFromInstance : 1;                                  // 0x0008(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bInstanceSeedIsIndex : 1;                                  // 0x0008(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bResetSeedOnEmitterLooping : 1;                            // 0x0008(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bRandomlySelectSeedArray : 1;                              // 0x0008(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      UnknownData_XHVK[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<int>                                        RandomSeeds;                                               // 0x0010(0x0010) (Edit, ZeroConstructor)

};

// ScriptStruct Engine.ParticleModuleEventGenerator.ParticleEvent_GenerateInfo
// 0x0028
struct FParticleEvent_GenerateInfo
{
	TEnumAsByte<Engine_EParticleEventType>             Type;                                                      // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_IOKP[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Frequency;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                ParticleFrequency;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      FirstTimeOnly : 1;                                         // 0x000C(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      LastTimeOnly : 1;                                          // 0x000C(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      UseReflectedImpactVector : 1;                              // 0x000C(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bUseOrbitOffset : 1;                                       // 0x000C(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      UnknownData_SNL4[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       CustomName;                                                // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class UParticleModuleEventSendToGame*>      ParticleModuleEventsToSendToGame;                          // 0x0018(0x0010) (Edit, ExportObject, ZeroConstructor, ContainsInstancedReference)

};

// ScriptStruct Engine.Canvas.WrappedStringElement
// 0x0018
struct FWrappedStringElement
{
	struct FString                                     Value;                                                     // 0x0000(0x0010) (ZeroConstructor)
	struct FVector2D                                   LineExtent;                                                // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.Canvas.TextSizingParameters
// 0x0028
struct FTextSizingParameters
{
	float                                              DrawX;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              DrawY;                                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              DrawXL;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              DrawYL;                                                    // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   Scaling;                                                   // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	class UFont*                                       DrawFont;                                                  // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   SpacingAdjust;                                             // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.Canvas.CanvasIcon
// 0x0018
struct FCanvasIcon
{
	class UTexture*                                    Texture;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              U;                                                         // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              V;                                                         // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              UL;                                                        // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              VL;                                                        // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.CurveBase.IntegralKey
// 0x0008
struct FIntegralKey
{
	float                                              Time;                                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Value;                                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.SkeletalMeshComponent.IKLegInfo
// 0x00E0
struct FIKLegInfo
{
	struct FRotator                                    OldTipRotation;                                            // 0x0000(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_KEXG[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FQuat                                       OldTipRotationQuat;                                        // 0x0010(0x0010) (Transient, IsPlainOldData, NoDestructor)
	TArray<struct FVector>                             FabrikPositions;                                           // 0x0020(0x0010) (ZeroConstructor, Transient)
	struct FName                                       RootBoneName;                                              // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       IKBoneName;                                                // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              FeetOffset;                                                // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                                    IKBoneRotationOffset;                                      // 0x0044(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     HitNormalWS;                                               // 0x0050(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	struct FVector                                     HitLocationWS;                                             // 0x005C(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	struct FVector                                     LastTargetHitNormalWS;                                     // 0x0068(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	struct FVector                                     LastTargetHitLocationWS;                                   // 0x0074(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	struct UObject_FTransform                          EffectorTransformCS;                                       // 0x0080(0x0030) (BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor)
	float                                              IKAlpha;                                                   // 0x00B0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	struct FBoneReference                              TipBone;                                                   // 0x00B4(0x000C) (Transient)
	struct FBoneReference                              RootBone;                                                  // 0x00C0(0x000C) (Transient)
	bool                                               bInit;                                                     // 0x00CC(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	bool                                               bHasGround;                                                // 0x00CD(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_MS6I[0x2];                                     // 0x00CE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Mute;                                                      // 0x00D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              TimeIKStarted;                                             // 0x00D4(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_EPQ9[0x8];                                     // 0x00D8(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.AnimSequence.ScaleTrack
// 0x0020
struct FScaleTrack
{
	TArray<struct FVector>                             ScaleKeys;                                                 // 0x0000(0x0010) (ZeroConstructor)
	TArray<float>                                      Times;                                                     // 0x0010(0x0010) (ZeroConstructor)

};

// ScriptStruct Engine.MaterialExpressionMaterialFunctionCall.FunctionExpressionInput
// 0x0050
struct FFunctionExpressionInput
{
	class UMaterialExpressionFunctionInput*            ExpressionInput;                                           // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	struct FGuid                                       ExpressionInputId;                                         // 0x0008(0x0010) (ZeroConstructor)
	struct FExpressionInput                            Input;                                                     // 0x0018(0x0038) (ZeroConstructor)

};

// ScriptStruct Engine.ParticleModuleOrbit.OrbitOptions
// 0x0004
struct FOrbitOptions
{
	unsigned char                                      bProcessDuringSpawn : 1;                                   // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bProcessDuringUpdate : 1;                                  // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bUseEmitterTime : 1;                                       // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      UnknownData_T8UE[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.ParticleModuleParameterDynamic.EmitterDynamicParameter
// 0x0050
struct FEmitterDynamicParameter
{
	struct FName                                       ParamName;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor)
	unsigned char                                      bUseEmitterTime : 1;                                       // 0x0008(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bSpawnTimeOnly : 1;                                        // 0x0008(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      UnknownData_T8TX[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<Engine_EEmitterDynamicParameterValue>  ValueMethod;                                               // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_PZ7X[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bScaleVelocityByParamValue : 1;                            // 0x0010(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      UnknownData_CIDO[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRawDistributionFloat                       ParamValue;                                                // 0x0018(0x0038) (Edit, ContainsInstancedReference)

};

// ScriptStruct Engine.ParticleEmitter.ParticleBurst
// 0x000C
struct FParticleBurst
{
	int                                                Count;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                CountLow;                                                  // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Time;                                                      // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.PhysicsSettings.PhysicalSurfaceName
// 0x000C
struct FPhysicalSurfaceName
{
	TEnumAsByte<Engine_EPhysicalSurface>               Type;                                                      // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_U8VT[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       Name;                                                      // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.AnimSequenceBase.AnimNotifyTrack
// 0x0028
struct FAnimNotifyTrack
{
	struct FName                                       TrackName;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                TrackColor;                                                // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ADFT[0x10];                                    // 0x0018(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.AnimCompositeBase.RootMotionExtractionStep
// 0x0010
struct FRootMotionExtractionStep
{
	class UAnimSequence*                               AnimSequence;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              StartPosition;                                             // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              EndPosition;                                               // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.AnimSequence.CompressedTrack
// 0x0038
struct FCompressedTrack
{
	TArray<unsigned char>                              ByteStream;                                                // 0x0000(0x0010) (ZeroConstructor)
	TArray<float>                                      Times;                                                     // 0x0010(0x0010) (ZeroConstructor)
	float                                              Mins[0x3];                                                 // 0x0020(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Ranges[0x3];                                               // 0x002C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.AnimSequence.RawAnimSequenceTrack
// 0x0030
struct FRawAnimSequenceTrack
{
	TArray<struct FVector>                             PosKeys;                                                   // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FQuat>                               RotKeys;                                                   // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FVector>                             ScaleKeys;                                                 // 0x0020(0x0010) (ZeroConstructor)

};

// ScriptStruct Engine.AnimSequence.AnimSequenceTrackContainer
// 0x0020
struct FAnimSequenceTrackContainer
{
	TArray<struct FRawAnimSequenceTrack>               AnimationTracks;                                           // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FName>                               TrackNames;                                                // 0x0010(0x0010) (ZeroConstructor)

};

// ScriptStruct Engine.AnimInstance.BoneTransform
// 0x0040
struct FBoneTransform
{
	int                                                BoneIndex;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_I8EQ[0xC];                                     // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct UObject_FTransform                          Transform;                                                 // 0x0010(0x0030) (IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.AnimInstance.A2CSPose
// 0x0018 (0x0028 - 0x0010)
struct FA2CSPose : public FA2Pose
{
	unsigned char                                      UnknownData_OXJJ[0x8];                                     // 0x0010(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<unsigned char>                              ComponentSpaceFlags;                                       // 0x0018(0x0010) (ZeroConstructor)

};

// ScriptStruct Engine.AnimMontage.AnimMontageInstance
// 0x0070
struct FAnimMontageInstance
{
	class UAnimMontage*                                Montage;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              DesiredWeight;                                             // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Weight;                                                    // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              BlendTime;                                                 // 0x0010(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	float                                              BlendOutTimeOverride;                                      // 0x0014(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	bool                                               bPauseOnFinish;                                            // 0x0018(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_E7KY[0x3];                                     // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DefaultBlendTimeMultiplier;                                // 0x001C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	TArray<int>                                        NextSections;                                              // 0x0020(0x0010) (ZeroConstructor)
	TArray<int>                                        PrevSections;                                              // 0x0030(0x0010) (ZeroConstructor)
	bool                                               bPlaying;                                                  // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_Q8GH[0x27];                                    // 0x0041(0x0027) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Position;                                                  // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              PlayRate;                                                  // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.BlendSpaceBase.GridBlendSample
// 0x001C
struct FGridBlendSample
{
	struct FEditorElement                              GridElement;                                               // 0x0000(0x0018)
	float                                              BlendWeight;                                               // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.AnimStateMachineTypes.AnimationTransitionRule
// 0x0010
struct FAnimationTransitionRule
{
	struct FName                                       RuleToExecute;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               TransitionReturnVal;                                       // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_18AB[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                TransitionIndex;                                           // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.AnimStateMachineTypes.AnimationStateBase
// 0x0008
struct FAnimationStateBase
{
	struct FName                                       StateName;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.AnimStateMachineTypes.AnimationState
// 0x0020 (0x0028 - 0x0008)
struct FAnimationState : public FAnimationStateBase
{
	TArray<struct FAnimationTransitionRule>            Transitions;                                               // 0x0008(0x0010) (ZeroConstructor)
	int                                                StateRootNodeIndex;                                        // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                StartNotify;                                               // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                EndNotify;                                                 // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                FullyBlendedNotify;                                        // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.Blueprint.EditedDocumentInfo
// 0x0018
struct FEditedDocumentInfo
{
	class UObject*                                     EditedObject;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   SavedViewOffset;                                           // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              SavedZoomAmount;                                           // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_12AZ[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.Blueprint.BPInterfaceDescription
// 0x0018
struct FBPInterfaceDescription
{
	class UClass*                                      Interface;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class UEdGraph*>                            Graphs;                                                    // 0x0008(0x0010) (ZeroConstructor)

};

// ScriptStruct Engine.EdGraphPin.SimpleMemberReference
// 0x0020
struct FSimpleMemberReference
{
	class UClass*                                      MemberParentClass;                                         // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       MemberName;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGuid                                       MemberGuid;                                                // 0x0010(0x0010) (ZeroConstructor)

};

// ScriptStruct Engine.EdGraphPin.EdGraphPinType
// 0x0050
struct FEdGraphPinType
{
	struct FString                                     PinCategory;                                               // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     PinSubCategory;                                            // 0x0010(0x0010) (ZeroConstructor)
	TWeakObjectPtr<class UObject>                      PinSubCategoryObject;                                      // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FSimpleMemberReference                      PinSubCategoryMemberReference;                             // 0x0028(0x0020)
	bool                                               bIsArray;                                                  // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bIsReference;                                              // 0x0049(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bIsConst;                                                  // 0x004A(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bIsWeakPointer;                                            // 0x004B(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_WIMM[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.Blueprint.BPVariableDescription
// 0x00B8
struct FBPVariableDescription
{
	struct FName                                       VarName;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGuid                                       VarGuid;                                                   // 0x0008(0x0010) (ZeroConstructor)
	struct FEdGraphPinType                             VarType;                                                   // 0x0018(0x0050) (Edit)
	struct FString                                     FriendlyName;                                              // 0x0068(0x0010) (Edit, ZeroConstructor)
	struct FName                                       Category;                                                  // 0x0078(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint64_t                                           PropertyFlags;                                             // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      RepCondition;                                              // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_Y2QG[0x3];                                     // 0x0089(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       RepNotifyFunc;                                             // 0x008C(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_27OO[0x4];                                     // 0x0094(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FBPVariableMetaDataEntry>            MetaDataArray;                                             // 0x0098(0x0010) (Edit, ZeroConstructor)
	struct FString                                     DefaultValue;                                              // 0x00A8(0x0010) (Edit, ZeroConstructor)

};

// ScriptStruct Engine.BlendSpaceBase.PerBoneInterpolation
// 0x0010
struct FPerBoneInterpolation
{
	struct FBoneReference                              BoneReference;                                             // 0x0000(0x000C) (Edit)
	float                                              InterpolationSpeedPerSec;                                  // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.BodySetup.KSphereElem
// 0x0050
struct FKSphereElem
{
	struct FMatrix                                     TM;                                                        // 0x0000(0x0040) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor)
	struct FVector                                     Center;                                                    // 0x0040(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor)
	float                                              Radius;                                                    // 0x004C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.CollisionProfile.CollisionResponseTemplate
// 0x0060
struct FCollisionResponseTemplate
{
	struct FName                                       Name;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ECollisionEnabled>              CollisionEnabled;                                          // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_66LL[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       ObjectTypeName;                                            // 0x000C(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_PP7B[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FResponseChannel>                    CustomResponses;                                           // 0x0018(0x0010) (ZeroConstructor)
	struct FString                                     HelpMessage;                                               // 0x0028(0x0010) (ZeroConstructor)
	bool                                               bCanModify;                                                // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_PDPZ[0x27];                                    // 0x0039(0x0027) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.BlendSpaceBase.BlendSample
// 0x0018
struct FBlendSample
{
	class UAnimSequence*                               Animation;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     SampleValue;                                               // 0x0008(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_D9G9[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.AutomationTestSettings.EditorMapPerformanceTestDefinition
// 0x0018
struct FEditorMapPerformanceTestDefinition
{
	struct FFilePath                                   PerformanceTestmap;                                        // 0x0000(0x0010) (Edit, Config)
	int                                                TestTimer;                                                 // 0x0010(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_UIIL[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.AnimStateMachineTypes.AnimationTransitionBetweenStates
// 0x001C (0x0024 - 0x0008)
struct FAnimationTransitionBetweenStates : public FAnimationStateBase
{
	int                                                PreviousState;                                             // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                NextState;                                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              CrossfadeDuration;                                         // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                StartNotify;                                               // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                EndNotify;                                                 // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                InterruptNotify;                                           // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETransitionBlendMode>           CrossfadeMode;                                             // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETransitionLogicType>           LogicType;                                                 // 0x0021(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_CSRO[0x2];                                     // 0x0022(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.AnimStateMachineTypes.BakedAnimationStateMachine
// 0x0030
struct FBakedAnimationStateMachine
{
	struct FName                                       MachineName;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                InitialState;                                              // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_6R7L[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FBakedAnimationState>                States;                                                    // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FAnimationTransitionBetweenStates>   Transitions;                                               // 0x0020(0x0010) (ZeroConstructor)

};

// ScriptStruct Engine.BodySetup.KBoxElem
// 0x0070
struct FKBoxElem
{
	struct FMatrix                                     TM;                                                        // 0x0000(0x0040) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor)
	struct FVector                                     Center;                                                    // 0x0040(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_M4XF[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FQuat                                       Orientation;                                               // 0x0050(0x0010) (Edit, EditConst, IsPlainOldData, NoDestructor)
	float                                              X;                                                         // 0x0060(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor)
	float                                              Y;                                                         // 0x0064(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor)
	float                                              Z;                                                         // 0x0068(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_DADF[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.BoxElement2D
// 0x0014
struct FBoxElement2D
{
	struct FVector2D                                   Center;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor)
	float                                              Width;                                                     // 0x0008(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor)
	float                                              Height;                                                    // 0x000C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor)
	float                                              Angle;                                                     // 0x0010(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.ConvexElement2D
// 0x0010
struct FConvexElement2D
{
	TArray<struct FVector2D>                           VertexData;                                                // 0x0000(0x0010) (ZeroConstructor)

};

// ScriptStruct Engine.CircleElement2D
// 0x000C
struct FCircleElement2D
{
	struct FVector2D                                   Center;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor)
	float                                              Radius;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.AggregateGeometry2D
// 0x0030
struct FAggregateGeometry2D
{
	TArray<struct FCircleElement2D>                    CircleElements;                                            // 0x0000(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	TArray<struct FBoxElement2D>                       BoxElements;                                               // 0x0010(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	TArray<struct FConvexElement2D>                    ConvexElements;                                            // 0x0020(0x0010) (Edit, EditFixedSize, ZeroConstructor)

};

// ScriptStruct Engine.BrushBuilder.BuilderPoly
// 0x0020
struct FBuilderPoly
{
	TArray<int>                                        VertexIndices;                                             // 0x0000(0x0010) (ZeroConstructor)
	int                                                Direction;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       ItemName;                                                  // 0x0014(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                PolyFlags;                                                 // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.CameraModifier_CameraShake.CameraShakeInstance
// 0x00A0
struct FCameraShakeInstance
{
	class UCameraShake*                                SourceShake;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       SourceShakeName;                                           // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              OscillatorTimeRemaining;                                   // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      bBlendingIn : 1;                                           // 0x0014(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      UnknownData_3SOH[0x3];                                     // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CurrentBlendInTime;                                        // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      bBlendingOut : 1;                                          // 0x001C(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      UnknownData_R5TP[0x3];                                     // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CurrentBlendOutTime;                                       // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     LocSinOffset;                                              // 0x0024(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     RotSinOffset;                                              // 0x0030(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              FOVSinOffset;                                              // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Scale;                                                     // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Speed;                                                     // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	class UCameraAnimInst*                             AnimInst;                                                  // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ECameraAnimPlaySpace>           PlaySpace;                                                 // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_SOBF[0xF];                                     // 0x0051(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMatrix                                     UserPlaySpaceMatrix;                                       // 0x0060(0x0040) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.CameraShake.FOscillator
// 0x000C
struct FFOscillator
{
	float                                              Amplitude;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Frequency;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_EInitialOscillatorOffset>       InitialOffset;                                             // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_3Z19[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.CameraShake.VOscillator
// 0x0024
struct FVOscillator
{
	struct FFOscillator                                X;                                                         // 0x0000(0x000C) (Edit)
	struct FFOscillator                                Y;                                                         // 0x000C(0x000C) (Edit)
	struct FFOscillator                                Z;                                                         // 0x0018(0x000C) (Edit)

};

// ScriptStruct Engine.InterpTrackMove.InterpLookupTrack
// 0x0010
struct FInterpLookupTrack
{
	TArray<struct FInterpLookupPoint>                  Points;                                                    // 0x0000(0x0010) (ZeroConstructor)

};

// ScriptStruct Engine.PlatformInterfaceBase.PlatformInterfaceDelegateResult
// 0x0038
struct FPlatformInterfaceDelegateResult
{
	bool                                               bSuccessful;                                               // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_6V9S[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPlatformInterfaceData                      Data;                                                      // 0x0008(0x0030)

};

// ScriptStruct Engine.MicroTransactionBase.PurchaseInfo
// 0x0040
struct FPurchaseInfo
{
	struct FString                                     Identifier;                                                // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     DisplayName;                                               // 0x0010(0x0010) (ZeroConstructor)
	struct FString                                     DisplayDescription;                                        // 0x0020(0x0010) (ZeroConstructor)
	struct FString                                     DisplayPrice;                                              // 0x0030(0x0010) (ZeroConstructor)

};

// ScriptStruct Engine.Rig.RigTransformConstraint
// 0x0010
struct FRigTransformConstraint
{
	TEnumAsByte<Engine_EConstraintTransform>           TranformType;                                              // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_U6B3[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       ParentSpace;                                               // 0x0004(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Weight;                                                    // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.DestructibleMesh.DestructibleDebrisParameters
// 0x002C
struct FDestructibleDebrisParameters
{
	float                                              DebrisLifetimeMin;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              DebrisLifetimeMax;                                         // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              DebrisMaxSeparationMin;                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              DebrisMaxSeparationMax;                                    // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FBox                                        ValidBounds;                                               // 0x0010(0x001C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.AutomationTestSettings.OpenTestAsset
// 0x0018
struct FOpenTestAsset
{
	struct FFilePath                                   AssetToOpen;                                               // 0x0000(0x0010) (Edit)
	bool                                               bSkipTestWhenUnAttended;                                   // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_3DIU[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.AutomationTestSettings.ExternalToolDefinition
// 0x0060
struct FExternalToolDefinition
{
	struct FString                                     ToolName;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor, Config)
	struct FFilePath                                   ExecutablePath;                                            // 0x0010(0x0010) (Edit, Config)
	struct FString                                     CommandLineOptions;                                        // 0x0020(0x0010) (Edit, ZeroConstructor, Config)
	struct FDirectoryPath                              WorkingDirectory;                                          // 0x0030(0x0010) (Edit, Config)
	struct FString                                     ScriptExtension;                                           // 0x0040(0x0010) (Edit, ZeroConstructor, Config)
	struct FDirectoryPath                              ScriptDirectory;                                           // 0x0050(0x0010) (Edit, Config)

};

// ScriptStruct Engine.ParticleModuleTypeDataGpu.GPUSpriteResourceData
// 0x0150
struct FGPUSpriteResourceData
{
	TArray<struct FColor>                              QuantizedColorSamples;                                     // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FColor>                              QuantizedMiscSamples;                                      // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FColor>                              QuantizedSimulationAttrSamples;                            // 0x0020(0x0010) (ZeroConstructor)
	struct FVector4                                    ColorScale;                                                // 0x0030(0x0010) (ZeroConstructor)
	struct FVector4                                    ColorBias;                                                 // 0x0040(0x0010) (ZeroConstructor)
	struct FVector4                                    MiscScale;                                                 // 0x0050(0x0010) (ZeroConstructor)
	struct FVector4                                    MiscBias;                                                  // 0x0060(0x0010) (ZeroConstructor)
	struct FVector4                                    SimulationAttrCurveScale;                                  // 0x0070(0x0010) (ZeroConstructor)
	struct FVector4                                    SimulationAttrCurveBias;                                   // 0x0080(0x0010) (ZeroConstructor)
	struct FVector4                                    SubImageSize;                                              // 0x0090(0x0010) (ZeroConstructor)
	struct FVector4                                    SizeBySpeed;                                               // 0x00A0(0x0010) (ZeroConstructor)
	struct FVector                                     ConstantAcceleration;                                      // 0x00B0(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     OrbitOffsetBase;                                           // 0x00BC(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     OrbitOffsetRange;                                          // 0x00C8(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     OrbitFrequencyBase;                                        // 0x00D4(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     OrbitFrequencyRange;                                       // 0x00E0(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     OrbitPhaseBase;                                            // 0x00EC(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     OrbitPhaseRange;                                           // 0x00F8(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              GlobalVectorFieldScale;                                    // 0x0104(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              GlobalVectorFieldTightness;                                // 0x0108(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              PerParticleVectorFieldScale;                               // 0x010C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              PerParticleVectorFieldBias;                                // 0x0110(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              DragCoefficientScale;                                      // 0x0114(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              DragCoefficientBias;                                       // 0x0118(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              ResilienceScale;                                           // 0x011C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              ResilienceBias;                                            // 0x0120(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              CollisionRadiusScale;                                      // 0x0124(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              CollisionRadiusBias;                                       // 0x0128(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              CollisionTimeBias;                                         // 0x012C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              OneMinusFriction;                                          // 0x0130(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              RotationRateScale;                                         // 0x0134(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              CameraMotionBlurAmount;                                    // 0x0138(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_EParticleScreenAlignment>       ScreenAlignment;                                           // 0x013C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_EParticleAxisLock>              LockAxisFlag;                                              // 0x013D(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_EHIV[0x2];                                     // 0x013E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   PivotOffset;                                               // 0x0140(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_JICR[0x8];                                     // 0x0148(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.DialogueTypes.DialogueWaveParameter
// 0x0020
struct FDialogueWaveParameter
{
	class UDialogueWave*                               DialogueWave;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FDialogueContext                            Context;                                                   // 0x0008(0x0018) (Edit)

};

// ScriptStruct Engine.SoundNodeDistanceCrossFade.DistanceDatum
// 0x0014
struct FDistanceDatum
{
	float                                              FadeInDistanceStart;                                       // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              FadeInDistanceEnd;                                         // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              FadeOutDistanceStart;                                      // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              FadeOutDistanceEnd;                                        // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Volume;                                                    // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.SoundNodeModulatorContinuous.ModulatorContinuousParams
// 0x0020
struct FModulatorContinuousParams
{
	struct FName                                       ParameterName;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Default;                                                   // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              MinInput;                                                  // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              MaxInput;                                                  // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              MinOutput;                                                 // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              MaxOutput;                                                 // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_EModulationParamMode>           ParamMode;                                                 // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_YAT2[0x3];                                     // 0x001D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.SubsurfaceProfile.SubsurfaceProfileStruct
// 0x0024
struct FSubsurfaceProfileStruct
{
	float                                              ScatterRadius;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                SubsurfaceColor;                                           // 0x0004(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                FalloffColor;                                              // 0x0014(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.TimelineTemplate.TTTrackBase
// 0x000C
struct FTTTrackBase
{
	struct FName                                       TrackName;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bIsExternalCurve;                                          // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_D8CU[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.TimelineTemplate.TTEventTrack
// 0x000C (0x0018 - 0x000C)
struct FTTEventTrack : public FTTTrackBase
{
	unsigned char                                      UnknownData_NVBH[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 CurveKeys;                                                 // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.TimelineTemplate.TTFloatTrack
// 0x000C (0x0018 - 0x000C)
struct FTTFloatTrack : public FTTTrackBase
{
	unsigned char                                      UnknownData_NVKU[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 CurveFloat;                                                // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.TimelineTemplate.TTVectorTrack
// 0x000C (0x0018 - 0x000C)
struct FTTVectorTrack : public FTTTrackBase
{
	unsigned char                                      UnknownData_IGO0[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveVector*                                CurveVector;                                               // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.TimelineTemplate.TTLinearColorTrack
// 0x000C (0x0018 - 0x000C)
struct FTTLinearColorTrack : public FTTTrackBase
{
	unsigned char                                      UnknownData_48EY[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveLinearColor*                           CurveLinearColor;                                          // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.TouchInterface.TouchInputControl
// 0x0068
struct FTouchInputControl
{
	class UTexture2D*                                  Image1;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UTexture2D*                                  Image2;                                                    // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   Center;                                                    // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   VisualSize;                                                // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   ThumbSize;                                                 // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   InteractionSize;                                           // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   InputScale;                                                // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FKey                                        MainInputKey;                                              // 0x0038(0x0018) (Edit)
	struct FKey                                        AltInputKey;                                               // 0x0050(0x0018) (Edit)

};

// ScriptStruct Engine.WorldComposition.EditorTileInitialState
// 0x0018
struct FEditorTileInitialState
{
	struct FString                                     LevelName;                                                 // 0x0000(0x0010) (ZeroConstructor)
	bool                                               bWasInitiallyLoaded;                                       // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bWasInitiallyVisible;                                      // 0x0011(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_372D[0x6];                                     // 0x0012(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.EngineTypes.ProxySettings
// 0x0028
struct FProxySettings
{
	int                                                ScreenSize;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                TextureWidth;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                TextureHeight;                                             // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bRecalculateNormals;                                       // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_JNW0[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              HardAngleThreshold;                                        // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                MergeDistance;                                             // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bUseClippingPlane;                                         // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_PD3J[0x3];                                     // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ClippingLevel;                                             // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                AxisIndex;                                                 // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bPlaneNegativeHalfspace;                                   // 0x0024(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bUseMassiveLOD;                                            // 0x0025(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bUseAggregateLOD;                                          // 0x0026(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bFlatterMaterialBeforeProcess;                             // 0x0027(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.EngineTypes.DepthFieldGlowInfo
// 0x002C
struct FDepthFieldGlowInfo
{
	unsigned char                                      bEnableGlow : 1;                                           // 0x0000(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      UnknownData_UYL5[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                GlowColor;                                                 // 0x0004(0x0010) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   GlowOuterRadius;                                           // 0x0014(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   GlowInnerRadius;                                           // 0x001C(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              ScreenPercentageLerpScalar;                                // 0x0024(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      bUseOldShader : 1;                                         // 0x0028(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      UnknownData_9M8W[0x3];                                     // 0x0029(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.Skeleton.NameMapping
// 0x0010
struct FNameMapping
{
	struct FName                                       NodeName;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       BoneName;                                                  // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.Skeleton.RigConfiguration
// 0x0018
struct FRigConfiguration
{
	class URig*                                        Rig;                                                       // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FNameMapping>                        BoneMappingTable;                                          // 0x0008(0x0010) (ZeroConstructor)

};

// ScriptStruct Engine.Skeleton.BoneReductionSetting
// 0x0010
struct FBoneReductionSetting
{
	TArray<struct FName>                               BonesToRemove;                                             // 0x0000(0x0010) (ZeroConstructor)

};

// ScriptStruct Engine.AnimInstance.PerBoneBlendWeight
// 0x0008
struct FPerBoneBlendWeight
{
	int                                                SourceIndex;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              BlendWeight;                                               // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.AnimInstance.PerBoneBlendWeights
// 0x0010
struct FPerBoneBlendWeights
{
	TArray<struct FPerBoneBlendWeight>                 BoneBlendWeights;                                          // 0x0000(0x0010) (ZeroConstructor)

};

// ScriptStruct Engine.AnimBlueprint.AnimParentNodeAssetOverride
// 0x0018
struct FAnimParentNodeAssetOverride
{
	class UAnimationAsset*                             NewAsset;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGuid                                       ParentNodeGuid;                                            // 0x0008(0x0010) (ZeroConstructor)

};

// ScriptStruct Engine.DataTable.DataTableCategoryHandle
// 0x0018
struct FDataTableCategoryHandle
{
	class UDataTable*                                  DataTable;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       ColumnName;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       RowContents;                                               // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.DataTable.DataTableRowHandle
// 0x0010
struct FDataTableRowHandle
{
	class UDataTable*                                  DataTable;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       RowName;                                                   // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.Texture.TexturePlatformData
// 0x0020
struct FTexturePlatformData
{
	unsigned char                                      UnknownData_EZ2S[0x20];                                    // 0x0000(0x0020) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.Texture.TextureSource
// 0x0058
struct FTextureSource
{
	unsigned char                                      UnknownData_7DCL[0x58];                                    // 0x0000(0x0058) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.AnimBlueprintGeneratedClass.AnimBlueprintDebugData
// 0x0001
struct FAnimBlueprintDebugData
{
	unsigned char                                      UnknownData_7AOX[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.AnimBlueprintGeneratedClass.AnimationFrameSnapshot
// 0x0001
struct FAnimationFrameSnapshot
{
	unsigned char                                      UnknownData_57JB[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.AnimBlueprintGeneratedClass.StateMachineDebugData
// 0x00B0
struct FStateMachineDebugData
{
	unsigned char                                      UnknownData_771Y[0xB0];                                    // 0x0000(0x00B0) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.Console.AutoCompleteNode
// 0x0028
struct FAutoCompleteNode
{
	int                                                IndexChar;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_SX6P[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<int>                                        AutoCompleteListIndices;                                   // 0x0008(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData_7O2V[0x10];                                    // 0x0018(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.CurveTable.CurveTableRowHandle
// 0x0010
struct FCurveTableRowHandle
{
	class UCurveTable*                                 CurveTable;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       RowName;                                                   // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.DistributionVector.Vector4Distribution
// 0x0028
struct FVector4Distribution
{
	struct FDistributionLookupTable                    Table;                                                     // 0x0000(0x0028) (ZeroConstructor)

};

// ScriptStruct Engine.DistributionVector.VectorDistribution
// 0x0028
struct FVectorDistribution
{
	struct FDistributionLookupTable                    Table;                                                     // 0x0000(0x0028) (ZeroConstructor)

};

// ScriptStruct Engine.EdGraph.GraphReference
// 0x0020
struct FGraphReference
{
	class UEdGraph*                                    MacroGraph;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected)
	class UBlueprint*                                  GraphBlueprint;                                            // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected)
	struct FGuid                                       GraphGuid;                                                 // 0x0010(0x0010) (ZeroConstructor, Protected)

};

// ScriptStruct Engine.EdGraphSchema.EdGraphSchemaAction
// 0x0090
struct FEdGraphSchemaAction
{
	unsigned char                                      UnknownData_HCRG[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       MenuDescription;                                           // 0x0008(0x0018) ELEMENT_SIZE_MISMATCH
	unsigned char                                      UnknownData_T6T1[0x10];                                    // 0x0000(0x0010) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FString                                     TooltipDescription;                                        // 0x0030(0x0010) (ZeroConstructor)
	struct FString                                     Category;                                                  // 0x0040(0x0010) (ZeroConstructor)
	struct FString                                     Keywords;                                                  // 0x0050(0x0010) (ZeroConstructor)
	int                                                Grouping;                                                  // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                SectionID;                                                 // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       CachedSearchTitle;                                         // 0x0068(0x0018) ELEMENT_SIZE_MISMATCH
	unsigned char                                      UnknownData_GYJY[0x10];                                    // 0x0068(0x0010) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};

// ScriptStruct Engine.EdGraphSchema.EdGraphSchemaAction_NewNode
// 0x0008 (0x0098 - 0x0090)
struct FEdGraphSchemaAction_NewNode : public FEdGraphSchemaAction
{
	class UEdGraphNode*                                NodeTemplate;                                              // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.Engine.ScreenMessageString
// 0x0030
struct FScreenMessageString
{
	uint64_t                                           Key;                                                       // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	struct FString                                     ScreenMessage;                                             // 0x0008(0x0010) (ZeroConstructor, Transient)
	struct FColor                                      DisplayColor;                                              // 0x0018(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	float                                              timeToDisplay;                                             // 0x001C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	float                                              CurrentTimeDisplayed;                                      // 0x0020(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_6ZE1[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	uint64_t                                           ViewportKey;                                               // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.Engine.FullyLoadedPackagesInfo
// 0x0038
struct FFullyLoadedPackagesInfo
{
	TEnumAsByte<Engine_EFullyLoadPackageType>          FullyLoadType;                                             // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_OM30[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Tag;                                                       // 0x0008(0x0010) (ZeroConstructor)
	TArray<struct FName>                               PackagesToLoad;                                            // 0x0018(0x0010) (ZeroConstructor)
	TArray<class UObject*>                             LoadedObjects;                                             // 0x0028(0x0010) (ZeroConstructor)

};

// ScriptStruct Engine.Engine.LevelStreamingStatus
// 0x0010
struct FLevelStreamingStatus
{
	struct FName                                       PackageName;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      bShouldBeLoaded : 1;                                       // 0x0008(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bshouldBeVisible : 1;                                      // 0x0008(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      UnknownData_TOI5[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	uint32_t                                           LODIndex;                                                  // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.Engine.NamedNetDriver
// 0x0010
struct FNamedNetDriver
{
	class UNetDriver*                                  NetDriver;                                                 // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_F05R[0x8];                                     // 0x0008(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.EngineBaseTypes.URL
// 0x0060
struct FURL
{
	struct FString                                     Protocol;                                                  // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     Host;                                                      // 0x0010(0x0010) (ZeroConstructor)
	int                                                Port;                                                      // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_4MYH[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Map;                                                       // 0x0028(0x0010) (ZeroConstructor)
	TArray<struct FString>                             Op;                                                        // 0x0038(0x0010) (ZeroConstructor)
	struct FString                                     Portal;                                                    // 0x0048(0x0010) (ZeroConstructor)
	int                                                Valid;                                                     // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_G86O[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.Engine.WorldContext
// 0x0268
struct FWorldContext
{
	unsigned char                                      UnknownData_2MUT[0xD0];                                    // 0x0000(0x00D0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FURL                                        LastURL;                                                   // 0x00D0(0x0060)
	struct FURL                                        LastRemoteURL;                                             // 0x0130(0x0060)
	class UPendingNetGame*                             PendingNetGame;                                            // 0x0190(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FFullyLoadedPackagesInfo>            PackagesToFullyLoad;                                       // 0x0198(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData_LRD4[0x10];                                    // 0x01A8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class ULevel*>                              LoadedLevelsForPendingMapChange;                           // 0x01B8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData_THE8[0x18];                                    // 0x01C8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UObjectReferencer*>                   ObjectReferencers;                                         // 0x01E0(0x0010) (ZeroConstructor)
	TArray<struct FLevelStreamingStatus>               PendingLevelStreamingStatusUpdates;                        // 0x01F0(0x0010) (ZeroConstructor)
	class UGameViewportClient*                         GameViewport;                                              // 0x0200(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	class UGameInstance*                               OwningGameInstance;                                        // 0x0208(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FNamedNetDriver>                     ActiveNetDrivers;                                          // 0x0210(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData_NR5J[0x48];                                    // 0x0220(0x0048) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.Font.FontData
// 0x0010
struct FFontData
{
	unsigned char                                      UnknownData_XD23[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.InterpGroup.InterpEdSelKey
// 0x0018
struct FInterpEdSelKey
{
	class UInterpGroup*                                Group;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	class UInterpTrack*                                Track;                                                     // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                KeyIndex;                                                  // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              UnsnappedPosition;                                         // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.InterpGroupCamera.CameraPreviewInfo
// 0x0030
struct FCameraPreviewInfo
{
	class UClass*                                      PawnClass;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UAnimSequence*                               AnimSeq;                                                   // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Location;                                                  // 0x0010(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor)
	struct FRotator                                    Rotation;                                                  // 0x001C(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor)
	class APawn*                                       PawnInst;                                                  // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.InterpTrack.SubTrackGroup
// 0x0028
struct FSubTrackGroup
{
	struct FString                                     GroupName;                                                 // 0x0000(0x0010) (ZeroConstructor)
	TArray<int>                                        TrackIndices;                                              // 0x0010(0x0010) (ZeroConstructor)
	unsigned char                                      bIsCollapsed : 1;                                          // 0x0020(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bIsSelected : 1;                                           // 0x0020(0x0001) BIT_FIELD (Transient, NoDestructor)
	unsigned char                                      UnknownData_TEBV[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.InterpTrack.SupportedSubTrackInfo
// 0x0020
struct FSupportedSubTrackInfo
{
	class UClass*                                      SupportedClass;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     SubTrackName;                                              // 0x0008(0x0010) (ZeroConstructor)
	int                                                groupIndex;                                                // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_VCB2[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.LandscapeInfo.LandscapeInfoLayerSettings
// 0x0020
struct FLandscapeInfoLayerSettings
{
	class ULandscapeLayerInfoObject*                   LayerInfoObj;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       LayerName;                                                 // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_4VA2[0x8];                                     // 0x0010(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bValid : 1;                                                // 0x0018(0x0001) BIT_FIELD (Transient, NoDestructor)
	unsigned char                                      UnknownData_BC83[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.LandscapeInfo.LandscapeAddCollision
// 0x0030
struct FLandscapeAddCollision
{
	unsigned char                                      UnknownData_D0NO[0x30];                                    // 0x0000(0x0030) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.LandscapeSplineSegment.LandscapeSplineMeshEntry
// 0x0038
struct FLandscapeSplineMeshEntry
{
	class UStaticMesh*                                 Mesh;                                                      // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class UMaterialInterface*>                  MaterialOverrides;                                         // 0x0008(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      bCenterH : 1;                                              // 0x0018(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      UnknownData_VKHH[0x3];                                     // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   Offset;                                                    // 0x001C(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      bScaleToWidth : 1;                                         // 0x0024(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      UnknownData_H4MC[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     Scale;                                                     // 0x0028(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ELandscapeSplineMeshOrientation> Orientation;                                               // 0x0034(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ESplineMeshAxis>                ForwardAxis;                                               // 0x0035(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ESplineMeshAxis>                UpAxis;                                                    // 0x0036(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_T9HC[0x1];                                     // 0x0037(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.LocalMessage.ClientReceiveData
// 0x0040
struct FClientReceiveData
{
	class APlayerController*                           LocalPC;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       MessageType;                                               // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                MessageIndex;                                              // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_8C7X[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     MessageString;                                             // 0x0018(0x0010) (ZeroConstructor)
	class APlayerState*                                RelatedPlayerState_2;                                      // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	class APlayerState*                                RelatedPlayerState_3;                                      // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     OptionalObject;                                            // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.ParticleModule.ParticleCurvePair
// 0x0018
struct FParticleCurvePair
{
	struct FString                                     CurveName;                                                 // 0x0000(0x0010) (ZeroConstructor)
	class UObject*                                     CurveObject;                                               // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.ParticleModuleTypeDataBeam2.BeamTargetData
// 0x000C
struct FBeamTargetData
{
	struct FName                                       TargetName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              TargetPercentage;                                          // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.ParticleSystemReplay.ParticleSystemReplayFrame
// 0x0010
struct FParticleSystemReplayFrame
{
	unsigned char                                      UnknownData_L97I[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.ParticleSystemReplay.ParticleEmitterReplayFrame
// 0x0010
struct FParticleEmitterReplayFrame
{
	unsigned char                                      UnknownData_PLA7[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.SoundCue.SoundNodeEditorData
// 0x0008
struct FSoundNodeEditorData
{
	unsigned char                                      UnknownData_GM7L[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.SoundWave.StreamedAudioPlatformData
// 0x0020
struct FStreamedAudioPlatformData
{
	unsigned char                                      UnknownData_SBF7[0x20];                                    // 0x0000(0x0020) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.SoundClass.SoundClassEditorData
// 0x0008
struct FSoundClassEditorData
{
	unsigned char                                      UnknownData_0NHJ[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.StaticMesh.AssetEditorOrbitCameraPosition
// 0x0028
struct FAssetEditorOrbitCameraPosition
{
	bool                                               bIsSet;                                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_64N0[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     CamOrbitPoint;                                             // 0x0004(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     CamOrbitZoom;                                              // 0x0010(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                                    CamOrbitRotation;                                          // 0x001C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.StaticMesh.MeshSectionInfoMap
// 0x0050
struct FMeshSectionInfoMap
{
	unsigned char                                      UnknownData_Z9J4[0x50];                                    // 0x0000(0x0050) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.StaticMesh.MeshSectionInfo
// 0x0008
struct FMeshSectionInfo
{
	int                                                MaterialIndex;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bEnableCollision;                                          // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bCastShadow;                                               // 0x0005(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_N839[0x2];                                     // 0x0006(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.EngineTypes.MeshBuildSettings
// 0x0038
struct FMeshBuildSettings
{
	bool                                               bUseMikkTSpace;                                            // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bRecomputeNormals;                                         // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bRecomputeTangents;                                        // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bRemoveDegenerates;                                        // 0x0003(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bUseFullPrecisionUVs;                                      // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bGenerateLightmapUVs;                                      // 0x0005(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_W7DB[0x2];                                     // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MinLightmapResolution;                                     // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                SrcLightmapIndex;                                          // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                DstLightmapIndex;                                          // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              BuildScale;                                                // 0x0014(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor)
	struct FVector                                     BuildScale3D;                                              // 0x0018(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              DistanceFieldResolutionScale;                              // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bGenerateDistanceFieldAsIfTwoSided;                        // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bReallyGenerateDistanceFieldAsIfTwoSided;                  // 0x0029(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_QR2M[0x6];                                     // 0x002A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UStaticMesh*                                 DistanceFieldReplacementMesh;                              // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.EngineTypes.MeshReductionSettings
// 0x0028
struct FMeshReductionSettings
{
	float                                              PercentTriangles;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              MaxDeviation;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              WeldingThreshold;                                          // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              HardAngleThreshold;                                        // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_EMeshFeatureImportance>         SilhouetteImportance;                                      // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_EMeshFeatureImportance>         TextureImportance;                                         // 0x0011(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_EMeshFeatureImportance>         ShadingImportance;                                         // 0x0012(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bRecalculateNormals;                                       // 0x0013(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                BaseLODModel;                                              // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bGenerateUniqueLightmapUVs;                                // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bKeepSymmetry;                                             // 0x0019(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bVisibilityAided;                                          // 0x001A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bCullOccluded;                                             // 0x001B(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_EMeshFeatureImportance>         VisibilityAggressiveness;                                  // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_R68V[0x3];                                     // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	uint32_t                                           MaxTrianglesForLOD;                                        // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint32_t                                           MinTrianglesForLOD;                                        // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.StaticMesh.StaticMeshSourceModel
// 0x0068
struct FStaticMeshSourceModel
{
	struct FMeshBuildSettings                          BuildSettings;                                             // 0x0000(0x0038) (Edit)
	struct FMeshReductionSettings                      ReductionSettings;                                         // 0x0038(0x0028) (Edit)
	float                                              LODDistance;                                               // 0x0060(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor)
	float                                              ScreenSize;                                                // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.StaticMesh.StaticMeshOptimizationSettings
// 0x001C
struct FStaticMeshOptimizationSettings
{
	TEnumAsByte<Engine_EOptimizationType>              ReductionMethod;                                           // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_EKSE[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              NumOfTrianglesPercentage;                                  // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              MaxDeviationPercentage;                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              WeldingThreshold;                                          // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bRecalcNormals;                                            // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_2E9K[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              NormalsThreshold;                                          // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      SilhouetteImportance;                                      // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      TextureImportance;                                         // 0x0019(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      ShadingImportance;                                         // 0x001A(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_JKA4[0x1];                                     // 0x001B(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.AnimNode_ConvertLocalToComponentSpace
// 0x0018 (0x0048 - 0x0030)
struct FAnimNode_ConvertLocalToComponentSpace : public FAnimNode_Base
{
	struct FPoseLink                                   LocalPose;                                                 // 0x0030(0x0018) (Edit, BlueprintVisible)

};

// ScriptStruct Engine.DummySpacerCameraTypes
// 0x0001
struct FDummySpacerCameraTypes
{
	unsigned char                                      UnknownData_24IM[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.StreamableManager
// 0x00A0
struct FStreamableManager
{
	unsigned char                                      UnknownData_Y97S[0xA0];                                    // 0x0000(0x00A0) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.AutomationTestSettings.EditorImportExportTestDefinition
// 0x0038
struct FEditorImportExportTestDefinition
{
	struct FFilePath                                   ImportFilePath;                                            // 0x0000(0x0010) (Edit, Config)
	struct FString                                     ExportFileExtension;                                       // 0x0010(0x0010) (Edit, ZeroConstructor, Config)
	bool                                               bSkipExport;                                               // 0x0020(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_RATP[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FImportFactorySettingValues>         FactorySettings;                                           // 0x0028(0x0010) (Edit, ZeroConstructor, Config)

};

// ScriptStruct Engine.AvoidanceManager.NavAvoidanceData
// 0x0038
struct FNavAvoidanceData
{
	unsigned char                                      UnknownData_QFJT[0x38];                                    // 0x0000(0x0038) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.AnimBlueprint.AnimGroupInfo
// 0x0018
struct FAnimGroupInfo
{
	struct FName                                       Name;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Color;                                                     // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.DataTable.TableRowBase
// 0x0001
struct FTableRowBase
{
	unsigned char                                      UnknownData_T8U0[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.KismetRenderingLibrary.DrawToRenderTargetContext
// 0x0010
struct FDrawToRenderTargetContext
{
	class UTextureRenderTarget2D*                      RenderTarget;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_NNKW[0x8];                                     // 0x0008(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.KismetSystemLibrary.GenericStruct
// 0x0004
struct FGenericStruct
{
	int                                                Data;                                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.EngineTypes.DebugFloatHistory
// 0x0020
struct FDebugFloatHistory
{
	TArray<float>                                      Samples;                                                   // 0x0000(0x0010) (ZeroConstructor, Transient)
	float                                              MaxSamples;                                                // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              MinValue;                                                  // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              MaxValue;                                                  // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bAutoAdjustMinMax;                                         // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_6NEH[0x3];                                     // 0x001D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.KismetTextLibrary.FormatTextArgument
// 0x0050
struct FFormatTextArgument
{
	struct FText                                       ArgumentName;                                              // 0x0000(0x0018) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, DisableEditOnTemplate)
	unsigned char                                      UnknownData_GEYC[0x10];                                    // 0x0000(0x0010) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FText                                       TextValue;                                                 // 0x0028(0x0018) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, DisableEditOnTemplate)
	unsigned char                                      UnknownData_FS19[0x10];                                    // 0x0028(0x0010) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};

// ScriptStruct Engine.BodySetup.KConvexElem
// 0x0070
struct FKConvexElem
{
	TArray<struct FVector>                             VertexData;                                                // 0x0000(0x0010) (ZeroConstructor)
	struct FBox                                        ElemBox;                                                   // 0x0010(0x001C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_46YY[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct UObject_FTransform                          Transform;                                                 // 0x0030(0x0030) (IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_X4QQ[0x10];                                    // 0x0060(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.BodySetup.KAggregateGeom
// 0x0048
struct FKAggregateGeom
{
	TArray<struct FKSphereElem>                        SphereElems;                                               // 0x0000(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	TArray<struct FKBoxElem>                           BoxElems;                                                  // 0x0010(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	TArray<struct FKSphylElem>                         SphylElems;                                                // 0x0020(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	TArray<struct FKConvexElem>                        ConvexElems;                                               // 0x0030(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	unsigned char                                      UnknownData_SLO6[0x8];                                     // 0x0040(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.MaterialInstance.TextureParameterValue
// 0x0020
struct FTextureParameterValue
{
	struct FName                                       ParameterName;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UTexture*                                    ParameterValue;                                            // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGuid                                       ExpressionGUID;                                            // 0x0010(0x0010) (ZeroConstructor)

};

// ScriptStruct Engine.EngineTypes.FontRenderInfo
// 0x0030
struct FFontRenderInfo
{
	unsigned char                                      bClipText : 1;                                             // 0x0000(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      UnknownData_CZR0 : 1;                                      // 0x0000(0x0001) BIT_FIELD (PADDING)
	unsigned char                                      bEnableShadow : 1;                                         // 0x0000(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      UnknownData_BXYS[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDepthFieldGlowInfo                         GlowInfo;                                                  // 0x0004(0x002C) (BlueprintVisible)

};

// ScriptStruct Engine.EngineTypes.ComponentReference
// 0x0018
struct FComponentReference
{
	class AActor*                                      OtherActor;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor)
	struct FName                                       ComponentProperty;                                         // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	TWeakObjectPtr<class USceneComponent>              OverrideComponent;                                         // 0x0010(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.EngineTypes.Rotator_NetQuantizeYawOnly
// 0x0000 (0x000C - 0x000C)
struct FRotator_NetQuantizeYawOnly : public FRotator
{

};

// ScriptStruct Engine.EngineTypes.Rotator_NetQuantizeNoRoll
// 0x0000 (0x000C - 0x000C)
struct FRotator_NetQuantizeNoRoll : public FRotator
{

};

// ScriptStruct Engine.EngineTypes.RadialDamageParams
// 0x0010
struct FRadialDamageParams
{
	float                                              MinimumDamage;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              InnerRadius;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              OuterRadius;                                               // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              DamageFalloff;                                             // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.EngineTypes.RadialDamageEvent
// 0x0030 (0x0050 - 0x0020)
struct FRadialDamageEvent : public FDamageEvent
{
	struct FRadialDamageParams                         Params;                                                    // 0x0020(0x0010)
	struct FVector                                     Origin;                                                    // 0x0030(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_AH1O[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FHitResult>                          ComponentHits;                                             // 0x0040(0x0010) (ZeroConstructor)

};

// ScriptStruct Engine.EngineTypes.PointDamageEvent
// 0x0098 (0x00B8 - 0x0020)
struct FPointDamageEvent : public FDamageEvent
{
	struct FVector_NetQuantizeNormal                   ShotDirection;                                             // 0x0020(0x000C)
	unsigned char                                      UnknownData_OSVF[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FHitResult                                  HitInfo;                                                   // 0x0030(0x0088)

};

// ScriptStruct Engine.EngineTypes.MeshProxySettings
// 0x0028
struct FMeshProxySettings
{
	int                                                ScreenSize;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                TextureWidth;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                TextureHeight;                                             // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bRecalculateNormals;                                       // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_O27N[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              HardAngleThreshold;                                        // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                MergeDistance;                                             // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bUseClippingPlane;                                         // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_L6GI[0x3];                                     // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ClippingLevel;                                             // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                AxisIndex;                                                 // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bPlaneNegativeHalfspace;                                   // 0x0024(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_4TZE[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.EngineTypes.POV
// 0x001C
struct FPOV
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                                    Rotation;                                                  // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              FOV;                                                       // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.EngineTypes.AnimSlotDesc
// 0x000C
struct FAnimSlotDesc
{
	struct FName                                       SlotName;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                NumChannels;                                               // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.EngineTypes.AnimSlotInfo
// 0x0018
struct FAnimSlotInfo
{
	struct FName                                       SlotName;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<float>                                      ChannelWeights;                                            // 0x0008(0x0010) (ZeroConstructor)

};

// ScriptStruct Engine.EngineTypes.MTDResult
// 0x0010
struct FMTDResult
{
	struct FVector                                     Direction;                                                 // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Distance;                                                  // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.EngineTypes.OverlapResult
// 0x0018
struct FOverlapResult
{
	TWeakObjectPtr<class AActor>                       Actor;                                                     // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	TWeakObjectPtr<class UPrimitiveComponent>          Component;                                                 // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                ItemIndex;                                                 // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      bBlockingHit : 1;                                          // 0x0014(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      UnknownData_ZE0I[0x3];                                     // 0x0015(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.EngineTypes.SwarmDebugOptions
// 0x0004
struct FSwarmDebugOptions
{
	unsigned char                                      bDistributionEnabled : 1;                                  // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bForceContentExport : 1;                                   // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bInitialized : 1;                                          // 0x0000(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      UnknownData_MP4C[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.EngineTypes.LightmassDebugOptions
// 0x0010
struct FLightmassDebugOptions
{
	unsigned char                                      bDebugMode : 1;                                            // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bStatsEnabled : 1;                                         // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bGatherBSPSurfacesAcrossComponents : 1;                    // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      UnknownData_DFQH[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CoplanarTolerance;                                         // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      bUseImmediateImport : 1;                                   // 0x0008(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bImmediateProcessMappings : 1;                             // 0x0008(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bSortMappings : 1;                                         // 0x0008(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bDumpBinaryFiles : 1;                                      // 0x0008(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bDebugMaterials : 1;                                       // 0x0008(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bPadMappings : 1;                                          // 0x0008(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bDebugPaddings : 1;                                        // 0x0008(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bOnlyCalcDebugTexelMappings : 1;                           // 0x0008(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bUseRandomColors : 1;                                      // 0x0009(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bColorBordersGreen : 1;                                    // 0x0009(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bColorByExecutionTime : 1;                                 // 0x0009(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      UnknownData_OVKF[0x2];                                     // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ExecutionTimeDivisor;                                      // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.EngineTypes.BasedPosition
// 0x0038
struct FBasedPosition
{
	class AActor*                                      Base;                                                      // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Position;                                                  // 0x0008(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     CachedBaseLocation;                                        // 0x0014(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                                    CachedBaseRotation;                                        // 0x0020(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     CachedTransPosition;                                       // 0x002C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.EngineTypes.RigidBodyContactInfo
// 0x0030
struct FRigidBodyContactInfo
{
	struct FVector                                     ContactPosition;                                           // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     ContactNormal;                                             // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              ContactPenetration;                                        // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_SJ6R[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPhysicalMaterial*                           PhysMaterial[0x2];                                         // 0x0020(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.EngineTypes.CollisionImpactData
// 0x0028
struct FCollisionImpactData
{
	TArray<struct FRigidBodyContactInfo>               ContactInfos;                                              // 0x0000(0x0010) (ZeroConstructor)
	struct FVector                                     TotalNormalImpulse;                                        // 0x0010(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     TotalFrictionImpulse;                                      // 0x001C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.EngineTypes.RigidBodyState
// 0x0040
struct FRigidBodyState
{
	struct FVector_NetQuantize100                      Position;                                                  // 0x0000(0x000C)
	unsigned char                                      UnknownData_8T5D[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FQuat                                       Quaternion;                                                // 0x0010(0x0010) (IsPlainOldData, NoDestructor)
	struct FVector_NetQuantize100                      LinVel;                                                    // 0x0020(0x000C)
	struct FVector_NetQuantize100                      AngVel;                                                    // 0x002C(0x000C)
	unsigned char                                      Flags;                                                     // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_DZ77[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.EngineBaseTypes.ExposureSettings
// 0x0008
struct FExposureSettings
{
	int                                                LogOffset;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bFixed;                                                    // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ZIXS[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.EngineBaseTypes.TickPrerequisite
// 0x0010
struct FTickPrerequisite
{
	unsigned char                                      UnknownData_ZWBR[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.CameraShake.ROscillator
// 0x0024
struct FROscillator
{
	struct FFOscillator                                Pitch;                                                     // 0x0000(0x000C) (Edit)
	struct FFOscillator                                Yaw;                                                       // 0x000C(0x000C) (Edit)
	struct FFOscillator                                Roll;                                                      // 0x0018(0x000C) (Edit)

};

// ScriptStruct Engine.CollisionProfile.CustomProfile
// 0x0018
struct FCustomProfile
{
	struct FName                                       Name;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FResponseChannel>                    CustomResponses;                                           // 0x0008(0x0010) (ZeroConstructor)

};

// ScriptStruct Engine.Material.MaterialParameterCollectionInfo
// 0x0018
struct FMaterialParameterCollectionInfo
{
	struct FGuid                                       StateId;                                                   // 0x0000(0x0010) (ZeroConstructor)
	class UMaterialParameterCollection*                ParameterCollection;                                       // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.DestructibleFractureSettings.FractureMaterial
// 0x0024
struct FFractureMaterial
{
	struct FVector2D                                   UVScale;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   UVOffset;                                                  // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Tangent;                                                   // 0x0010(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              UAngle;                                                    // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                InteriorElementIndex;                                      // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.MaterialInstance.ScalarParameterValue
// 0x001C
struct FScalarParameterValue
{
	struct FName                                       ParameterName;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              ParameterValue;                                            // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGuid                                       ExpressionGUID;                                            // 0x000C(0x0010) (ZeroConstructor)

};

// ScriptStruct Engine.CurveBase.IntegralCurve
// 0x0010 (0x0068 - 0x0058)
struct FIntegralCurve : public FIndexedCurve
{
	TArray<struct FIntegralKey>                        Keys;                                                      // 0x0058(0x0010) (ZeroConstructor)

};

// ScriptStruct Engine.PrimitiveComponent.SpriteCategoryInfo
// 0x0058
struct FSpriteCategoryInfo
{
	struct FName                                       Category;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       DisplayName;                                               // 0x0008(0x0018) ELEMENT_SIZE_MISMATCH
	unsigned char                                      UnknownData_R6W5[0x10];                                    // 0x0008(0x0010) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FText                                       Description;                                               // 0x0030(0x0018) ELEMENT_SIZE_MISMATCH
	unsigned char                                      UnknownData_HX3I[0x10];                                    // 0x0030(0x0010) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};

// ScriptStruct Engine.SkeletalMesh.BoneMirrorExport
// 0x0014
struct FBoneMirrorExport
{
	struct FName                                       BoneName;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       SourceBoneName;                                            // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<CoreUObject_EAxis>                     BoneFlipAxis;                                              // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_AQWF[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.SkeletalMeshComponent.SkeletalMeshComponentPreClothTickFunction
// 0x0008 (0x0050 - 0x0048)
struct FSkeletalMeshComponentPreClothTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData_JXEW[0x8];                                     // 0x0048(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.AnimationAsset.AnimationGroupReference
// 0x000C
struct FAnimationGroupReference
{
	struct FName                                       GroupName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_EAnimGroupRole>                 GroupRole;                                                 // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_R7M4[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.AnimationAsset.AnimExtractContext
// 0x000C
struct FAnimExtractContext
{
	bool                                               bExtractRootMotionTranslation;                             // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bExtractRootMotionRotation;                                // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_R7NC[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CurrentTime;                                               // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ERootMotionRootLock>            RootMotionRootLock;                                        // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_6D9U[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.WorldSettings.TickWorldSettingsDuringPhysics
// 0x0008 (0x0050 - 0x0048)
struct FTickWorldSettingsDuringPhysics : public FTickFunction
{
	unsigned char                                      UnknownData_MR2L[0x8];                                     // 0x0048(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.WorldSettings.ActorList
// 0x0010
struct FActorList
{
	unsigned char                                      UnknownData_SOVH[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.WorldSettings.NetViewer
// 0x0028
struct FNetViewer
{
	class APlayerController*                           InViewer;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                      Viewer;                                                    // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     ViewLocation;                                              // 0x0010(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     ViewDir;                                                   // 0x001C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.BlueprintGeneratedClass.BlueprintDebugData
// 0x0001
struct FBlueprintDebugData
{
	unsigned char                                      UnknownData_CCZC[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.BlueprintGeneratedClass.DebuggingInfoForSingleFunction
// 0x0140
struct FDebuggingInfoForSingleFunction
{
	unsigned char                                      UnknownData_OPSN[0x140];                                   // 0x0000(0x0140) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.BlueprintGeneratedClass.NodeToCodeAssociation
// 0x0014
struct FNodeToCodeAssociation
{
	unsigned char                                      UnknownData_ZT8T[0x14];                                    // 0x0000(0x0014) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.FastArraySerializerItem
// 0x0008
struct FFastArraySerializerItem
{
	int                                                ReplicationID;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor)
	int                                                ReplicationKey;                                            // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor)

};

// ScriptStruct Engine.FastArraySerializer
// 0x0058
struct FFastArraySerializer
{
	unsigned char                                      UnknownData_3J71[0x58];                                    // 0x0000(0x0058) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.LatentActionManager
// 0x00B0
struct FLatentActionManager
{
	unsigned char                                      UnknownData_KG9T[0xB0];                                    // 0x0000(0x00B0) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.World.EndClothSimulationFunction
// 0x0008 (0x0050 - 0x0048)
struct FEndClothSimulationFunction : public FTickFunction
{
	unsigned char                                      UnknownData_SU8E[0x8];                                     // 0x0048(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.World.StartClothSimulationFunction
// 0x0008 (0x0050 - 0x0048)
struct FStartClothSimulationFunction : public FTickFunction
{
	unsigned char                                      UnknownData_XJ6S[0x8];                                     // 0x0048(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.World.EndPhysicsTickFunction
// 0x0008 (0x0050 - 0x0048)
struct FEndPhysicsTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData_XLX4[0x8];                                     // 0x0048(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.World.StartPhysicsTickFunction
// 0x0008 (0x0050 - 0x0048)
struct FStartPhysicsTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData_B6UO[0x8];                                     // 0x0048(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.Level.CachedPerTriPhysSMData
// 0x0010
struct FCachedPerTriPhysSMData
{
	unsigned char                                      UnknownData_HKPC[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.Level.CachedPhysSMData
// 0x0010
struct FCachedPhysSMData
{
	unsigned char                                      UnknownData_P9MN[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.Level.StreamableTextureInstance
// 0x0014
struct FStreamableTextureInstance
{
	unsigned char                                      UnknownData_EP0C[0x14];                                    // 0x0000(0x0014) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.Level.DynamicTextureInstance
// 0x0014 (0x0028 - 0x0014)
struct FDynamicTextureInstance : public FStreamableTextureInstance
{
	unsigned char                                      UnknownData_TABL[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2D*                                  Texture;                                                   // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bAttached;                                                 // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_OCZS[0x3];                                     // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              OriginalRadius;                                            // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.PlayerMuteList
// 0x0038
struct FPlayerMuteList
{
	unsigned char                                      UnknownData_DVOF[0x30];                                    // 0x0000(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bHasVoiceHandshakeCompleted;                               // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_T90O[0x3];                                     // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                VoiceChannelIdx;                                           // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.DynamicCaptureManager.UploadToGpuCommand
// 0x0018
struct FUploadToGpuCommand
{
	class UReflectionCaptureComponent*                 CaptureComponent;                                          // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_5DS6[0x10];                                    // 0x0008(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.AntiDupeTransactionLog.TransactionLogData
// 0x0020
struct FTransactionLogData
{
	unsigned char                                      UnknownData_ZTU9[0x20];                                    // 0x0000(0x0020) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.LandscapeGizmoActiveActor.GizmoSelectData
// 0x0050
struct FGizmoSelectData
{
	unsigned char                                      UnknownData_17DS[0x50];                                    // 0x0000(0x0050) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.LandscapeProxy.LandscapeImportLayerInfo
// 0x0020
struct FLandscapeImportLayerInfo
{
	struct FName                                       LayerName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor)
	class ULandscapeLayerInfoObject*                   LayerInfo;                                                 // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_HV9I[0x10];                                    // 0x0010(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.LandscapeProxy.LandscapeEditorLayerSettings
// 0x0001
struct FLandscapeEditorLayerSettings
{
	unsigned char                                      UnknownData_S39W[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.LandscapeProxy.LandscapeWeightmapUsage
// 0x0020
struct FLandscapeWeightmapUsage
{
	class ULandscapeComponent*                         ChannelUsage[0x4];                                         // 0x0000(0x0020) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.NavigationGraph.NavGraphEdge
// 0x0018
struct FNavGraphEdge
{
	unsigned char                                      UnknownData_JMQ9[0x18];                                    // 0x0000(0x0018) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.PreviewAttachedObjectPair
// 0x0030
struct FPreviewAttachedObjectPair
{
	TAssetPtr<class UObject>                           AttachedObject;                                            // 0x0000(0x001C) ELEMENT_SIZE_MISMATCH
	unsigned char                                      UnknownData_HBKW[0x4];                                     // 0x0000(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	class UObject*                                     Object;                                                    // 0x0020(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor)
	struct FName                                       AttachedTo;                                                // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Engine.PreviewAssetAttachContainer
// 0x0010
struct FPreviewAssetAttachContainer
{
	TArray<struct FPreviewAttachedObjectPair>          AttachedObjects;                                           // 0x0000(0x0010) (ZeroConstructor)

};

// ScriptStruct Engine.SmartNameMapping
// 0x0068
struct FSmartNameMapping
{
	unsigned char                                      UnknownData_5KSQ[0x68];                                    // 0x0000(0x0068) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.AnimInstance.SlotEvaluationPose
// 0x0018
struct FSlotEvaluationPose
{
	TEnumAsByte<Engine_EAdditiveAnimationType>         AdditiveType;                                              // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_XTZX[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Weight;                                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FA2Pose                                     Pose;                                                      // 0x0008(0x0010)

};

// ScriptStruct Engine.Rig.TransformBaseConstraint
// 0x0010
struct FTransformBaseConstraint
{
	TArray<struct FRigTransformConstraint>             TransformConstraints;                                      // 0x0000(0x0010) (Edit, ZeroConstructor)

};

// ScriptStruct Engine.Rig.TransformBase
// 0x0028
struct FTransformBase
{
	struct FName                                       Node;                                                      // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTransformBaseConstraint                    Constraints[0x2];                                          // 0x0008(0x0020) (Edit)

};

// ScriptStruct Engine.DestructibleMesh.DestructibleParameters
// 0x0078
struct FDestructibleParameters
{
	struct FDestructibleDamageParameters               DamageParameters;                                          // 0x0000(0x0014) (Edit)
	struct FDestructibleDebrisParameters               DebrisParameters;                                          // 0x0014(0x002C) (Edit)
	struct FDestructibleAdvancedParameters             AdvancedParameters;                                        // 0x0040(0x0010) (Edit)
	struct FDestructibleSpecialHierarchyDepths         SpecialHierarchyDepths;                                    // 0x0050(0x0010) (Edit)
	TArray<struct FDestructibleDepthParameters>        DepthParameters;                                           // 0x0060(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	struct FDestructibleParametersFlag                 Flags;                                                     // 0x0070(0x0004) (Edit)
	unsigned char                                      UnknownData_DEMG[0x4];                                     // 0x0074(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.AnimNode_RotationOffsetBlendSpace
// 0x0018 (0x0118 - 0x0100)
struct FAnimNode_RotationOffsetBlendSpace : public FAnimNode_BlendSpacePlayer
{
	struct FPoseLink                                   BasePose;                                                  // 0x0100(0x0018) (Edit, BlueprintVisible)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
