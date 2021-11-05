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

// Enum ShooterGame.EMissionState
enum class ShooterGame_EMissionState : uint8_t
{
	EMissionState__ServerSetup     = 0,
	EMissionState__Activated       = 1,
	EMissionState__Suspended       = 2,
	EMissionState__Deactivated     = 3,
	EMissionState__EMissionState_MAX = 4,

};

// Enum ShooterGame.EMissionTimerMode
enum class ShooterGame_EMissionTimerMode : uint8_t
{
	EMissionTimerMode__HideTimer   = 0,
	EMissionTimerMode__ShowTimeRemaining = 1,
	EMissionTimerMode__ShowTimeElapsed = 2,
	EMissionTimerMode__UseBPGetMissionTimerText = 3,
	EMissionTimerMode__EMissionTimerMode_MAX = 4,

};

// Enum ShooterGame.ESpawnPattern
enum class ShooterGame_ESpawnPattern : uint8_t
{
	ESpawnPattern__Circle          = 0,
	ESpawnPattern__Grid            = 1,
	ESpawnPattern__Random          = 2,
	ESpawnPattern__ESpawnPattern_MAX = 3,

};

// Enum ShooterGame.EMissionRelatedPropertyUsage
enum class ShooterGame_EMissionRelatedPropertyUsage : uint8_t
{
	EMissionRelatedPropertyUsage__Prefix = 0,
	EMissionRelatedPropertyUsage__Suffix = 1,
	EMissionRelatedPropertyUsage__Description = 2,
	EMissionRelatedPropertyUsage__EMissionRelatedPropertyUsage_MAX = 3,

};

// Enum ShooterGame.EMissionRelatedPropertyType
enum class ShooterGame_EMissionRelatedPropertyType : uint8_t
{
	EMissionRelatedPropertyType__Name_PropertyType = 0,
	EMissionRelatedPropertyType__String_PropertyType = 1,
	EMissionRelatedPropertyType__Boolean_PropertyType = 2,
	EMissionRelatedPropertyType__Integer_PropertyType = 3,
	EMissionRelatedPropertyType__Float_PropertyType = 4,
	EMissionRelatedPropertyType__Double_PropertyType = 5,
	EMissionRelatedPropertyType__EMissionRelatedPropertyType_MAX = 6,

};

// Enum ShooterGame.ESTOFNotificationType
enum class ShooterGame_ESTOFNotificationType : uint8_t
{
	ESTOFNotificationType__Death   = 0,
	ESTOFNotificationType__TribeEliminated = 1,
	ESTOFNotificationType__MatchVictory = 2,
	ESTOFNotificationType__MatchDraw = 3,
	ESTOFNotificationType__MAX     = 4,
	ESTOFNotificationType__ESTOFNotificationType_MAX = 5,

};

// Enum ShooterGame.EPrimalARKTributeDataType
enum class ShooterGame_EPrimalARKTributeDataType : uint8_t
{
	EPrimalARKTributeDataType__Items = 0,
	EPrimalARKTributeDataType__TamedDinos = 1,
	EPrimalARKTributeDataType__CharacterData = 2,
	EPrimalARKTributeDataType__MAX = 3,
	EPrimalARKTributeDataType__EPrimalARKTributeDataType_MAX = 4,

};

// Enum ShooterGame.EPrimalCharacterStatusValue
enum class ShooterGame_EPrimalCharacterStatusValue : uint8_t
{
	EPrimalCharacterStatusValue__Health = 0,
	EPrimalCharacterStatusValue__Stamina = 1,
	EPrimalCharacterStatusValue__Torpidity = 2,
	EPrimalCharacterStatusValue__Oxygen = 3,
	EPrimalCharacterStatusValue__Food = 4,
	EPrimalCharacterStatusValue__Water = 5,
	EPrimalCharacterStatusValue__Temperature = 6,
	EPrimalCharacterStatusValue__Weight = 7,
	EPrimalCharacterStatusValue__MeleeDamageMultiplier = 8,
	EPrimalCharacterStatusValue__SpeedMultiplier = 9,
	EPrimalCharacterStatusValue__TemperatureFortitude = 10,
	EPrimalCharacterStatusValue__CraftingSpeedMultiplier = 11,
	EPrimalCharacterStatusValue__MAX = 12,
	EPrimalCharacterStatusValue__EPrimalCharacterStatusValue_MAX = 13,

};

// Enum ShooterGame.EBoolExecResult
enum class ShooterGame_EBoolExecResult : uint8_t
{
	EBoolExecResult__Success       = 0,
	EBoolExecResult__Failed        = 1,
	EBoolExecResult__EBoolExecResult_MAX = 2,

};

// Enum ShooterGame.ECameraStyle
enum class ShooterGame_ECameraStyle : uint8_t
{
	ECameraStyle__Default          = 0,
	ECameraStyle__FirstPerson      = 1,
	ECameraStyle__ThirdPerson      = 2,
	ECameraStyle__FreeCam          = 3,
	ECameraStyle__Orbit            = 4,
	ECameraStyle__Spectator        = 5,
	ECameraStyle__ECameraStyle_MAX = 6,

};

// Enum ShooterGame.ETargetingTeamBehavior
enum class ShooterGame_ETargetingTeamBehavior : uint8_t
{
	ETargetingTeamBehavior__ExactMatch = 0,
	ETargetingTeamBehavior__FriendlyWith = 1,
	ETargetingTeamBehavior__PrioritizeButIncludeAny = 2,
	ETargetingTeamBehavior__ETargetingTeamBehavior_MAX = 3,

};

// Enum ShooterGame.EChatMessageType
enum class ShooterGame_EChatMessageType : uint8_t
{
	EChatMessageType__MyMessage    = 0,
	EChatMessageType__SameTeamMessage = 1,
	EChatMessageType__DifferentTeamMessage = 2,
	EChatMessageType__SystemWideMessage = 3,
	EChatMessageType__SameAllianceMessage = 4,
	EChatMessageType__MAX          = 5,
	EChatMessageType__EChatMessageType_MAX = 6,

};

// Enum ShooterGame.EChatType
enum class ShooterGame_EChatType : uint8_t
{
	EChatType__GlobalChat          = 0,
	EChatType__ProximityChat       = 1,
	EChatType__RadioChat           = 2,
	EChatType__GlobalTribeChat     = 3,
	EChatType__AllianceChat        = 4,
	EChatType__MAX                 = 5,
	EChatType__EChatType_MAX       = 6,

};

// Enum ShooterGame.EChatSendMode
enum class ShooterGame_EChatSendMode : uint8_t
{
	EChatSendMode__GlobalChat      = 0,
	EChatSendMode__GlobalTribeChat = 1,
	EChatSendMode__LocalChat       = 2,
	EChatSendMode__AllianceChat    = 3,
	EChatSendMode__MAX             = 4,
	EChatSendMode__EChatSendMode_MAX = 5,

};

// Enum ShooterGame.EShooterPhysMaterialType
enum class ShooterGame_EShooterPhysMaterialType : uint8_t
{
	EShooterPhysMaterialType__Unknown = 0,
	EShooterPhysMaterialType__Concrete = 1,
	EShooterPhysMaterialType__Dirt = 2,
	EShooterPhysMaterialType__Water = 3,
	EShooterPhysMaterialType__Metal = 4,
	EShooterPhysMaterialType__Wood = 5,
	EShooterPhysMaterialType__Grass = 6,
	EShooterPhysMaterialType__Glass = 7,
	EShooterPhysMaterialType__Flesh = 8,
	EShooterPhysMaterialType__Leaves = 9,
	EShooterPhysMaterialType__Rock = 10,
	EShooterPhysMaterialType__Sand = 11,
	EShooterPhysMaterialType__Snow = 12,
	EShooterPhysMaterialType__Corruption = 13,
	EShooterPhysMaterialType__Lava = 14,
	EShooterPhysMaterialType__Acid = 15,
	EShooterPhysMaterialType__MAX  = 16,
	EShooterPhysMaterialType__EShooterPhysMaterialType_MAX = 17,

};

// Enum ShooterGame.EPlayerActionIndex
enum class ShooterGame_EPlayerActionIndex : uint8_t
{
	EPlayerActionIndex__None       = 0,
	EPlayerActionIndex__WhistleFollow = 1,
	EPlayerActionIndex__WhistleFollowOne = 2,
	EPlayerActionIndex__WhistleStop = 3,
	EPlayerActionIndex__WhistleStopOne = 4,
	EPlayerActionIndex__WhistleAggressive = 5,
	EPlayerActionIndex__WhistleNeutral = 6,
	EPlayerActionIndex__WhistlePassive = 7,
	EPlayerActionIndex__WhistleAttackTarget = 8,
	EPlayerActionIndex__WhistleLandFlyerOne = 9,
	EPlayerActionIndex__ShowInventory = 10,
	EPlayerActionIndex__ShowCraftables = 11,
	EPlayerActionIndex__ShowTribeManager = 12,
	EPlayerActionIndex__Poop       = 13,
	EPlayerActionIndex__UnHideCompanion = 14,
	EPlayerActionIndex__ShowEmoteSelection = 15,
	EPlayerActionIndex__Emote_HatSwitch = 16,
	EPlayerActionIndex__Emote_Salute = 17,
	EPlayerActionIndex__Emote_Sorry = 18,
	EPlayerActionIndex__Emote_Thank = 19,
	EPlayerActionIndex__Emote_Wave = 20,
	EPlayerActionIndex__Emote_Laugh = 21,
	EPlayerActionIndex__Emote_Yes  = 22,
	EPlayerActionIndex__Emote_No   = 23,
	EPlayerActionIndex__Emote_Taunt = 24,
	EPlayerActionIndex__Emote_Cheer = 25,
	EPlayerActionIndex__Emote_FriendlyLowerHands = 26,
	EPlayerActionIndex__Emote_MAX  = 27,
	EPlayerActionIndex__EPlayerActionIndex_MAX = 28,

};

// Enum ShooterGame.EMissionAlertType
enum class ShooterGame_EMissionAlertType : uint8_t
{
	EMissionAlertType__Positive    = 0,
	EMissionAlertType__Neutral     = 1,
	EMissionAlertType__Negative    = 2,
	EMissionAlertType__EMissionAlertType_MAX = 3,

};

// Enum ShooterGame.EPhaseRequirementWidgetVisualState
enum class ShooterGame_EPhaseRequirementWidgetVisualState : uint8_t
{
	EPhaseRequirementWidgetVisualState__Neutral = 0,
	EPhaseRequirementWidgetVisualState__Positive = 1,
	EPhaseRequirementWidgetVisualState__Negative = 2,
	EPhaseRequirementWidgetVisualState__Custom = 3,
	EPhaseRequirementWidgetVisualState__EPhaseRequirementWidgetVisualState_MAX = 4,

};

// Enum ShooterGame.ELootItemType
enum class ShooterGame_ELootItemType : uint8_t
{
	ELootItemType__None            = 0,
	ELootItemType__Element         = 1,
	ELootItemType__Hexagons        = 2,
	ELootItemType__ResourceCommon  = 3,
	ELootItemType__ResourceUncommon = 4,
	ELootItemType__ResourceRare    = 5,
	ELootItemType__ArmorTier1      = 6,
	ELootItemType__ArmorTier2      = 7,
	ELootItemType__ArmorTier3      = 8,
	ELootItemType__ArmorTek        = 9,
	ELootItemType__WeaponTier1     = 10,
	ELootItemType__WeaponTier2     = 11,
	ELootItemType__WeaponTier3     = 12,
	ELootItemType__WeaponTek       = 13,
	ELootItemType__AmmoTier1       = 14,
	ELootItemType__AmmoTier2       = 15,
	ELootItemType__AmmoTier3       = 16,
	ELootItemType__Saddle          = 17,
	ELootItemType__ELootItemType_MAX = 18,

};

// Enum ShooterGame.ESimpleCurve
enum class ShooterGame_ESimpleCurve : uint8_t
{
	ESimpleCurve__Linear           = 0,
	ESimpleCurve__Pow0             = 1,
	ESimpleCurve__Pow1             = 2,
	ESimpleCurve__Pow101           = 3,
	ESimpleCurve__Pow2             = 4,
	ESimpleCurve__Pow201           = 5,
	ESimpleCurve__Pow3             = 6,
	ESimpleCurve__Pow301           = 7,
	ESimpleCurve__PowCos0          = 8,
	ESimpleCurve__PowCos1          = 9,
	ESimpleCurve__PowCos101        = 10,
	ESimpleCurve__PowCos2          = 11,
	ESimpleCurve__PowCos201        = 12,
	ESimpleCurve__PowCos3          = 13,
	ESimpleCurve__PowCos301        = 14,
	ESimpleCurve__PowSin0          = 15,
	ESimpleCurve__PowSin1          = 16,
	ESimpleCurve__PowSin101        = 17,
	ESimpleCurve__PowSin2          = 18,
	ESimpleCurve__PowSin201        = 19,
	ESimpleCurve__PowSin3          = 20,
	ESimpleCurve__PowSin301        = 21,
	ESimpleCurve__PowMinCos0       = 22,
	ESimpleCurve__PowMinCos1       = 23,
	ESimpleCurve__PowMinCos101     = 24,
	ESimpleCurve__PowMinCos2       = 25,
	ESimpleCurve__PowMinCos201     = 26,
	ESimpleCurve__PowMinCos3       = 27,
	ESimpleCurve__PowMinCos301     = 28,
	ESimpleCurve__PowMax0          = 29,
	ESimpleCurve__PowMax1          = 30,
	ESimpleCurve__PowMax101        = 31,
	ESimpleCurve__PowMax2          = 32,
	ESimpleCurve__PowMax201        = 33,
	ESimpleCurve__PowMax3          = 34,
	ESimpleCurve__PowMax301        = 35,
	ESimpleCurve__ESimpleCurve_MAX = 36,

};

// Enum ShooterGame.EHUDElementType
enum class ShooterGame_EHUDElementType : uint8_t
{
	EHUDElementType__Text          = 0,
	EHUDElementType__ProgressBar   = 1,
	EHUDElementType__Image         = 2,
	EHUDElementType__EHUDElementType_MAX = 3,

};

// Enum ShooterGame.EHUDElementAnchorMode
enum class ShooterGame_EHUDElementAnchorMode : uint8_t
{
	EHUDElementAnchorMode__Specified = 0,
	EHUDElementAnchorMode__QuickbarLeft = 1,
	EHUDElementAnchorMode__QuickbarRight = 2,
	EHUDElementAnchorMode__QuickbarTop = 3,
	EHUDElementAnchorMode__EHUDElementAnchorMode_MAX = 4,

};

// Enum ShooterGame.EStencilAlliance
enum class ShooterGame_EStencilAlliance : uint8_t
{
	EStencilAlliance__None         = 0,
	EStencilAlliance__Friendly     = 1,
	EStencilAlliance__NPC          = 2,
	EStencilAlliance__NPCFleeing   = 3,
	EStencilAlliance__Hostile      = 4,
	EStencilAlliance__Ally         = 5,
	EStencilAlliance__Element      = 6,
	EStencilAlliance__EStencilAlliance_MAX = 7,

};

// Enum ShooterGame.EHUDElementHorizontalAlignment
enum class ShooterGame_EHUDElementHorizontalAlignment : uint8_t
{
	EHUDElementHorizontalAlignment__Center = 0,
	EHUDElementHorizontalAlignment__Left = 1,
	EHUDElementHorizontalAlignment__Right = 2,
	EHUDElementHorizontalAlignment__EHUDElementHorizontalAlignment_MAX = 3,

};

// Enum ShooterGame.EHUDElementVerticalAlignment
enum class ShooterGame_EHUDElementVerticalAlignment : uint8_t
{
	EHUDElementVerticalAlignment__Center = 0,
	EHUDElementVerticalAlignment__Top = 1,
	EHUDElementVerticalAlignment__Bottom = 2,
	EHUDElementVerticalAlignment__EHUDElementVerticalAlignment_MAX = 3,

};

// Enum ShooterGame.ELeaderboardColumnName
enum class ShooterGame_ELeaderboardColumnName : uint8_t
{
	ELeaderboardColumnName__MissionTag = 0,
	ELeaderboardColumnName__PlayerNetId = 1,
	ELeaderboardColumnName__TribeId = 2,
	ELeaderboardColumnName__TimestampUtc = 3,
	ELeaderboardColumnName__FloatValue = 4,
	ELeaderboardColumnName__IntValue = 5,
	ELeaderboardColumnName__NameValue = 6,
	ELeaderboardColumnName__StringValue = 7,
	ELeaderboardColumnName__ELeaderboardColumnName_MAX = 8,

};

// Enum ShooterGame.ELeaderboardGroupByMode
enum class ShooterGame_ELeaderboardGroupByMode : uint8_t
{
	ELeaderboardGroupByMode__None  = 0,
	ELeaderboardGroupByMode__First = 1,
	ELeaderboardGroupByMode__Min   = 2,
	ELeaderboardGroupByMode__Max   = 3,
	ELeaderboardGroupByMode__Sum   = 4,
	ELeaderboardGroupByMode__Count = 5,
	ELeaderboardGroupByMode__Average = 6,
	ELeaderboardGroupByMode__ELeaderboardGroupByMode_MAX = 7,

};

// Enum ShooterGame.ELeaderboardOrdering
enum class ShooterGame_ELeaderboardOrdering : uint8_t
{
	ELeaderboardOrdering__Ascending = 0,
	ELeaderboardOrdering__Descending = 1,
	ELeaderboardOrdering__ELeaderboardOrdering_MAX = 2,

};

// Enum ShooterGame.EMassTeleportState
enum class ShooterGame_EMassTeleportState : uint8_t
{
	EMassTeleportState__INITIATED  = 0,
	EMassTeleportState__TRIGGERED_SUCCESS = 1,
	EMassTeleportState__TRIGGERED_FAILED = 2,
	EMassTeleportState__COMPLETED  = 3,
	EMassTeleportState__CANCELLED  = 4,
	EMassTeleportState__EMassTeleportState_MAX = 5,

};

// Enum ShooterGame.PrimalGameData.EPrimalCharacterStatusState
enum class ShooterGame_EPrimalCharacterStatusState : uint8_t
{
	EPrimalCharacterStatusState__Dead = 0,
	EPrimalCharacterStatusState__Winded = 1,
	EPrimalCharacterStatusState__Starvation = 2,
	EPrimalCharacterStatusState__Dehydration = 3,
	EPrimalCharacterStatusState__Suffocation = 4,
	EPrimalCharacterStatusState__Encumbered = 5,
	EPrimalCharacterStatusState__Hypothermia = 6,
	EPrimalCharacterStatusState__Hyperthermia = 7,
	EPrimalCharacterStatusState__Injured = 8,
	EPrimalCharacterStatusState__KnockedOut = 9,
	EPrimalCharacterStatusState__Sleeping = 10,
	EPrimalCharacterStatusState__Cold = 11,
	EPrimalCharacterStatusState__Hot = 12,
	EPrimalCharacterStatusState__Crafting = 13,
	EPrimalCharacterStatusState__MAX = 14,
	EPrimalCharacterStatusState__EPrimalCharacterStatusState_MAX = 15,

};

// Enum ShooterGame.PrimalGameData.EPrimalConsumableType
enum class ShooterGame_EPrimalConsumableType : uint8_t
{
	EPrimalConsumableType__Food    = 0,
	EPrimalConsumableType__Water   = 1,
	EPrimalConsumableType__Medicine = 2,
	EPrimalConsumableType__Other   = 3,
	EPrimalConsumableType__MAX     = 4,
	EPrimalConsumableType__EPrimalConsumableType_MAX = 5,

};

// Enum ShooterGame.PrimalGameData.ELevelExperienceRampType
enum class ShooterGame_ELevelExperienceRampType : uint8_t
{
	ELevelExperienceRampType__Player = 0,
	ELevelExperienceRampType__DinoEasy = 1,
	ELevelExperienceRampType__DinoMedium = 2,
	ELevelExperienceRampType__DinoHard = 3,
	ELevelExperienceRampType__MAX  = 4,
	ELevelExperienceRampType__ELevelExperienceRampType_MAX = 5,

};

// Enum ShooterGame.PrimalGameData.EPrimalItemType
enum class ShooterGame_EPrimalItemType : uint8_t
{
	EPrimalItemType__MiscConsumable = 0,
	EPrimalItemType__Equipment     = 1,
	EPrimalItemType__Weapon        = 2,
	EPrimalItemType__Ammo          = 3,
	EPrimalItemType__Structure     = 4,
	EPrimalItemType__Resource      = 5,
	EPrimalItemType__Skin          = 6,
	EPrimalItemType__WeaponAttachment = 7,
	EPrimalItemType__Artifact      = 8,
	EPrimalItemType__MAX           = 9,
	EPrimalItemType__EPrimalItemType_MAX = 10,

};

// Enum ShooterGame.PrimalGameData.EPrimalCharacterInputType
enum class ShooterGame_EPrimalCharacterInputType : uint8_t
{
	EPrimalCharacterInputType__PrimaryFire = 0,
	EPrimalCharacterInputType__Targeting = 1,
	EPrimalCharacterInputType__AltFire = 2,
	EPrimalCharacterInputType__SwitchWeapon = 3,
	EPrimalCharacterInputType__Reload = 4,
	EPrimalCharacterInputType__Crouch = 5,
	EPrimalCharacterInputType__Prone = 6,
	EPrimalCharacterInputType__CrouchProneToggle = 7,
	EPrimalCharacterInputType__SwitchMap = 8,
	EPrimalCharacterInputType__DinoAttack = 9,
	EPrimalCharacterInputType__EPrimalCharacterInputType_MAX = 10,

};

// Enum ShooterGame.PrimalGameData.EPrimalItemStat
enum class ShooterGame_EPrimalItemStat : uint8_t
{
	EPrimalItemStat__GenericQuality = 0,
	EPrimalItemStat__Armor         = 1,
	EPrimalItemStat__MaxDurability = 2,
	EPrimalItemStat__WeaponDamagePercent = 3,
	EPrimalItemStat__WeaponClipAmmo = 4,
	EPrimalItemStat__HypothermalInsulation = 5,
	EPrimalItemStat__Weight        = 6,
	EPrimalItemStat__HyperthermalInsulation = 7,
	EPrimalItemStat__MAX           = 8,
	EPrimalItemStat__EPrimalItemStat_MAX = 9,

};

// Enum ShooterGame.PrimalGameData.EDinoTamedOrder
enum class ShooterGame_EDinoTamedOrder : uint8_t
{
	EDinoTamedOrder__SetAggressionPassive = 0,
	EDinoTamedOrder__SetAggressionNeutral = 1,
	EDinoTamedOrder__SetAggressionAggressive = 2,
	EDinoTamedOrder__SetAggressionAttackTarget = 3,
	EDinoTamedOrder__ToggleFollowMe = 4,
	EDinoTamedOrder__FollowMe      = 5,
	EDinoTamedOrder__StopFollowing = 6,
	EDinoTamedOrder__CycleFollowDistance = 7,
	EDinoTamedOrder__SetAggressionPassiveFlee = 8,
	EDinoTamedOrder__LandingToMe   = 9,
	EDinoTamedOrder__MAX           = 10,
	EDinoTamedOrder__EDinoTamedOrder_MAX = 11,

};

// Enum ShooterGame.PrimalGameData.EXPType
enum class ShooterGame_EXPType : uint8_t
{
	EXPType__XP_GENERIC            = 0,
	EXPType__XP_KILL               = 1,
	EXPType__XP_HARVEST            = 2,
	EXPType__XP_CRAFT              = 3,
	EXPType__XP_SPECIAL            = 4,
	EXPType__XP_ALPHAKILL          = 5,
	EXPType__MAX                   = 6,
	EXPType__EXPType_MAX           = 7,

};

// Enum ShooterGame.PrimalGameData.ETribeGroupPermission
enum class ShooterGame_ETribeGroupPermission : uint8_t
{
	ETribeGroupPermission__STRUCTUREACTIVATE = 0,
	ETribeGroupPermission__INVENTORYACCESS = 1,
	ETribeGroupPermission__PET_ORDER = 2,
	ETribeGroupPermission__PET_RIDE = 3,
	ETribeGroupPermission__GENERAL_STRUCTUREDEMOLISH = 4,
	ETribeGroupPermission__GENERAL_STRUCTUREATTACHMENT = 5,
	ETribeGroupPermission__GENERAL_BUILDSTRUCTUREINRANGE = 6,
	ETribeGroupPermission__INVITEMEMBER = 7,
	ETribeGroupPermission__PROMOTEMEMBER = 8,
	ETribeGroupPermission__DEMOTEMEMBER = 9,
	ETribeGroupPermission__BANISHMEMBER = 10,
	ETribeGroupPermission__PET_UNCLAIM = 11,
	ETribeGroupPermission__TELEPORT_MEMBERS = 12,
	ETribeGroupPermission__TELEPORT_DINOS = 13,
	ETribeGroupPermission__ETribeGroupPermission_MAX = 14,

};

// Enum ShooterGame.PrimalGameData.EBoneModifierType
enum class ShooterGame_EBoneModifierType : uint8_t
{
	EBoneModifierType__HEAD        = 0,
	EBoneModifierType__NECK        = 1,
	EBoneModifierType__NECKLENGTH  = 2,
	EBoneModifierType__CHEST       = 3,
	EBoneModifierType__SHOULDERS   = 4,
	EBoneModifierType__ARMLENGTH   = 5,
	EBoneModifierType__UPPERARM    = 6,
	EBoneModifierType__LOWERARM    = 7,
	EBoneModifierType__HAND        = 8,
	EBoneModifierType__LEGLENGTH   = 9,
	EBoneModifierType__UPPERLEG    = 10,
	EBoneModifierType__LOWERLEG    = 11,
	EBoneModifierType__FOOT        = 12,
	EBoneModifierType__HIP         = 13,
	EBoneModifierType__TORSO       = 14,
	EBoneModifierType__UPPERFACESIZE = 15,
	EBoneModifierType__LOWERFACESIZE = 16,
	EBoneModifierType__TORSODEPTH  = 17,
	EBoneModifierType__HEADHEIGHT  = 18,
	EBoneModifierType__HEADWIDTH   = 19,
	EBoneModifierType__HEADDEPTH   = 20,
	EBoneModifierType__TORSOHEIGHT = 21,
	EBoneModifierType__MAX         = 22,
	EBoneModifierType__EBoneModifierType_MAX = 23,

};

