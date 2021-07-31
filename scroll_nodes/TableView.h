#ifndef __TABLEVIEW_H__
#define __TABLEVIEW_H__

#include <gd.h>

class CCScrollLayerExt;
class CCScrollLayerExtDelegate;
class CCIndexPath;

typedef enum {
	//idk what goes here
} TableViewCellEditingStyle;

class TableView : public CCScrollLayerExt, public CCScrollLayerExtDelegate {
	//lol i kinda just gave up i dont feel like re'ing this rn
public:
	PAD(8);
	cocos2d::CCPoint m_obUnknown1;
	cocos2d::CCPoint m_obUnknown2;
	cocos2d::CCPoint m_obUnknown3;
	PAD(8);
	cocos2d::CCArray* m_pArray1;
	cocos2d::CCArray* m_pArray2;
	cocos2d::CCArray* m_pArray3;
	PAD(28);
};

class TableViewCell : public cocos2d::CCLayer {
public:
	PAD(8);
	CCIndexPath m_iIndexPath;
	PAD(4);
	std::string m_sUnknown;
	PAD(8);
	cocos2d::CCLayerColor* m_pLayerColor;
	cocos2d::CCLayer* m_pLayer;
	PAD(4);
};

class TableViewDelegate {
public:
	virtual void willTweenToIndexPath(CCIndexPath&, TableViewCell*, TableView*);
	virtual void didEndTweenToIndexPath(CCIndexPath&, TableView*);
	virtual void TableViewWillDisplayCellForRowAtIndexPath(CCIndexPath&, TableViewCell*, TableView*);
	virtual void TableViewDidDisplayCellForRowAtIndexPath(CCIndexPath&, TableViewCell*, TableView*);
	virtual void TableViewWillReloadCellForRowAtIndexPath(CCIndexPath&, TableViewCell*, TableView*);
	virtual float cellHeightForRowAtIndexPath(CCIndexPath&, TableView*);
	virtual void didSelectRowAtIndexPath(CCIndexPath&, TableView*);
};

class TableViewDataSource {
public:
	virtual unsigned int numberOfRowsInSection(unsigned int, TableView*);
	virtual unsigned int numberOfSectionsInTableView(TableView*);
	virtual void TableViewCommitCellEditingStyleForRowAtIndexPath(TableView*, TableViewCellEditingStyle, CCIndexPath&);
	virtual TableViewCell* cellForRowAtIndexPath(CCIndexPath&, TableView*);
};

#endif
