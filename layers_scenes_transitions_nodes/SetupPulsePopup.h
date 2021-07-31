#ifndef __SETUPPULSEPOPUP_H__
#define __SETUPPULSEPOPUP_H__

#include <gd.h>

class FLAlertLayer;
class SetupPulsePopup : public FLAlertLayer, ColorPickerDelegate, TextInputDelegate, GJSpecialColorSelectDelegate {
public:
    cocos2d::extension::CCControlColourPicker* colorPicker;
    PAD(48);
    cocos2d::CCSprite* currentColorSpr;
    cocos2d::CCSprite* prevColorSpr;
    PAD(100);
    int pulseMode;
};


#endif
