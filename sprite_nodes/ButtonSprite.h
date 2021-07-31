#ifndef __BUTTONSPRITE_H__
#define __BUTTONSPRITE_H__

#include <gd.h>


class ButtonSprite : public cocos2d::CCSprite {
public:
	PAD(48)
	cocos2d::CCPoint m_obSpritePosition;
};


#endif
