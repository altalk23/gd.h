#ifndef SLIDER_H
#define SLIDER_H

#include <gd.h>

class Slider;

class SliderThumb : public cocos2d::CCMenuItemImage {
public:
    float m_fLength;
    bool m_bVertical;
};

class SliderTouchLogic : public cocos2d::CCMenu {
public:
    PAD(0x4)
    float m_fLength;
    SliderThumb* m_pThumb;
    Slider* m_pSlider;
    bool m_bUnknown;
    PAD(0x8)
    bool m_bVertical;
};

class Slider : public cocos2d::CCLayer {
public:
    SliderTouchLogic* m_pTouchLogic;
    cocos2d::CCSprite* m_pSliderBar;
    cocos2d::CCSprite* m_pGroove;
    float m_fUnknown;
    float m_fHeight;
};

#endif
