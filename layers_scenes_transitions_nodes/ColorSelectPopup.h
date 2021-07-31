#ifndef __COLORSELECTPOPUP_H__
#define __COLORSELECTPOPUP_H__

#include <gd.h>

class FLAlertlayer;
class ColorPickerDelegate;
class TextInputDelegate;
class GJSpecialColorSelectDelegate;
class Slider;
class EffectGameObject;
class GJColorSetupLayer;
class ColorAction;
class CCTextInputNode;
class ConfigureHSVWidget;
class CCMenuItemToggler;
class ColorSelectPopup : public FLAlertLayer, ColorPickerDelegate, TextInputDelegate, GJSpecialColorSelectDelegate {
public:
    // TODO: actually figure out most of this stuff, this is a mess
    cocos2d::extension::CCControlColourPicker* m_colorPicker; // 0x01D8
    cocos2d::CCLabelBMFont* m_unk1DC;
    cocos2d::CCLabelBMFont* m_label; // 0x01E0
    Slider* m_unk1E4;
    Slider* m_slider; // 0x01E8
    EffectGameObject* m_effectGameObject; // 0x01EC
    cocos2d::CCArray* m_unk1F0;
    CCMenuItemToggler* m_toggler1; // 0x01F4
    CCMenuItemToggler* m_toggler2; // 0x01F8
    unsigned rgbLastColor; // 0x01FC
    cocos2d::CCSprite* m_unk200;
    cocos2d::CCSprite* m_unk204;
    unsigned bgrColor; // 0x0208
    GJColorSetupLayer* colorSetupLayer; // 0x020C
    float fadeTime; // 0x0210
    int playerColor; // 0x0214
    bool isBlending; // 0x0218
    float opacity; // 0x021C
    ColorAction* colorAction; // 0x0220
    CCTextInputNode* m_textInput1;
    bool m_unk228;
    bool touchTrigger; // 0x0229
    bool m_unk22A;
    bool isMultipleColorTrigger; // 0x022B
    bool m_unk22C;
    bool isColorTrigger; // 0x022D
    int colorID; // 0x0230
    bool m_unk234;
    int copyChannelID; // 0x0238
    bool copyOpacity; // 0x023C
    ConfigureHSVWidget* configurehsvwidget; // 0x0240
    PAD(16);
    cocos2d::CCArray* m_unk254;
    cocos2d::CCArray* m_unk258;
    CCTextInputNode* m_textInput2; // 0x025C
    PAD(4);
    CCMenuItemToggler* m_toggler3;
    CCMenuItemToggler* m_toggler4;
    PAD(8);
    cocos2d::CCArray* m_unk274;
    bool spawnTrigger; // 0x0278
    bool multiTrigger; // 0x0279
    bool copyColor; // 0x027A
};


#endif
