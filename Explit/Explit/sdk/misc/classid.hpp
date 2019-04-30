#pragma once
enum class ClassID : int
{
	CAI_BaseNPC = 0,
	CAK47 = 1,
	CBaseAnimating = 2,
	CBaseAnimatingOverlay = 3,
	CBaseAttributableItem = 4,
	CBaseButton = 5,
	CBaseCombatCharacter = 6,
	CBaseCombatWeapon = 7,
	CBaseCSGrenade = 8,
	CBaseCSGrenadeProjectile = 9,
	CBaseDoor = 10,
	CBaseEntity = 11,
	CBaseFlex = 12,
	CBaseGrenade = 13,
	CBaseParticleEntity = 14,
	CBasePlayer = 15,
	CBasePropDoor = 16,
	CBaseTeamObjectiveResource = 17,
	CBaseTempEntity = 18,
	CBaseToggle = 19,
	CBaseTrigger = 20,
	CBaseViewModel = 21,
	CBaseVPhysicsTrigger = 22,
	CBaseWeaponWorldModel = 23,
	CBeam = 24,
	CBeamSpotlight = 25,
	CBoneFollower = 26,
	CBRC4Target = 27,
	CBreachCharge = 28,
	CBreachChargeProjectile = 29,
	CBreakableProp = 30,
	CBreakableSurface = 31,
	CC4 = 32,
	CCascadeLight = 33,
	CChicken = 34,
	CColorCorrection = 35,
	CColorCorrectionVolume = 36,
	CCSGameRulesProxy = 37,
	CCSPlayer = 38,
	CCSPlayerResource = 39,
	CCSRagdoll = 40,
	CCSTeam = 41,
	CDangerZone = 42,
	CDangerZoneController = 43,
	CDEagle = 44,
	CDecoyGrenade = 45,
	CDecoyProjectile = 46,
	CDrone = 47,
	CDronegun = 48,
	CDynamicLight = 49,
	CDynamicProp = 50,
	CEconEntity = 51,
	CEconWearable = 52,
	CEmbers = 53,
	CEntityDissolve = 54,
	CEntityFlame = 55,
	CEntityFreezing = 56,
	CEntityParticleTrail = 57,
	CEnvAmbientLight = 58,
	CEnvDetailController = 59,
	CEnvDOFController = 60,
	CEnvGasCanister = 61,
	CEnvParticleScript = 62,
	CEnvProjectedTexture = 63,
	CEnvQuadraticBeam = 64,
	CEnvScreenEffect = 65,
	CEnvScreenOverlay = 66,
	CEnvTonemapController = 67,
	CEnvWind = 68,
	CFEPlayerDecal = 69,
	CFireCrackerBlast = 70,
	CFireSmoke = 71,
	CFireTrail = 72,
	CFish = 73,
	CFists = 74,
	CFlashbang = 75,
	CFogController = 76,
	CFootstepControl = 77,
	CFunc_Dust = 78,
	CFunc_LOD = 79,
	CFuncAreaPortalWindow = 80,
	CFuncBrush = 81,
	CFuncConveyor = 82,
	CFuncLadder = 83,
	CFuncMonitor = 84,
	CFuncMoveLinear = 85,
	CFuncOccluder = 86,
	CFuncReflectiveGlass = 87,
	CFuncRotating = 88,
	CFuncSmokeVolume = 89,
	CFuncTrackTrain = 90,
	CGameRulesProxy = 91,
	CGrassBurn = 92,
	CHandleTest = 93,
	CHEGrenade = 94,
	CHostage = 95,
	CHostageCarriableProp = 96,
	CIncendiaryGrenade = 97,
	CInferno = 98,
	CInfoLadderDismount = 99,
	CInfoMapRegion = 100,
	CInfoOverlayAccessor = 101,
	CItem_Healthshot = 102,
	CItemCash = 103,
	CItemDogtags = 104,
	CKnife = 105,
	CKnifeGG = 106,
	CLightGlow = 107,
	CMaterialModifyControl = 108,
	CMelee = 109,
	CMolotovGrenade = 110,
	CMolotovProjectile = 111,
	CMovieDisplay = 112,
	CParadropChopper = 113,
	CParticleFire = 114,
	CParticlePerformanceMonitor = 115,
	CParticleSystem = 116,
	CPhysBox = 117,
	CPhysBoxMultiplayer = 118,
	CPhysicsProp = 119,
	CPhysicsPropMultiplayer = 120,
	CPhysMagnet = 121,
	CPhysPropAmmoBox = 122,
	CPhysPropLootCrate = 123,
	CPhysPropRadarJammer = 124,
	CPhysPropWeaponUpgrade = 125,
	CPlantedC4 = 126,
	CPlasma = 127,
	CPlayerResource = 128,
	CPointCamera = 129,
	CPointCommentaryNode = 130,
	CPointWorldText = 131,
	CPoseController = 132,
	CPostProcessController = 133,
	CPrecipitation = 134,
	CPrecipitationBlocker = 135,
	CPredictedViewModel = 136,
	CProp_Hallucination = 137,
	CPropCounter = 138,
	CPropDoorRotating = 139,
	CPropJeep = 140,
	CPropVehicleDriveable = 141,
	CRagdollManager = 142,
	CRagdollProp = 143,
	CRagdollPropAttached = 144,
	CRopeKeyframe = 145,
	CSCAR17 = 146,
	CSceneEntity = 147,
	CSensorGrenade = 148,
	CSensorGrenadeProjectile = 149,
	CShadowControl = 150,
	CSlideshowDisplay = 151,
	CSmokeGrenade = 152,
	CSmokeGrenadeProjectile = 153,
	CSmokeStack = 154,
	CSnowball = 155,
	CSnowballPile = 156,
	CSnowballProjectile = 157,
	CSpatialEntity = 158,
	CSpotlightEnd = 159,
	CSprite = 160,
	CSpriteOriented = 161,
	CSpriteTrail = 162,
	CStatueProp = 163,
	CSteamJet = 164,
	CSun = 165,
	CSunlightShadowControl = 166,
	CSurvivalSpawnChopper = 167,
	CTablet = 168,
	CTeam = 169,
	CTeamplayRoundBasedRulesProxy = 170,
	CTEArmorRicochet = 171,
	CTEBaseBeam = 172,
	CTEBeamEntPoint = 173,
	CTEBeamEnts = 174,
	CTEBeamFollow = 175,
	CTEBeamLaser = 176,
	CTEBeamPoints = 177,
	CTEBeamRing = 178,
	CTEBeamRingPoint = 179,
	CTEBeamSpline = 180,
	CTEBloodSprite = 181,
	CTEBloodStream = 182,
	CTEBreakModel = 183,
	CTEBSPDecal = 184,
	CTEBubbles = 185,
	CTEBubbleTrail = 186,
	CTEClientProjectile = 187,
	CTEDecal = 188,
	CTEDust = 189,
	CTEDynamicLight = 190,
	CTEEffectDispatch = 191,
	CTEEnergySplash = 192,
	CTEExplosion = 193,
	CTEFireBullets = 194,
	CTEFizz = 195,
	CTEFootprintDecal = 196,
	CTEFoundryHelpers = 197,
	CTEGaussExplosion = 198,
	CTEGlowSprite = 199,
	CTEImpact = 200,
	CTEKillPlayerAttachments = 201,
	CTELargeFunnel = 202,
	CTEMetalSparks = 203,
	CTEMuzzleFlash = 204,
	CTEParticleSystem = 205,
	CTEPhysicsProp = 206,
	CTEPlantBomb = 207,
	CTEPlayerAnimEvent = 208,
	CTEPlayerDecal = 209,
	CTEProjectedDecal = 210,
	CTERadioIcon = 211,
	CTEShatterSurface = 212,
	CTEShowLine = 213,
	CTesla = 214,
	CTESmoke = 215,
	CTESparks = 216,
	CTESprite = 217,
	CTESpriteSpray = 218,
	CTest_ProxyToggle_Networkable = 219,
	CTestTraceline = 220,
	CTEWorldDecal = 221,
	CTriggerPlayerMovement = 222,
	CTriggerSoundOperator = 223,
	CVGuiScreen = 224,
	CVoteController = 225,
	CWaterBullet = 226,
	CWaterLODControl = 227,
	CWeaponAug = 228,
	CWeaponAWP = 229,
	CWeaponBaseItem = 230,
	CWeaponBizon = 231,
	CWeaponCSBase = 232,
	CWeaponCSBaseGun = 233,
	CWeaponCycler = 234,
	CWeaponElite = 235,
	CWeaponFamas = 236,
	CWeaponFiveSeven = 237,
	CWeaponG3SG1 = 238,
	CWeaponGalil = 239,
	CWeaponGalilAR = 240,
	CWeaponGlock = 241,
	CWeaponHKP2000 = 242,
	CWeaponM249 = 243,
	CWeaponM3 = 244,
	CWeaponM4A1 = 245,
	CWeaponMAC10 = 246,
	CWeaponMag7 = 247,
	CWeaponMP5Navy = 248,
	CWeaponMP7 = 249,
	CWeaponMP9 = 250,
	CWeaponNegev = 251,
	CWeaponNOVA = 252,
	CWeaponP228 = 253,
	CWeaponP250 = 254,
	CWeaponP90 = 255,
	CWeaponSawedoff = 256,
	CWeaponSCAR20 = 257,
	CWeaponScout = 258,
	CWeaponSG550 = 259,
	CWeaponSG552 = 260,
	CWeaponSG556 = 261,
	CWeaponSSG08 = 262,
	CWeaponTaser = 263,
	CWeaponTec9 = 264,
	CWeaponTMP = 265,
	CWeaponUMP45 = 266,
	CWeaponUSP = 267,
	CWeaponXM1014 = 268,
	CWorld = 269,
	CWorldVguiText = 270,
	DustTrail = 271,
	MovieExplosion = 272,
	ParticleSmokeGrenade = 273,
	RocketTrail = 274,
	SmokeTrail = 275,
	SporeExplosion = 276,
};