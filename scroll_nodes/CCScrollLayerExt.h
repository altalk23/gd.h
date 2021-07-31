#ifndef __CCSCROLLLAYEREXT_H__
#define __CCSCROLLLAYEREXT_H__

#include <gd.h>

class CCContentLayer;

class CCScrollLayerExt : public cocos2d::CCLayer {
public:
	PAD(4);
	cocos2d::CCPoint m_obUnknown1;
	cocos2d::CCPoint m_obUnknown2;
	PAD(8);
	bool m_bUnknown1;
	bool m_bUnknown2;
	cocos2d::CCLayerColor* m_pLayer;
	PAD(8);
	CCContentLayer* m_pContentLayer;
	PAD(16);
	float m_fScale1; //?
	float m_fScale2; //?
public:
	//own vtable
	virtual void preVisitWithClippingRect(cocos2d::CCRect rect);
	virtual void postVisit();
};

class CCScrollLayerExtDelegate {
public:
	//lol nice typo rob
	virtual void scrllViewWillBeginDecelerating(CCScrollLayerExt*);
	virtual void scrollViewDidEndDecelerating(CCScrollLayerExt*);
	virtual void scrollViewTouchMoving(CCScrollLayerExt*);
	virtual void scrollViewDidEndMoving(CCScrollLayerExt*);
	virtual void scrollViewTouchBegin(CCScrollLayerExt*);
	virtual void scrollViewTouchEnd(CCScrollLayerExt*);
};


#endif
