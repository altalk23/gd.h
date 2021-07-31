#ifndef __SIMPLEPLAYER_H__
#define __SIMPLEPLAYER_H__

#include <gd.h>

enum IconType;

class GJRobotSprite;
class GJSpiderSprite;

class SimplePlayer : public cocos2d::CCSprite {
public:
	cocos2d::CCSprite* m_pFirstLayer; // idk a good name for these, theyre not even layers
	cocos2d::CCSprite* m_pSecondLayer;
	cocos2d::CCSprite* m_pBirdDome; // the glass thingy on the ufo
	cocos2d::CCSprite* m_pOutlineSprite;
	cocos2d::CCSprite* m_pDetailSprite;
	GJRobotSprite* m_pRobotSprite;
	GJSpiderSprite* m_pSpiderSprite;
	PAD(4); // seems to be unused
	bool m_bHasGlowOutline;
};

#endif
