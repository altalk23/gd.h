#ifndef __SETGROUPIDLAYER_H__
#define __SETGROUPIDLAYER_H__

#include <gd.h>

class SetGroupIDLayer : public gd::FLAlertLayer, public gd::TextInputDelegate {
public:
    gd::GameObject* m_pObj;
    PAD(0x4)
    cocos2d::CCArray* m_pArray0;
    cocos2d::CCArray* m_pArray1;
    cocos2d::CCLabelBMFont* m_pEditorLayerText;
    cocos2d::CCLabelBMFont* m_pEditorLayer2Text;
    cocos2d::CCLabelBMFont* m_pZOrderText;
    gd::CCTextInputNode* m_pGroupIDInput;
    int m_nGroupIDValue;
    int m_nEditorLayerValue;
    int m_nEditorLayer2Value;
    int m_nZOrderValue;
};


#endif