// Enum ShooterGame.PrimalGameData.EEngramGroup
enum class ShooterGame_EEngramGroup : uint8_t
{
	EEngramGroup__UnusedSpacer     = 0,
	EEngramGroup__UnusedSpacer01   = 1,
	EEngramGroup__ARK_PRIME        = 2,
	EEngramGroup__UnusedSpacer02   = 3,
	EEngramGroup__ARK_SCORCHEDEARTH = 4,
	EEngramGroup__UnusedSpacer03   = 5,
	EEngramGroup__UnusedSpacer04   = 6,
	EEngramGroup__UnusedSpacer05   = 7,
	EEngramGroup__ARK_TEK          = 8,
	EEngramGroup__UnusedSpacer06   = 9,
	EEngramGroup__UnusedSpacer07   = 10,
	EEngramGroup__UnusedSpacer08   = 11,
	EEngramGroup__UnusedSpacer09   = 12,
	EEngramGroup__UnusedSpacer10   = 13,
	EEngramGroup__UnusedSpacer11   = 14,
	EEngramGroup__UnusedSpacer12   = 15,
	EEngramGroup__ARK_UNLEARNED    = 16,
	EEngramGroup__UnusedSpacer13   = 17,
	EEngramGroup__UnusedSpacer14   = 18,
	EEngramGroup__UnusedSpacer15   = 19,
	EEngramGroup__UnusedSpacer16   = 20,
	EEngramGroup__UnusedSpacer17   = 21,
	EEngramGroup__UnusedSpacer18   = 22,
	EEngramGroup__UnusedSpacer19   = 23,
	EEngramGroup__UnusedSpacer20   = 24,
	EEngramGroup__UnusedSpacer21   = 25,
	EEngramGroup__UnusedSpacer22   = 26,
	EEngramGroup__UnusedSpacer23   = 27,
	EEngramGroup__UnusedSpacer24   = 28,
	EEngramGroup__UnusedSpacer25   = 29,
	EEngramGroup__UnusedSpacer26   = 30,
	EEngramGroup__UnusedSpacer27   = 31,
	EEngramGroup__ARK_ABERRATION   = 32,
	EEngramGroup__UnusedSpacer28   = 33,
	EEngramGroup__UnusedSpacer29   = 34,
	EEngramGroup__UnusedSpacer30   = 35,
	EEngramGroup__UnusedSpacer31   = 36,
	EEngramGroup__UnusedSpacer32   = 37,
	EEngramGroup__UnusedSpacer33   = 38,
	EEngramGroup__UnusedSpacer34   = 39,
	EEngramGroup__UnusedSpacer35   = 40,
	EEngramGroup__UnusedSpacer36   = 41,
	EEngramGroup__UnusedSpacer37   = 42,
	EEngramGroup__UnusedSpacer38   = 43,
	EEngramGroup__UnusedSpacer39   = 44,
	EEngramGroup__UnusedSpacer40   = 45,
	EEngramGroup__UnusedSpacer41   = 46,
	EEngramGroup__UnusedSpacer42   = 47,
	EEngramGroup__UnusedSpacer43   = 48,
	EEngramGroup__UnusedSpacer44   = 49,
	EEngramGroup__UnusedSpacer45   = 50,
	EEngramGroup__UnusedSpacer46   = 51,
	EEngramGroup__UnusedSpacer47   = 52,
	EEngramGroup__UnusedSpacer48   = 53,
	EEngramGroup__UnusedSpacer49   = 54,
	EEngramGroup__UnusedSpacer50   = 55,
	EEngramGroup__UnusedSpacer51   = 56,
	EEngramGroup__UnusedSpacer52   = 57,
	EEngramGroup__UnusedSpacer53   = 58,
	EEngramGroup__UnusedSpacer54   = 59,
	EEngramGroup__UnusedSpacer55   = 60,
	EEngramGroup__UnusedSpacer56   = 61,
	EEngramGroup__UnusedSpacer57   = 62,
	EEngramGroup__UnusedSpacer58   = 63,
	EEngramGroup__ARK_EXTINCTION   = 64,
	EEngramGroup__UnusedSpacer59   = 65,
	EEngramGroup__UnusedSpacer60   = 66,
	EEngramGroup__UnusedSpacer61   = 67,
	EEngramGroup__UnusedSpacer62   = 68,
	EEngramGroup__UnusedSpacer63   = 69,
	EEngramGroup__UnusedSpacer64   = 70,
	EEngramGroup__UnusedSpacer65   = 71,
	EEngramGroup__UnusedSpacer66   = 72,
	EEngramGroup__UnusedSpacer67   = 73,
	EEngramGroup__UnusedSpacer68   = 74,
	EEngramGroup__UnusedSpacer69   = 75,
	EEngramGroup__UnusedSpacer70   = 76,
	EEngramGroup__UnusedSpacer71   = 77,
	EEngramGroup__UnusedSpacer72   = 78,
	EEngramGroup__UnusedSpacer73   = 79,
	EEngramGroup__UnusedSpacer74   = 80,
	EEngramGroup__UnusedSpacer75   = 81,
	EEngramGroup__UnusedSpacer76   = 82,
	EEngramGroup__UnusedSpacer77   = 83,
	EEngramGroup__UnusedSpacer78   = 84,
	EEngramGroup__UnusedSpacer79   = 85,
	EEngramGroup__UnusedSpacer80   = 86,
	EEngramGroup__UnusedSpacer81   = 87,
	EEngramGroup__UnusedSpacer82   = 88,
	EEngramGroup__UnusedSpacer83   = 89,
	EEngramGroup__UnusedSpacer84   = 90,
	EEngramGroup__UnusedSpacer85   = 91,
	EEngramGroup__UnusedSpacer86   = 92,
	EEngramGroup__UnusedSpacer87   = 93,
	EEngramGroup__UnusedSpacer88   = 94,
	EEngramGroup__UnusedSpacer89   = 95,
	EEngramGroup__UnusedSpacer90   = 96,
	EEngramGroup__UnusedSpacer91   = 97,
	EEngramGroup__UnusedSpacer92   = 98,
	EEngramGroup__UnusedSpacer93   = 99,
	EEngramGroup__UnusedSpacer94   = 100,
	EEngramGroup__UnusedSpacer95   = 101,
	EEngramGroup__UnusedSpacer96   = 102,
	EEngramGroup__UnusedSpacer97   = 103,
	EEngramGroup__UnusedSpacer98   = 104,
	EEngramGroup__UnusedSpacer99   = 105,
	EEngramGroup__UnusedSpacer100  = 106,
	EEngramGroup__UnusedSpacer101  = 107,
	EEngramGroup__UnusedSpacer102  = 108,
	EEngramGroup__UnusedSpacer103  = 109,
	EEngramGroup__UnusedSpacer104  = 110,
	EEngramGroup__UnusedSpacer105  = 111,
	EEngramGroup__UnusedSpacer106  = 112,
	EEngramGroup__UnusedSpacer107  = 113,
	EEngramGroup__UnusedSpacer108  = 114,
	EEngramGroup__UnusedSpacer109  = 115,
	EEngramGroup__UnusedSpacer110  = 116,
	EEngramGroup__UnusedSpacer111  = 117,
	EEngramGroup__UnusedSpacer112  = 118,
	EEngramGroup__UnusedSpacer113  = 119,
	EEngramGroup__UnusedSpacer114  = 120,
	EEngramGroup__UnusedSpacer115  = 121,
	EEngramGroup__UnusedSpacer116  = 122,
	EEngramGroup__UnusedSpacer117  = 123,
	EEngramGroup__UnusedSpacer118  = 124,
	EEngramGroup__UnusedSpacer119  = 125,
	EEngramGroup__UnusedSpacer120  = 126,
	EEngramGroup__UnusedSpacer121  = 127,
	EEngramGroup__ARK_GENESIS      = 128,
	EEngramGroup__ARK_GEN2         = 129,
	EEngramGroup__MAX              = 130,
	EEngramGroup__EEngramGroup_MAX = 131,

};

// Enum ShooterGame.PrimalInventoryComponent.EPrimalItemMessage
enum class ShooterGame_EPrimalItemMessage : uint8_t
{
	EPrimalItemMessage__Broken     = 0,
	EPrimalItemMessage__Repaired   = 1,
	EPrimalItemMessage__MAX        = 2,
	EPrimalItemMessage__EPrimalItemMessage_MAX = 3,

};

// Enum ShooterGame.ShooterPlayerController.EPrimalStatsValueTypes
enum class ShooterGame_EPrimalStatsValueTypes : uint8_t
{
	EPrimalStatsValueTypes__TotalShots = 0,
	EPrimalStatsValueTypes__Misses = 1,
	EPrimalStatsValueTypes__HitsStructure = 2,
	EPrimalStatsValueTypes__HitsDinoBody = 3,
	EPrimalStatsValueTypes__HitsDinoCritical = 4,
	EPrimalStatsValueTypes__HitsPlayerBody = 5,
	EPrimalStatsValueTypes__HitsPlayerCritical = 6,
	EPrimalStatsValueTypes__MAX    = 7,
	EPrimalStatsValueTypes__EPrimalStatsValueTypes_MAX = 8,

};

// Enum ShooterGame.BiomeZoneVolume.EBiomeZone
enum class ShooterGame_EBiomeZone : uint8_t
{
	EBiomeZone__None               = 0,
	EBiomeZone__Beach              = 1,
	EBiomeZone__Canyon             = 2,
	EBiomeZone__River              = 3,
	EBiomeZone__Grassland          = 4,
	EBiomeZone__Swamp              = 5,
	EBiomeZone__Jungle             = 6,
	EBiomeZone__RedwoodForest      = 7,
	EBiomeZone__Mountain           = 8,
	EBiomeZone__Snow               = 9,
	EBiomeZone__Ocean              = 10,
	EBiomeZone__Lava               = 11,
	EBiomeZone__Surface            = 12,
	EBiomeZone__FertileChamber     = 13,
	EBiomeZone__BioluminescentChamber = 14,
	EBiomeZone__ElementChamber     = 15,
	EBiomeZone__Wasteland          = 16,
	EBiomeZone__EBiomeZone_MAX     = 17,

};

// Enum ShooterGame.TerrainGenerator.EVoronoiBlendType
enum class ShooterGame_EVoronoiBlendType : uint8_t
{
	EVoronoiBlendType__Flat        = 0,
	EVoronoiBlendType__Closest     = 1,
	EVoronoiBlendType__SecondClosest = 2,
	EVoronoiBlendType__Cellular    = 3,
	EVoronoiBlendType__Organic     = 4,
	EVoronoiBlendType__EVoronoiBlendType_MAX = 5,

};

// Enum ShooterGame.DataListEntryButton_PrimalFolder.FolderWidgetType
enum class ShooterGame_EFolderWidgetType : uint8_t
{
	FolderWidgetType__FWT_Back     = 0,
	FolderWidgetType__FWT_Folder   = 1,
	FolderWidgetType__FWT_CustomFolder = 2,
	FolderWidgetType__FWT_MAX      = 3,

};

// Enum ShooterGame.FlockingBehavior.EBoidType
enum class ShooterGame_EBoidType : uint8_t
{
	EBoidType__Follower            = 0,
	EBoidType__Leader              = 1,
	EBoidType__FreeAgent           = 2,
	EBoidType__EBoidType_MAX       = 3,

};

// Enum ShooterGame.MissionMetaTagInfo.ENativeMissionMetaTag
enum class ShooterGame_ENativeMissionMetaTag : uint8_t
{
	ENativeMissionMetaTag__INVALID = 0,
	ENativeMissionMetaTag__GENESIS_VR_BOSS_UNLOCK = 1,
	ENativeMissionMetaTag__ARCTIC_MISSION = 2,
	ENativeMissionMetaTag__BOG_MISSION = 3,
	ENativeMissionMetaTag__LUNAR_MISSION = 4,
	ENativeMissionMetaTag__OCEAN_MISSION = 5,
	ENativeMissionMetaTag__VOLCANIC_MISSION = 6,
	ENativeMissionMetaTag__NORMAL_DIFFICULTY = 7,
	ENativeMissionMetaTag__ALPHA_DIFFICULTY = 8,
	ENativeMissionMetaTag__BETA_DIFFICULTY = 9,
	ENativeMissionMetaTag__GAMMA_DIFFICULTY = 10,
	ENativeMissionMetaTag__MAX     = 11,
	ENativeMissionMetaTag__ENativeMissionMetaTag_MAX = 12,

};

// Enum ShooterGame.MissionDispatcher.EMissionDispatcherTriggerMode
enum class ShooterGame_EMissionDispatcherTriggerMode : uint8_t
{
	EMissionDispatcherTriggerMode__AutoStartMission = 0,
	EMissionDispatcherTriggerMode__Ignore = 1,
	EMissionDispatcherTriggerMode__ActivateViaMultiUse = 2,
	EMissionDispatcherTriggerMode__EMissionDispatcherTriggerMode_MAX = 3,

};

// Enum ShooterGame.MissionType.EMissionDispatchMode
enum class ShooterGame_EMissionDispatchMode : uint8_t
{
	EMissionDispatchMode__StartAnywhere = 0,
	EMissionDispatchMode__RequireNearbyMissionDispatcher = 1,
	EMissionDispatchMode__RequireInsideMissionDispatcher = 2,
	EMissionDispatchMode__UseBPStaticCanStartMission = 3,
	EMissionDispatchMode__RequireInsideDispatcherNoCheck = 4,
	EMissionDispatchMode__EMissionDispatchMode_MAX = 5,

};

// Enum ShooterGame.PrimalBuff_Companion.ECompanionState
enum class ShooterGame_ECompanionState : uint8_t
{
	ECompanionState__IDLE          = 0,
	ECompanionState__FOCUSED       = 1,
	ECompanionState__EVENT         = 2,
	ECompanionState__MONOLOGUE     = 3,
	ECompanionState__ASLEEP        = 4,
	ECompanionState__CUSTOM        = 5,
	ECompanionState__ECompanionState_MAX = 6,

};

// Enum ShooterGame.PrimalDinoCharacter.EBabyCuddleType
enum class ShooterGame_EBabyCuddleType : uint8_t
{
	EBabyCuddleType__PET           = 0,
	EBabyCuddleType__FOOD          = 1,
	EBabyCuddleType__WALK          = 2,
	EBabyCuddleType__MAX           = 3,
	EBabyCuddleType__EBabyCuddleType_MAX = 4,

};

// Enum ShooterGame.PrimalUI.ControlDirection
enum class ShooterGame_EControlDirection : uint8_t
{
	None                           = 0,
	Up                             = 1,
	Down                           = 2,
	Left                           = 3,
	Right                          = 4,
	ControlDirection_MAX           = 5,

};

// Enum ShooterGame.PrimalUI.HighlightStartingPoint
enum class ShooterGame_EHighlightStartingPoint : uint8_t
{
	TopLeft                        = 0,
	Center                         = 1,
	HighlightStartingPoint_MAX     = 2,

};

// Enum ShooterGame.PrimalClimbingSettings.EClimbingAnimationType
enum class ShooterGame_EClimbingAnimationType : uint8_t
{
	EClimbingAnimationType__Up     = 0,
	EClimbingAnimationType__Down   = 1,
	EClimbingAnimationType__Right  = 2,
	EClimbingAnimationType__Left   = 3,
	EClimbingAnimationType__MeleeUp = 4,
	EClimbingAnimationType__MeleeRight = 5,
	EClimbingAnimationType__MeleeLeft = 6,
	EClimbingAnimationType__FinishUp = 7,
	EClimbingAnimationType__FinishDown = 8,
	EClimbingAnimationType__HangingFwd = 9,
	EClimbingAnimationType__HangingMelee = 10,
	EClimbingAnimationType__HangingFinishUp = 11,
	EClimbingAnimationType__HangingFinishDown = 12,
	EClimbingAnimationType__JumpUp = 13,
	EClimbingAnimationType__JumpUpRight = 14,
	EClimbingAnimationType__JumpUpLeft = 15,
	EClimbingAnimationType__SlideDown = 16,
	EClimbingAnimationType__AttachUp = 17,
	EClimbingAnimationType__AttachDown = 18,
	EClimbingAnimationType__AttachHangingUp = 19,
	EClimbingAnimationType__AttachHangingDown = 20,
	EClimbingAnimationType__FlipLeft = 21,
	EClimbingAnimationType__FlipRight = 22,
	EClimbingAnimationType__FlipUp = 23,
	EClimbingAnimationType__FlipDown = 24,
	EClimbingAnimationType__TurnUp = 25,
	EClimbingAnimationType__TurnDown = 26,
	EClimbingAnimationType__TurnRight = 27,
	EClimbingAnimationType__TurnLeft = 28,
	EClimbingAnimationType__OpenInventory = 29,
	EClimbingAnimationType__OpenInventoryHanging = 30,
	EClimbingAnimationType__QuakeFall = 31,
	EClimbingAnimationType__MAX    = 32,
	EClimbingAnimationType__EClimbingAnimationType_MAX = 33,

};

// Enum ShooterGame.PrimalClimbingSettings.EClimbingType
enum class ShooterGame_EClimbingType : uint8_t
{
	EClimbingType__None            = 0,
	EClimbingType__ClimbLook       = 1,
	EClimbingType__ClimbInput      = 2,
	EClimbingType__Slide           = 3,
	EClimbingType__MAX             = 4,
	EClimbingType__EClimbingType_MAX = 5,

};

// Enum ShooterGame.PrimalClimbingSettings.EClimbingMode
enum class ShooterGame_EClimbingMode : uint8_t
{
	EClimbingMode__None            = 0,
	EClimbingMode__Attached        = 1,
	EClimbingMode__Finalizing      = 2,
	EClimbingMode__MAX             = 3,
	EClimbingMode__EClimbingMode_MAX = 4,

};

// Enum ShooterGame.PrimalBuff_Grappled.EGrappleState
enum class ShooterGame_EGrappleState : uint8_t
{
	EGrappleState__GRAPPLE_Idle    = 0,
	EGrappleState__GRAPPLE_Pulling = 1,
	EGrappleState__GRAPPLE_Releasing = 2,
	EGrappleState__GRAPPLE_Custom  = 3,
	EGrappleState__GRAPPLE_Max     = 4,

};

// Enum ShooterGame.PrimalStructureElevatorPlatform.EPrimalStructureElevatorState
enum class ShooterGame_EPrimalStructureElevatorState : uint8_t
{
	PSLS_Down                      = 0,
	PSLS_Up                        = 1,
	PSLS_MAX                       = 2,

};

// Enum ShooterGame.PrimalWorldBuffData.EWorldBuffDifficultyType
enum class ShooterGame_EWorldBuffDifficultyType : uint8_t
{
	EWorldBuffDifficultyType__GAMMA = 0,
	EWorldBuffDifficultyType__BETA = 1,
	EWorldBuffDifficultyType__ALPHA = 2,
	EWorldBuffDifficultyType__OTHER = 3,
	EWorldBuffDifficultyType__EWorldBuffDifficultyType_MAX = 4,

};

// Enum ShooterGame.PrimalWorldBuffData.EWorldBuffPropertyLocation
enum class ShooterGame_EWorldBuffPropertyLocation : uint8_t
{
	EWorldBuffPropertyLocation__GameMode = 0,
	EWorldBuffPropertyLocation__GameState = 1,
	EWorldBuffPropertyLocation__EWorldBuffPropertyLocation_MAX = 2,

};

// Enum ShooterGame.VictoryCore.EEditorMessageLogLevel
enum class ShooterGame_EEditorMessageLogLevel : uint8_t
{
	EEditorMessageLogLevel__Error  = 0,
	EEditorMessageLogLevel__Warning = 1,
	EEditorMessageLogLevel__Info   = 2,
	EEditorMessageLogLevel__Success = 3,
	EEditorMessageLogLevel__EEditorMessageLogLevel_MAX = 4,

};

// Enum ShooterGame.VictoryCore.EServerOctreeGroup
enum class ShooterGame_EServerOctreeGroup : uint8_t
{
	EServerOctreeGroup__STASISCOMPONENTS = 0,
	EServerOctreeGroup__PLAYERPAWNS = 1,
	EServerOctreeGroup__DINOPAWNS  = 2,
	EServerOctreeGroup__PAWNS      = 3,
	EServerOctreeGroup__STRUCTURES = 4,
	EServerOctreeGroup__TARGETABLEACTORS = 5,
	EServerOctreeGroup__PLAYERS_CONNECTED = 6,
	EServerOctreeGroup__SPATIALNETWORKEDACTORS = 7,
	EServerOctreeGroup__SPATIALNETWORKEDACTORS_DORMANT = 8,
	EServerOctreeGroup__ALL_SPATIAL = 9,
	EServerOctreeGroup__THERMALSTRUCTURES = 10,
	EServerOctreeGroup__STRUCTURES_CORE = 11,
	EServerOctreeGroup__DINOPAWNS_TAMED = 12,
	EServerOctreeGroup__PLAYERS_AND_TAMED_DINOS = 13,
	EServerOctreeGroup__PLAYERS_CONNECTED_AND_TAMED_DINOS = 14,
	EServerOctreeGroup__DINOFOODCONTAINER = 15,
	EServerOctreeGroup__GRENADES   = 16,
	EServerOctreeGroup__TREESAPTAPS = 17,
	EServerOctreeGroup__LARGEUNSTASISRANGE = 18,
	EServerOctreeGroup__TRAPS      = 19,
	EServerOctreeGroup__MAX        = 20,
	EServerOctreeGroup__EServerOctreeGroup_MAX = 21,

};

// Enum ShooterGame.PrimalProjectileNetGun.ETraceType
enum class ShooterGame_ETraceType : uint8_t
{
	ETraceType__TT_LineTrace       = 0,
	ETraceType__TT_ArcTrace        = 1,
	ETraceType__TT_Max             = 2,

};

// Enum ShooterGame.StructuresPlus.EGlassTransparencyType
enum class ShooterGame_EGlassTransparencyType : uint8_t
{
	EGlassTransparencyType__TwoWay = 0,
	EGlassTransparencyType__OneWayA = 1,
	EGlassTransparencyType__OneWayB = 2,
	EGlassTransparencyType__Opaque = 3,
	EGlassTransparencyType__EGlassTransparencyType_MAX = 4,

};

// Enum ShooterGame.StructuresPlus.ESPMessageType
enum class ShooterGame_ESPMessageType : uint8_t
{
	ESPMessageType__Default        = 0,
	ESPMessageType__Error          = 1,
	ESPMessageType__Warning        = 2,
	ESPMessageType__Helpful        = 3,
	ESPMessageType__ESPMessageType_MAX = 4,

};

// Enum ShooterGame.WaterVolumeWithFlow.EColorChannelTarget
enum class ShooterGame_EColorChannelTarget : uint8_t
{
	EColorChannelTarget__Red       = 0,
	EColorChannelTarget__Green     = 1,
	EColorChannelTarget__Blue      = 2,
	EColorChannelTarget__Alpha     = 3,
	EColorChannelTarget__All       = 4,
	EColorChannelTarget__EColorChannelTarget_MAX = 5,

};

// Enum ShooterGame.ContextMenuItem.UContextMenuItemSwitchMode
enum class ShooterGame_EUContextMenuItemSwitchMode : uint8_t
{
	UContextMenuItemSwitchMode__None = 0,
	UContextMenuItemSwitchMode__Radio = 1,
	UContextMenuItemSwitchMode__Checkbox = 2,
	UContextMenuItemSwitchMode__UContextMenuItemSwitchMode_MAX = 3,

};

// Enum ShooterGame.PrimalStructurePlacer.EPrimalStructurePlacerState
enum class ShooterGame_EPrimalStructurePlacerState : uint8_t
{
	EPrimalStructurePlacerState__Default = 0,
	EPrimalStructurePlacerState__FadeAway = 1,
	EPrimalStructurePlacerState__PlacingStructure = 2,
	EPrimalStructurePlacerState__EPrimalStructurePlacerState_MAX = 3,

};

// Enum ShooterGame.PrimalStructureItemContainer_CropPlot.ESeedCropPhase
enum class ShooterGame_ESeedCropPhase : uint8_t
{
	ESeedCropPhase__Seedling       = 0,
	ESeedCropPhase__Midling        = 1,
	ESeedCropPhase__Growthling     = 2,
	ESeedCropPhase__Fruiting       = 3,
	ESeedCropPhase__MAX            = 4,
	ESeedCropPhase__ESeedCropPhase_MAX = 5,

};

// Enum ShooterGame.UI_Inventory.EDropItemIconAction
enum class ShooterGame_EDropItemIconAction : uint8_t
{
	EDropItemIconAction__DA_NoAction = 0,
	EDropItemIconAction__DA_Equip  = 1,
	EDropItemIconAction__DA_UnEquip = 2,
	EDropItemIconAction__DA_AddToSlot = 3,
	EDropItemIconAction__DA_RemoveFromSlot = 4,
	EDropItemIconAction__DA_ToRemoteInv = 5,
	EDropItemIconAction__DA_FromRemoteInv = 6,
	EDropItemIconAction__DA_RemoteEquip = 7,
	EDropItemIconAction__DA_MergeItemStack = 8,
	EDropItemIconAction__DA_SplitItemStack = 9,
	EDropItemIconAction__DA_SwapItems = 10,
	EDropItemIconAction__DA_UseWithItem = 11,
	EDropItemIconAction__DA_UnEquipTransferToLocal = 12,
	EDropItemIconAction__DA_RemoveItemSkin = 13,
	EDropItemIconAction__DA_SplitItemStackOne = 14,
	EDropItemIconAction__DA_RemoveWeaponAmmo = 15,
	EDropItemIconAction__DA_FromRemoteInvToSlot = 16,
	EDropItemIconAction__DA_ToRemoteInvFromSlot = 17,
	EDropItemIconAction__DA_EquipLocalFromRemote = 18,
	EDropItemIconAction__DA_EquipRemoteFromLocal = 19,
	EDropItemIconAction__DA_UnequipRemote = 20,
	EDropItemIconAction__DA_UnequipTransferToRemote = 21,
	EDropItemIconAction__DA_ToArkInv = 22,
	EDropItemIconAction__DA_FromArkInv = 23,
	EDropItemIconAction__MAX       = 24,
	EDropItemIconAction__EDropItemIconAction_MAX = 25,

};

// Enum ShooterGame.UI_MissionList.EDataDisplay
enum class ShooterGame_EDataDisplay : uint8_t
{
	EDataDisplay__MISSION_INFO     = 0,
	EDataDisplay__LEADERBOARDS     = 1,
	EDataDisplay__EDataDisplay_MAX = 2,

};

// Enum ShooterGame.UI_MissionList.EListDisplay
enum class ShooterGame_EListDisplay : uint8_t
{
	EListDisplay__MISSIONS         = 0,
	EListDisplay__EFFECTS          = 1,
	EListDisplay__EListDisplay_MAX = 2,

};

