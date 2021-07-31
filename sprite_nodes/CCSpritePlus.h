#ifndef __CCSPRITEPLUS_H__
#define __CCSPRITEPLUS_H__

#include <gd.h>

//credit to zmx (https://github.com/kyurime)
class CCSpritePlus : public cocos2d::CCSprite {
public:
	cocos2d::CCArray* m_pFollowers;
	CCSpritePlus* m_pFollowing;
	bool m_bHasFollowers;
	bool m_bScaleFollowers;
	bool m_bFlipFollowers;
};

#endif
