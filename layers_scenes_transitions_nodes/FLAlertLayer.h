#ifndef __FLALERTLAYER_H__
#define __FLALERTLAYER_H__

#include <gd.h>


class FLAlertLayerProtocol;
class ButtonSprite;
class ScrollingLayer;

class FLAlertLayer : public cocos2d::CCLayerColor {
public:
	cocos2d::CCMenu* m_ButtonMenu;
	int m_ControlConnected; //?
	cocos2d::CCObject* m_Target;
	cocos2d::CCNode* m_scene; // 0x210
    bool m_reverseKeyBack; // 0x211
    cocos2d::ccColor3B m_color; // 0x212
	cocos2d::CCLayer* m_Layer;
	int m_ZOrder2;
	bool m_NoElasticity;
	cocos2d::ccColor3B m_Color2; //?
	ButtonSprite* m_Button1;
	ButtonSprite* m_Button2;
	ScrollingLayer* m_ScrollingLayer;
	int m_JoystickConnected;
	bool m_Border; //?
	bool m_NoAction; //?
};



#endif