// Enum ShooterGame.UI_Hub.EHubSubMenu
enum class ShooterGame_EHubSubMenu : uint8_t
{
	EHubSubMenu__Inventory         = 0,
	EHubSubMenu__Engrams           = 1,
	EHubSubMenu__TribeManager      = 2,
	EHubSubMenu__TameGroups        = 3,
	EHubSubMenu__TamingList        = 4,
	EHubSubMenu__SurvivalProfile   = 5,
	EHubSubMenu__MissionList       = 6,
	EHubSubMenu__MAX               = 7,
	EHubSubMenu__EHubSubMenu_MAX   = 8,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ShooterGame.PrimalGameData.PrimalCharacterStatusValueDefinition
// 0x0020
struct FPrimalCharacterStatusValueDefinition
{
	class UTexture2D*                                  StatusValueIcon;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FString                                     StatusValueName;                                           // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	bool                                               bLevelUpSetToMaxValue;                                     // 0x0018(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bDisplayHideCurrentValue;                                  // 0x0019(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bDisplayAsPercent;                                         // 0x001A(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_WK90[0x5];                                     // 0x001B(0x0005) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.PrimalGameData.PrimalItemStatDefinition
// 0x0018
struct FPrimalItemStatDefinition
{
	class UTexture2D*                                  ItemStatIcon;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FString                                     ItemStatName;                                              // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

};

// ScriptStruct ShooterGame.PrimalGameData.PrimalItemDefinition
// 0x0018
struct FPrimalItemDefinition
{
	class UTexture2D*                                  ItemTypeIcon;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FString                                     ItemTypeName;                                              // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

};

// ScriptStruct ShooterGame.PrimalGameData.PrimalEquipmentDefinition
// 0x0018
struct FPrimalEquipmentDefinition
{
	class UTexture2D*                                  EquipmentTypeIcon;                                         // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FString                                     EquipmentTypeName;                                         // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

};

// ScriptStruct ShooterGame.PrimalGameData.AppIDItem
// 0x0060
struct FAppIDItem
{
	struct FString                                     AchievementID;                                             // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<struct FString>                             AchievementIDs;                                            // 0x0010(0x0010) (Edit, ZeroConstructor)
	struct FName                                       GiveItemIfEmoteNameUnlocked;                               // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                AppID;                                                     // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                PlayerBadgeGroup;                                          // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bForceNewDefaultCosmetic;                                  // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_P87G[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FString>                             PlayerIDStrings;                                           // 0x0038(0x0010) (Edit, ZeroConstructor)
	class UClass*                                      ItemClass;                                                 // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class UClass*>                              ItemClasses;                                               // 0x0050(0x0010) (Edit, ZeroConstructor)

};

// ScriptStruct ShooterGame.RangedValues
// 0x0008
struct FRangedValues
{
	int                                                Range;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Value;                                                     // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.PrimalGameData.LevelExperienceRamp
// 0x0010
struct FLevelExperienceRamp
{
	TArray<float>                                      ExperiencePointsForLevel;                                  // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

};

// ScriptStruct ShooterGame.PrimalGameData.NamedTeamDefinition
// 0x0080
struct FNamedTeamDefinition
{
	struct FName                                       TeamName;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      bTargetingTeamExclusionList : 1;                           // 0x0008(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bTargetingTeamInclusionList : 1;                           // 0x0008(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bAllowTargetsOnOwnTeam : 1;                                // 0x0008(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bIsCarnivore : 1;                                          // 0x0008(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bTargetPlayersAndTamedOnly : 1;                            // 0x0008(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bForceTargetPlayersAndTamed : 1;                           // 0x0008(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bIgnoredByAllTeams : 1;                                    // 0x0008(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      UnknownData_LFLC[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               TeamNameList;                                              // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               TargetingMultiplierTeamNames;                              // 0x0020(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               DontGiveDamageTeamList;                                    // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               DontReceiveDamageTeamList;                                 // 0x0040(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               MaximumTargetableDistanceTeams;                            // 0x0050(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      MaximumTargetableDistances;                                // 0x0060(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      TargetingMultiplierTeamWeights;                            // 0x0070(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

};

// ScriptStruct ShooterGame.PrimalGameData.ExplorerNoteAchievement
// 0x0020
struct FExplorerNoteAchievement
{
	struct FString                                     AchievementName;                                           // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        ExplorerNoteIndices;                                       // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

};

// ScriptStruct ShooterGame.PrimalGameData.ClassRemapping
// 0x0010
struct FClassRemapping
{
	class UClass*                                      FromClass;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UClass*                                      ToClass;                                                   // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.PrimalGameData.ActiveEventSupplyCrateWeight
// 0x0028
struct FActiveEventSupplyCrateWeight
{
	TArray<class UClass*>                              ReplacementCrateClasses;                                   // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<float>                                      Weights;                                                   // 0x0010(0x0010) (Edit, ZeroConstructor)
	struct FName                                       ActiveEvent;                                               // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.PrimalGameData.ClassAddition
// 0x0018
struct FClassAddition
{
	class UClass*                                      ForClass;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class UClass*>                              ClassAdditions;                                            // 0x0008(0x0010) (Edit, ZeroConstructor)

};

// ScriptStruct ShooterGame.PrimalGameData.BuffAddition
// 0x0018
struct FBuffAddition
{
	class UClass*                                      ForClass;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class UClass*>                              BuffAdditions;                                             // 0x0008(0x0010) (Edit, ZeroConstructor)

};

// ScriptStruct ShooterGame.AvailableMission
// 0x0018
struct FAvailableMission
{
	class UClass*                                      MissionClass;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_FN6M[0x10];                                    // 0x0008(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.PrimalGameData.RandValueRange
// 0x000C
struct FRandValueRange
{
	float                                              MinVal;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              MaxVal;                                                    // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              RandPower;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.PrimalGameData.MultiAchievement
// 0x0020
struct FMultiAchievement
{
	struct FString                                     UnlockAchievement;                                         // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FString>                             RequiredAchievements;                                      // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

};

// ScriptStruct ShooterGame.PrimalGameData.ClassRemappingWeight
// 0x0038
struct FClassRemappingWeight
{
	class UClass*                                      FromClass;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class UClass*>                              ToClasses;                                                 // 0x0008(0x0010) (Edit, ZeroConstructor)
	TArray<float>                                      Weights;                                                   // 0x0018(0x0010) (Edit, ZeroConstructor)
	struct FName                                       ActiveEvent;                                               // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      bExactMatch : 1;                                           // 0x0030(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      UnknownData_5XDP[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.PrimalGameData.NPCDifficultyLevelRange
// 0x0030
struct FNPCDifficultyLevelRange
{
	TArray<float>                                      EnemyLevelsMin;                                            // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate)
	TArray<float>                                      EnemyLevelsMax;                                            // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate)
	TArray<float>                                      GameDifficulties;                                          // 0x0020(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate)

};

// ScriptStruct ShooterGame.PrimalGameData.NPCSpawnLimit
// 0x0020
struct FNPCSpawnLimit
{
	class UClass*                                      NPCClass;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FString                                     NPCClassString;                                            // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              MaxPercentageOfDesiredNumToAllow;                          // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_KRRB[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.PrimalGameData.UnlockableEmoteEntry
// 0x0048
struct FUnlockableEmoteEntry
{
	struct FName                                       EmoteName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FString                                     EmoteDescription;                                          // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       EmoteGroup;                                                // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FString                                     UseEmoteMessage;                                           // 0x0020(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UAnimMontage*                                MaleAnim;                                                  // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UAnimMontage*                                FemaleAnim;                                                // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              EmotePlayMinimumInterval;                                  // 0x0040(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bGiveDefault;                                              // 0x0044(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_8ULD[0x3];                                     // 0x0045(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.PrimalGameData.ObjectCorrelation
// 0x0010
struct FObjectCorrelation
{
	class UObject*                                     FromObject;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     ToObject;                                                  // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.PrimalGameData.OverrideAnimBlueprintEntry
// 0x0010
struct FOverrideAnimBlueprintEntry
{
	class UClass*                                      FromBPClass;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UClass*                                      ToBPClass;                                                 // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.PrimalGameData.HairStyleDefinition
// 0x0040
struct FHairStyleDefinition
{
	bool                                               bIsHairStyleLocked;                                        // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_XUL8[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       UnlockHairStyleName;                                       // 0x0004(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_O11D[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     HairStyleName;                                             // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class USkeletalMesh*                               HairMeshMale;                                              // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              MaleBeginHairMorphTargetRange;                             // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ZU6E[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USkeletalMesh*                               HairMeshFemale;                                            // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              FemaleBeginHairMorphTargetRange;                           // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_03J1[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.PrimalGameData.GrinderItemReplacer
// 0x0010
struct FGrinderItemReplacer
{
	class UClass*                                      current;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UClass*                                      replacement;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.PrimalGameData.WorldDefaultItemSet
// 0x0030
struct FWorldDefaultItemSet
{
	struct FName                                       ItemSetName;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<struct FName>                               MapName;                                                   // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	bool                                               bFirstTimeEquip;                                           // 0x0018(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bOnlyGiveItemSetOnce;                                      // 0x0019(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bEquipOnNewPawn;                                           // 0x001A(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_282E[0x1];                                     // 0x001B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ForceEquipIfAppID;                                         // 0x001C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<class UClass*>                              ItemsToGive;                                               // 0x0020(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

};

// ScriptStruct ShooterGame.PrimalGameData.ExtraEggItem
// 0x0020
struct FExtraEggItem
{
	class UClass*                                      DropItem;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FName                                       ActiveEventFilter;                                         // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UClass*                                      ForDinoCharacter;                                          // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              DropChance;                                                // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_FM62[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.PrimalGameData.InvalidReferenceRedirector
// 0x0038
struct FInvalidReferenceRedirector
{
	struct FString                                     InvalidReferenceKey;                                       // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      RedirectedClass;                                           // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FStringAssetReference                       RedirectedClassSoftReference;                              // 0x0018(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FString>                             LimitedToMaps;                                             // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

};

// ScriptStruct ShooterGame.PrimalGameData.ExtraItemAttachmentInfo
// 0x0010
struct FExtraItemAttachmentInfo
{
	class UActorComponent*                             ExtraComponentsToAttach;                                   // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FName                                       SocketToAttachTo;                                          // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.ItemNetID
// 0x0008
struct FItemNetID
{
	uint32_t                                           ItemID1;                                                   // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint32_t                                           ItemID2;                                                   // 0x0004(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct ShooterGame.PrimalGameData.CraftingResourceRequirement
// 0x0018
struct FCraftingResourceRequirement
{
	float                                              BaseResourceRequirement;                                   // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_2LID[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      ResourceItemType;                                          // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bCraftingRequireExactResourceType;                         // 0x0010(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_XNU0[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.PrimalItem.UseItemAddCharacterStatusValue
// 0x0030
struct FUseItemAddCharacterStatusValue
{
	float                                              BaseAmountToAdd;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      bPercentOfMaxStatusValue : 1;                              // 0x0004(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bPercentOfCurrentStatusValue : 1;                          // 0x0004(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bUseItemQuality : 1;                                       // 0x0004(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bDontRequireLessThanMaxToUse : 1;                          // 0x0004(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bAddOverTime : 1;                                          // 0x0004(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bAddOverTimeSpeedInSeconds : 1;                            // 0x0004(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bContinueOnUnchangedValue : 1;                             // 0x0004(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bSetValue : 1;                                             // 0x0004(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bSetAdditionalValue : 1;                                   // 0x0005(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bResetExistingModifierDescriptionIndex : 1;                // 0x0005(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bForceUseStatOnDinos : 1;                                  // 0x0005(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      UnknownData_LC01[0x2];                                     // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LimitExistingModifierDescriptionToMaxAmount;               // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              AddOverTimeSpeed;                                          // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              PercentAbsoluteMaxValue;                                   // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              PercentAbsoluteMinValue;                                   // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int                                                StatusValueModifierDescriptionIndex;                       // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              ItemQualityAddValueMultiplier;                             // 0x001C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<ShooterGame_EPrimalCharacterStatusValue> StatusValueType;                                           // 0x0020(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<ShooterGame_EPrimalCharacterStatusValue> StopAtValueNearMax;                                        // 0x0021(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_5TK9[0x6];                                     // 0x0022(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      ScaleValueByCharacterDamageType;                           // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.PrimalItem.ItemStatInfo
// 0x0024
struct FItemStatInfo
{
	unsigned char                                      bUsed : 1;                                                 // 0x0000(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bCalculateAsPercent : 1;                                   // 0x0000(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bDisplayAsPercent : 1;                                     // 0x0000(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bRequiresSubmerged : 1;                                    // 0x0000(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bPreventIfSubmerged : 1;                                   // 0x0000(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bHideStatFromTooltip : 1;                                  // 0x0000(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      UnknownData_8OLU[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                DefaultModifierValue;                                      // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int                                                RandomizerRangeOverride;                                   // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              RandomizerRangeMultiplier;                                 // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              TheRandomizerPower;                                        // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor)
	float                                              StateModifierScale;                                        // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              InitialValueConstant;                                      // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              RatingValueMultiplier;                                     // 0x001C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              AbsoluteMaxValue;                                          // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.PrimalGameData.DinoAncestorsEntry
// 0x0030
struct FDinoAncestorsEntry
{
	struct FString                                     MaleName;                                                  // 0x0000(0x0010) (ZeroConstructor)
	uint32_t                                           MaleDinoID1;                                               // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	uint32_t                                           MaleDinoID2;                                               // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     FemaleName;                                                // 0x0018(0x0010) (ZeroConstructor)
	uint32_t                                           FemaleDinoID1;                                             // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	uint32_t                                           FemaleDinoID2;                                             // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.PrimalItem.CustomItemByteArray
// 0x0010
struct FCustomItemByteArray
{
	TArray<unsigned char>                              Bytes;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

};

// ScriptStruct ShooterGame.PrimalItem.CustomItemDoubles
// 0x0010
struct FCustomItemDoubles
{
	TArray<double>                                     Doubles;                                                   // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

};

// ScriptStruct ShooterGame.PrimalItem.CustomContextSubmenu
// 0x0018
struct FCustomContextSubmenu
{
	struct FName                                       SubmenuName;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<struct FName>                               SubmenuOptions;                                            // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

};

// ScriptStruct ShooterGame.PrimalItem.CustomContextMenuData
// 0x0020
struct FCustomContextMenuData
{
	struct FName                                       ContextItemName;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FString                                     DisplayString;                                             // 0x0008(0x0010) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       OptionalKeybindName;                                       // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.PrimalGameData.DinoAncestorsEntryBlueprint
// 0x0030
struct FDinoAncestorsEntryBlueprint
{
	struct FString                                     MaleName;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                MaleDinoID1;                                               // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                MaleDinoID2;                                               // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     FemaleName;                                                // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                FemaleDinoID1;                                             // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                FemaleDinoID2;                                             // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.PrimalItem.CustomItemByteArrays
// 0x0010
struct FCustomItemByteArrays
{
	TArray<struct FCustomItemByteArray>                ByteArrays;                                                // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

};

// ScriptStruct ShooterGame.PrimalItem.CustomItemData
// 0x0078
struct FCustomItemData
{
	struct FName                                       CustomDataName;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<struct FString>                             CustomDataStrings;                                         // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      CustomDataFloats;                                          // 0x0018(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UObject*>                             CustomDataObjects;                                         // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              CustomDataClasses;                                         // 0x0038(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               CustomDataNames;                                           // 0x0048(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FCustomItemByteArrays                       CustomDataBytes;                                           // 0x0058(0x0010) (Edit, DisableEditOnInstance, RepSkip)
	struct FCustomItemDoubles                          CustomDataDoubles;                                         // 0x0068(0x0010) (Edit, DisableEditOnInstance)

};

// ScriptStruct ShooterGame.PrimalItem.ItemNetInfo
// 0x01B0
struct FItemNetInfo
{
	class UClass*                                      ItemArchetype;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FItemNetID                                  ItemId;                                                    // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	uint32_t                                           ItemQuantity;                                              // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                CustomItemID;                                              // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                SlotIndex;                                                 // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_F6RL[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	double                                             CreationTime;                                              // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     CustomItemName;                                            // 0x0028(0x0010) (ZeroConstructor)
	struct FString                                     CustomItemDescription;                                     // 0x0038(0x0010) (ZeroConstructor)
	double                                             UploadEarliestValidTime;                                   // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<uint64_t>                                   SteamUserItemID;                                           // 0x0050(0x0010) (ZeroConstructor)
	unsigned char                                      bIsBlueprint : 1;                                          // 0x0060(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bIsEngram : 1;                                             // 0x0060(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bIsCustomRecipe : 1;                                       // 0x0060(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bIsFoodRecipe : 1;                                         // 0x0060(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bIsRepairing : 1;                                          // 0x0060(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bAllowRemovalFromInventory : 1;                            // 0x0060(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bHideFromInventoryDisplay : 1;                             // 0x0060(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bAllowRemovalFromSteamInventory : 1;                       // 0x0060(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bFromSteamInventory : 1;                                   // 0x0061(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bIsFromAllClustersInventory : 1;                           // 0x0061(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bForcePreventGrinding : 1;                                 // 0x0061(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bIsEquipped : 1;                                           // 0x0061(0x0001) BIT_FIELD (RepSkip, NoDestructor)
	unsigned char                                      bIsSlot : 1;                                               // 0x0061(0x0001) BIT_FIELD (RepSkip, NoDestructor)
	unsigned char                                      bIsInitialItem : 1;                                        // 0x0061(0x0001) BIT_FIELD (RepSkip, NoDestructor)
	unsigned char                                      UnknownData_25K4[0x2];                                     // 0x0062(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	uint16_t                                           CraftQueue;                                                // 0x0064(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_FKH7[0x2];                                     // 0x0066(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	double                                             NextCraftCompletionTime;                                   // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              CraftingSkill;                                             // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              CraftedSkillBonus;                                         // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     CrafterCharacterName;                                      // 0x0078(0x0010) (ZeroConstructor)
	struct FString                                     CrafterTribeName;                                          // 0x0088(0x0010) (ZeroConstructor)
	uint32_t                                           WeaponClipAmmo;                                            // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              ItemDurability;                                            // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              ItemRating;                                                // 0x00A0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	uint32_t                                           ExpirationTimeUTC;                                         // 0x00A4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      ItemQualityIndex;                                          // 0x00A8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_LF22[0x7];                                     // 0x00A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      ItemCustomClass;                                           // 0x00B0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	uint16_t                                           ItemStatValues[0x8];                                       // 0x00B8(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int16_t                                            ItemColorID[0x6];                                          // 0x00C8(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_8K93[0x4];                                     // 0x00D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      ItemSkinTemplate;                                          // 0x00D8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FCustomItemData>                     CustomItemDatas;                                           // 0x00E0(0x0010) (ZeroConstructor)
	TArray<struct FColor>                              CustomItemColors;                                          // 0x00F0(0x0010) (ZeroConstructor)
	TArray<struct FCraftingResourceRequirement>        CustomResourceRequirements;                                // 0x0100(0x0010) (ZeroConstructor)
	double                                             NextSpoilingTime;                                          // 0x0110(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	double                                             LastSpoilingTime;                                          // 0x0118(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	uint64_t                                           OwnerPlayerDataID;                                         // 0x0120(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor)
	TWeakObjectPtr<class AShooterCharacter>            LastOwnerPlayer;                                           // 0x0128(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor)
	double                                             LastAutoDurabilityDecreaseTime;                            // 0x0130(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor)
	float                                              ItemStatClampsMultiplier;                                  // 0x0138(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor)
	struct FVector                                     OriginalItemDropLocation;                                  // 0x013C(0x000C) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor)
	int16_t                                            PreSkinItemColorID[0x6];                                   // 0x0148(0x000C) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor)
	unsigned char                                      EggNumberOfLevelUpPointsApplied[0xC];                      // 0x0154(0x000C) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor)
	float                                              EggTamedIneffectivenessModifier;                           // 0x0160(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor)
	unsigned char                                      EggColorSetIndices[0x6];                                   // 0x0164(0x0006) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor)
	unsigned char                                      UnknownData_JRXY[0x2];                                     // 0x016A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                EggGenderOverride;                                         // 0x016C(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor)
	unsigned char                                      ItemVersion;                                               // 0x0170(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor)
	unsigned char                                      UnknownData_DV3W[0x7];                                     // 0x0171(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	double                                             ClusterSpoilingTimeUTC;                                    // 0x0178(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor)
	TArray<struct FDinoAncestorsEntry>                 EggDinoAncestors;                                          // 0x0180(0x0010) (ZeroConstructor, RepSkip)
	TArray<struct FDinoAncestorsEntry>                 EggDinoAncestorsMale;                                      // 0x0190(0x0010) (ZeroConstructor, RepSkip)
	int                                                EggRandomMutationsFemale;                                  // 0x01A0(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor)
	int                                                EggRandomMutationsMale;                                    // 0x01A4(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor)
	unsigned char                                      ItemProfileVersion;                                        // 0x01A8(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor)
	bool                                               bNetInfoFromClient;                                        // 0x01A9(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor)
	unsigned char                                      UnknownData_29JN[0x6];                                     // 0x01AA(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.PrimalItem.UnreplicatedEggData
// 0x0058
struct FUnreplicatedEggData
{
	TArray<int>                                        EggNumberOfLevelUpPointsApplied;                           // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              EggTamedIneffectivenessModifier;                           // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_EP07[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<int>                                        EggColorSetIndices;                                        // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FDinoAncestorsEntryBlueprint>        EggDinoAncestors;                                          // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FDinoAncestorsEntryBlueprint>        EggDinoAncestorsMale;                                      // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                EggRandomMutationsFemale;                                  // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                EggRandomMutationsMale;                                    // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                EggGenderOverride;                                         // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_52KY[0x4];                                     // 0x0054(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.PrimalLocalProfile.EngramCustomFolder
// 0x0020
struct FEngramCustomFolder
{
	struct FString                                     FolderName;                                                // 0x0000(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              EngramCustomFolderItemClasses;                             // 0x0010(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)

};

// ScriptStruct ShooterGame.PrimalLocalProfile.ArkTributeEntity
// 0x0004
struct FArkTributeEntity
{
	int                                                UploadTime;                                                // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct ShooterGame.PrimalLocalProfile.ARKTributeDino
// 0x011C (0x0120 - 0x0004)
struct FARKTributeDino : public FArkTributeEntity
{
	unsigned char                                      UnknownData_AZX7[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     DinoClassName;                                             // 0x0008(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	class UClass*                                      DinoClass;                                                 // 0x0018(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	TArray<unsigned char>                              DinoData;                                                  // 0x0020(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	struct FString                                     DinoName;                                                  // 0x0030(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	struct FString                                     DinoNameInMap;                                             // 0x0040(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	struct FString                                     DinoStats[0xC];                                            // 0x0050(0x00C0) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	float                                              DinoExperiencePoints;                                      // 0x0110(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              Version;                                                   // 0x0114(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint32_t                                           DinoID1;                                                   // 0x0118(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	uint32_t                                           DinoID2;                                                   // 0x011C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.PrimalLocalProfile.ArkTributePlayerData
// 0x011C (0x0120 - 0x0004)
struct FArkTributePlayerData : public FArkTributeEntity
{
	unsigned char                                      UnknownData_PEW6[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	uint64_t                                           PlayerDataID;                                              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<unsigned char>                              PlayerDataBytes;                                           // 0x0010(0x0010) (ZeroConstructor)
	struct FString                                     PlayerName;                                                // 0x0020(0x0010) (ZeroConstructor)
	struct FString                                     PlayerStats[0xC];                                          // 0x0030(0x00C0) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	struct FString                                     UploadingServerMapName;                                    // 0x00F0(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	struct FString                                     UploadingServerName;                                       // 0x0100(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	bool                                               bWasAllowDPCUpload;                                        // 0x0110(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bWithItems;                                                // 0x0111(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZD2A[0x2];                                     // 0x0112(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	uint32_t                                           ItemCount;                                                 // 0x0114(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bForServerTransfer;                                        // 0x0118(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_91V2[0x3];                                     // 0x0119(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Version;                                                   // 0x011C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct ShooterGame.FogOfWar.FogOfWarInfoStruct
// 0x0038
struct FFogOfWarInfoStruct
{
	struct FString                                     MapName;                                                   // 0x0000(0x0010) (ZeroConstructor)
	TArray<unsigned char>                              CompressedVisibilityBuffer;                                // 0x0010(0x0010) (ZeroConstructor)
	uint32_t                                           UnCompressedVisibilityBufferSize;                          // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_7S03[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<bool>                                       UnlockMask;                                                // 0x0028(0x0010) (ZeroConstructor)

};

// ScriptStruct ShooterGame.PrimalLocalProfile.PrimalMapMarkerEntryData
// 0x0028
struct FPrimalMapMarkerEntryData
{
	int                                                coord1;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int                                                coord2;                                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     Name;                                                      // 0x0008(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bOverrideMarkerTextColor;                                  // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_7UQ1[0x3];                                     // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FColor                                      OverrideMarkerTextColor;                                   // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              coord1f;                                                   // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              coord2f;                                                   // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct ShooterGame.PrimalLocalProfile.MapMarkerPerMapInfo
// 0x0020
struct FMapMarkerPerMapInfo
{
	struct FString                                     MapName;                                                   // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FPrimalMapMarkerEntryData>           MapMarkers;                                                // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct ShooterGame.PrimalLocalProfile.ArkTributeInventoryItem
// 0x01BC (0x01C0 - 0x0004)
struct FArkTributeInventoryItem : public FArkTributeEntity
{
	unsigned char                                      UnknownData_9UPB[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FItemNetInfo                                ArkTributeItem;                                            // 0x0008(0x01B0) (Transient, NativeAccessSpecifierPublic)
	float                                              Version;                                                   // 0x01B8(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8AP3[0x4];                                     // 0x01BC(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.PrimalLocalProfile.ArkInventoryData
// 0x0030
struct FArkInventoryData
{
	TArray<struct FArkTributeInventoryItem>            ArkItems;                                                  // 0x0000(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<struct FARKTributeDino>                     ArkTamedDinosData;                                         // 0x0010(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<struct FArkTributePlayerData>               ArkPlayerData;                                             // 0x0020(0x0010) (ZeroConstructor, Transient)

};

// ScriptStruct ShooterGame.HazardTrigger.FloorSlopeData
// 0x0018
struct FFloorSlopeData
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     SlopeDir;                                                  // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.HazardTrigger_Slide.SlideData
// 0x0050
struct FSlideData
{
	TWeakObjectPtr<class USplineComponent>             SplineComponent;                                           // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	class UParticleSystemComponent*                    Emitter;                                                   // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	float                                              CurTime;                                                   // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Duration;                                                  // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FVector>                             Points;                                                    // 0x0018(0x0010) (ZeroConstructor)
	TArray<struct FVector>                             Tangents;                                                  // 0x0028(0x0010) (ZeroConstructor)
	struct FVector                                     Location;                                                  // 0x0038(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Tangent;                                                   // 0x0044(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.PointOfInterestData
// 0x0140
struct FPointOfInterestData
{
	unsigned char                                      PointType;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_G52V[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       PointTag;                                                  // 0x0004(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_K99F[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     PointTitle;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	struct FString                                     PointDescription;                                          // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	struct FVector                                     PointLocation;                                             // 0x0030(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor)
	struct FRotator                                    PointRotation;                                             // 0x003C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor)
	class AActor*                                      PointActor;                                                // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor)
	float                                              PointVisibleDistance;                                      // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor)
	float                                              PointVisibleDotProductRange;                               // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor)
	class UTexture2D*                                  PointIcon;                                                 // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor)
	class UParticleSystem*                             ViewedPointVFX;                                            // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor)
	class USoundCue*                                   ViewedPointSFX;                                            // 0x0068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor)
	class UClass*                                      PointCosmeticActorClass;                                   // 0x0070(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_J1ZC[0x8];                                     // 0x0078(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct UObject_FTransform                          PointCosmeticActorOffsetTransform;                         // 0x0080(0x0030) (Edit, BlueprintVisible, DisableEditOnTemplate, IsPlainOldData, NoDestructor)
	unsigned char                                      bHidePointOfInterestTitleBar : 1;                          // 0x00B0(0x0001) BIT_FIELD (Edit, BlueprintVisible, DisableEditOnTemplate, NoDestructor)
	unsigned char                                      bPointTagValidated : 1;                                    // 0x00B0(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor)
	unsigned char                                      bPointTagRequiresValidation : 1;                           // 0x00B0(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bOnlyVisibleOffScreen : 1;                                 // 0x00B0(0x0001) BIT_FIELD (Edit, BlueprintVisible, DisableEditOnTemplate, NoDestructor)
	unsigned char                                      bOnlyVisibleOnScreen : 1;                                  // 0x00B0(0x0001) BIT_FIELD (Edit, BlueprintVisible, DisableEditOnTemplate, NoDestructor)
	unsigned char                                      bAlwaysVisible : 1;                                        // 0x00B0(0x0001) BIT_FIELD (Edit, BlueprintVisible, DisableEditOnTemplate, NoDestructor)
	unsigned char                                      UnknownData_P5XT[0x7];                                     // 0x00B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundBase*                                  LocationAddedSound;                                        // 0x00B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor)
	class USoundBase*                                  LocationReachedSound;                                      // 0x00C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor)
	struct FVector                                     WidgetLocationOffset;                                      // 0x00C8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor)
	float                                              WidgetHiddenDistance;                                      // 0x00D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor)
	struct FLinearColor                                IndicatorColor;                                            // 0x00D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                IconColor;                                                 // 0x00E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      bUsePulseAnimation : 1;                                    // 0x00F8(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bShowProgress : 1;                                         // 0x00F8(0x0001) BIT_FIELD (Edit, BlueprintVisible, DisableEditOnTemplate, NoDestructor)
	unsigned char                                      UnknownData_ZGVH[0x3];                                     // 0x00F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ProgressValue;                                             // 0x00FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor)
	struct FString                                     ProgressLabelText;                                         // 0x0100(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	struct FLinearColor                                ProgressBarColor;                                          // 0x0110(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor)
	struct FLinearColor                                ProgressLabelColor;                                        // 0x0120(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor)
	unsigned char                                      bShowProgressLabelWhenOffScreen : 1;                       // 0x0130(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      UnknownData_XHUL[0xF];                                     // 0x0131(0x000F) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.SoundWaveAnimTexturePairs
// 0x0020
struct FSoundWaveAnimTexturePairs
{
	struct FStringAssetReference                       LocalizedSoundWave;                                        // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FStringAssetReference                       MatchingAnimTexture;                                       // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

};

// ScriptStruct ShooterGame.LocalizedSoundWaveAnimTexturePairArrays
// 0x0020
struct FLocalizedSoundWaveAnimTexturePairArrays
{
	struct FString                                     TwoLetterISOLanguageName;                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FSoundWaveAnimTexturePairs>          SoundWaveAnimTexturePairs;                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

};

// ScriptStruct ShooterGame.CompanionReactionData
// 0x00A0
struct FCompanionReactionData
{
	int                                                ReactionPriority;                                          // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      ReactionType;                                              // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_9YIS[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ReactionTimePadding_Start;                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              ReactionTimePadding_End;                                   // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              ForceReactionDuration;                                     // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_YBR5[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimMontage*                                ReactionAnim;                                              // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              ReactionStartDelay_Anim;                                   // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              ReactionForceDuration_Anim;                                // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UParticleSystem*                             ReactionVFX;                                               // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              ReactionStartDelay_VFX;                                    // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              ReactionForceDuration_VFX;                                 // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FStringAssetReference>               ReactionSFXArray;                                          // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              ReactionStartDelay_SFX;                                    // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              ReactionForceDuration_SFX;                                 // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      bReactionIsMonologue : 1;                                  // 0x0050(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bIsReactionPlaying : 1;                                    // 0x0050(0x0001) BIT_FIELD (BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bIsReactionPlaying_Anim : 1;                               // 0x0050(0x0001) BIT_FIELD (BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bIsReactionPlaying_VFX : 1;                                // 0x0050(0x0001) BIT_FIELD (BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      bIsReactionPlaying_SFX : 1;                                // 0x0050(0x0001) BIT_FIELD (BlueprintVisible, BlueprintReadOnly, NoDestructor)
	unsigned char                                      UnknownData_M08B[0x7];                                     // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	double                                             ReactionStartTime;                                         // 0x0058(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	double                                             ReactionEndTime;                                           // 0x0060(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	float                                              RequiredSecondsSincePreviousReactionInOrderToBePlayed;     // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      bDontCancelWhenGreaterOrEqualPriorityPlays : 1;            // 0x006C(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      UnknownData_5BL2[0x3];                                     // 0x006D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ChanceToOccur;                                             // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_AEJL[0x4];                                     // 0x0074(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FStringAssetReference                       FallbackSharedAnimTexture;                                 // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FLocalizedSoundWaveAnimTexturePairArrays> LocalizedSoundWaves;                                       // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                ExplorerNoteIndexToUnlock;                                 // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ZA99[0x4];                                     // 0x009C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.PointOfInterestCompanionBehavior
// 0x02B0
struct FPointOfInterestCompanionBehavior
{
	float                                              CompanionFocusRange;                                       // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor)
	float                                              CompanionOrbitWithinRange;                                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor)
	float                                              CompanionOrbitRadius;                                      // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor)
	struct FVector                                     OrbitOriginOffset;                                         // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor)
	float                                              CompanionReachedOrbitWithinDistOverride;                   // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor)
	float                                              InterpToOrbitSpeedOverride;                                // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor)
	float                                              InterpAroundOrbitSpeedOverride;                            // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_LRPV[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FCompanionReactionData                      CompanionReaction_WithinRange;                             // 0x0028(0x00A0) (Edit, BlueprintVisible, DisableEditOnTemplate)
	struct FCompanionReactionData                      CompanionReaction_StartOrbit;                              // 0x00C8(0x00A0) (Edit, BlueprintVisible, DisableEditOnTemplate)
	struct FCompanionReactionData                      CompanionReaction_ReachedOrbit;                            // 0x0168(0x00A0) (Edit, BlueprintVisible, DisableEditOnTemplate)
	struct FCompanionReactionData                      CompanionReaction_PointViewed;                             // 0x0208(0x00A0) (Edit, BlueprintVisible, DisableEditOnTemplate)
	unsigned char                                      bForceCompanionFocus : 1;                                  // 0x02A8(0x0001) BIT_FIELD (Edit, BlueprintVisible, DisableEditOnTemplate, NoDestructor)
	unsigned char                                      bOrbitingCompanionLooksAtPoint : 1;                        // 0x02A8(0x0001) BIT_FIELD (Edit, BlueprintVisible, DisableEditOnTemplate, NoDestructor)
	unsigned char                                      bForceCompanionLookAtPointActor : 1;                       // 0x02A8(0x0001) BIT_FIELD (Edit, BlueprintVisible, DisableEditOnTemplate, NoDestructor)
	unsigned char                                      bRandomlyOrbitAroundAndScan : 1;                           // 0x02A8(0x0001) BIT_FIELD (Edit, BlueprintVisible, DisableEditOnTemplate, NoDestructor)
	unsigned char                                      UnknownData_RBOV[0x7];                                     // 0x02A9(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.ShooterHUD.HintReplacementKeysForKeyboardControls
// 0x0020
struct FHintReplacementKeysForKeyboardControls
{
	struct FString                                     KeyboardControl;                                           // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FString>                             ReplacementGamepadControls;                                // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

};

// ScriptStruct ShooterGame.MissionAlertEntry
// 0x0030
struct FMissionAlertEntry
{
	class UTexture2D*                                  Icon;                                                      // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Count;                                                     // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_R33H[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Label;                                                     // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UClass*                                      ItemType;                                                  // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      bShowCount : 1;                                            // 0x0028(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      UnknownData_I1O0[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.PrimalGameData.NameScalarPair
// 0x000C
struct FNameScalarPair
{
	struct FName                                       MaterialParamName;                                         // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Value;                                                     // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.ShooterHUD.HUDRichTextOverlayData
// 0x0060
struct FHUDRichTextOverlayData
{
	struct FString                                     DisplayText;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FLinearColor                                DefaultTextColor;                                          // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      bIgnoreDefaultTextColor : 1;                               // 0x0020(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      UnknownData_L80T[0x3];                                     // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   Position;                                                  // 0x0024(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Slate_ETextJustify>                    TextAlignment;                                             // 0x002C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalScreenAnchor;                                    // 0x002D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<SlateCore_EVerticalAlignment>          VerticalScreenAnchor;                                      // 0x002E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalWidgetAlignment;                                 // 0x002F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<SlateCore_EVerticalAlignment>          VerticalWidgetAlignment;                                   // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_U61I[0x3];                                     // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Scale;                                                     // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      bUseAutoWrap : 1;                                          // 0x0038(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      UnknownData_BKEU[0x3];                                     // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   AutoSizeOverride;                                          // 0x003C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_OKKE[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      Instigator;                                                // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_A3PK[0x10];                                    // 0x0050(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.ItemMultiplier
// 0x0010
struct FItemMultiplier
{
	class UClass*                                      ItemClass;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              ItemMultiplier;                                            // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_1HGB[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.PrimalInventoryComponent.EventItem
// 0x0018
struct FEventItem
{
	struct FName                                       EventName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UClass*                                      Item;                                                      // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bIsEngram;                                                 // 0x0010(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_7SDL[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.PrimalInventoryComponent.ItemSpawnActorClassOverride
// 0x0010
struct FItemSpawnActorClassOverride
{
	class UClass*                                      ItemClass;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UClass*                                      ActorClassOverride;                                        // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.PrimalInventoryComponent.ItemCraftingConsumptionReplenishment
// 0x0018
struct FItemCraftingConsumptionReplenishment
{
	TArray<class UClass*>                              ItemResourceClasses;                                       // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      ToReplaceWithClass;                                        // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.PrimalGameData.SupplyCrateItemEntry
// 0x0090
struct FSupplyCrateItemEntry
{
	struct FString                                     ItemEntryName;                                             // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              EntryWeight;                                               // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ULF1[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UClass*>                              Items;                                                     // 0x0018(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FString>                             ItemClassStrings;                                          // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      ItemsWeights;                                              // 0x0038(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        ItemQuantityOverrides;                                     // 0x0048(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              MinQuantity;                                               // 0x0058(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              MaxQuantity;                                               // 0x005C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bApplyQuantityToSingleItem;                                // 0x0060(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_3T69[0x3];                                     // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              QuantityPower;                                             // 0x0064(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              MinRandomQuality;                                          // 0x0068(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              MinQuality;                                                // 0x006C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              MaxQuality;                                                // 0x0070(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              QualityPower;                                              // 0x0074(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      bForceBlueprint : 1;                                       // 0x0078(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bForcePreventGrinding : 1;                                 // 0x0078(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      UnknownData_6J7Q[0x3];                                     // 0x0079(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ChanceToBeBlueprintOverride;                               // 0x007C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              ItemStatClampsMultiplier;                                  // 0x0080(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              ChanceToActuallyGiveItem;                                  // 0x0084(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              RequiresMinQuality;                                        // 0x0088(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_7IBR[0x4];                                     // 0x008C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.PrimalPlayerData.DinoOrderID
// 0x0018
struct FDinoOrderID
{
	int                                                DinoID1;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                DinoID2;                                                   // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     DinoName;                                                  // 0x0008(0x0010) (ZeroConstructor)

};

// ScriptStruct ShooterGame.LeaderboardRow
// 0x0048
struct FLeaderboardRow
{
	struct FName                                       MissionTag;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     PlayerNetId;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                TribeId;                                                   // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_565D[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	double                                             TimestampUtc;                                              // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              FloatValue;                                                // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                IntValue;                                                  // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       NameValue;                                                 // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     StringValue;                                               // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

};

// ScriptStruct ShooterGame.PrimalPlayerData.EngramsSetSoftReferenceMapping
// 0x0010
struct FEngramsSetSoftReferenceMapping
{
	TArray<struct FString>                             EngramSetToUnlock;                                         // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

};

// ScriptStruct ShooterGame.PrimalPlayerData.BossEngramsSoftReferenceMapping
// 0x0010
struct FBossEngramsSoftReferenceMapping
{
	TArray<struct FEngramsSetSoftReferenceMapping>     EngramSets;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

};

// ScriptStruct ShooterGame.PrimalPlayerData.LatestMissionScore
// 0x00A0
struct FLatestMissionScore
{
	struct FName                                       MissionTag;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLeaderboardRow                             LatestScore;                                               // 0x0008(0x0048)
	struct FLeaderboardRow                             BestScore;                                                 // 0x0050(0x0048)
	bool                                               bHasValidScore;                                            // 0x0098(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_DEGU[0x7];                                     // 0x0099(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.PrimalPlayerCharacterConfigStruct
// 0x00D8
struct FPrimalPlayerCharacterConfigStruct
{
	unsigned char                                      bIsFemale : 1;                                             // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      UnknownData_GV5E[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                BodyColors[0x4];                                           // 0x0004(0x0040) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor)
	struct FLinearColor                                OverrideHeadHairColor;                                     // 0x0044(0x0010) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor)
	struct FLinearColor                                OverrideFacialHairColor;                                   // 0x0054(0x0010) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor)
	unsigned char                                      FacialHairIndex;                                           // 0x0064(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor)
	unsigned char                                      HeadHairIndex;                                             // 0x0065(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor)
	unsigned char                                      UnknownData_30S0[0x2];                                     // 0x0066(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     PlayerCharacterName;                                       // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              RawBoneModifiers[0x16];                                    // 0x0078(0x0058) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor)
	int                                                PlayerSpawnRegionIndex;                                    // 0x00D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_Q82U[0x4];                                     // 0x00D4(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.PrimalPlayerData.DinoOrderGroup
// 0x0030
struct FDinoOrderGroup
{
	struct FString                                     DinoOrderGroupName;                                        // 0x0000(0x0010) (ZeroConstructor)
	TArray<class UClass*>                              DinoOrderClasses;                                          // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FDinoOrderID>                        DinoOrderIDs;                                              // 0x0020(0x0010) (ZeroConstructor)

};

// ScriptStruct ShooterGame.PrimalPlayerData.PrimalPersistentCharacterStatsStruct
// 0x02C8
struct FPrimalPersistentCharacterStatsStruct
{
	uint16_t                                           CharacterStatusComponent_ExtraCharacterLevel;              // 0x0000(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_A4JT[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CharacterStatusComponent_ExperiencePoints;                 // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                PlayerState_TotalEngramPoints;                             // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                PlayerState_PurchasedEngramPoints;                         // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                CharacterStatusComponent_HighestExtraCharacterLevel;       // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                CharacterStatusComponent_LastRespecAtExtraCharacterLevel;  // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	double                                             CharacterStatusComponent_LastRespecUtcTimeSeconds;         // 0x0018(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<uint32_t>                                   PerMapExplorerNoteUnlocks;                                 // 0x0020(0x0010) (ZeroConstructor)
	TArray<struct FName>                               EmoteUnlocks;                                              // 0x0030(0x0010) (ZeroConstructor)
	TArray<class UClass*>                              PlayerState_EngramBlueprints;                              // 0x0040(0x0010) (ZeroConstructor, RepSkip)
	unsigned char                                      CharacterStatusComponent_NumberOfLevelUpPointsApplied[0xC]; // 0x0050(0x000C) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor)
	unsigned char                                      UnknownData_T3JP[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      PlayerState_DefaultItemSlotClasses[0xA];                   // 0x0060(0x0050) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor)
	unsigned char                                      PlayerState_DefaultItemSlotEngrams[0xA];                   // 0x00B0(0x000A) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor)
	unsigned char                                      UnknownData_WXJI[0x6];                                     // 0x00BA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDinoOrderGroup                             DinoOrderGroups[0xA];                                      // 0x00C0(0x01E0) (RepSkip)
	int                                                CurrentlySelectedDinoOrderGroup;                           // 0x02A0(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor)
	float                                              PercentageOfHeadHairGrowth;                                // 0x02A4(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor)
	bool                                               bHasUnlockedAllExplorerNotes;                              // 0x02A8(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor)
	unsigned char                                      UnknownData_RUXJ[0x3];                                     // 0x02A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PercentageOfFacialHairGrowth;                              // 0x02AC(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor)
	unsigned char                                      FacialHairIndex;                                           // 0x02B0(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor)
	unsigned char                                      HeadHairIndex;                                             // 0x02B1(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor)
	unsigned char                                      UnknownData_AO7P[0x6];                                     // 0x02B2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UClass*>                              ForcedUnlockDefaultCosmetics;                              // 0x02B8(0x0010) (ZeroConstructor, RepSkip)

};

// ScriptStruct ShooterGame.PrimalPlayerData.PrimalPlayerDataStruct
// 0x0448
struct FPrimalPlayerDataStruct
{
	uint64_t                                           PlayerDataID;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FUniqueNetIdRepl                            UniqueID;                                                  // 0x0008(0x0010)
	struct FString                                     SavedNetworkAddress;                                       // 0x0018(0x0010) (ZeroConstructor)
	struct FString                                     PlayerName;                                                // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	uint32_t                                           LocalPlayerIndex;                                          // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      bFirstSpawned : 1;                                         // 0x003C(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bUseSpectator : 1;                                         // 0x003C(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      UnknownData_0MCZ[0x3];                                     // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPrimalPlayerCharacterConfigStruct          MyPlayerCharacterConfig;                                   // 0x0040(0x00D8)
	int                                                LastPinCodeUsed;                                           // 0x0118(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_115Z[0x4];                                     // 0x011C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPrimalPersistentCharacterStatsStruct       MyPersistentCharacterStats;                                // 0x0120(0x02C8)
	int                                                NumPersonalDinos;                                          // 0x03E8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                TribeId;                                                   // 0x03EC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<int>                                        AppIDSet;                                                  // 0x03F0(0x0010) (ZeroConstructor)
	int                                                PlayerDataVersion;                                         // 0x0400(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor)
	unsigned char                                      UnknownData_2OO2[0x4];                                     // 0x0404(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	double                                             NextAllowedRespawnTime;                                    // 0x0408(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor)
	double                                             LastTimeDiedToEnemyTeam;                                   // 0x0410(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor)
	double                                             LoginTime;                                                 // 0x0418(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor)
	double                                             LastLoginTime;                                             // 0x0420(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor)
	float                                              AllowedRespawnInterval;                                    // 0x0428(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor)
	float                                              NumOfDeaths;                                               // 0x042C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                SpawnDayNumber;                                            // 0x0430(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              SpawnDayTime;                                              // 0x0434(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FLatestMissionScore>                 LatestMissionScores;                                       // 0x0438(0x0010) (ZeroConstructor, RepSkip)

};

// ScriptStruct ShooterGame.PrimalGameData.TribeAlliance
// 0x0048
struct FTribeAlliance
{
	struct FString                                     AllianceName;                                              // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	uint32_t                                           AllianceID;                                                // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KAZ9[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FString>                             MembersTribeName;                                          // 0x0018(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<uint32_t>                                   MembersTribeID;                                            // 0x0028(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<uint32_t>                                   AdminsTribeID;                                             // 0x0038(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct ShooterGame.PrimalGameData.TribeGovernment
// 0x0014
struct FTribeGovernment
{
	int                                                TribeGovern_PINCode;                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int                                                TribeGovern_DinoOwnership;                                 // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int                                                TribeGovern_StructureOwnership;                            // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int                                                TribeGovern_DinoTaming;                                    // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int                                                TribeGovern_DinoUnclaimAdminOnly;                          // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct ShooterGame.PrimalGameData.TribeWar
// 0x0030
struct FTribeWar
{
	int                                                EnemyTribeID;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int                                                StartDayNumber;                                            // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int                                                EndDayNumber;                                              // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              StartDayTime;                                              // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              EndDayTime;                                                // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bIsApproved;                                               // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LC2N[0x3];                                     // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                InitiatingTribeID;                                         // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L51X[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     EnemyTribeName;                                            // 0x0020(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct ShooterGame.PrimalGameData.TribeRankGroup
// 0x0028
struct FTribeRankGroup
{
	struct FString                                     RankGroupName;                                             // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      RankGroupRank;                                             // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      InventoryRank;                                             // 0x0011(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      StructureActivationRank;                                   // 0x0012(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      NewStructureActivationRank;                                // 0x0013(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      NewStructureInventoryRank;                                 // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      PetOrderRank;                                              // 0x0015(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      PetRidingRank;                                             // 0x0016(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      InviteToGroupRank;                                         // 0x0017(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      MaxPromotionGroupRank;                                     // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      MaxDemotionGroupRank;                                      // 0x0019(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      MaxBanishmentGroupRank;                                    // 0x001A(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      NumInvitesRemaining;                                       // 0x001B(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bPreventStructureDemolish : 1;                             // 0x001C(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bPreventStructureAttachment : 1;                           // 0x001C(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bPreventStructureBuildInRange : 1;                         // 0x001C(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bPreventUnclaiming : 1;                                    // 0x001C(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bAllowInvites : 1;                                         // 0x001C(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bLimitInvites : 1;                                         // 0x001C(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bAllowDemotions : 1;                                       // 0x001C(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bAllowPromotions : 1;                                      // 0x001C(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bAllowBanishments : 1;                                     // 0x001D(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0I6Q[0x2];                                     // 0x001E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      TeleportMembersRank;                                       // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      TeleportDinosRank;                                         // 0x0021(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_81KK[0x2];                                     // 0x0022(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bDefaultRank : 1;                                          // 0x0024(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JIMI[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.ShooterPlayerState.ServerOptions
// 0x02A0
struct FServerOptions
{
	struct FString                                     MaxStructuresInRange;                                      // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     DifficultyOffset;                                          // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     GlobalVoiceChat;                                           // 0x0020(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     ProximityChat;                                             // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     NoTributeDownloads;                                        // 0x0040(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     AllowThirdPersonPlayer;                                    // 0x0050(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     AlwaysNotifyPlayerLeft;                                    // 0x0060(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     DontAlwaysNotifyPlayerJoined;                              // 0x0070(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     ServerHardcore;                                            // 0x0080(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     ServerPVE;                                                 // 0x0090(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     ServerCrosshair;                                           // 0x00A0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     ServerForceNoHUD;                                          // 0x00B0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     ShowMapPlayerLocation;                                     // 0x00C0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     ServerPassword;                                            // 0x00D0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     ServerAdminPassword;                                       // 0x00E0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     SpectatorPassword;                                         // 0x00F0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     DayCycleSpeedScale;                                        // 0x0100(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     DayTimeSpeedScale;                                         // 0x0110(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     NightTimeSpeedScale;                                       // 0x0120(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     DinoDamageMultiplier;                                      // 0x0130(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     PlayerDamageMultiplier;                                    // 0x0140(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     StructureDamageMultiplier;                                 // 0x0150(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     PlayerResistanceMultiplier;                                // 0x0160(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     DinoResistanceMultiplier;                                  // 0x0170(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     StructureResistanceMultiplier;                             // 0x0180(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     XPMultiplier;                                              // 0x0190(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     TamingSpeedMultiplier;                                     // 0x01A0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     HarvestAmountMultiplier;                                   // 0x01B0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     PlayerCharacterWaterDrainMultiplier;                       // 0x01C0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     PlayerCharacterFoodDrainMultiplier;                        // 0x01D0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     DinoCharacterFoodDrainMultiplier;                          // 0x01E0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     PlayerCharacterStaminaDrainMultiplier;                     // 0x01F0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     DinoCharacterStaminaDrainMultiplier;                       // 0x0200(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     PlayerCharacterHealthRecoveryMultiplier;                   // 0x0210(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     DinoCharacterHealthRecoveryMultiplier;                     // 0x0220(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     DinoCountMultiplier;                                       // 0x0230(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     HarvestHealthMultiplier;                                   // 0x0240(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     PvEStructureDecayPeriodMultiplier;                         // 0x0250(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     ResourcesRespawnPeriodMultiplier;                          // 0x0260(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     EnablePvPGamma;                                            // 0x0270(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     DisableStructureDecayPvE;                                  // 0x0280(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     AllowFlyerCarryPvE;                                        // 0x0290(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

};

// ScriptStruct ShooterGame.ShooterPlayerState.AdminPlayerDataInfo
// 0x0040
struct FAdminPlayerDataInfo
{
	struct FString                                     PlayerName;                                                // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     PlayerSteamName;                                           // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     SteamID;                                                   // 0x0020(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	int64_t                                            LinkedPlayerID;                                            // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsHost;                                                    // 0x0038(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_OO8W[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.ShooterPlayerState.AlivePlayerDataInfo
// 0x0040
struct FAlivePlayerDataInfo
{
	struct FString                                     PlayerName;                                                // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     PlayerSteamName;                                           // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	uint64_t                                           PlayerId;                                                  // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FString                                     TribeName;                                                 // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	uint64_t                                           TargetingTeamID;                                           // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.DataSet
// 0x0078
struct FDataSet
{
	struct FName                                       DataSetName;                                               // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FName>                               ListNames;                                                 // 0x0008(0x0010) (BlueprintVisible, ZeroConstructor)
	TArray<struct FString>                             ListStrings;                                               // 0x0018(0x0010) (BlueprintVisible, ZeroConstructor)
	TArray<int>                                        ListInts;                                                  // 0x0028(0x0010) (BlueprintVisible, ZeroConstructor)
	TArray<float>                                      ListFloats;                                                // 0x0038(0x0010) (BlueprintVisible, ZeroConstructor)
	TArray<class UObject*>                             ListObjects;                                               // 0x0048(0x0010) (BlueprintVisible, ZeroConstructor)
	TArray<class AActor*>                              ListActors;                                                // 0x0058(0x0010) (BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData_D1SB[0x10];                                    // 0x0068(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.PrimalLocalProfile.ARKTributeDinoListing
// 0x00F0
struct FARKTributeDinoListing
{
	struct FString                                     DinoName;                                                  // 0x0000(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	struct FString                                     DinoStats[0xC];                                            // 0x0010(0x00C0) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	float                                              DinoExperiencePoints;                                      // 0x00D0(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3HWI[0x4];                                     // 0x00D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      DinoClass;                                                 // 0x00D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	uint32_t                                           DinoID1;                                                   // 0x00E0(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	uint32_t                                           DinoID2;                                                   // 0x00E4(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	uint32_t                                           ExpirationTimeUTC;                                         // 0x00E8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_K54X[0x4];                                     // 0x00EC(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.PrimalLocalProfile.ArkTributePlayerDataListing
// 0x0110
struct FArkTributePlayerDataListing
{
	uint64_t                                           PlayerDataID;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     PlayerName;                                                // 0x0008(0x0010) (ZeroConstructor)
	struct FString                                     PlayerStats[0xC];                                          // 0x0018(0x00C0) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	bool                                               bWasAllowDPCUpload;                                        // 0x00D8(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1TYN[0x7];                                     // 0x00D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     UploadingServerMapName;                                    // 0x00E0(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	struct FString                                     UploadingServerName;                                       // 0x00F0(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	bool                                               bWithItems;                                                // 0x0100(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NLPU[0x3];                                     // 0x0101(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	uint32_t                                           ItemCount;                                                 // 0x0104(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              Version;                                                   // 0x0108(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint32_t                                           ExpirationTimeUTC;                                         // 0x010C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.ShooterPlayerController.StructuresOnFloor
// 0x0018
struct FStructuresOnFloor
{
	class APrimalStructure*                            FloorStructure;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class APrimalStructure*>                    StructuresOnFloor;                                         // 0x0008(0x0010) (Edit, ZeroConstructor)

};

// ScriptStruct ShooterGame.ChatMessage
// 0x0090
struct FChatMessage
{
	struct FString                                     SenderName;                                                // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     SenderSteamName;                                           // 0x0010(0x0010) (ZeroConstructor)
	struct FString                                     SenderTribeName;                                           // 0x0020(0x0010) (ZeroConstructor)
	uint32_t                                           SenderId;                                                  // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_C6ZT[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Message;                                                   // 0x0038(0x0010) (ZeroConstructor)
	struct FString                                     Receiver;                                                  // 0x0048(0x0010) (ZeroConstructor)
	int                                                SenderTeamIndex;                                           // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_O8A5[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	double                                             ReceivedTime;                                              // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<ShooterGame_EChatSendMode>             SendMode;                                                  // 0x0068(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_WCFZ[0x3];                                     // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	uint32_t                                           RadioFrequency;                                            // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<ShooterGame_EChatType>                 ChatType;                                                  // 0x0070(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_0KO6[0x7];                                     // 0x0071(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2D*                                  SenderIcon;                                                // 0x0078(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     UserId;                                                    // 0x0080(0x0010) (ZeroConstructor)

};

// ScriptStruct ShooterGame.MissionType.MissionRelatedActorData
// 0x0040
struct FMissionRelatedActorData
{
	class AActor*                                      RelatedActor;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       RelatedActorPropertyName;                                  // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<ShooterGame_EMissionRelatedPropertyType> RelatedActorPropertyType;                                  // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<ShooterGame_EMissionRelatedPropertyUsage> RelatedActorPropertyUsage;                                 // 0x0011(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_Q0X8[0x2];                                     // 0x0012(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                RelatedActorPropertyTextColor;                             // 0x0014(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                LocalIndexMatchColorModifier;                              // 0x0024(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bUseLocalIndexMatchColorModifier;                          // 0x0034(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_VJJX[0x3];                                     // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                IndexMatchRangeOffset;                                     // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_5993[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.PrimalGameData.PrimalCharacterStatusStateDefinition
// 0x0050
struct FPrimalCharacterStatusStateDefinition
{
	TEnumAsByte<ShooterGame_EPrimalCharacterStatusValue> StatusValueType;                                           // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_UVPA[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                StatusValueThresholdIndex;                                 // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UTexture2D*                                  StatusStateIcon;                                           // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FString                                     StatusStateName;                                           // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     StatusStateDescription;                                    // 0x0020(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FColor                                      StatusStateNameColor;                                      // 0x0030(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bUsed;                                                     // 0x0034(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bDisplayHUDMessage;                                        // 0x0035(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_614G[0x2];                                     // 0x0036(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     HUDMessage;                                                // 0x0038(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FColor                                      HUDMessageColor;                                           // 0x0048(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int                                                BuffType;                                                  // 0x004C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.PrimalGameData.PrimalItemQuality
// 0x0030
struct FPrimalItemQuality
{
	struct FLinearColor                                QualityColor;                                              // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FString                                     QualityName;                                               // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              QualityRandomMultiplierThreshold;                          // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              CraftingXPMultiplier;                                      // 0x0024(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              RepairingXPMultiplier;                                     // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              CraftingResourceRequirementsMultiplier;                    // 0x002C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.PrimalGameData.StatusValueModifierDescription
// 0x0050
struct FStatusValueModifierDescription
{
	class UTexture2D*                                  ModifierIcon;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FString                                     ModifierName;                                              // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     ModifierDescription;                                       // 0x0018(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FColor                                      ModifierColor;                                             // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bDisplayHUDMessage;                                        // 0x002C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ZSO7[0x3];                                     // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     HUDMessage;                                                // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FColor                                      HUDMessageColor;                                           // 0x0040(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bPreventDrawingBuffDescription;                            // 0x0044(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_YMDO[0x3];                                     // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                BuffType;                                                  // 0x0048(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_LWA9[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.PrimalGameData.ColorDefinition
// 0x001C
struct FColorDefinition
{
	struct FName                                       ColorName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                ColorValue;                                                // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bHasOverridePriority;                                      // 0x0018(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_MVTN[0x3];                                     // 0x0019(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.ServerChatMessage
// 0x0050
struct FServerChatMessage
{
	unsigned char                                      UnknownData_G8OS[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     MessageText;                                               // 0x0008(0x0010) (ZeroConstructor)
	struct FLinearColor                                MessageColor;                                              // 0x0018(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bIsBold;                                                   // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_8WAZ[0x3];                                     // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DisplayScale;                                              // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              DisplayTime;                                               // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_5PQ8[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2D*                                  MessageIcon;                                               // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	class USoundBase*                                  SoundToPlay;                                               // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                MessageTypeID;                                             // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_CHBG[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.ShooterPlayerController.PingData
// 0x0050
struct FPingData
{
	unsigned char                                      PingID;                                                    // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_NF6R[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     PingedLocation;                                            // 0x0004(0x000C) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor)
	class UPrimitiveComponent*                         PingedComponent;                                           // 0x0010(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor)
	class UTexture2D*                                  PingIcon;                                                  // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor)
	uint32_t                                           CreatedByPlayerID;                                         // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_G42L[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AShooterCharacter*                           CreatedByPlayerChar;                                       // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor)
	TArray<class AShooterCharacter*>                   RespondedPlayerChars;                                      // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	double                                             PingCreationTime;                                          // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor)
	unsigned char                                      bHasBeenViewed : 1;                                        // 0x0048(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor)
	unsigned char                                      bIsDying : 1;                                              // 0x0048(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor)
	unsigned char                                      bIsDead : 1;                                               // 0x0048(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor)
	unsigned char                                      UnknownData_0SFS[0x7];                                     // 0x0049(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.PrimalGameData.BoneModifierRange
// 0x003C
struct FBoneModifierRange
{
	struct FName                                       BoneName;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     MinScale;                                                  // 0x0008(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     MaxScale;                                                  // 0x0014(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     MinTranslation;                                            // 0x0020(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     MaxTranslation;                                            // 0x002C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Recursive;                                                 // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_7JYX[0x3];                                     // 0x0039(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.PrimalGameData.BoneModifierRangeArray
// 0x0020
struct FBoneModifierRangeArray
{
	unsigned char                                      bAffectsLegLength : 1;                                     // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bUseExtraMax : 1;                                          // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      UnknownData_SXHY[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MinLegLengthMultiplier;                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              MaxLegLengthMultiplier;                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_M308[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FBoneModifierRange>                  BoneArray;                                                 // 0x0010(0x0010) (Edit, ZeroConstructor)

};

// ScriptStruct ShooterGame.PrimalGameData.PlayerCharacterGenderDefinition
// 0x05F0
struct FPlayerCharacterGenderDefinition
{
	struct FString                                     GenderString;                                              // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      CharacterBlueprint;                                        // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<struct FLinearColor>                        ColorSetBody;                                              // 0x0018(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FLinearColor>                        ColorSetHair;                                              // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FLinearColor>                        ColorSetEyes;                                              // 0x0038(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UMaterialInterface*                          CharacterPreviewMaterial;                                  // 0x0048(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<struct FString>                             DefaultCharacterNames;                                     // 0x0050(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      DefaultCharacterNameWeights;                               // 0x0060(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FBoneModifierRangeArray                     CharacterBoneModifierRanges[0x16];                         // 0x0070(0x02C0) (Edit, DisableEditOnInstance)
	struct FBoneModifierRangeArray                     ExtraCharacterBoneModifierMax[0x16];                       // 0x0330(0x02C0) (Edit, DisableEditOnInstance)

};

// ScriptStruct ShooterGame.MissionType.MissionWorldIndicator
// 0x00A8
struct FMissionWorldIndicator
{
	struct FName                                       DescriptionTagString;                                      // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UTexture2D*                                  Icon;                                                      // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UClass*                                      ItemType;                                                  // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     WorldPosition;                                             // 0x0018(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_DPHX[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      TargetActor;                                               // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Priority;                                                  // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_S2GJ[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      CustomData;                                                // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      bUseTargetActorName : 1;                                   // 0x0040(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bUseTargetActorIcon : 1;                                   // 0x0040(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bUseItemName : 1;                                          // 0x0040(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bUseItemIcon : 1;                                          // 0x0040(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bOnlyVisibleOffScreen : 1;                                 // 0x0040(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bOnlyVisibleOnScreen : 1;                                  // 0x0040(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bAlwaysVisible : 1;                                        // 0x0040(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bCompanionIndicator : 1;                                   // 0x0040(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bShowDistance : 1;                                         // 0x0041(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      UnknownData_7506[0x2];                                     // 0x0042(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                IndicatorColor;                                            // 0x0044(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                IconColor;                                                 // 0x0054(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      bUsePulseAnimation : 1;                                    // 0x0064(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bShowProgress : 1;                                         // 0x0064(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      UnknownData_CQXQ[0x3];                                     // 0x0065(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ProgressValue;                                             // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_5YSN[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ProgressLabelText;                                         // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FLinearColor                                ProgressBarColor;                                          // 0x0080(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                ProgressLabelColor;                                        // 0x0090(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      bShowProgressLabelWhenOffScreen : 1;                       // 0x00A0(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      UnknownData_2L6V[0x7];                                     // 0x00A1(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.PrimalGameData.DinoBabySetup
// 0x0038
struct FDinoBabySetup
{
	struct FName                                       DinoNameTag;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<struct FBoneModifierRangeArray>             BabyBoneModifierRanges;                                    // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      WildRandomScaleRangeWeights;                               // 0x0018(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FRandValueRange>                     WildRandomScaleRanges;                                     // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

};

// ScriptStruct ShooterGame.PrimalItem.CropItemPhaseData
// 0x00D0
struct FCropItemPhaseData
{
	float                                              NextStageFertilizerCacheThreshold;                         // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_MM96[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UStaticMesh*                                 StageStaticMesh;                                           // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<class UStaticMesh*>                         StageStaticMeshes;                                         // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UStaticMesh*                                 HasFruitStageStaticMesh;                                   // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<class UStaticMesh*>                         HasFruitStageStaticMeshes;                                 // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                     StageStaticMeshScale3D;                                    // 0x0038(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     StageStaticMeshTranslationOffset;                          // 0x0044(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                                    StageStaticMeshRotationOffset;                             // 0x0050(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_WG4K[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FVector>                             StageStaticMeshScales3D;                                   // 0x0060(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                             StageStaticMeshTranslationOffsets;                         // 0x0070(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FRotator>                            StageStaticMeshRotationOffsets;                            // 0x0080(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              StageReachedItemsToGive;                                   // 0x0090(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      StageReachedItemsToGiveWeights;                            // 0x00A0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      StageBlockCollisions;                                      // 0x00B0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bUseStageStructure;                                        // 0x00B1(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_6EA5[0x6];                                     // 0x00B2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      StageStructure;                                            // 0x00B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     StageStructureOffset;                                      // 0x00C0(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_3IES[0x4];                                     // 0x00CC(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.MissionType.MissionPhaseRequirement
// 0x0090
struct FMissionPhaseRequirement
{
	struct FName                                       DescriptionStringTag;                                      // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UClass*                                      RelatedType;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      bUseRelatedTypeName : 1;                                   // 0x0010(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      UnknownData_C7YB[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMissionRelatedActorData                    OptionalRelatedActorData;                                  // 0x0018(0x0040) (Edit, BlueprintVisible)
	unsigned char                                      bIsComplete : 1;                                           // 0x0058(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bUseCount : 1;                                             // 0x0058(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bUseProgress : 1;                                          // 0x0058(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bAutoCalculateProgressFromCount : 1;                       // 0x0058(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      UnknownData_Q73R[0x3];                                     // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                CurrentCount;                                              // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                MaxCount;                                                  // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Progress;                                                  // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<ShooterGame_EPhaseRequirementWidgetVisualState> PhaseRequirementWidgetVisualState;                         // 0x0068(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_4BAC[0x3];                                     // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                CustomPhaseRequirementTextColor;                           // 0x006C(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                CustomPhaseRequirementProgressBarColor;                    // 0x007C(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_GQHB[0x4];                                     // 0x008C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.PrimalBuff_MissionData.ClientMissionData
// 0x0058
struct FClientMissionData
{
	class AMissionType*                                Mission;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FMissionPhaseRequirement>            Requirements;                                              // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FMissionPhaseRequirement>            LocalRequirements;                                         // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FMissionWorldIndicator>              MissionWorldIndicators;                                    // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FMissionWorldIndicator>              LocalWorldIndicators;                                      // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FItemNetInfo>                        Items;                                                     // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

};

// ScriptStruct ShooterGame.LeaderboardRowWidget.LeaderboardColumnDefinition
// 0x0038
struct FLeaderboardColumnDefinition
{
	float                                              WidthPercent;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FMargin                                     ColumnPadding;                                             // 0x0004(0x0010) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData_0LEF[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSlateFontInfo                              Font;                                                      // 0x0018(0x0020) (Edit, BlueprintVisible)

};

// ScriptStruct ShooterGame.TeleportDestination
// 0x0028
struct FTeleportDestination
{
	struct FString                                     DestinationTitle;                                          // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FVector                                     DestinationLocation;                                       // 0x0010(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                                    DestinationRotation;                                       // 0x001C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.MassTeleportData
// 0x00D0
struct FMassTeleportData
{
	struct FTeleportDestination                        MyTeleportDestination;                                     // 0x0000(0x0028) (Edit, BlueprintVisible)
	double                                             MyTeleportStartTime;                                       // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              MyTeleportDuration;                                        // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              MyTeleportRadius;                                          // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                      InitiatedByActor;                                          // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct UObject_FTransform                          InitiatedAtTransform;                                      // 0x0040(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	class UClass*                                      BuffToApply;                                               // 0x0070(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class AActor*>                              MyTeleportingActors;                                       // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      bTeleportSnapsToGround : 1;                                // 0x0088(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      UnknownData_VLP6[0x7];                                     // 0x0089(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct UObject_FTransform>                  MyTeleportingActorTransformOffsets;                        // 0x0090(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<float>                                      MyTeleportingDelays;                                       // 0x00A0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<int>                                        MyTeleportationAttemptMap;                                 // 0x00B0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      bMaintainRotation : 1;                                     // 0x00C0(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      UnknownData_E59L[0xF];                                     // 0x00C1(0x000F) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.PrimalGameData.LocalizedSoundCueEntry
// 0x0020
struct FLocalizedSoundCueEntry
{
	struct FString                                     TwoLetterISOLanguageName;                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FStringAssetReference                       LocalizedSoundCue;                                         // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

};

// ScriptStruct ShooterGame.PrimalGameData.ExplorerNoteEntry
// 0x0098
struct FExplorerNoteEntry
{
	unsigned char                                      UnknownData_37M1[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ExplorerNoteType;                                          // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      bIsIsland : 1;                                             // 0x0008(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bIsScorchedEarth : 1;                                      // 0x0008(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bIsAberration : 1;                                         // 0x0008(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bIsExtinction : 1;                                         // 0x0008(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bIsGenesis1 : 1;                                           // 0x0008(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bIsGenesis2 : 1;                                           // 0x0008(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bIsDossier : 1;                                            // 0x0008(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bDontRequireProximityToChest : 1;                          // 0x0008(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bUnlockIgnorePopup : 1;                                    // 0x0009(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bUnlockIgnoreSound : 1;                                    // 0x0009(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      UnknownData_B8T4[0x6];                                     // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ExplorerNoteDescription;                                   // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       DossierTameableDinoNameTag;                                // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USkeletalMesh*                               ExplorerNoteMesh;                                          // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UClass*                                      ExplorerNoteAnimBP;                                        // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FStringAssetReference                       ExplorerNoteTexture;                                       // 0x0038(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UTexture2D*                                  ExplorerNoteIcon;                                          // 0x0048(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInterface*                          ExplorerNoteIconMaterial;                                  // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  UnlockedSoundOverride;                                     // 0x0058(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              ShowExplorerNoteTitleDelayTime;                            // 0x0060(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_BAUC[0x4];                                     // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundCue*                                   ExplorerNoteOpenSound;                                     // 0x0068(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundCue*                                   ExplorerNoteCloseSound;                                    // 0x0070(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FString                                     LocalizedSubtitle;                                         // 0x0078(0x0010) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FLocalizedSoundCueEntry>             LocalizedAudio;                                            // 0x0088(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

};

// ScriptStruct ShooterGame.PrimalGameData.EmoteGroup
// 0x0018
struct FEmoteGroup
{
	struct FName                                       GroupName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                GroupColor;                                                // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.PrimalGameData.ItemAttachmentInfo
// 0x0048
struct FItemAttachmentInfo
{
	class UActorComponent*                             ComponentToAttach;                                         // 0x0000(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor)
	TArray<struct FExtraItemAttachmentInfo>            ExtraItemAttachmentInfos;                                  // 0x0008(0x0010) (ZeroConstructor, ContainsInstancedReference)
	struct FName                                       SocketToAttachTo;                                          // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      bCanBuildStructuresOn : 1;                                 // 0x0020(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bUseParentAnims : 1;                                       // 0x0020(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bAttachToFirstPersonHands : 1;                             // 0x0020(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bAttachToThirdPersonWeaponMesh : 1;                        // 0x0020(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bDisabled : 1;                                             // 0x0020(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bUseItemColors : 1;                                        // 0x0020(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bUseIgnoreAttachmentWhenEquipmentOfType : 1;               // 0x0020(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bHideCharacterMesh : 1;                                    // 0x0020(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bAttachmentRequireWeaponSupportShield : 1;                 // 0x0021(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bForceDediAttachment : 1;                                  // 0x0021(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bForceVisibleInFirstPerson : 1;                            // 0x0021(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bIgnoreEquipmentForceHideFirstPerson : 1;                  // 0x0021(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bAttachToFirstPersonCamera : 1;                            // 0x0021(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bAttachToFirstPersonCameraCapsule : 1;                     // 0x0021(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bPersistShieldRefreshOnWeaponEquip : 1;                    // 0x0021(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      UnknownData_2XV9[0x6];                                     // 0x0022(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      OnlyUseAttachmentForActorClass;                            // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_EPrimalEquipmentType>           IgnoreAttachmentWhenEquipmentOfType;                       // 0x0030(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_RZA6[0x3];                                     // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       AttachedCompName;                                          // 0x0034(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	TWeakObjectPtr<class UActorComponent>              AttachedCompReference;                                     // 0x003C(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_U76T[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.PrimalItem.ActorClassAttachmentInfo
// 0x0050
struct FActorClassAttachmentInfo
{
	class UClass*                                      OwnerActorClassParent;                                     // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<struct FItemAttachmentInfo>                 ItemAttachmentInfos;                                       // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
	struct FName                                       PlayerMeshTextureMaskParamName;                            // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UTexture2D*                                  PlayerMeshTextureMask;                                     // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UTexture2D*                                  PlayerMeshNoItemDefaultTextureMask;                        // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int                                                PlayerMeshTextureMaskMaterialIndex;                        // 0x0030(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int                                                PlayerMeshTextureMaskMaterialIndexAlt;                     // 0x0034(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FName                                       FPVHandsMeshTextureMaskParamName;                          // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UTexture2D*                                  FPVHandsMeshTextureMask;                                   // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int                                                FPVHandsMeshTextureMaskMaterialIndex;                      // 0x0048(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int                                                FPVHandsMeshTextureMaskMaterialIndex2;                     // 0x004C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.TimeRange
// 0x0008
struct FTimeRange
{
	float                                              Min;                                                       // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Max;                                                       // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.MissionType.MissionPhase
// 0x0048
struct FMissionPhase
{
	struct FName                                       Name;                                                      // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     DisplayText;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      bShowInUI : 1;                                             // 0x0018(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bUseBPGetPhaseDisplayText : 1;                             // 0x0018(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bUseGeneratePhaseRequirements : 1;                         // 0x0018(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bAutoSwitchToNextPhase : 1;                                // 0x0018(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bIsLastPhase : 1;                                          // 0x0018(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      UnknownData_FJPY[0x3];                                     // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              WaitTimeAfterPhaseCompletes;                               // 0x001C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FName                                       NextPhaseName;                                             // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FTimeRange                                  AutoSwitchPhaseAttemptInterval;                            // 0x0028(0x0008) (Edit, DisableEditOnInstance)
	class USoundBase*                                  PhaseStartSound;                                           // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  PhaseEndSound;                                             // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  PhaseMusicLoop;                                            // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.PrimalGameData.MaxItemQuantityOverride
// 0x0008
struct FMaxItemQuantityOverride
{
	int                                                MaxItemQuantity;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bIgnoreMultiplier;                                         // 0x0004(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_WC5L[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.PrimalGameData.ConfigMaxItemQuantityOverride
// 0x0018
struct FConfigMaxItemQuantityOverride
{
	struct FString                                     ItemClassString;                                           // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FMaxItemQuantityOverride                    Quantity;                                                  // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.PrimalGameData.NPCSpawnEntry
// 0x0110
struct FNPCSpawnEntry
{
	struct FString                                     AnEntryName;                                               // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              NPCsToSpawn;                                               // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FString>                             NPCsToSpawnStrings;                                        // 0x0020(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FClassRemappingWeight>               NPCRandomSpawnClassWeights;                                // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                             NPCsSpawnOffsets;                                          // 0x0040(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      NPCsToSpawnPercentageChance;                               // 0x0050(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      NPCMinLevelOffset;                                         // 0x0060(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      NPCMaxLevelOffset;                                         // 0x0070(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      NPCMinLevelMultiplier;                                     // 0x0080(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      NPCMaxLevelMultiplier;                                     // 0x0090(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      bAddLevelOffsetBeforeMultiplier : 1;                       // 0x00A0(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      UnknownData_ATWN[0x7];                                     // 0x00A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<unsigned char>                              NPCOverrideLevel;                                          // 0x00A8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                     ExtentCheck;                                               // 0x00B8(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     GroupSpawnOffset;                                          // 0x00C4(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              EntryWeight;                                               // 0x00D0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              ManualSpawnPointSpreadRadius;                              // 0x00D4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              WaterOnlySpawnMinimumWaterHeight;                          // 0x00D8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              MaximumWaterHeight;                                        // 0x00DC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UClass*                                      ColorSets;                                                 // 0x00E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<struct FNPCDifficultyLevelRange>            NPCDifficultyLevelRanges;                                  // 0x00E8(0x0010) (Edit, ZeroConstructor)
	float                                              LevelDifficultyTestOverride;                               // 0x00F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              SpawnMinDistanceFromStructuresMultiplier;                  // 0x00FC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              SpawnMinDistanceFromPlayersMultiplier;                     // 0x0100(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              SpawnMinDistanceFromTamedDinosMultiplier;                  // 0x0104(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              RandGroupSpawnOffsetZMin;                                  // 0x0108(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              RandGroupSpawnOffsetZMax;                                  // 0x010C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.ShooterGameMode.ConfigNPCSpawnEntriesContainer
// 0x0030
struct FConfigNPCSpawnEntriesContainer
{
	struct FString                                     NPCSpawnEntriesContainerClassString;                       // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FNPCSpawnEntry>                      NPCSpawnEntries;                                           // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FNPCSpawnLimit>                      NPCSpawnLimits;                                            // 0x0020(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

};

// ScriptStruct ShooterGame.PrimalGameData.NPCSpawnEntriesContainerAdditions
// 0x0028
struct FNPCSpawnEntriesContainerAdditions
{
	class UClass*                                      SpawnEntriesContainerClass;                                // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<struct FNPCSpawnEntry>                      AdditionalNPCSpawnEntries;                                 // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FNPCSpawnLimit>                      AdditionalNPCSpawnLimits;                                  // 0x0018(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

};

// ScriptStruct ShooterGame.TerrainComponent.InstancedFoligeData
// 0x0010
struct FInstancedFoligeData
{
	class UStaticMeshComponent*                        Component;                                                 // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	class UObject*                                     FoliageType;                                               // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.ShooterGameMode.PlayerDeathReason
// 0x0020
struct FPlayerDeathReason
{
	int                                                PlayerId;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_VMGT[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     DeathReason;                                               // 0x0008(0x0010) (ZeroConstructor)
	double                                             DiedAtTime;                                                // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.ShooterGameMode.EngramEntryOverride
// 0x0028
struct FEngramEntryOverride
{
	struct FString                                     EngramClassName;                                           // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	int                                                EngramIndex;                                               // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               EngramHidden;                                              // 0x0014(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_UL6Q[0x3];                                     // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                EngramPointsCost;                                          // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int                                                EngramLevelRequirement;                                    // 0x001C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               RemoveEngramPreReq;                                        // 0x0020(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_RK60[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.ShooterGameMode.EngramEntryAutoUnlock
// 0x0018
struct FEngramEntryAutoUnlock
{
	struct FString                                     EngramClassName;                                           // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	int                                                LevelToAutoUnlock;                                         // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_GWVE[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.ShooterGameMode.DinoSpawnWeightMultiplier
// 0x0014
struct FDinoSpawnWeightMultiplier
{
	struct FName                                       DinoNameTag;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              SpawnWeightMultiplier;                                     // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               OverrideSpawnLimitPercentage;                              // 0x000C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_KJW5[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SpawnLimitPercentage;                                      // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.ShooterGameMode.ClassMultiplier
// 0x0018
struct FClassMultiplier
{
	struct FString                                     ClassName;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              Multiplier;                                                // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_NYNV[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.ClassNameReplacement
// 0x0020
struct FClassNameReplacement
{
	struct FString                                     FromClassName;                                             // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     ToClassName;                                               // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

};

// ScriptStruct ShooterGame.PrimalGameData.ConfigCraftingResourceRequirement
// 0x0020
struct FConfigCraftingResourceRequirement
{
	float                                              BaseResourceRequirement;                                   // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_E481[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ResourceItemTypeString;                                    // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	bool                                               bCraftingRequireExactResourceType;                         // 0x0018(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_CL25[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.CrateTemporaryQualityModifiers
// 0x0020
struct FCrateTemporaryQualityModifiers
{
	struct FName                                       CustomTag;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     ClassString;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              QualityMultiplierModifier;                                 // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ATHR[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.ResourceTemporaryAmountModifiers
// 0x0020
struct FResourceTemporaryAmountModifiers
{
	struct FName                                       CustomTag;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     HarvestComponentClassString;                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              ResourceAmountMultiplierModifier;                          // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_OD85[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.ResourceTemporaryAmountModifierSet
// 0x0018
struct FResourceTemporaryAmountModifierSet
{
	struct FName                                       SetTag;                                                    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FResourceTemporaryAmountModifiers>   Modifiers;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

};

// ScriptStruct ShooterGame.CrateTemporaryQualityModifierSet
// 0x0018
struct FCrateTemporaryQualityModifierSet
{
	struct FName                                       SetTag;                                                    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FCrateTemporaryQualityModifiers>     Modifiers;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

};

// ScriptStruct ShooterGame.Leaderboard.LeaderboardEntry
// 0x0018
struct FLeaderboardEntry
{
	struct FName                                       MissionTag;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FLeaderboardRow>                     Rows;                                                      // 0x0008(0x0010) (ZeroConstructor)

};

// ScriptStruct ShooterGame.Leaderboard.LeaderboardsContainer
// 0x0010
struct FLeaderboardsContainer
{
	TArray<struct FLeaderboardEntry>                   Leaderboards;                                              // 0x0000(0x0010) (ZeroConstructor, RepSkip)

};

// ScriptStruct ShooterGame.ShooterGameState.DinoDownloadData
// 0x0010
struct FDinoDownloadData
{
	uint32_t                                           AllowDownloadTimeUTC;                                      // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_C0OU[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      UniqueDino;                                                // 0x0008(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.ShooterGameState.WorldBuffPersistantData
// 0x0018
struct FWorldBuffPersistantData
{
	struct FName                                       WorldBuffIdentifier;                                       // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
	int                                                StackCount;                                                // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_8R2T[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	double                                             WorldBuffStartTime;                                        // 0x0010(0x0008) (BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.ShooterGameState.GameIniData
// 0x0020
struct FGameIniData
{
	struct FString                                     PropertyName;                                              // 0x0000(0x0010) (ZeroConstructor, Transient)
	struct FString                                     PropertyValue;                                             // 0x0010(0x0010) (ZeroConstructor, Transient)

};

// ScriptStruct ShooterGame.ActionReportItem
// 0x0050
struct FActionReportItem
{
	struct FString                                     PlayerName;                                                // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     TribeName;                                                 // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     TimeOfDeath;                                               // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     LevelOfDeath;                                              // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     DeathMessage;                                              // 0x0040(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

};

// ScriptStruct ShooterGame.BattleGameState.BattleTribeData
// 0x0018
struct FBattleTribeData
{
	struct FString                                     TribeName;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                TribeId;                                                   // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_4HBN[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.BattleGameState.BattlePlayerData
// 0x0020
struct FBattlePlayerData
{
	struct FString                                     PlayerName;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bConnected;                                                // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bAlive;                                                    // 0x0011(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_2F8R[0x2];                                     // 0x0012(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                TribeId;                                                   // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                PlayerId;                                                  // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_V8L0[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.ShooterGameUserSettings.DepthOfFieldSetting
// 0x0020
struct FDepthOfFieldSetting
{
	float                                              FocalDistance;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              FocalRegion;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              NearTransitionRegion;                                      // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              FarTransitionRegion;                                       // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Scale;                                                     // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              MaxBokehSize;                                              // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Occlusion;                                                 // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               UseGaussianBlur;                                           // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_7I4Y[0x3];                                     // 0x001D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.ShooterWeapon.WeaponData
// 0x002C
struct FWeaponData
{
	bool                                               bInfiniteAmmo;                                             // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bNeverReload;                                              // 0x0001(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bUsesAmmo;                                                 // 0x0002(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bDontTakeAmmoOnReload;                                     // 0x0003(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bFullReloadFromSingleItem;                                 // 0x0004(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bShowAmmoInClipAsPercent;                                  // 0x0005(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bDontReloadEmptyClipOnEquip;                               // 0x0006(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_0EIN[0x1];                                     // 0x0007(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                AmmoPerClip;                                               // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int                                                AmmoPerShot;                                               // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bSilentOverflowReload;                                     // 0x0010(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_XEZF[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TimeBetweenShots;                                          // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              NoAnimReloadDuration;                                      // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bForceReloadDuration;                                      // 0x001C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bLoopedReloadAnim;                                         // 0x001D(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_RRZI[0x2];                                     // 0x001E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ReloadDurationPerAmmoCount;                                // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              ItemDurabilityToConsumePerShot;                            // 0x0024(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              HarvestResourceMultiplier;                                 // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.ShooterWeapon.WeaponAnim
// 0x0010
struct FWeaponAnim
{
	class UAnimMontage*                                Pawn1P;                                                    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UAnimMontage*                                Pawn3P;                                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.ShooterWeapon.InstantWeaponData
// 0x0030
struct FInstantWeaponData
{
	float                                              WeaponSpread;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              TargetingSpreadMod;                                        // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              FinalWeaponSpreadMultiplier;                               // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              FiringSpreadIncrement;                                     // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              FiringSpreadMax;                                           // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              WeaponRange;                                               // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int                                                HitDamage;                                                 // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              DamageImpulse;                                             // 0x001C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UClass*                                      DamageType;                                                // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              ClientSideHitLeeway;                                       // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              AllowedViewDotHitDir;                                      // 0x002C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.ShooterProjectile.ProjectileWeaponData
// 0x0028
struct FProjectileWeaponData
{
	float                                              ProjectileLife;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int                                                ExplosionDamage;                                           // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              ExplosionImpulse;                                          // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int                                                DirectDamage;                                              // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              DirectImpulse;                                             // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              ExplosionRadius;                                           // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UClass*                                      DamageType;                                                // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UClass*                                      DirectDamageType;                                          // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.PrimalProjectileNetGun.ManagedBoneSetup
// 0x001C
struct FManagedBoneSetup
{
	struct FName                                       BoneName;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<ShooterGame_ETraceType>                TraceType;                                                 // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      bNoHitDefaultToCenter : 1;                                 // 0x0009(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      UnknownData_ZUNA[0x2];                                     // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              StartOffset;                                               // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              LineTraceLength;                                           // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              LaunchSpeed;                                               // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              GravityOverride;                                           // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.ShooterWeapon_Climb.ClimbingAnims
// 0x0400
struct FClimbingAnims
{
	struct FWeaponAnim                                 LeftHandAnchored[0x20];                                    // 0x0000(0x0200) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FWeaponAnim                                 RightHandAnchored[0x20];                                   // 0x0200(0x0200) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.SkyBoxLoader.SkyBoxLoadedStatus
// 0x0020
struct FSkyBoxLoadedStatus
{
	unsigned char                                      UnknownData_5CUB[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2D*                                  LoadedTextureResources[0x3];                               // 0x0008(0x0018) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.PrimalPlayerData.PrimalPlayerCharacterConfigStructReplicated
// 0x00B8
struct FPrimalPlayerCharacterConfigStructReplicated
{
	unsigned char                                      bIsFemale : 1;                                             // 0x0000(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      UnknownData_ZUMG[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                BodyColors[0x4];                                           // 0x0004(0x0040) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_PSWH[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     PlayerCharacterName;                                       // 0x0048(0x0010) (ZeroConstructor)
	float                                              RawBoneModifiers[0x16];                                    // 0x0058(0x0058) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                PlayerSpawnRegionIndex;                                    // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_TFUD[0x4];                                     // 0x00B4(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.SOTFNotification.SOTFNotificationInfo
// 0x0070
struct FSOTFNotificationInfo
{
	bool                                               bIsActive;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_EY5Y[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FString>                             PlayerNames;                                               // 0x0008(0x0010) (ZeroConstructor)
	struct FString                                     PlayerDeathReason;                                         // 0x0018(0x0010) (ZeroConstructor)
	struct FString                                     TribeName;                                                 // 0x0028(0x0010) (ZeroConstructor)
	struct FString                                     CustomDrawString;                                          // 0x0038(0x0010) (ZeroConstructor)
	double                                             StartDisplayTime;                                          // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              DisplayInterval;                                           // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_FHO2[0x4];                                     // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FPrimalPlayerCharacterConfigStructReplicated> DisplayData;                                               // 0x0058(0x0010) (ZeroConstructor)
	bool                                               bLastPlayer;                                               // 0x0068(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<ShooterGame_ESTOFNotificationType>     Type;                                                      // 0x0069(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_Y7TM[0x6];                                     // 0x006A(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.SOTFNotificationDisplay.ScrollingTextInfo
// 0x0010
struct FScrollingTextInfo
{
	class UTextRenderComponent*                        TextComponent;                                             // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor)
	float                                              Time;                                                      // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	bool                                               bActive;                                                   // 0x000C(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_QLDC[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.SOTFNotificationDisplay.PlayerPreviewImage
// 0x0030
struct FPlayerPreviewImage
{
	unsigned char                                      UnknownData_UTAQ[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UStaticMeshComponent*                        PreviewMesh;                                               // 0x0010(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor)
	class UTextRenderComponent*                        PlayerNameText;                                            // 0x0018(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor)
	class UTextRenderComponent*                        TribeComponent;                                            // 0x0020(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor)
	class UTextRenderComponent*                        DeathInfo;                                                 // 0x0028(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.SOTFNotificationDisplay.BannerTextInfo
// 0x0018
struct FBannerTextInfo
{
	class UTextRenderComponent*                        TextComponent;                                             // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor)
	class UStaticMeshComponent*                        BackgroundComponent;                                       // 0x0008(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor)
	bool                                               bActive;                                                   // 0x0010(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_FFMT[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.SoundNodeVehicleEngine.VehicleEngineDatum
// 0x0014
struct FVehicleEngineDatum
{
	float                                              FadeInRPMStart;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              FadeInRPMEnd;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              FadeOutRPMStart;                                           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              FadeOutRPMEnd;                                             // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              MaxPitchMultiplier;                                        // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.SupplyCrateSpawningVolume.SupplyCrateSpawnEntry
// 0x0018
struct FSupplyCrateSpawnEntry
{
	float                                              EntryWeight;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_YG21[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      CrateTemplate;                                             // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UClass*                                      CrateEnemySpawnEntries;                                    // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.SupplyCrateSpawningVolume.SupplyCrateSpawnPointEntry
// 0x0050
struct FSupplyCrateSpawnPointEntry
{
	class AActor*                                      LinkedSpawnPoint;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor)
	class ANPCZoneManager*                             LinkedEnemySpawnZoneManager;                               // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor)
	struct FName                                       LinkedEnemySpawnZoneManagerTag;                            // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor)
	unsigned char                                      bTraceGroundPoint : 1;                                     // 0x0018(0x0001) BIT_FIELD (Edit, DisableEditOnTemplate, NoDestructor)
	unsigned char                                      UnknownData_17Q7[0x3];                                     // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     TraceGroundPointDownOffset;                                // 0x001C(0x000C) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor)
	struct FVector                                     TraceGroundPointUpOffset;                                  // 0x0028(0x000C) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor)
	float                                              SpawnPointWeight;                                          // 0x0034(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor)
	TArray<struct FSupplyCrateSpawnEntry>              OverrideSupplyCrateEntries;                                // 0x0038(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate)
	unsigned char                                      UnknownData_L4DR[0x8];                                     // 0x0048(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.VRBattleGroupDataAsset.VRBattleWaveUnit
// 0x0038
struct FVRBattleWaveUnit
{
	class UClass*                                      DinoType;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FString                                     DinoBlueprintPath;                                         // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	int                                                DinoLevel;                                                 // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     SpawnOffset;                                               // 0x001C(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<TEnumAsByte<ShooterGame_EPrimalCharacterStatusValue>> PrioritizeStats;                                           // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

};

// ScriptStruct ShooterGame.WaterVolumeWithFlow.GridIndex
// 0x0008
struct FGridIndex
{
	int                                                X;                                                         // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Y;                                                         // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.WorldModifiersContainer.PrimalWorldModifierList
// 0x0040
struct FPrimalWorldModifierList
{
	bool                                               bUseActiveEvent;                                           // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_7CQJ[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               ActiveEventNames;                                          // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	bool                                               bUseINIStringOptionValue;                                  // 0x0018(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_G2O6[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FString>                             INIStringOptionValues;                                     // 0x0020(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	bool                                               bHasOverridePriority;                                      // 0x0030(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_2B0J[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      WorldModifierClass;                                        // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.ARKTributeData
// 0x0078
struct FARKTributeData
{
	struct FGuid                                       ID;                                                        // 0x0000(0x0010) (ZeroConstructor)
	TEnumAsByte<ShooterGame_EPrimalARKTributeDataType> DataType;                                                  // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_3EL6[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<unsigned char>                              DataBytes;                                                 // 0x0018(0x0010) (ZeroConstructor)
	struct FString                                     DataClassName;                                             // 0x0028(0x0010) (ZeroConstructor)
	struct FString                                     DataTagName;                                               // 0x0038(0x0010) (ZeroConstructor)
	struct FString                                     Name;                                                      // 0x0048(0x0010) (ZeroConstructor)
	TArray<struct FString>                             DataStats;                                                 // 0x0058(0x0010) (ZeroConstructor)
	double                                             LastReceiveDataTime;                                       // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	uint32_t                                           DataID1;                                                   // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	uint32_t                                           DataID2;                                                   // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.SaveLoadDyePaintingItem
// 0x0038
struct FSaveLoadDyePaintingItem
{
	struct FItemNetID                                  ItemId;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     ColorName;                                                 // 0x0008(0x0010) (ZeroConstructor)
	struct FColor                                      DyeColor;                                                  // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              MissingPercentage;                                         // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              NeededPercentage;                                          // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int16_t                                            ArchIndex;                                                 // 0x0024(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_TB39[0x2];                                     // 0x0026(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<int>                                        ColorPixels;                                               // 0x0028(0x0010) (ZeroConstructor)

};

// ScriptStruct ShooterGame.FishSnareData
// 0x000C
struct FFishSnareData
{
	TWeakObjectPtr<class APrimalDinoCharacter>         DinoCharacter;                                             // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              SnareTime;                                                 // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.GamePadKeyName
// 0x0030
struct FGamePadKeyName
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018) (Edit, DisableEditOnInstance)
	struct FString                                     Name;                                                      // 0x0018(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UTexture2D*                                  KeyIcon;                                                   // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.TekGrenadeLauncherSlot
// 0x0018
struct FTekGrenadeLauncherSlot
{
	class UClass*                                      AmmoType;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	double                                             LastFireTime;                                              // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bIsLoaded;                                                 // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_IT4F[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.MekBackpackData
// 0x0058
struct FMekBackpackData
{
	struct FName                                       BackpackType;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<bool>                                       BoolData;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      FloatData;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<double>                                     TimeData;                                                  // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FVector>                             VectorData;                                                // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FString>                             StringData;                                                // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

};

// ScriptStruct ShooterGame.PrimalItem.SaddlePassengerSeatDefinition
// 0x00A8
struct FSaddlePassengerSeatDefinition
{
	struct FName                                       AttachBoneName;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FName                                       AttachBoneNameEnemyDino;                                   // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FName                                       AttachBoneNameDino;                                        // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FString                                     BoardActionText;                                           // 0x0018(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                     UnboardLocationOffset;                                     // 0x0028(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_IXYU[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      BoardingRequiresEngram;                                    // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     FPVCameraLocationOffset;                                   // 0x0040(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     AttachRelativeLocation;                                    // 0x004C(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                                    AttachRelativeRotation;                                    // 0x0058(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                                    DinoOverrideAttachRelativeRotation;                        // 0x0064(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UAnimSequence*                               CharacterAdditiveAnim;                                     // 0x0070(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      bHideCharacterLowerBody : 1;                               // 0x0078(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bUseCharacterPitch : 1;                                    // 0x0078(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bLimitCameraYaw : 1;                                       // 0x0078(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bUseDinoRotationToLimitCameraYaw : 1;                      // 0x0078(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bWeaponIgnoreDino : 1;                                     // 0x0078(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bHideDinoForLocalPassenger : 1;                            // 0x0078(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      CharacterAdditiveAnimIsNonAdditive : 1;                    // 0x0078(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bAllowDinoPassenger : 1;                                   // 0x0078(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bPreventManualPassenger : 1;                               // 0x0079(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bDinoOverrideAttachRelativeRotation : 1;                   // 0x0079(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bUseBoneNameDinoOverride : 1;                              // 0x0079(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bSavePassenger : 1;                                        // 0x0079(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bPreventDamageToSeatedDino : 1;                            // 0x0079(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      UnknownData_8URG[0x2];                                     // 0x007A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CameraYawRange;                                            // 0x007C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              AimOffsetYawFactor;                                        // 0x0080(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              AimOffsetPitchFactor;                                      // 0x0084(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              AimOffsetYawBias;                                          // 0x0088(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              AimOffsetPitchBias;                                        // 0x008C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              ExtraHypoThermalInsulation;                                // 0x0090(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              ExtraHyperThermalInsulation;                               // 0x0094(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      bIsSaddleTurret : 1;                                       // 0x0098(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bLimitTurretPitch : 1;                                     // 0x0098(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      UnknownData_HCHG[0x3];                                     // 0x0099(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TurretPitchMin;                                            // 0x009C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              TurretPitchMax;                                            // 0x00A0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      bAllowOrbitCam : 1;                                        // 0x00A4(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bAllowTPV : 1;                                             // 0x00A4(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bPreventPassengerWeapons : 1;                              // 0x00A4(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bAllowAccessDinoInventory : 1;                             // 0x00A4(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bUnboardUseLastRotation : 1;                               // 0x00A4(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      UnknownData_MBF4[0x3];                                     // 0x00A5(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.HordeCrateManager.HordeCrateNPCGroup
// 0x0050
struct FHordeCrateNPCGroup
{
	TArray<class UClass*>                              NPCClasses;                                                // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<TAssetPtr<class UClass>>                    NPCAssets;                                                 // 0x0010(0x0010) (Edit, ZeroConstructor)
	TArray<float>                                      NPCWeights;                                                // 0x0020(0x0010) (Edit, ZeroConstructor)
	TArray<int>                                        MinLevels;                                                 // 0x0030(0x0010) (Edit, ZeroConstructor)
	TArray<int>                                        MaxLevels;                                                 // 0x0040(0x0010) (Edit, ZeroConstructor)

};

// ScriptStruct ShooterGame.HordeCrateManager.HordeCrateWave
// 0x0060
struct FHordeCrateWave
{
	int                                                MinNumOfNPCs;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                MaxNumOfNPCs;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              TimeToPrepareForWave;                                      // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_OF68[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FHordeCrateNPCGroup                         NPCsToSpawn;                                               // 0x0010(0x0050) (Edit)

};

// ScriptStruct ShooterGame.HordeCrateManager.HordeCrateDifficultyLevel
// 0x00B0
struct FHordeCrateDifficultyLevel
{
	bool                                               bEnabled;                                                  // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_8P4Z[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MaxNumOfEventsForDifficulty;                               // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                DifficultyLevel;                                           // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                MinNPCsToStart;                                            // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                MaxNPCsToStart;                                            // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ALMW[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FHordeCrateNPCGroup                         StartingNPCs;                                              // 0x0018(0x0050) (Edit)
	TArray<struct FHordeCrateWave>                     NPCWavesToComplete;                                        // 0x0068(0x0010) (Edit, ZeroConstructor)
	float                                              MinTimeBeforeSelfDestruct;                                 // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              MaxTimeBeforeSelfDestruct;                                 // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UClass*                                      ActorTemplate;                                             // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              MinQualityMultiplier;                                      // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              MaxQualityMultiplier;                                      // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                MinAmtRewardItems;                                         // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                MaxAmtRewardItems;                                         // 0x0094(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                DifficultyColor;                                           // 0x0098(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              MainNodeElementPct;                                        // 0x00A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_6B8N[0x4];                                     // 0x00AC(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.ShooterPlayerController.DinoMapMarkerInfo
// 0x0028
struct FDinoMapMarkerInfo
{
	class APrimalDinoCharacter*                        Dino;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	class UStaticMeshComponent*                        MarkerComponent;                                           // 0x0008(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor)
	struct FVector                                     DinoLocation;                                              // 0x0010(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	int                                                PreviousLatitudeNumber;                                    // 0x001C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	int                                                PreviousLongitudeNumber;                                   // 0x0020(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	struct FColor                                      MarkerColor;                                               // 0x0024(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.LootTableEntry
// 0x0038
struct FLootTableEntry
{
	TEnumAsByte<ShooterGame_ELootItemType>             LootItemType;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_SARL[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UClass*>                              LootItemClasses;                                           // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              Weight;                                                    // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<ShooterGame_ESimpleCurve>              QuantityCurve;                                             // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_2Y91[0x3];                                     // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MinQuantity;                                               // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                MaxQuantity;                                               // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<ShooterGame_ESimpleCurve>              QualityCurve;                                              // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_GSRD[0x3];                                     // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   QualityRange;                                              // 0x002C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_4ECL[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.ShooterGameInstance.AssetPathObjectPair
// 0x0018
struct FAssetPathObjectPair
{
	struct FStringAssetReference                       AssetPath;                                                 // 0x0000(0x0010) (ZeroConstructor)
	class UObject*                                     AssetObject;                                               // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.VictoryCore.OverlappedFoliageElement
// 0x0038
struct FOverlappedFoliageElement
{
	class AActor*                                      HarvestActor;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UInstancedStaticMeshComponent*               InstancedStaticMeshComponent;                              // 0x0008(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	class UPrimalHarvestingComponent*                  HarvestingComponent;                                       // 0x0010(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FVector                                     HarvestLocation;                                           // 0x0018(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                HitBodyIndex;                                              // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              MaxHarvestHealth;                                          // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              CurrentHarvestHealth;                                      // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      bIsUnharvestable : 1;                                      // 0x0030(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bIsVisibleAndActive : 1;                                   // 0x0030(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      UnknownData_H3Y6[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.PrimalItem.ItemCraftQueueEntry
// 0x0018
struct FItemCraftQueueEntry
{
	struct FItemNetID                                  ItemId;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Quantity;                                                  // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bIsRepair;                                                 // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bIgnoreInventoryRequirement;                               // 0x000D(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor)
	unsigned char                                      UnknownData_KWBM[0x2];                                     // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RepairPercentage;                                          // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor)
	float                                              RepairSpeedMultiplier;                                     // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor)

};

// ScriptStruct ShooterGame.MissionType.PlayerItems
// 0x0018
struct FPlayerItems
{
	class AShooterCharacter*                           Character;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FItemNetID>                          ItemIDs;                                                   // 0x0008(0x0010) (ZeroConstructor)

};

// ScriptStruct ShooterGame.OceanDinoManager.OceanDinoSpawnEntry
// 0x0038
struct FOceanDinoSpawnEntry
{
	struct FString                                     EntryFriendlyName;                                         // 0x0000(0x0010) (Edit, ZeroConstructor)
	class UClass*                                      SpawnDinoClass;                                            // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              SpawnDinoWeight;                                           // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              EntrySpawnDistanceMultiplier;                              // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              SpawnZOffset;                                              // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              MinimumDepthFromWaterSurface;                              // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              MaxSpawnZ;                                                 // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              NetworkAndStasisRangeMultiplier;                           // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              MinimumAllowedFreeDepthForSpawn;                           // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                OverrideMaxValidSpawnPointAttempts;                        // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.OceanDinoManager.OceanDinoDepthEntry
// 0x0038
struct FOceanDinoDepthEntry
{
	TArray<struct FOceanDinoSpawnEntry>                OceanDinoSpawnEntries;                                     // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FString                                     SectionFriendlyName;                                       // 0x0010(0x0010) (Edit, ZeroConstructor)
	float                                              StartAtDepthZ;                                             // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_7R4N[0x14];                                    // 0x0024(0x0014) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.PrimalBuff_Grappled.GrappleAnchor
// 0x0040
struct FGrappleAnchor
{
	struct FVector                                     AnchorWorldLocation;                                       // 0x0000(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_BR4Q[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USceneComponent*                             AnchoredComponent;                                         // 0x0010(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	int                                                AnchoredItemIndex;                                         // 0x0018(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_NFVQ[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     AnchoredBoneName;                                          // 0x0020(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FVector                                     AnchorRelativeOffset;                                      // 0x0030(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_SMYV[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.PrimalBuff_Grappled.ReplicatedGrappleTetherData
// 0x0138
struct FReplicatedGrappleTetherData
{
	struct FString                                     Rep_TetherTag;                                             // 0x0000(0x0010) (ZeroConstructor)
	struct FGrappleAnchor                              Rep_TetherAnchor_Start;                                    // 0x0010(0x0040) (ContainsInstancedReference)
	struct FGrappleAnchor                              Rep_TetherAnchor_End;                                      // 0x0050(0x0040) (ContainsInstancedReference)
	struct FGrappleAnchor                              Rep_TetherAnchor_Visual_Start;                             // 0x0090(0x0040) (ContainsInstancedReference)
	struct FGrappleAnchor                              Rep_TetherAnchor_Visual_End;                               // 0x00D0(0x0040) (ContainsInstancedReference)
	class APrimalBuff_Grappled*                        Rep_MasterGrappledBuff;                                    // 0x0110(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Rep_TetherLifetime;                                        // 0x0118(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_Z9NL[0x4];                                     // 0x011C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	double                                             Rep_TetherCreationTime;                                    // 0x0120(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      Rep_bUseVisualAnchor_Start : 1;                            // 0x0128(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      Rep_bUseVisualAnchor_End : 1;                              // 0x0128(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      UnknownData_UD9K[0x3];                                     // 0x0129(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Rep_TetherLength;                                          // 0x012C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      Rep_bAnyoneCanControl : 1;                                 // 0x0130(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      Rep_bTetherBroken : 1;                                     // 0x0130(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      UnknownData_FGGI[0x7];                                     // 0x0131(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.PrimalBuff_Grappled.CreateGrappleTetherData
// 0x0120
struct FCreateGrappleTetherData
{
	struct FString                                     WithTag;                                                   // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FGrappleAnchor                              WithTetherStartAnchor;                                     // 0x0010(0x0040) (BlueprintVisible, ContainsInstancedReference)
	struct FGrappleAnchor                              WithTetherEndAnchor;                                       // 0x0050(0x0040) (BlueprintVisible, ContainsInstancedReference)
	struct FGrappleAnchor                              WithTetherVisualStartAnchor;                               // 0x0090(0x0040) (BlueprintVisible, ContainsInstancedReference)
	struct FGrappleAnchor                              WithTetherVisualEndAnchor;                                 // 0x00D0(0x0040) (BlueprintVisible, ContainsInstancedReference)
	class APrimalBuff_Grappled*                        WithMasterGrappleBuff;                                     // 0x0110(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              WithTetherLifetime;                                        // 0x0118(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      bUseVisualAnchor_Start : 1;                                // 0x011C(0x0001) BIT_FIELD (Edit, BlueprintVisible, EditConst, NoDestructor)
	unsigned char                                      bUseVisualAnchor_End : 1;                                  // 0x011C(0x0001) BIT_FIELD (Edit, BlueprintVisible, EditConst, NoDestructor)
	unsigned char                                      bAnyoneCanControl : 1;                                     // 0x011C(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor)
	unsigned char                                      UnknownData_9HZT[0x3];                                     // 0x011D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.PrimalGameData.EscapeRoom_RoomItemSetup
// 0x0030
struct FEscapeRoom_RoomItemSetup
{
	class UClass*                                      ItemClass;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int                                                NumItems;                                                  // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_PVAZ[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UStaticMesh*                                 MeshOverride;                                              // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     ScaleOverride;                                             // 0x0018(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_UVPV[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInterface*                          MaterialOverride;                                          // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.PrimalGameData.ItemSetup
// 0x0028
struct FItemSetup
{
	class UClass*                                      ItemType;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     ItemBlueprintPath;                                         // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              MinQuality;                                                // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              MaxQuality;                                                // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Quantity;                                                  // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      bAutoEquip : 1;                                            // 0x0024(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bDontStack : 1;                                            // 0x0024(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bForceBlueprint : 1;                                       // 0x0024(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      UnknownData_32L4[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.PrimalGameData.DinoSetup
// 0x00F0
struct FDinoSetup
{
	class UClass*                                      DinoType;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TAssetPtr<class UClass>                            DinoSoftReference;                                         // 0x0008(0x001C) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible)
	unsigned char                                      UnknownData_AUHL[0x4];                                     // 0x0008(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FString                                     DinoBlueprintPath;                                         // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     DinoName;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                DinoLevel;                                                 // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      BasePointsPerStat[0xC];                                    // 0x004C(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      PlayerAddedPointsPerStat[0xC];                             // 0x0058(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     SpawnOffset;                                               // 0x0064(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<ShooterGame_EDinoTamedOrder>           DinoState;                                                 // 0x0070(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_F7AX[0x7];                                     // 0x0071(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<TEnumAsByte<ShooterGame_EPrimalCharacterStatusValue>> PrioritizeStats;                                           // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FItemSetup>                          TamedDinoInventory;                                        // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UClass*                                      SaddleType;                                                // 0x0098(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TAssetPtr<class UClass>                            SaddleSoftReference;                                       // 0x00A0(0x001C) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible)
	unsigned char                                      UnknownData_FK4U[0x4];                                     // 0x00A0(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FString                                     SaddleBlueprintPath;                                       // 0x00C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              SaddleQuality;                                             // 0x00D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              SaddleMinRandomQuality;                                    // 0x00D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              RandomWeight;                                              // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      bIsTamed : 1;                                              // 0x00DC(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bIgnoreMaxTameLimit : 1;                                   // 0x00DC(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bPreventSpawningAtTameLimit : 1;                           // 0x00DC(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bBlockTamedDialog : 1;                                     // 0x00DC(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bAutoEquipSaddle : 1;                                      // 0x00DC(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bUseFixedSpawnLevel : 1;                                   // 0x00DC(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      UnknownData_QVEG[0x3];                                     // 0x00DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              WildRandomScaleOverride;                                   // 0x00E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              DinoImprintingQuality;                                     // 0x00E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bNetInfoFromClient;                                        // 0x00E8(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor)
	unsigned char                                      UnknownData_S76D[0x7];                                     // 0x00E9(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.PrimalGameData.DinoSetupGroup
// 0x0030
struct FDinoSetupGroup
{
	struct FName                                       GroupName;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              RandomWeight;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_YJ4G[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FDinoSetup>                          Entries;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        EntriesSpawnNumberLimits;                                  // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

};

// ScriptStruct ShooterGame.PrimalGameData.EscapeRoom_RoomSetup
// 0x00B8
struct FEscapeRoom_RoomSetup
{
	TArray<bool>                                       RoomUnlockRequirements;                                    // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<bool>                                       UnlockHintTypes;                                           // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              CorrectHintWeight;                                         // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_E7XF[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<float>                                      MultiplierPerReset;                                        // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	int                                                NumDinosToKill;                                            // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_B1SQ[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FDinoSetupGroup>                     RoomGroupDinoSetups;                                       // 0x0040(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FEscapeRoom_RoomItemSetup                   ItemSetup;                                                 // 0x0050(0x0030) (Edit, DisableEditOnInstance)
	int                                                NumHintFloors;                                             // 0x0080(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int                                                NumHintRoomPulses;                                         // 0x0084(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              TimeToComplete;                                            // 0x0088(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               TeleportToNextRoomOnUnlock;                                // 0x008C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               TeleportToNextRoomOnCorrectOverlap;                        // 0x008D(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               SpawnEnemiesWithoutUnlockReq;                              // 0x008E(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_A1Y7[0x1];                                     // 0x008F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                NumDinosPerWave;                                           // 0x0090(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              WaveInterval;                                              // 0x0094(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<bool>                                       ShowIndicatorsForUnlockReqs;                               // 0x0098(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	int                                                MaxActiveDinos;                                            // 0x00A8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               UseClosestDinosSpawnToPlayers;                             // 0x00AC(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               UseForcedTargeting;                                        // 0x00AD(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_DJQJ[0x2];                                     // 0x00AE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxAggroDistance;                                          // 0x00B0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ChooseSingleUniqueUnlockReqForRoom;                        // 0x00B4(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_JFH9[0x3];                                     // 0x00B5(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.PrimalGameData.TutorialDefinition
// 0x0030
struct FTutorialDefinition
{
	struct FString                                     TutorialTitle;                                             // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     TutorialText;                                              // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UTexture2D*                                  TutorialImage;                                             // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              TutorialDuration;                                          // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int                                                NextTutorialIndex;                                         // 0x002C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.PrimalGameData.ItemToDinoStatParams
// 0x0018
struct FItemToDinoStatParams
{
	TEnumAsByte<ShooterGame_EPrimalItemStat>           ItemStat;                                                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<ShooterGame_EPrimalCharacterStatusValue> DinoStat;                                                  // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_6KQ7[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MinItemStatValue;                                          // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                MaxItemStatValue;                                          // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                MinDinoStatValue;                                          // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                MaxDinoStatValue;                                          // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<ShooterGame_ESimpleCurve>              ConversionCurve;                                           // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_DGB6[0x3];                                     // 0x0015(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.PrimalItem.RequiresInventorySubclassMapping
// 0x0018
struct FRequiresInventorySubclassMapping
{
	class UClass*                                      InventoryComponentClassParent;                             // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<class UClass*>                              RequiresInventoryComponentClassChildren;                   // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

};

// ScriptStruct ShooterGame.AllClustersInventory.PlayerAllClustersInventory
// 0x0038
struct FPlayerAllClustersInventory
{
	unsigned char                                      UnknownData_NPY4[0x38];                                    // 0x0000(0x0038) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.ShooterPlayerController.PrimalStats
// 0x0030
struct FPrimalStats
{
	bool                                               bUsed;                                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_78VG[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	double                                             StartStatsTime;                                            // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                PrimalStatsValues[0x7];                                    // 0x0010(0x001C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_TA4F[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.ShooterPlayerController.NonClusterCharacterUploadData
// 0x0138
struct FNonClusterCharacterUploadData
{
	struct FArkTributePlayerData                       PlayerData;                                                // 0x0000(0x0120)
	uint64_t                                           TribeId;                                                   // 0x0120(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FItemNetInfo>                        Items;                                                     // 0x0128(0x0010) (ZeroConstructor)

};

// ScriptStruct ShooterGame.HibernationManager.HibernationEntity
// 0x0060
struct FHibernationEntity
{
	unsigned char                                      UnknownData_IJ1Y[0x60];                                    // 0x0000(0x0060) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.MissionDispatcher.Int32Array
// 0x0010
struct FInt32Array
{
	TArray<int>                                        Array;                                                     // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)

};

// ScriptStruct ShooterGame.MissionType.MissionDinoPath
// 0x0040
struct FMissionDinoPath
{
	TWeakObjectPtr<class AActor>                       TargetActor;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     CurrentTarget;                                             // 0x0008(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     LastTarget;                                                // 0x0014(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              CurrentSplineKeyTarget;                                    // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              LastSplineKeyTarget;                                       // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	double                                             LastUpdateTime;                                            // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              UpdateInterval;                                            // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TWeakObjectPtr<class USplineComponent>             ForcePathSpline;                                           // 0x0034(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	unsigned char                                      bReverseAtEnd : 1;                                         // 0x003C(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      UnknownData_JH81[0x3];                                     // 0x003D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.PaintingCache.PaintingStreamingJob
// 0x0040
struct FPaintingStreamingJob
{
	unsigned char                                      UnknownData_EB4T[0x40];                                    // 0x0000(0x0040) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.PrimalChatFontData
// 0x0038
struct FPrimalChatFontData
{
	struct FName                                       FontName;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int                                                FontSize;                                                  // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_JGC5[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSlateColor                                 FontColor;                                                 // 0x0010(0x0028) (Edit, DisableEditOnInstance)

};

// ScriptStruct ShooterGame.PrimalStructureElevatorPlatform.PrimalDroppedItemOnPlatform
// 0x0028
struct FPrimalDroppedItemOnPlatform
{
	struct FVector                                     ItemRelativeLocation;                                      // 0x0000(0x000C) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
	struct FRotator                                    ItemRelativeRotation;                                      // 0x000C(0x000C) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
	struct FName                                       BoneName;                                                  // 0x0018(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
	class APrimalStructureItemContainer*               MyItem;                                                    // 0x0020(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.UI_MainMenu.UI_MainMenuLink
// 0x0018
struct FUI_MainMenuLink
{
	struct FString                                     MapName;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      Class;                                                     // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.ShooterGameMode.AtlasAdminCommandTrackingEntry
// 0x0060
struct FAtlasAdminCommandTrackingEntry
{
	uint32_t                                           ServerUTCTime;                                             // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ELLQ[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int64_t                                            PlayerId;                                                  // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	struct FString                                     SteamID;                                                   // 0x0010(0x0010) (ZeroConstructor, Transient)
	struct FString                                     IP;                                                        // 0x0020(0x0010) (ZeroConstructor, Transient)
	struct FVector                                     Location;                                                  // 0x0030(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_41OL[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     CommandType;                                               // 0x0040(0x0010) (ZeroConstructor, Transient)
	struct FString                                     Command;                                                   // 0x0050(0x0010) (ZeroConstructor, Transient)

};

// ScriptStruct ShooterGame.ShooterGameMode.TributePlayerTribeInfo
// 0x0020
struct FTributePlayerTribeInfo
{
	TArray<uint64_t>                                   PlayerDataIDs;                                             // 0x0000(0x0010) (ZeroConstructor, Transient)
	TArray<uint64_t>                                   TribeIDs;                                                  // 0x0010(0x0010) (ZeroConstructor, Transient)

};

// ScriptStruct ShooterGame.ShooterGameMode.MissionGlobalData
// 0x0008
struct FMissionGlobalData
{
	double                                             LastMissionDeactivatedUtcTime;                             // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.VictoryCore.JoyAnim
// 0x0010
struct FJoyAnim
{
	class UAnimMontage*                                Anim;                                                      // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Chance;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_BD8D[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.StructuresPlus.GlassSettings
// 0x0008
struct FGlassSettings
{
	TEnumAsByte<ShooterGame_EGlassTransparencyType>    TransparencyType;                                          // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_TI0H[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Opacity;                                                   // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.RadialSelectorHUD_Custom.CustomWheelSettings
// 0x0040
struct FCustomWheelSettings
{
	struct FString                                     CenterText;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FLinearColor                                CenterTextColorOverride;                                   // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   CenterImageSize;                                           // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UTexture2D*                                  CenterImage;                                               // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                MinNumDivisions;                                           // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              InnerDistance;                                             // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              OuterDistance;                                             // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      bUseCenterTextColorOverride : 1;                           // 0x003C(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      UnknownData_YOEH[0x3];                                     // 0x003D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.RadialSelectorHUD_Custom.CustomWheelEntry
// 0x0068
struct FCustomWheelEntry
{
	TWeakObjectPtr<class UObject>                      Target;                                                    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     TargetFunctionName;                                        // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Label;                                                     // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                Priority;                                                  // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              ActivationTime;                                            // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class USoundBase*                                  ActivationSound;                                           // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                CustomDataInt;                                             // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       CustomDataName;                                            // 0x003C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                TextColorOverride;                                         // 0x0044(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                BackgroundColorOverride;                                   // 0x0054(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      bUseTextColorOverride : 1;                                 // 0x0064(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bUseBackgroundColorOverride : 1;                           // 0x0064(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bPersistWheelOnActivation : 1;                             // 0x0064(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bIsEnabled : 1;                                            // 0x0064(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      UnknownData_Y2KB[0x3];                                     // 0x0065(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.PrimalGameData.NameColorPair
// 0x0018
struct FNameColorPair
{
	struct FName                                       MaterialParamName;                                         // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Color;                                                     // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.PrimalInventoryComponent.ServerCustomFolder
// 0x0028
struct FServerCustomFolder
{
	int                                                InventoryCompType;                                         // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GEL3[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     FolderName;                                                // 0x0008(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<struct FItemNetID>                          CustomFolderItemIds;                                       // 0x0018(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)

};

// ScriptStruct ShooterGame.PrimalBuff_Grappled.GrappleTether
// 0x0168
struct FGrappleTether
{
	struct FString                                     TetherTag;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, EditConst)
	struct FGrappleAnchor                              TetherAnchor_Start;                                        // 0x0010(0x0040) (Edit, BlueprintVisible, EditConst, ContainsInstancedReference)
	struct FGrappleAnchor                              TetherAnchor_End;                                          // 0x0050(0x0040) (Edit, BlueprintVisible, EditConst, ContainsInstancedReference)
	struct FGrappleAnchor                              TetherAnchor_Visual_Start;                                 // 0x0090(0x0040) (Edit, BlueprintVisible, EditConst, ContainsInstancedReference)
	struct FGrappleAnchor                              TetherAnchor_Visual_End;                                   // 0x00D0(0x0040) (Edit, BlueprintVisible, EditConst, ContainsInstancedReference)
	class APrimalCharacter*                            GrappledParentPrimalChar;                                  // 0x0110(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor)
	class APrimalCharacter*                            GrappleOwner;                                              // 0x0118(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor)
	class APrimalBuff_Grappled*                        MasterGrappleBuff;                                         // 0x0120(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor)
	float                                              TetherLifetime;                                            // 0x0128(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_X4YI[0x4];                                     // 0x012C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	double                                             TetherCreationTime;                                        // 0x0130(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_6I1N[0x8];                                     // 0x0138(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bAnyoneCanControl : 1;                                     // 0x0140(0x0001) BIT_FIELD (Edit, BlueprintVisible, EditConst, NoDestructor)
	unsigned char                                      bUseVisualAnchor_Start : 1;                                // 0x0140(0x0001) BIT_FIELD (Edit, BlueprintVisible, EditConst, NoDestructor)
	unsigned char                                      bUseVisualAnchor_End : 1;                                  // 0x0140(0x0001) BIT_FIELD (Edit, BlueprintVisible, EditConst, NoDestructor)
	unsigned char                                      bTetherBroken : 1;                                         // 0x0140(0x0001) BIT_FIELD (BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor)
	unsigned char                                      UnknownData_ARDM[0x7];                                     // 0x0141(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	double                                             LastAboveBreakDistPastTetherLengthTime;                    // 0x0148(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	float                                              TetherLength_Current;                                      // 0x0150(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor)
	struct FVector                                     DirFromOwner_Current;                                      // 0x0154(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor)
	float                                              DistToOwner_Current;                                       // 0x0160(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor)
	float                                              OwnerDistFromTetherLimit_Current;                          // 0x0164(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.PrimalTextStyle
// 0x0120
struct FPrimalTextStyle
{
	struct FName                                       StyleName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FTextBlockStyle                             TextStyle;                                                 // 0x0008(0x0118) (Edit, DisableEditOnInstance)

};

// ScriptStruct ShooterGame.VictoryCore.ProjectileArc
// 0x0030
struct FProjectileArc
{
	struct FVector                                     StartLocation;                                             // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     StartDirection;                                            // 0x000C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              LaunchSpeed;                                               // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                                    WorldRotation;                                             // 0x001C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bApplyRotationToGravityDirection;                          // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_LSMU[0x3];                                     // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              OverrideGravityZ;                                          // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.PrimalGameData.SupplyCrateItemSet
// 0x0040
struct FSupplyCrateItemSet
{
	struct FString                                     SetName;                                                   // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FSupplyCrateItemEntry>               ItemEntries;                                               // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              MinNumItems;                                               // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              MaxNumItems;                                               // 0x0024(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              NumItemsPower;                                             // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              SetWeight;                                                 // 0x002C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bItemsRandomWithoutReplacement;                            // 0x0030(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_AE23[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      ItemSetOverride;                                           // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.CustomButtonWidgetStyle
// 0x0040 (0x0048 - 0x0008)
struct FCustomButtonWidgetStyle : public FSlateWidgetStyle
{
	struct FLinearColor                                NormalChildTintColor;                                      // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                HoveredChildTintColor;                                     // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                PressedChildTintColor;                                     // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                DisabledChildTintColor;                                    // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.PrimalInventoryComponent.OverrideMultiuseButtonStyle
// 0x0290
struct FOverrideMultiuseButtonStyle
{
	struct FButtonStyle                                Style;                                                     // 0x0000(0x0248) (Edit, DisableEditOnInstance)
	struct FCustomButtonWidgetStyle                    ExtendedStyle;                                             // 0x0248(0x0048) (Edit, DisableEditOnInstance)

};

// ScriptStruct ShooterGame.DecalData
// 0x0020
struct FDecalData
{
	class UMaterialInterface*                          DecalMaterial;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              DecalSize;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              DecalDepth;                                                // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              DecalImpactNormalOffset;                                   // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              LifeSpan;                                                  // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              RandomAngleRange;                                          // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_BG0C[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.BiomeZoneVolumeEffectUtility.BiomeZoneImpactEffect
// 0x0080
struct FBiomeZoneImpactEffect
{
	class UClass*                                      SpawnActors[0x10];                                         // 0x0000(0x0080) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.PrimalGameData.TribeData
// 0x0138
struct FTribeData
{
	struct FString                                     TribeName;                                                 // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	double                                             LastNameChangeTime;                                        // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint32_t                                           OwnerPlayerDataID;                                         // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int                                                TribeId;                                                   // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             MembersPlayerName;                                         // 0x0020(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<uint32_t>                                   MembersPlayerDataID;                                       // 0x0030(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<unsigned char>                              MembersRankGroups;                                         // 0x0040(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<double>                                     SlotFreedTime;                                             // 0x0050(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<uint32_t>                                   TribeAdmins;                                               // 0x0060(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FTribeAlliance>                      TribeAlliances;                                            // 0x0070(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bSetGovernment;                                            // 0x0080(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QB6U[0x3];                                     // 0x0081(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTribeGovernment                            TribeGovernment;                                           // 0x0084(0x0014) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FPrimalPlayerCharacterConfigStruct>  MembersConfigs;                                            // 0x0098(0x0010) (ZeroConstructor, RepSkip, NativeAccessSpecifierPublic)
	TArray<struct FTribeWar>                           TribeWars;                                                 // 0x00A8(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             TribeLog;                                                  // 0x00B8(0x0010) (ZeroConstructor, RepSkip, NativeAccessSpecifierPublic)
	int                                                LogIndex;                                                  // 0x00C8(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3I8V[0x4];                                     // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FTribeRankGroup>                     TribeRankGroups;                                           // 0x00D0(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                NumTribeDinos;                                             // 0x00E0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_MG07[0x54];                                    // 0x00E4(0x0054) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.TamingDinoInfo
// 0x0058
struct FTamingDinoInfo
{
	struct FString                                     Name;                                                      // 0x0000(0x0010) (ZeroConstructor)
	float                                              TameAffinityPercent;                                       // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              HealthPercent;                                             // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              HealthCurrent;                                             // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              HealthMax;                                                 // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              HungerPercent;                                             // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              HungerCurrent;                                             // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              HungerMax;                                                 // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              TorpidityPercent;                                          // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              TameEffectivenessPercent;                                  // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                TameEffectivenessLvlModifier;                              // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Location;                                                  // 0x0038(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bIsConcious;                                               // 0x0044(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bUseGender;                                                // 0x0045(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bIsFemale;                                                 // 0x0046(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bIsTamed;                                                  // 0x0047(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	uint32_t                                           DataID1;                                                   // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	uint32_t                                           DataID2;                                                   // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	class UClass*                                      DinoEntry;                                                 // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.TamingWaypointInfo
// 0x0090
struct FTamingWaypointInfo
{
	bool                                               bWaypointActive;                                           // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_LLA4[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     WaypointDestination;                                       // 0x0004(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor)
	struct FString                                     WaypointTitle;                                             // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	int                                                WaypointID;                                                // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_BYDG[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2D*                                  Icon;                                                      // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor)
	struct FTamingDinoInfo                             DinoInfo;                                                  // 0x0030(0x0058) (Edit, BlueprintVisible, DisableEditOnTemplate)
	float                                              ProgressBarPercent;                                        // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor)
	bool                                               bIsTamed;                                                  // 0x008C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_GQQ3[0x3];                                     // 0x008D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.ShooterPlayerState.SpawnPointInfo
// 0x0048
struct FSpawnPointInfo
{
	int                                                SpawnPointID;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_LC7V[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     BedName;                                                   // 0x0008(0x0010) (ZeroConstructor)
	class ABiomeZoneVolume*                            SpawnPointVolume;                                          // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	class UClass*                                      SpawnPointActorClass;                                      // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     AtLocation;                                                // 0x0028(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_V6HK[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	double                                             NextAllowedUseTime;                                        // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bAllowedUse;                                               // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_IWJG[0x7];                                     // 0x0041(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.ShooterPlayerState.AliveNameAndLocation
// 0x0040
struct FAliveNameAndLocation
{
	struct FString                                     PlayerName;                                                // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     TribeName;                                                 // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	uint32_t                                           TargetingTeam;                                             // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_0DM3[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	uint64_t                                           PlayerId;                                                  // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     Location;                                                  // 0x0030(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_Y0IC[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.PrimalStructure.StructureVariant
// 0x0070
struct FStructureVariant
{
	struct FString                                     VariantName;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bUseBPAllowSwitchToVariant;                                // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_FOEJ[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UStaticMesh*                                 Mesh;                                                      // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bUseMeshTransform;                                         // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ON93[0xF];                                     // 0x0021(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct UObject_FTransform                          MeshTransform;                                             // 0x0030(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	class UDestructibleMesh*                           DestroyedMeshOverride;                                     // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_RQNE[0x8];                                     // 0x0068(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.PrimalStructure.PrimalStructureSnapTagSettings
// 0x0040
struct FPrimalStructureSnapTagSettings
{
	TArray<struct FName>                               SnapToStructureTagsToExclude;                              // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               SnapFromStructureTagsToExclude;                            // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               SnapToStructureTagsToInclude;                              // 0x0020(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               SnapFromStructureTagsToInclude;                            // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

};

// ScriptStruct ShooterGame.PrimalStructure.PrimalStructureSnapPoint
// 0x00C8
struct FPrimalStructureSnapPoint
{
	struct FName                                       SnapPointDescription;                                      // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     PointLocOffset;                                            // 0x0008(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                                    PointRotOffset;                                            // 0x0014(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                                    PointComparisonExtraRotOffset;                             // 0x0020(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      bAttachToPoint : 1;                                        // 0x002C(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bAttachFromPoint : 1;                                      // 0x002C(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bHighPriorityAttachToPoint : 1;                            // 0x002C(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bSnapToUseAlternatePlacemenTraceScale : 1;                 // 0x002C(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bAttachToDisableEncroachmentCheck : 1;                     // 0x002C(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bInvalidForStructureLinking : 1;                           // 0x002C(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bSnapForceNoGroundRequirement : 1;                         // 0x002C(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bSnapToOnlyAllowSingleAttachment : 1;                      // 0x002C(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bPorthole : 1;                                             // 0x002D(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      UnknownData_NAY4[0x2];                                     // 0x002E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ToPointSnapTypeFlags;                                      // 0x0030(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int                                                ToPointSnapTypeExcludeFlags;                               // 0x0034(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int                                                SnapPointMatchGroup;                                       // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FName                                       StaticMeshSnapSocketName;                                  // 0x003C(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_Y4N0[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UClass*>                              SnapToStructureTypesToExclude;                             // 0x0048(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              SnapFromStructureTypesToExclude;                           // 0x0058(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              SnapToStructureTypesToInclude;                             // 0x0068(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              SnapFromStructureTypesToInclude;                           // 0x0078(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FPrimalStructureSnapTagSettings             SnapTags;                                                  // 0x0088(0x0040) (Edit, DisableEditOnInstance)

};

// ScriptStruct ShooterGame.PrimalWorldBuffData.PropertyModifierDefinition
// 0x0010
struct FPropertyModifierDefinition
{
	struct FName                                       PropertyName;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bNeedsManualReplication;                                   // 0x0008(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<ShooterGame_EWorldBuffPropertyLocation> BuffPropertyLocation;                                      // 0x0009(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_4UA1[0x2];                                     // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ModifierValue;                                             // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.PrimalWorldBuffData.WorldBuffDefinition
// 0x00D8
struct FWorldBuffDefinition
{
	struct FName                                       WorldBuffIdentifier;                                       // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FString                                     WorldBuffDisplayTitle;                                     // 0x0008(0x0010) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	struct FLinearColor                                WorldBuffDisplayTitleColor;                                // 0x0018(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FString                                     WorldBuffDisplayText;                                      // 0x0028(0x0010) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	class UTexture2D*                                  WorldBuffDisplayIcon;                                      // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FString                                     WorldBuffServerNotificationText;                           // 0x0040(0x0010) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	struct FLinearColor                                WorldBuffServerNotificationTextColor;                      // 0x0050(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UTexture2D*                                  WorldBuffServerNotificationIcon;                           // 0x0060(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  WorldBuffServerNotificationSound;                          // 0x0068(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int                                                StackLimit;                                                // 0x0070(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              WorldBuffDuration;                                         // 0x0074(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<struct FName>                               WorldBuffsToRemoveOnStart;                                 // 0x0078(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               WorldBuffsToPreventWhileActive;                            // 0x0088(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              TimeFromEndToAllowReplacement;                             // 0x0098(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FName                                       WorldBuffSetName;                                          // 0x009C(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<ShooterGame_EWorldBuffDifficultyType>  BuffDifficulty;                                            // 0x00A4(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_29K0[0x3];                                     // 0x00A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     DifficultyDisplayText;                                     // 0x00A8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      bRefreshTimerAtFullStacks : 1;                             // 0x00B8(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bStacksExtendDuration : 1;                                 // 0x00B8(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bStacksIncreaseEffect : 1;                                 // 0x00B8(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bRemoveAllOtherWorldBuffsOnStart : 1;                      // 0x00B8(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bPreventAddingAnyOtherWorldBuffs : 1;                      // 0x00B8(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bForceDisableServerNotifications : 1;                      // 0x00B8(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      UnknownData_1HTG[0x7];                                     // 0x00B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      WorldBuffCustomImplementation;                             // 0x00C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<struct FPropertyModifierDefinition>         PropertyModifiers;                                         // 0x00C8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

};

// ScriptStruct ShooterGame.PrimalWorldModifier.FoliageReskinDefinition
// 0x0030
struct FFoliageReskinDefinition
{
	struct FString                                     ForFoliage;                                                // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInterface*>                  NewFoliageMaterials;                                       // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInterface*>                  OverrideDestructionMaterials;                              // 0x0020(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

};

// ScriptStruct ShooterGame.PrimalWorldModifier.SublevelOverrideDefinition
// 0x0010
struct FSublevelOverrideDefinition
{
	struct FName                                       SublevelPackageToReplace;                                  // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FName                                       SublevelPackageToActivate;                                 // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.PrimalWorldModifier.LevelStaticMeshReskinDefinition
// 0x0018
struct FLevelStaticMeshReskinDefinition
{
	struct FString                                     MaterialNameToReplace;                                     // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UMaterialInterface*                          NewMaterial;                                               // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.PrimalGameData.InventoryComponentDefaultItemsAppend
// 0x0038
struct FInventoryComponentDefaultItemsAppend
{
	TArray<class UClass*>                              InventoryComponentClasses;                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<class UClass*>                              AddItems;                                                  // 0x0010(0x0010) (Edit, ZeroConstructor)
	TArray<class UClass*>                              RemoveItems;                                               // 0x0020(0x0010) (Edit, ZeroConstructor)
	bool                                               bAddToForceAllowCrafting;                                  // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_CQVG[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.MissionMetaData
// 0x0010
struct FMissionMetaData
{
	struct FName                                       MissionTag;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UClass*                                      MissionMetaDataClass;                                      // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.PrimalWorldSettingsEventOverrides.ActiveEventUndeprecatedStructures
// 0x0018
struct FActiveEventUndeprecatedStructures
{
	struct FName                                       ActiveEvent;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<class UClass*>                              UndeprecatedStructuresDuringEvent;                         // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

};

// ScriptStruct ShooterGame.PrimalWorldSettingsEventOverrides.ActiveEventUndeprecatedItems
// 0x0018
struct FActiveEventUndeprecatedItems
{
	struct FName                                       ActiveEvent;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<class UClass*>                              UndeprecatedItemsDuringEvent;                              // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

};

// ScriptStruct ShooterGame.PrimalWorldSettingsEventOverrides.ActiveEventUndeprecatedDinos
// 0x0018
struct FActiveEventUndeprecatedDinos
{
	struct FName                                       ActiveEvent;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<class UClass*>                              UndeprecatedDinosDuringEvent;                              // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

};

// ScriptStruct ShooterGame.PrimalWorldSettingsEventOverrides.ActiveEventGlobalStatusAdjustments
// 0x0068
struct FActiveEventGlobalStatusAdjustments
{
	struct FName                                       ActiveEvent;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              GlobalStatusAdjustmentRateMultipliersPositive[0xC];        // 0x0008(0x0030) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              GlobalStatusAdjustmentRateMultipliersNegative[0xC];        // 0x0038(0x0030) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.ShooterDamageType.TargetClassDamageScaler
// 0x0010
struct FTargetClassDamageScaler
{
	class UClass*                                      TargetClass;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              DamageScale;                                               // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_NPMM[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.ShooterGame_Menu.ActiveEventMainMenuOverride
// 0x0020
struct FActiveEventMainMenuOverride
{
	struct FName                                       ActiveEvent;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UTexture2D*                                  MainMenuBG;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FString                                     MusicFilename;                                             // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)

};

// ScriptStruct ShooterGame.PointOfInterestData_ForCompanion
// 0x03F0
struct FPointOfInterestData_ForCompanion
{
	struct FPointOfInterestData                        PointData;                                                 // 0x0000(0x0140) (Edit, BlueprintVisible, DisableEditOnTemplate)
	struct FPointOfInterestCompanionBehavior           PointCompanionBehavior;                                    // 0x0140(0x02B0) (Edit, BlueprintVisible, DisableEditOnTemplate)

};

// ScriptStruct ShooterGame.MissionWaypointInfo
// 0x0028
struct FMissionWaypointInfo
{
	bool                                               bWaypointActive;                                           // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_OZLM[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     WaypointDestination;                                       // 0x0004(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor)
	struct FString                                     WaypointTitle;                                             // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	struct FName                                       WaypointID;                                                // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.PrimalGameData.ConfigSupplyCrateItemsOverride
// 0x0038
struct FConfigSupplyCrateItemsOverride
{
	struct FString                                     SupplyCrateClassString;                                    // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	int                                                MinItemSets;                                               // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int                                                MaxItemSets;                                               // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int                                                NumItemSetsPower;                                          // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bSetsRandomWithoutReplacement;                             // 0x001C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_15U0[0x3];                                     // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FSupplyCrateItemSet>                 ItemSets;                                                  // 0x0020(0x0010) (Edit, ZeroConstructor)
	bool                                               bAppendItemSets;                                           // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bAppendPreventIncreasingMinMaxItemSets;                    // 0x0031(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_JI8A[0x6];                                     // 0x0032(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.VictoryCore.PenetrationTraceHit
// 0x0090
struct FPenetrationTraceHit
{
	struct FHitResult                                  Hit;                                                       // 0x0000(0x0088) (Edit)
	float                                              DistanceFromLastHit;                                       // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              TotalDistance;                                             // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.PaintItem
// 0x0020
struct FPaintItem
{
	class UPrimalInventoryComponent*                   InventoryComp;                                             // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FItemNetID                                  ItemId;                                                    // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      ColorCode;                                                 // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_2A2L[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              X;                                                         // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Y;                                                         // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_D9ZF[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.ShooterPlayerController.ReplicatePingData
// 0x0028
struct FReplicatePingData
{
	unsigned char                                      Rep_PingID;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_HRJE[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     Rep_PingedLocation;                                        // 0x0004(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	class UPrimitiveComponent*                         Rep_PingedComponent;                                       // 0x0010(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	uint32_t                                           Rep_PingedByPlayerID;                                      // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_4RKA[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AShooterCharacter*                           Rep_PingedByPlayerChar;                                    // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.PrimalCharacter.PrimalSnapshotPose
// 0x0040
struct FPrimalSnapshotPose
{
	struct FString                                     Name;                                                      // 0x0000(0x0010) (Edit, ZeroConstructor)
	class UAnimSequence*                               Sequence;                                                  // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Time;                                                      // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Pedestal;                                                  // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_N50D[0x3];                                     // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     PedestalBone;                                              // 0x0020(0x0010) (Edit, ZeroConstructor)
	struct FVector                                     RootOffset;                                                // 0x0030(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_WTSQ[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.HitMarkerSettings
// 0x0028
struct FHitMarkerSettings
{
	unsigned char                                      bIsVisible : 1;                                            // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bPlayHitSound : 1;                                         // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      UnknownData_1SFX[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                Color;                                                     // 0x0004(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              DrawDuration;                                              // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   Scale;                                                     // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class USoundBase*                                  HitSound;                                                  // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.BiomeZoneVolumeEffectUtility.BiomeZoneVolumeEffect
// 0x0048
struct FBiomeZoneVolumeEffect
{
	TEnumAsByte<ShooterGame_EBiomeZone>                BiomeZone;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_T35T[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UParticleSystem*                             ParticleSystem;                                            // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FDecalData                                  DecalData;                                                 // 0x0010(0x0020) (Edit)
	unsigned char                                      bIsImpactEffect : 1;                                       // 0x0030(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bIsNonImpactEffect : 1;                                    // 0x0030(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bIsUnderwaterEffect : 1;                                   // 0x0030(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bDecalUniformSize : 1;                                     // 0x0030(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      UnknownData_Q5PR[0x3];                                     // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Weight;                                                    // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              MinSpawnDistance;                                          // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              MaxSpawnDistance;                                          // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              ScaleAtMinDistance;                                        // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              ScaleAtMaxDistance;                                        // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.ObjectInfo
// 0x0030
struct FObjectInfo
{
	class UObject*                                     Asset;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UClass*                                      ActorToSpawn;                                              // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              HeightOffset;                                              // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              Radius;                                                    // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              MinimumProbability;                                        // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              MinimumScale;                                              // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              MaximumScale;                                              // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bAlignToGroundNormal : 1;                                  // 0x0024(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bRandomYaw : 1;                                            // 0x0024(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bScaleByFoliageSettings : 1;                               // 0x0024(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Y6IX[0xB];                                     // 0x0025(0x000B) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.ObjectListItem
// 0x0038
struct FObjectListItem
{
	struct FObjectInfo                                 ObjectInfo;                                                // 0x0000(0x0030) (Edit, BlueprintVisible)
	float                                              Probability;                                               // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_49HE[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.PrimalBuff_Companion.CompanionEventSegmentData
// 0x00D8
struct FCompanionEventSegmentData
{
	float                                              SegmentDuration;                                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_MR0D[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FCompanionReactionData                      SegmentCompanionReaction;                                  // 0x0008(0x00A0) (Edit, BlueprintVisible, DisableEditOnTemplate)
	unsigned char                                      bMoveCompanionToLocation : 1;                              // 0x00A8(0x0001) BIT_FIELD (Edit, BlueprintVisible, DisableEditOnTemplate, NoDestructor)
	unsigned char                                      bMakeCompanionLookAtSomething : 1;                         // 0x00A8(0x0001) BIT_FIELD (Edit, BlueprintVisible, DisableEditOnTemplate, NoDestructor)
	unsigned char                                      UnknownData_WWAZ[0x3];                                     // 0x00A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     MoveCompanionToLocationOffset;                             // 0x00AC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor)
	class AActor*                                      MakeCompanionLookAtActor;                                  // 0x00B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor)
	struct FVector                                     MakeCompanionLookAtLocation;                               // 0x00C0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor)
	float                                              CompanionLocationInterpSpeed;                              // 0x00CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor)
	float                                              CompanionRotationInterpSpeed;                              // 0x00D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_TK5V[0x4];                                     // 0x00D4(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.PrimalBuff_Companion.CompanionEventData
// 0x0050
struct FCompanionEventData
{
	unsigned char                                      EventType;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_VFHT[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     EventTitle;                                                // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate)
	TArray<struct FCompanionEventSegmentData>          EventSegmentArray;                                         // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	float                                              EventTotalDuration;                                        // 0x0028(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_6ODP[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	double                                             EventStartTime;                                            // 0x0030(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	int                                                CurrentSegmentIndex;                                       // 0x0038(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_P8W1[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	double                                             LastSegmentStartTime;                                      // 0x0040(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	double                                             EventEndTime;                                              // 0x0048(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.PrimalDinoCharacter.DinoAttackInfo
// 0x0130
struct FDinoAttackInfo
{
	struct FName                                       AttackName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              AttackWeight;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              AttackRange;                                               // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              MinAttackRange;                                            // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              ActivateAttackRange;                                       // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              AttackInterval;                                            // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      bHighQualityAttack : 1;                                    // 0x001C(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bSkipUntamed : 1;                                          // 0x001C(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bSkipTamed : 1;                                            // 0x001C(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bOnlyOnWildDinos : 1;                                      // 0x001C(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bPreventWhenEncumbered : 1;                                // 0x001C(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bRidingOnlyAllowOnGround : 1;                              // 0x001C(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bRidingOnlyAllowWhileFlying : 1;                           // 0x001C(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bOnlyUseWithPlayersOrRiders : 1;                           // 0x001C(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bOnlyUseWithPlayers : 1;                                   // 0x001D(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bPreventWhenSwimming : 1;                                  // 0x001D(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bPreventWhenInsufficientStamina : 1;                       // 0x001D(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bSkipOnFlyers : 1;                                         // 0x001D(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bSkipAI : 1;                                               // 0x001D(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bPreventOnFemale : 1;                                      // 0x001D(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bPreventOnMale : 1;                                        // 0x001D(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bPreventWhenDinoCarrying : 1;                              // 0x001D(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bUseBlueprintCanRiderAttack : 1;                           // 0x001E(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bRequiresWalking : 1;                                      // 0x001E(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bRequiresSwimming : 1;                                     // 0x001E(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      AttackStatusStarted : 1;                                   // 0x001E(0x0001) BIT_FIELD (Transient, NoDestructor)
	unsigned char                                      bAttackStopsMovement : 1;                                  // 0x001E(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bAttackStopsMovementAllowFalling : 1;                      // 0x001E(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bAttackWithJump : 1;                                       // 0x001E(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bLocationBasedAttack : 1;                                  // 0x001E(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bDropCarriedCharacter : 1;                                 // 0x001F(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bCancelAndDropIfCarriedCharacter : 1;                      // 0x001F(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bPreventAttackWhileRunning : 1;                            // 0x001F(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      ForceUpdateInRange : 1;                                    // 0x001F(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      ForceUpdateMeshSelf : 1;                                   // 0x001F(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bUseSecondaryAnimationInAir : 1;                           // 0x001F(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bUseBlueprintCanAttack : 1;                                // 0x001F(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bUseBlueprintAdjustOutputDamage : 1;                       // 0x001F(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bDisableRunningWhenAttacking : 1;                          // 0x0020(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bKeepExecutingWhenAcquiringTarget : 1;                     // 0x0020(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bPreventWithRider : 1;                                     // 0x0020(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bAIForceAttackDotProductCheck : 1;                         // 0x0020(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bInstantlyHarvestCorpse : 1;                               // 0x0020(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bAddPawnVelocityToProjectile : 1;                          // 0x0020(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bAttackStopsRotation : 1;                                  // 0x0020(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bTamedAISpecialAttack : 1;                                 // 0x0020(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bPreventWhenCarryingExplosive : 1;                         // 0x0021(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bAllowWhenAnimationPreventsInput : 1;                      // 0x0021(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bRequireLineOfSight : 1;                                   // 0x0021(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bUseBPOverrideGetAttackAnimationIndex : 1;                 // 0x0021(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bUseSecondaryAnimationWhenSwimming : 1;                    // 0x0021(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bUseTertiaryAnimationWhenSwimming : 1;                     // 0x0021(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bHighQualityAttackOnlyPlayerOrTamed : 1;                   // 0x0021(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bMeleeTraceForHitBlockers : 1;                             // 0x0021(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bMeleeTraceForHitBlockersAddHeadsocket : 1;                // 0x0022(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      UnknownData_ZR8V[0x5];                                     // 0x0023(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<int>                                        ChildStateIndexes;                                         // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              AttackWithJumpChance;                                      // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_3RYK[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	double                                             LastAttackTime;                                            // 0x0040(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	double                                             RiderLastAttackTime;                                       // 0x0048(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	float                                              AttackSelectionExpirationTime;                             // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_E1EQ[0x4];                                     // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	double                                             AttackSelectionTime;                                       // 0x0058(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	float                                              AttackRotationRangeDegrees;                                // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              AttackRotationGroundSpeedMultiplier;                       // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                                    AttackRotationRate;                                        // 0x0068(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_8W5U[0x4];                                     // 0x0074(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               MeleeSwingSockets;                                         // 0x0078(0x0010) (Edit, ZeroConstructor)
	struct FName                                       RangedSocket;                                              // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                MeleeDamageAmount;                                         // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              MeleeDamageImpulse;                                        // 0x0094(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              MeleeSwingRadius;                                          // 0x0098(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_TS9F[0x4];                                     // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      MeleeDamageType;                                           // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              AttackOffset;                                              // 0x00A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              StaminaCost;                                               // 0x00AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              RiderAttackInterval;                                       // 0x00B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              DotProductCheckMin;                                        // 0x00B4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              DotProductCheckMax;                                        // 0x00B8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_INX5[0x4];                                     // 0x00BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UAnimMontage*>                        AttackAnimations;                                          // 0x00C0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      AttackAnimationWeights;                                    // 0x00D0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      AttackAnimationsTimeFromEndToConsiderFinished;             // 0x00E0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      ProjectileClass;                                           // 0x00F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UClass*                                      AttackStateTypeClass;                                      // 0x00F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              AttackRunningSpeedModifier;                                // 0x0100(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              SwimmingAttackRunningSpeedModifier;                        // 0x0104(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              SetAttackTargetTime;                                       // 0x0108(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_VBY1[0x4];                                     // 0x010C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPrimalAIState*                              AttackStateType;                                           // 0x0110(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	TArray<struct FVector>                             LastSocketPositions;                                       // 0x0118(0x0010) (ZeroConstructor, Transient)
	double                                             LastProjectileSpawnTime;                                   // 0x0128(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.TerrainComponent.TerrainInfo
// 0x0058
struct FTerrainInfo
{
	class AInstancedFoliageActor*                      FoliageActor;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FInstancedFoligeData>                InstancedFoligeData;                                       // 0x0008(0x0010) (ZeroConstructor, ContainsInstancedReference)
	uint16_t                                           PGPropertiesBufferSize;                                    // 0x0018(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_XSQN[0x6];                                     // 0x001A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<unsigned char>                              PGPropertiesBuffer;                                        // 0x0020(0x0010) (ZeroConstructor)
	int                                                Version;                                                   // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_OROL[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<float>                                      FromFloatCacheInputs;                                      // 0x0038(0x0010) (ZeroConstructor)
	TArray<int>                                        FromFloatCacheRawOutputs;                                  // 0x0048(0x0010) (ZeroConstructor)

};

// ScriptStruct ShooterGame.PrimalGameData.ItemCraftingCostOverride
// 0x0018
struct FItemCraftingCostOverride
{
	class UClass*                                      ItemClass;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<struct FCraftingResourceRequirement>        BaseCraftingResourceRequirements;                          // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

};

// ScriptStruct ShooterGame.TerrainGenerator.BiomeMiniMapColor
// 0x0014
struct FBiomeMiniMapColor
{
	float                                              Height;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Color;                                                     // 0x0004(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.TerrainGenerator.BiomeMiniMap
// 0x0018
struct FBiomeMiniMap
{
	class UFloatMap*                                   Map;                                                       // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FBiomeMiniMapColor>                  HeightsColors;                                             // 0x0008(0x0010) (ZeroConstructor)

};

// ScriptStruct ShooterGame.PrimalHarvestingComponent.DamageHarvestingEntry
// 0x0028
struct FDamageHarvestingEntry
{
	float                                              DamageMultiplier;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              HarvestQuantityMultiplier;                                 // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              DamageHarvestAdditionalEffectiveness;                      // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              DamageDurabilityConsumptionMultiplier;                     // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      bAllowUnderwaterHarvesting : 1;                            // 0x0010(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      UnknownData_3E36[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      DamageTypeParent;                                          // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UClass*                                      HarvestDamageFXOverride;                                   // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.PrimalHarvestingComponent.HarvestResourceEntry
// 0x0078
struct FHarvestResourceEntry
{
	int                                                OverrideQuantityMax;                                       // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int                                                OverrideQuantityMin;                                       // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              OverrideQuantityRandomPower;                               // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              EntryWeight;                                               // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              EffectivenessQuantityMultiplier;                           // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              EffectivenessQualityMultiplier;                            // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UClass*                                      ResourceItem;                                              // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              QualityMin;                                                // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              QualityMax;                                                // 0x0024(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              XPGainMax;                                                 // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              XPGainMin;                                                 // 0x002C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<class UClass*>                              DamageTypeEntryValuesOverrides;                            // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      DamageTypeEntryWeightOverrides;                            // 0x0040(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      DamageTypeEntryMinQuantityOverrides;                       // 0x0050(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      DamageTypeEntryMaxQuantityOverrides;                       // 0x0060(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      bScaleWithDinoBabyAge : 1;                                 // 0x0070(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      UnknownData_PRN3[0x7];                                     // 0x0071(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.ShooterDamageType.OverrideDamageHarvestingEntry
// 0x0048
struct FOverrideDamageHarvestingEntry
{
	TArray<class UClass*>                              ForHarvestingComponents;                                   // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FDamageHarvestingEntry                      HarvestEntryOverride;                                      // 0x0010(0x0028) (Edit, DisableEditOnInstance)
	TArray<struct FHarvestResourceEntry>               HarvestResourceEntriesOverride;                            // 0x0038(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

};

// ScriptStruct ShooterGame.DataListEntryButton_PrimalFolder.PrimalFolderIcons
// 0x0020
struct FPrimalFolderIcons
{
	class UTexture2D*                                  NormalFolder;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UTexture2D*                                  CustomFolder;                                              // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UTexture2D*                                  Back;                                                      // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FColor                                      TextColor;                                                 // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_YXW1[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.DataListEntryButton.DataListEntryButtonBorderColors
// 0x0010
struct FDataListEntryButtonBorderColors
{
	struct FColor                                      Normal;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FColor                                      Hovered;                                                   // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FColor                                      Pressed;                                                   // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FColor                                      Disabled;                                                  // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.BattleGameState.PlayerDeathNotification
// 0x0088
struct FPlayerDeathNotification
{
	struct FString                                     PlayerDeathStringEnemy;                                    // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     PlayerDeathStringAlly;                                     // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     PlayerDeathStringYou;                                      // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     DeathReason;                                               // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FString>                             DeadPlayerNames;                                           // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bIsTribeDeath;                                             // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_N7FJ[0x7];                                     // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     DeathTribeName;                                            // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                TargetingTeam;                                             // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_O5MX[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int64_t                                            LinkedPlayerID;                                            // 0x0070(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FPrimalPlayerCharacterConfigStructReplicated> PlayersData;                                               // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

};

// ScriptStruct ShooterGame.DamageVolumeBase.DamageNegatingItem
// 0x0010
struct FDamageNegatingItem
{
	class UClass*                                      ItemSubclass;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              NegationFactor;                                            // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_UJJQ[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.FlockingBehavior.Boid
// 0x0054
struct FBoid
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                                    Rotation;                                                  // 0x000C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Velocity;                                                  // 0x0018(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Acceleration;                                              // 0x0024(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              MaxSpeed;                                                  // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              MaxForce;                                                  // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              TurnRate;                                                  // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      bUseTargeting : 1;                                         // 0x003C(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bHasReachedTarget : 1;                                     // 0x003C(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor)
	unsigned char                                      bIsAlive : 1;                                              // 0x003C(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      UnknownData_7K0A[0x3];                                     // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SpiralTime;                                                // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor)
	struct FVector                                     TargetLocation;                                            // 0x0044(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<ShooterGame_EBoidType>                 Type;                                                      // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_KNR5[0x3];                                     // 0x0051(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.FlockingBehavior.AvoidanceArea
// 0x0070
struct FAvoidanceArea
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                                    Rotation;                                                  // 0x000C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_500G[0x8];                                     // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct UObject_FTransform                          Transform;                                                 // 0x0020(0x0030) (Edit, IsPlainOldData, NoDestructor)
	struct FVector                                     BoxExtents;                                                // 0x0050(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              SphereRadius;                                              // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	double                                             CreationTime;                                              // 0x0060(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor)
	unsigned char                                      bBlockBox : 1;                                             // 0x0068(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bBlockSphere : 1;                                          // 0x0068(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bIsDynamic : 1;                                            // 0x0068(0x0001) BIT_FIELD (Edit, EditConst, NoDestructor)
	unsigned char                                      UnknownData_E9QS[0x7];                                     // 0x0069(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.FlockingBehavior.BoidBehavior
// 0x0040
struct FBoidBehavior
{
	TArray<struct FAvoidanceArea>                      AvoidanceAreas;                                            // 0x0000(0x0010) (Edit, ZeroConstructor)
	float                                              DesiredSeparation;                                         // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              NeighborDist;                                              // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              SeparationMultiplier;                                      // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              AlignmentMultiplier;                                       // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              CohesionMultiplier;                                        // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              AvoidanceMultiplier;                                       // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              TargetingMultiplier;                                       // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              MaxDistanceToLeaders;                                      // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              MaxSpeedMultiplier;                                        // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              MaxForceMultiplier;                                        // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bUseBoundsCulling;                                         // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ORDM[0x3];                                     // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              BoundsCullingMultiplier;                                   // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.FlockingBehavior.FlockPersistentData
// 0x0038
struct FFlockPersistentData
{
	float                                              AvoidanceAreaDecayRate;                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              AvoidanceTraceInterval;                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              AvoidanceTraceInferredBoxSize;                             // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              AvoidanceTraceInferredSphereRadius;                        // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              AvoidanceTraceForwardDistance;                             // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              AvoidanceTraceDownDistance;                                // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	double                                             LastAvoidanceTraceTime;                                    // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                MaxNumAvoidanceAreas;                                      // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_JD7Y[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FAvoidanceArea>                      DynamicAvoidanceAreas;                                     // 0x0028(0x0010) (Edit, ZeroConstructor, EditConst)

};

// ScriptStruct ShooterGame.HordeCrateManager.HordeCrateEvent
// 0x0020
struct FHordeCrateEvent
{
	double                                             EventStartTime;                                            // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TWeakObjectPtr<class AActor>                       HordeSpawnNetwork;                                         // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	TWeakObjectPtr<class AActor>                       HordeModeCrate;                                            // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bHasBeenInitiated;                                         // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      EventType;                                                 // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_DPA9[0x6];                                     // 0x001A(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.LeaderboardDisplayRow
// 0x0020
struct FLeaderboardDisplayRow
{
	class UTexture2D*                                  RowIcon;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FString>                             Columns;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData_DZY9[0x8];                                     // 0x0018(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.MissionMetaTagInfo.MetaTagIDInfo
// 0x000C
struct FMetaTagIDInfo
{
	int                                                MetaTagEnumIndex;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FName                                       MetaTagDisplayName;                                        // 0x0004(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.PrimalGameData.DamageTypeAdjuster
// 0x0010
struct FDamageTypeAdjuster
{
	class UClass*                                      DamageTypeClass;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              DamageMultiplier;                                          // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      bIgnoreMultiplierIfWildDinoAttacker : 1;                   // 0x000C(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bIgnoreMultiplierIfTamedDinoAttacker : 1;                  // 0x000C(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bOnlyUseMultiplierIfWildDinoAttacker : 1;                  // 0x000C(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bOnlyUseMultiplierIfTamedDinoAttacker : 1;                 // 0x000C(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bOnlyUseMultiplierIfTamed : 1;                             // 0x000C(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      UnknownData_GQY4[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.BoneDamageAdjuster
// 0x000C
struct FBoneDamageAdjuster
{
	struct FName                                       BoneName;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              DamageMultiplier;                                          // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.PrimalStructure.PlacementData
// 0x0060
struct FPlacementData
{
	struct FVector                                     AdjustedLocation;                                          // 0x0000(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	struct FRotator                                    AdjustedRotation;                                          // 0x000C(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	bool                                               bSnapped;                                                  // 0x0018(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	bool                                               bDisableEncroachmentCheck;                                 // 0x0019(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_BYHQ[0x2];                                     // 0x001A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MySnapToIndex;                                             // 0x001C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	int                                                TheirSnapToIndex;                                          // 0x0020(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_V2B3[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      FloorHitActor;                                             // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	class APrimalStructure*                            ParentStructure;                                           // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	class APrimalStructure*                            ForcePlacedOnFloorParentStructure;                         // 0x0038(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	class APrimalStructure*                            ReplacesStructure;                                         // 0x0040(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	class APawn*                                       AttachToPawn;                                              // 0x0048(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	struct FName                                       AttachToBone;                                              // 0x0050(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	class APrimalDinoCharacter*                        DinoCharacter;                                             // 0x0058(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.PrimalStructureItemContainer.ItemToDisplayInStructureTooltip
// 0x0020
struct FItemToDisplayInStructureTooltip
{
	class UClass*                                      PrimalItem;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	int                                                Quantity;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_88CZ[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ModuleGroupHeader;                                         // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient)

};

// ScriptStruct ShooterGame.MissionType.MissionPhaseData
// 0x0004
struct FMissionPhaseData
{
	unsigned char                                      bPhaseCompleted : 1;                                       // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      UnknownData_AJJT[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.MissionType.MissionWorldBuffData
// 0x000C
struct FMissionWorldBuffData
{
	struct FName                                       WorldBuffIdentifier;                                       // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                StacksToGive;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.MissionType.TaggedString
// 0x0018
struct FTaggedString
{
	struct FName                                       Tag;                                                       // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     String;                                                    // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

};

// ScriptStruct ShooterGame.MissionType.CharacterAndControllerPair
// 0x0010
struct FCharacterAndControllerPair
{
	class AShooterCharacter*                           Character;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AShooterPlayerController*                    Controller;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.MissionType.RacePlayerData
// 0x0038
struct FRacePlayerData
{
	class AShooterPlayerController*                    Controller;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AShooterCharacter*                           Character;                                                 // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                TargetCheckpoint;                                          // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_V5UV[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<bool>                                       CheckpointsHit;                                            // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      CheckpointTimes;                                           // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

};

// ScriptStruct ShooterGame.NewMissionModuleBase.Struct_MissionModule_Travel
// 0x0038
struct FStruct_MissionModule_Travel
{
	struct FString                                     RequirementsTitle;                                         // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       RequirementsMessage;                                       // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              DelayAfterModule;                                          // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              DelayBeforeModule;                                         // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FName                                       TriggerKeyOfPointToGoTo;                                   // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              DistanceFromPointToHideIcon;                               // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FName                                       NavPointLabel;                                             // 0x002C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ZMMB[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.HUDElement
// 0x0150
struct FHUDElement
{
	TEnumAsByte<ShooterGame_EHUDElementType>           Type;                                                      // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_N4OB[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bIsVisible : 1;                                            // 0x0004(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bIsEditorOnly : 1;                                         // 0x0004(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bRespectPlayerUIScaleSetting : 1;                          // 0x0004(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bTitleIsExtendedInfo : 1;                                  // 0x0004(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bLabelIsExtendedInfo : 1;                                  // 0x0004(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      UnknownData_7E5C[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Title;                                                     // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TEnumAsByte<Slate_ETextJustify>                    TextAlignment_Title;                                       // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_EJ24[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Label;                                                     // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TEnumAsByte<Slate_ETextJustify>                    TextAlignment_Label;                                       // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<ShooterGame_EHUDElementHorizontalAlignment> TextContainerHorizontalAlignment;                          // 0x0031(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<ShooterGame_EHUDElementVerticalAlignment> TextContainerVerticalAlignment;                            // 0x0032(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_IBIE[0x1];                                     // 0x0033(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ZOrder;                                                    // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Progress;                                                  // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                TextColor;                                                 // 0x003C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              TextScale;                                                 // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FMargin                                     TextPadding;                                               // 0x0050(0x0010) (Edit, BlueprintVisible)
	struct FLinearColor                                BackgroundImageColor;                                      // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                ProgressColor;                                             // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Slate_EProgressBarFillType>            ProgressBarFillType;                                       // 0x0080(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<ShooterGame_EHUDElementAnchorMode>     AnchorMode;                                                // 0x0081(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_IVR5[0x2];                                     // 0x0082(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnchors                                    Anchor;                                                    // 0x0084(0x0010) (Edit, BlueprintVisible)
	struct FVector2D                                   Location;                                                  // 0x0094(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      bOverrideLocationForUIScaling : 1;                         // 0x009C(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      UnknownData_DFJU[0x3];                                     // 0x009D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   LocationAtMinScale;                                        // 0x00A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   LocationAtDefaultScale;                                    // 0x00A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   LocationAtMaxScale;                                        // 0x00B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   Size;                                                      // 0x00B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   Scale;                                                     // 0x00C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UTexture2D*                                  BackgroundImage;                                           // 0x00C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UTexture2D*                                  ProgressBarFillImage;                                      // 0x00D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FMargin                                     ProgressBarPadding;                                        // 0x00D8(0x0010) (Edit, BlueprintVisible)
	struct FVector2D                                   ProgressBarScale;                                          // 0x00E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UTexture2D*                                  Icon;                                                      // 0x00F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   IconSize;                                                  // 0x00F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   IconScale;                                                 // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                IconColor;                                                 // 0x0108(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FMargin                                     IconPadding;                                               // 0x0118(0x0010) (Edit, BlueprintVisible)
	float                                              IconRotation;                                              // 0x0128(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FMargin                                     ProgressBarFillImageMargin;                                // 0x012C(0x0010) (Edit, BlueprintVisible)
	struct FMargin                                     ProgressBarBackgroundImageMargin;                          // 0x013C(0x0010) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData_6LS8[0x4];                                     // 0x014C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.NPCZoneManager.LinkedZoneSpawnVolumeEntry
// 0x0030
struct FLinkedZoneSpawnVolumeEntry
{
	class ANPCZoneSpawnVolume*                         LinkedZoneSpawnVolume;                                     // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor)
	TArray<class AActor*>                              ZoneSpawnVolumeFloors;                                     // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate)
	TArray<struct FName>                               ZoneSpawnVolumeFloorTags;                                  // 0x0018(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate)
	float                                              EntryWeight;                                               // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_32UI[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.NPCZoneVolume.HibernationCountInfo
// 0x0010
struct FHibernationCountInfo
{
	class UClass*                                      ClassType;                                                 // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
	int                                                Count;                                                     // 0x0008(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_0HV5[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.DamagePrimalCharacterStatusValueModifier
// 0x0030
struct FDamagePrimalCharacterStatusValueModifier
{
	TEnumAsByte<ShooterGame_EPrimalCharacterStatusValue> ValueType;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_KJ0I[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bSpeedToAddInSeconds : 1;                                  // 0x0004(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bContinueOnUnchangedValue : 1;                             // 0x0004(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bIgnorePawnDamageAdjusters : 1;                            // 0x0004(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bResetExistingModifierDescriptionIndex : 1;                // 0x0004(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bSetValue : 1;                                             // 0x0004(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bSetAdditionalValue : 1;                                   // 0x0004(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      UnknownData_WJ4R[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LimitExistingModifierDescriptionToMaxAmount;               // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int                                                UseAbsoluteDamageAmount;                                   // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              DamageMultiplierAmountToAdd;                               // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              SpeedToAdd;                                                // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int                                                StatusValueModifierDescriptionIndex;                       // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      bUsePercentualDamage : 1;                                  // 0x001C(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      bMakeUntameable : 1;                                       // 0x001C(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      UnknownData_YCJP[0x3];                                     // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PercentualDamage;                                          // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_0AAG[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      ScaleValueByCharacterDamageType;                           // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.PrimalBuff.MaxStatScaler
// 0x000C
struct FMaxStatScaler
{
	TEnumAsByte<ShooterGame_EPrimalCharacterStatusValue> LevelUpValueType;                                          // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_NU1F[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TargetValue;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               TargetValueIsPercent;                                      // 0x0008(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_X8KQ[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.PrimalBuffPersistentData_MissionData.SerializedMissionData
// 0x0018
struct FSerializedMissionData
{
	struct FName                                       MissionTag;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     SerializedData;                                            // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

};

// ScriptStruct ShooterGame.PrimalCableComponent.CableParticle
// 0x001C
struct FCableParticle
{
	bool                                               bFree;                                                     // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_UVKX[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     Position;                                                  // 0x0004(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     OldPosition;                                               // 0x0010(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.PrimalCharacter.DefaultTextureParamOverride
// 0x0010
struct FDefaultTextureParamOverride
{
	struct FName                                       TextureParamName;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UTexture2D*                                  TextureValue;                                              // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.BlueprintVisualLogEntry
// 0x0030
struct FBlueprintVisualLogEntry
{
	struct FString                                     Category;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FString                                     Key;                                                       // 0x0010(0x0010) (Edit, ZeroConstructor)
	struct FString                                     Value;                                                     // 0x0020(0x0010) (Edit, ZeroConstructor)

};

// ScriptStruct ShooterGame.PrimalDinoCharacter.HibernationZoneInfo
// 0x0010
struct FHibernationZoneInfo
{
	class ANPCZoneVolume*                              Volume;                                                    // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
	float                                              Weight;                                                    // 0x0008(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_65LZ[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.PrimalDinoCharacter.DinoBaseLevelWeightEntry
// 0x000C
struct FDinoBaseLevelWeightEntry
{
	float                                              EntryWeight;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              BaseLevelMinRange;                                         // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              BaseLevelMaxRange;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.WeightedObjectList
// 0x0020
struct FWeightedObjectList
{
	TArray<float>                                      Weights;                                                   // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UObject*>                             AssociatedObjects;                                         // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

};

// ScriptStruct ShooterGame.StatValuePair
// 0x0008
struct FStatValuePair
{
	TEnumAsByte<ShooterGame_EPrimalCharacterStatusValue> Stat;                                                      // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_4DA1[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Value;                                                     // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.PrimalDinoCharacter.DinoExtraDefaultItemList
// 0x0018
struct FDinoExtraDefaultItemList
{
	int                                                MinimumDinoLevel;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              ChanceToGive;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<class UClass*>                              DefaultItemsToGive;                                        // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

};

// ScriptStruct ShooterGame.PrimalDinoCharacter.ARKDinoData
// 0x0040
struct FARKDinoData
{
	class UClass*                                      DinoClass;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<unsigned char>                              DinoData;                                                  // 0x0008(0x0010) (ZeroConstructor)
	struct FString                                     DinoNameInMap;                                             // 0x0018(0x0010) (ZeroConstructor)
	struct FString                                     DinoName;                                                  // 0x0028(0x0010) (ZeroConstructor)
	bool                                               bNetInfoFromClient;                                        // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor)
	unsigned char                                      UnknownData_H7KK[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.ShooterCharacter.PlayerStatusStateCharacterSound
// 0x0010
struct FPlayerStatusStateCharacterSound
{
	TEnumAsByte<ShooterGame_EPrimalCharacterStatusState> StateType;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_4WGU[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundCue*                                   SoundToPlay;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.ShooterCharacter.ShooterCharacterPostUpdateTickFunction
// 0x0008 (0x0050 - 0x0048)
struct FShooterCharacterPostUpdateTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData_Z6SQ[0x8];                                     // 0x0048(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.ShooterPlayerController.TransponderInfo
// 0x0028
struct FTransponderInfo
{
	struct FString                                     TransName;                                                 // 0x0000(0x0010) (ZeroConstructor)
	struct FVector                                     TransLocation;                                             // 0x0010(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Frequency;                                                 // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FColor                                      DrawingColor;                                              // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_O4ZH[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.UI_Spawn.BoneModifierSlider
// 0x0028
struct FBoneModifierSlider
{
	struct FName                                       SliderWidgetName;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<struct FBoneModifierRange>                  BoneModifierRanges;                                        // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TEnumAsByte<ShooterGame_EBoneModifierType>         BoneModifierType;                                          // 0x0018(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_MBZ7[0xF];                                     // 0x0019(0x000F) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.UI_Spawn.CharacterPreset
// 0x0020
struct FCharacterPreset
{
	float                                              BodyColorSliderValue;                                      // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              HairColorSliderValue;                                      // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              EyeColorSliderValue;                                       // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_9GDA[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<float>                                      BoneModifierSliderValues;                                  // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

};

// ScriptStruct ShooterGame.PrimalCharacterStatusComponent.PrimalCharacterStatusStateThresholds
// 0x0048
struct FPrimalCharacterStatusStateThresholds
{
	TArray<float>                                      HighThresholdStatusStateValues;                            // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<TEnumAsByte<ShooterGame_EPrimalCharacterStatusState>> HighThresholdStatusStateType;                              // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      LowThresholdStatusStateValues;                             // 0x0020(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<TEnumAsByte<ShooterGame_EPrimalCharacterStatusState>> LowThresholdStatusStateType;                               // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	bool                                               StatusStateThresholdValuesAbsolute;                        // 0x0040(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_57BU[0x7];                                     // 0x0041(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.PrimalClimbingSettings.ClimbingTypeSettings
// 0x001C
struct FClimbingTypeSettings
{
	unsigned char                                      bIsOneShot : 1;                                            // 0x0000(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      UnknownData_OZT8[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              WaitTime;                                                  // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              StaminaConsumption;                                        // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              ConsumeDurabilityMultiplier;                               // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              AttachMoveTraceDistance;                                   // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              AttachBackTraceDistance;                                   // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              AttachForwardTraceDistance;                                // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.PrimalClimbingSettings.ClimbingTransitionParams
// 0x0054
struct FClimbingTransitionParams
{
	float                                              LocationInterpSpeed;                                       // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              RotationInterpSpeed;                                       // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              OvershootDuration;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              OvershootCurveExp;                                         // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              OvershootCurveStartOffset;                                 // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              OvershootCurveDirectionBias;                               // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              OvershootCurveStartBias;                                   // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              OvershootCurveEndOffset;                                   // 0x001C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              OvershootCurveEndBias;                                     // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              CameraLocationInterpSpeed;                                 // 0x0024(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              CameraRotationInterpSpeed;                                 // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bCameraSwitch;                                             // 0x002C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_2IX2[0x3];                                     // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CameraTransitionDuration;                                  // 0x0030(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     CameraSwitchStrength;                                      // 0x0034(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              CameraSwitchLocationInterpSpeed;                           // 0x0040(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              CameraSwitchRotationInterpSpeed;                           // 0x0044(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                                    CameraSwitchOffset;                                        // 0x0048(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.PrimalColorSet.ColorSetDefinition
// 0x0060
struct FColorSetDefinition
{
	struct FString                                     RegionName;                                                // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               ColorEntryNames;                                           // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      RandomWeights;                                             // 0x0020(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      MinLevel;                                                  // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      MaxLevel;                                                  // 0x0040(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData_YQO1[0x10];                                    // 0x0050(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.PrimalDinoCharacter.DinoFoodEffectivenessMultipliers
// 0x0030
struct FDinoFoodEffectivenessMultipliers
{
	float                                              FoodEffectivenessMultiplier;                               // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              HealthEffectivenessMultiplier;                             // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              TorpidityEffectivenessMultiplier;                          // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              AffinityEffectivenessMultiplier;                           // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              AffinityOverride;                                          // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              StaminaEffectivenessMultiplier;                            // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int                                                FoodItemCategory;                                          // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_GLP6[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      FoodItemParent;                                            // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              UntamedFoodConsumptionPriority;                            // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_XJZW[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.PrimalBuff_MissionData.ClientMissionSubscriptionData
// 0x0030
struct FClientMissionSubscriptionData
{
	TAssetPtr<class UClass>                            MissionType;                                               // 0x0000(0x001C) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible)
	unsigned char                                      UnknownData_YEPI[0x4];                                     // 0x0000(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	TArray<struct FName>                               Keys;                                                      // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

};

// ScriptStruct ShooterGame.PrimalBuff_MissionData.ClientMissionEligibility
// 0x0038
struct FClientMissionEligibility
{
	unsigned char                                      bIsEligible : 1;                                           // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bCompleted : 1;                                            // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bOnGlobalCooldown : 1;                                     // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bOnPerPlayerCooldown : 1;                                  // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bMinLevelRequirement : 1;                                  // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      UnknownData_TXPU[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	double                                             LastUpdateNetworkTime;                                     // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	double                                             LastCompletedUtcTime;                                      // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              MissionMaxDurationSeconds;                                 // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ZK50[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	double                                             MissionStartNetworkTime;                                   // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     Reason;                                                    // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

};

// ScriptStruct ShooterGame.PrimalBuff_MissionData.MissionEligibilityData
// 0x0028
struct FMissionEligibilityData
{
	class UClass*                                      MissionType;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       IneligibleReasonType;                                      // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	double                                             LastCompletedUtcTime;                                      // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      bIsEligible : 1;                                           // 0x0018(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bCompleted : 1;                                            // 0x0018(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bOnGlobalCooldown : 1;                                     // 0x0018(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      bOnPerPlayerCooldown : 1;                                  // 0x0018(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      UnknownData_CY7C[0x3];                                     // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MissionMaxDurationSeconds;                                 // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	double                                             MissionStartNetworkTime;                                   // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.PrimalEngramEntry.EngramEntries
// 0x0010
struct FEngramEntries
{
	TArray<class UClass*>                              EngramEntries;                                             // 0x0000(0x0010) (Edit, ZeroConstructor)

};

// ScriptStruct ShooterGame.PrimalHarvestingComponent.ComponentAttachmentEntry
// 0x0020
struct FComponentAttachmentEntry
{
	class UClass*                                      ActorComponentClass;                                       // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     ComponentLocationOffset;                                   // 0x0008(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                                    ComponentRotationOffset;                                   // 0x0014(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.PrimalImageStyle
// 0x0090
struct FPrimalImageStyle
{
	struct FName                                       StyleName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FInlineTextImageStyle                       ImageStyle;                                                // 0x0008(0x0088) (Edit, DisableEditOnInstance)

};

// ScriptStruct ShooterGame.PrimalStructureSeating.SeatingSpot
// 0x001C
struct FSeatingSpot
{
	int                                                SeatNumber;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     LocationOffset;                                            // 0x0004(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                                    RotationOffset;                                            // 0x0010(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.UI_OptionsMenu.KeyBindingItem
// 0x0030
struct FKeyBindingItem
{
	unsigned char                                      bIsAxisMapping : 1;                                        // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      UnknownData_96FN[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       WidgetName;                                                // 0x0004(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_3MQ2[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ActionName;                                                // 0x0010(0x0010) (Edit, ZeroConstructor)
	float                                              Scale;                                                     // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_2MEF[0xC];                                     // 0x0024(0x000C) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.UI_HostSession.MapDescription
// 0x0020
struct FMapDescription
{
	class UTexture2D*                                  MapImage;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FString                                     MapDescription;                                            // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	int                                                MinAscensionLevelRequired;                                 // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_GV21[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.PrimalWorldModifier.SublevelOverrideGroup
// 0x0038
struct FSublevelOverrideGroup
{
	struct FString                                     ForMapName;                                                // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	bool                                               bUseSublevelOverrides;                                     // 0x0010(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_KLQ8[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FSublevelOverrideDefinition>         SublevelOverrides;                                         // 0x0018(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FLevelStaticMeshReskinDefinition>    StaticMeshReskins;                                         // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

};

// ScriptStruct ShooterGame.MissionType.TeleportedCharacter
// 0x0028
struct FTeleportedCharacter
{
	class APrimalCharacter*                            Character;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AController*                                 Controller;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     OriginalLocation;                                          // 0x0010(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                                    OriginalRotation;                                          // 0x001C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.PrimalBuff.PostProcessMaterialAdjuster
// 0x0048
struct FPostProcessMaterialAdjuster
{
	class UMaterialInterface*                          PostProcessParentMaterial;                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<struct FName>                               ScalarParameterNames;                                      // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      ScalarParameterValues;                                     // 0x0018(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               VectorParameterNames;                                      // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                             VectorParameterValues;                                     // 0x0038(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

};

// ScriptStruct ShooterGame.PrimalDinoCharacter.PrimalSaddleStructure
// 0x0028
struct FPrimalSaddleStructure
{
	struct FVector                                     DinoRelativeLocation;                                      // 0x0000(0x000C) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
	struct FRotator                                    DinoRelativeRotation;                                      // 0x000C(0x000C) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
	struct FName                                       BoneName;                                                  // 0x0018(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
	class APrimalStructure*                            MyStructure;                                               // 0x0020(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)

};

// ScriptStruct ShooterGame.PrimalDinoCharacter.DinoSaddleStruct
// 0x0020
struct FDinoSaddleStruct
{
	class USkeletalMeshComponent*                      Saddle;                                                    // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	class USkeletalMesh*                               SkeletalMesh;                                              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FItemNetID                                  ItemId;                                                    // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bJustRemoved;                                              // 0x0018(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_27NJ[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct ShooterGame.PrimalGameData.ConfigItemCraftingCostOverride
// 0x0020
struct FConfigItemCraftingCostOverride
{
	struct FString                                     ItemClassString;                                           // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FConfigCraftingResourceRequirement>  BaseCraftingResourceRequirements;                          // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

};

// ScriptStruct ShooterGame.PrimalGameData.ItemMaxItemQuantityOverride
// 0x0010
struct FItemMaxItemQuantityOverride
{
	class UClass*                                      ItemClass;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FMaxItemQuantityOverride                    Quantity;                                                  // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
