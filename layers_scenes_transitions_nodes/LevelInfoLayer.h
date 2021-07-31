#ifndef __LEVELINFOLAYER_H__
#define __LEVELINFOLAYER_H__

#include <gd.h>

class GJGameLevel;
class CCMenuItemSpriteExtra;
class CCMenuItemToggler;
class TextArea;

class EditLevelLayer :
    public cocos2d::CCLayer,
    public TextInputDelegate,
    public FLAlertLayerProtocol,
    public UploadActionDelegate,
    public UploadPopupDelegate,
    public SetIDPopupDelegate
{
    public:
        cocos2d::CCMenu* m_pButtonMenu;
        GJGameLevel* m_pLevel;
        TextArea* m_pDescriptionInput;
        cocos2d::CCArray* m_pSomeArray;
        cocos2d::CCLabelBMFont* m_pSomeFont;
};

class LevelInfoLayer : public cocos2d::CCLayer,
    LevelDownloadDelegate,
    LevelUpdateDelegate,
    RateLevelDelegate,
    LikeItemDelegate,
    FLAlertLayerProtocol,
    LevelDeleteDelegate,
    NumberInputDelegate,
    SetIDPopupDelegate
{
    public:
        PAD(0x4)
        cocos2d::CCMenu* m_pPlayBtnMenu;
        GJGameLevel* m_pLevel;
        cocos2d::CCArray* m_pUnknown;
        CCMenuItemSpriteExtra* m_pLikeBtn;
        CCMenuItemSpriteExtra* m_pStarRateBtn;
        CCMenuItemSpriteExtra* m_pDemonRateBtn;
        PAD(0x4)
        CCMenuItemToggler* m_pToggler;
        cocos2d::CCLabelBMFont* m_pLabel0;
        cocos2d::CCLabelBMFont* m_pLabel1;
        cocos2d::CCLabelBMFont* m_pLabel2;
        cocos2d::CCLabelBMFont* m_pLabel3;
        cocos2d::CCLabelBMFont* m_pLabel4;
        cocos2d::CCLabelBMFont* m_pLabel5;
        CCMenuItemSpriteExtra* m_pCloneBtn;
        PAD(0x4)
};


#endif
