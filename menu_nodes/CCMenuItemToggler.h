#ifndef __CCMENUITEMTOGGLER_H__
#define __CCMENUITEMTOGGLER_H__

#include <gd.h>

class CCMenuItemSpriteExtra;

class CCMenuItemToggler : public cocos2d::CCMenuItem {
public:
	CCMenuItemSpriteExtra* m_pOnButton;
	CCMenuItemSpriteExtra* m_pOffButton;
	bool m_bOn;
	bool m_bNotClickable;
};

#endif
