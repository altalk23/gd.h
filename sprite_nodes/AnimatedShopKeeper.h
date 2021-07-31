#ifndef __ANIMATEDSHOPKEEPER_H__
#define __ANIMATEDSHOPKEEPER_H__

#include <gd.h>

class CCAnimatedSprite;

typedef enum {
	kShopTypeNormal,
	kShopTypeSecret,
	kShopTypeCommunity
} ShopType;

class AnimatedShopKeeper : public CCAnimatedSprite {
public:
	float m_fUnknown1;
	float m_fUnknown2;
	bool m_bUnknown;
};

#endif
