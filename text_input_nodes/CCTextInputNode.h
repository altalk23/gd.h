#ifndef __CCTEXTINPUTNODE_H__
#define __CCTEXTINPUTNODE_H__

#include <gd.h>

class TextInputDelegate;

class CCTextInputNode : public cocos2d::CCLayer, public cocos2d::CCIMEDelegate, public cocos2d::CCTextFieldDelegate {
public:
	int m_nUnknown0;
	std::string m_sCaption;
	int m_nUnknown1;
	int m_nUnknown2;
	std::string m_sFilter;
	float m_fWidth;
	float m_fMaxLabelScale;
	float m_fPlaceholderScale;
	cocos2d::ccColor3B m_cPlaceholderColor;
	cocos2d::ccColor3B m_cNormalColor;
	cocos2d::CCLabelBMFont* m_pCursor;
	cocos2d::CCTextFieldTTF* m_pTextField;
	TextInputDelegate* m_delegate;
	int m_nMaxLabelLength;
	cocos2d::CCLabelBMFont* m_pPlaceholderLabel;
	bool m_bUnknown;
	bool m_bUnknown2;
	bool m_bForceOffset;
};

#endif
