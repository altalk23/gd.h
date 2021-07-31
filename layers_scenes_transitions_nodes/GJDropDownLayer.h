#ifndef __GJDROPDOWNLAYER_H__
#define __GJDROPDOWNLAYER_H__

#include <gd.h>


class GJListLayer;

class GJDropDownLayer : public cocos2d::CCLayerColor {
public:
	cocos2d::CCPoint m_obEndPosition;
	cocos2d::CCPoint m_obStartPosition;
	cocos2d::CCMenu* m_pButtonMenu;
	GJListLayer* m_pListLayer;
	bool m_bControllerEnabled; //?
	cocos2d::CCLayer* m_pLayer;
	bool m_bHidden; //?
	PAD(7);
};


#endif
