#ifndef __GJROTATIONCONTROL_H__
#define __GJROTATIONCONTROL_H__

#include <gd.h>


class GJRotationControl : public cocos2d::CCLayer {
public:
    float m_nUnknown0;
    float m_nUnknown1;
    cocos2d::CCPoint m_obSliderPosition;
    cocos2d::CCSprite* m_pSliderThumb;
    float m_fObjAngle;
    float m_fAngle;
    int m_nTouchID;
};
    


#endif
