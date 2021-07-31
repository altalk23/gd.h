#ifndef __GARAGEPAGE_H__
#define __GARAGEPAGE_H__

#include <gd.h>

class GJGarageLayer;

class GaragePage : public cocos2d::CCLayer, ListButtonBarDelegate {
public:
    GJGarageLayer* m_pGarage;
    cocos2d::SEL_MenuHandler m_pHandler;
    cocos2d::CCSprite* m_pSelectSprite;
    CCMenuItemSpriteExtra* m_pUnkNode0x12c;
    IconType m_nType;
    int m_nUnknown;
    PAD(4)
};


#endif
