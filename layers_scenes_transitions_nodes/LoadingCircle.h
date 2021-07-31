#ifndef __LOADINGCIRCLE_H__
#define __LOADINGCIRCLE_H__

#include <gd.h>

class LoadingCircle : public cocos2d::CCLayerColor {
public:
	cocos2d::CCSprite* m_pSprite;
	cocos2d::CCLayer* m_pParentLayer;
	bool m_bFade;
};


#endif
