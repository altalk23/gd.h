#ifndef __GAMEOBJECT_H__
#define __GAMEOBJECT_H__

#include <gd.h>


class CCSpritePlus;

// jesus fucking christ (painfully written by @hjfod)
enum GameObjectType {
	kGameObjectTypeSolid = 0,
	kGameObjectTypeHazard = 2,
	kGameObjectTypeInverseGravityPortal = 3,
	kGameObjectTypeNormalGravityPortal = 4,
	kGameObjectTypeShipPortal = 5,
	kGameObjectTypeCubePortal = 6,
	kGameObjectTypeDecoration = 7,
	kGameObjectTypeYellowJumpPad = 8,
	kGameObjectTypePinkJumpPad = 9,
	kGameObjectTypeGravityPad = 10,
	kGameObjectTypeYellowJumpRing = 11,
	kGameObjectTypePinkJumpRing = 12,
	kGameObjectTypeGravityRing = 13,
	kGameObjectTypeInverseMirrorPortal = 14,
	kGameObjectTypeNormalMirrorPortal = 15,
	kGameObjectTypeBallPortal = 16,
	kGameObjectTypeRegularSizePortal = 17,
	kGameObjectTypeMiniSizePortal = 18,
	kGameObjectTypeUfoPortal = 19,
	kGameObjectTypeModifier = 20,
	kGameObjectTypeSecretCoin = 22,
	kGameObjectTypeDualPortal = 23,
	kGameObjectTypeSoloPortal = 24,
	kGameObjectTypeSlope = 25,
	kGameObjectTypeWavePortal = 26,
	kGameObjectTypeRobotPortal = 27,
	kGameObjectTypeTeleportPortal = 28,
	kGameObjectTypeCollectible = 30,
	kGameObjectTypeUserCoin = 31,
	kGameObjectTypeDropRing = 32,
	kGameObjectTypeSpiderPortal = 33,
	kGameObjectTypeRedJumpPad = 34,
	kGameObjectTypeRedJumpRing = 35,
	kGameObjectTypeCustomRing = 36,
	kGameObjectTypeDashRing = 37,
	kGameObjectTypeGravityDashRing = 38,
	kGameObjectTypeCollisionObject = 39,
	kGameObjectTypeSpecial = 40,
};

class GJSpriteColor;
class ColorActionSprite;
class GJEffectManager;

class GameObject : public CCSpritePlus {
public:
	PAD(44);
	bool m_unk21C;
	bool m_bSomethingSawRelated; // 0x21D
	bool m_unk21E;
	PAD(13);
	cocos2d::CCPoint m_obStartPosOffset; //0x22C
	PAD(4);
	bool m_unk238;
	bool m_isFlippedX; //0x239
	bool m_isFlippedY; //0x23A
	PAD(1);
	cocos2d::CCPoint m_obBoxOffset; //0x23C
	bool m_isOriented; //0x244 idek what this is
	PAD(3);
	cocos2d::CCPoint m_unk248; // related to box offset
	PAD(4);
	bool m_unk254;
	PAD(11);
	cocos2d::CCAction* m_pMyAction; //0x260
	PAD(4);
	cocos2d::CCSize m_obObjectSize; //0x268
	bool m_unk270;
	bool m_unk271;
	bool m_unk272;
	PAD(1);
	cocos2d::CCParticleSystemQuad* m_pParticleSystem;
	std::string m_sEffectPlistName; //0x278
	PAD(32);
	bool m_unk2B0; // has custom scale or moved idfk
	PAD(7);
	cocos2d::CCRect m_objectRect2; //0x2B8
	bool m_bIsObjectRectDirty; //0x2C8
	bool m_bIsOrientedRectDirty; //0x2C9
	bool m_bHasBeenActivated; //0x2CA
	bool m_bHasBeenActivatedP2; //0x2CB
	PAD(16);
	bool m_bSawIsDisabled; // 0x2dc
	PAD(7);
	cocos2d::CCSprite* m_pDetailSprite; //0x2E4
	PAD(8);
	bool m_bIsRotatedSide; //0x2F0 for 90 and 270 degrees rotations
	PAD(3);
	float m_unk2F4;
	float m_unk2F8;
	int m_nUniqueID; //0x2FC
	GameObjectType m_nObjectType; //0x300
	int m_nSection; //0x304
	PAD(4);
	cocos2d::CCPoint m_obStartPosition; //0x30C
	std::string m_sTextureName; //0x314
	bool m_unk32C;
	bool m_unk32D;
	PAD(14);
	float m_unk33C;
	float m_unk340;
	PAD(16);
	bool m_bIsGlowDisabled; //0x354
	PAD(3);
	int m_nTargetColorID;	// 0x358 (for color triggers)
	float m_fScale; //0x35C
	int m_nObjectID; //0x360
	PAD(4);
	bool m_unk368;
	bool m_unk369;
	bool m_unk36A;
	bool m_bIsDontEnter; //0x36B
	bool m_bIsDontFade; //0x36C
	int m_nDefaultZOrder; // 0x370
	PAD(23);
	bool m_unk38C;
	bool m_unk38D;
	bool m_unk38E;
	PAD(1);
	float m_unk390;
	PAD(20);
	GJSpriteColor* m_pBaseColor; //0x3A8
	GJSpriteColor* m_pDetailColor; //0x3AC
	PAD(4);
	int m_nDefaultZLayer; // 0x03B4
	int m_nZLayer; //0x3B8
	int m_nGameZOrder; //0x3BC
	std::string m_unk3C0;
	bool m_unk3D8;
	bool m_unk3D9;
	bool m_bIsSelected; //0x3DA
	int m_nGlobalClickCounter; //0x3DC i have no idea what this is for
	PAD(12);
	float m_fMultiScaleMultiplier;
	bool m_bIsGroupParent; //0x3F0
	PAD(3);
	short* m_pGroups; //0x3F4
	short m_nGroupCount; //0x3F8
	PAD(18);
	int m_nEditorLayer; //0x40C
	int m_nEditorLayer2; //0x410
	int m_unk414;
	PAD(12);
	cocos2d::CCPoint m_obFirstPosition; //0x424 first position from when its placed in the editor
	PAD(28);
	bool m_bHighDetail; //0x448
	PAD(3);
	ColorActionSprite* m_pColorActionSprite1; //0x44C
	ColorActionSprite* m_pColorActionSprite2; //0x450
	GJEffectManager* m_pEffectManager; //0x454
	PAD(16);
};


#endif
