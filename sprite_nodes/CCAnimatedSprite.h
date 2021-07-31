#ifndef __CCANIMATEDSPRITE_H__
#define __CCANIMATEDSPRITE_H__

#include <gd.h>

class CCAnimatedSprite : public cocos2d::CCSprite {
public:
	std::string m_sUnknown1;
	std::string m_sUnknown2;
	PAD(20);
	std::string m_sUnknown3;
	PAD(4);
};

class AnimatedSpriteDelegate {
	virtual void animationFinished(const char*);
};

#endif
