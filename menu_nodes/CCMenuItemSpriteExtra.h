#ifndef __CCMENUITEMSPRITEEXTRA_H__
#define __CCMENUITEMSPRITEEXTRA_H__

#include <gd.h>

enum MenuAnimationType {
	kMenuAnimationTypeScale	= 0,
	kMenuAnimationTypeMove 	= 1,
};

class CCMenuItemSpriteExtra : public cocos2d::CCMenuItemSprite {
public:
	float m_fScaleMultiplier;	// 0x118
	float m_fBaseScale;			// 0x11c
	PAD(0x3c)
	cocos2d::CCPoint m_obDestPosition;
	cocos2d::CCPoint m_obOffset;
	MenuAnimationType m_nAnimationType = kMenuAnimationTypeScale;
	cocos2d::CCPoint m_obStartPosition;
	PAD(0xc)
};


#endif
