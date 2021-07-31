#ifndef __EDITORUI_H__
#define __EDITORUI_H__

#include <gd.h>


class BoomScrollLayer : public cocos2d::CCLayer {
    // todo
};

class GameManager;

class EditButtonBar : public cocos2d::CCNode {
public:
    cocos2d::CCPoint m_obPosition;
    int m_nUnknown;
    bool m_bUnknown;
    cocos2d::CCArray* m_pButtonArray;
    BoomScrollLayer* m_pScrollLayer;
    cocos2d::CCArray* m_pPagesArray;
};

class CreateMenuItem : public CCMenuItemSpriteExtra {
public:
    PAD(0x18)
    int m_nObjectID;
    int m_nBuildTabPage;
    int m_nBuildTab;
};

class EditorPauseLayer : public gd::CCBlockLayer {
public:
    PAD(0x8)
    gd::CCMenuItemSpriteExtra* m_pButton0;
    gd::CCMenuItemSpriteExtra* m_pButton1;
    gd::LevelEditorLayer* m_pEditorLayer;
};

class GJScaleControl;
class GJRotationControl;
class CCMenuItemSpriteExtra;
class CCMenuItemToggler;
class Slider;
class GameObject;

class EditorUI : public cocos2d::CCLayer,
    public gd::FLAlertLayerProtocol,
    public gd::ColorSelectDelegate,
    public gd::GJRotationControlDelegate,
    public gd::GJScaleControlDelegate,
    public gd::MusicDownloadDelegate {

public:
    EditButtonBar* m_pButtonBar; // 0x134
    PAD(0x4)
    cocos2d::CCArray* m_pUnknownArray; // 0x13c
    PAD(0x2c)
    cocos2d::CCLabelBMFont* m_pObjectInfoLabel; // 0x168
    GJRotationControl* m_pRotationControl; // 0x16c
    PAD(0xc)
    GJScaleControl* m_pScaleControl; // 0x17c
    cocos2d::CCDictionary* m_pUnknownDict; // 0x180
    EditButtonBar* m_pCreateButtonBar; // 0x184
    EditButtonBar* m_pEditButtonBar; // 0x188
    Slider* m_pPositionSlider; // 0x18c
    float m_fUnknown0;      // 0x190
    float m_fMinYLimit;     // 0x194 (tf is this)
    float m_fUnknown2;      // 0x198
    PAD(0x14)
    cocos2d::CCArray* m_pUnknownArray2; // 0x1b0
    PAD(0x8)
    cocos2d::CCArray* m_pSelectedObjects; // 0x1bc
    cocos2d::CCMenu* m_pDeleteMenu; // 0x1c0
    cocos2d::CCArray* m_pUnknownArray4; // 0x1c4
    CCMenuItemSpriteExtra* m_pDeleteModeButton; // 0x1c8
    CCMenuItemSpriteExtra* m_pButton1; // 0x1cc
    CCMenuItemSpriteExtra* m_pButton2; // 0x1d0
    CCMenuItemSpriteExtra* m_pButton3; // 0x1d4
    CCMenuItemSpriteExtra* m_pButton4; // 0x1d8
    CCMenuItemSpriteExtra* m_pButton5; // 0x1dc
    CCMenuItemSpriteExtra* m_pButton6; // 0x1e0
    CCMenuItemSpriteExtra* m_pButton7; // 0x1e4
    CCMenuItemSpriteExtra* m_pPlaybackBtn; // 0x1e8
    CCMenuItemSpriteExtra* m_pPlaytestBtn; // 0x1ec
    CCMenuItemSpriteExtra* m_pPlaytestStopBtn; // 0x1f0
    CCMenuItemSpriteExtra* m_pTrashBtn; // 0x1f4
    CCMenuItemSpriteExtra* m_pLinkBtn; // 0x1f8
    CCMenuItemSpriteExtra* m_pUnlinkBtn; // 0x1fc
    CCMenuItemSpriteExtra* m_pUndoBtn; // 0x200
    CCMenuItemSpriteExtra* m_pRedoBtn; // 0x204
    CCMenuItemSpriteExtra* m_pButton16; // 0x208
    CCMenuItemSpriteExtra* m_pEditGroupBtn; // 0x20c
    CCMenuItemSpriteExtra* m_pButton18; // 0x210
    CCMenuItemSpriteExtra* m_pButton19; // 0x214
    CCMenuItemSpriteExtra* m_pButton20; // 0x218
    CCMenuItemSpriteExtra* m_pButton21; // 0x21c
    CCMenuItemSpriteExtra* m_pCopyBtn; // 0x220
    CCMenuItemSpriteExtra* m_pPasteBtn; // 0x224
    CCMenuItemSpriteExtra* m_pButton24; // 0x228
    CCMenuItemSpriteExtra* m_pButton25; // 0x22c
    CCMenuItemSpriteExtra* m_pButton26; // 0x230
    CCMenuItemToggler* m_pUnknownToggler; // 0x234
    cocos2d::CCArray* m_pCreateButtonBars; // 0x238
    cocos2d::CCMenu* m_pTabsMenu; // 0x23c
    cocos2d::CCArray* m_pTabsArray; // 0x240
    cocos2d::CCSprite* m_pIdkSprite0; // 0x244
    cocos2d::CCSprite* m_pIdkSprite1; // 0x248
    CCMenuItemSpriteExtra* m_pButton27; // 0x24c
    CCMenuItemSpriteExtra* m_pButton28; // 0x250
    CCMenuItemSpriteExtra* m_pDeleteFilterNone; // 0x254
    CCMenuItemSpriteExtra* m_pDeleteFilterStatic; // 0x258
    CCMenuItemSpriteExtra* m_pDeleteFilterDetails; // 0x25c
    CCMenuItemSpriteExtra* m_pDeleteFilterCustom; // 0x260
    cocos2d::CCLabelBMFont* m_pCurrentLayerLabel; // 0x264
    CCMenuItemSpriteExtra* m_pButton33; // 0x268
    CCMenuItemSpriteExtra* m_pButton34; // 0x26c
    CCMenuItemSpriteExtra* m_pButton35; // 0x270
    PAD(0x8)
    int m_nSelectedCreateObjectID; // 0x278
    cocos2d::CCArray* m_pCreateButtonArray;  // 0x280
    cocos2d::CCArray* m_pCustomObjectButtonArray; // 0x284
    cocos2d::CCArray* m_pUnknownArray9; // 0x288
    int m_nSelectedMode; // 0x28c
    LevelEditorLayer* m_pEditorLayer;  // 0x290
    PAD(0x30)
    GameObject* m_pSelectedObject;  // 0x2c0
    PAD(0x30)
    int m_nSelectedTab; // 0x2f4
};



#endif
