#ifndef __BOOMLISTVIEW_H__
#define __BOOMLISTVIEW_H__

#include <gd.h>

class TableViewDelegate;
class TableViewDataSource;
class TableView;
class TableViewCell;

class BoomListView : public cocos2d::CCLayer, public TableViewDelegate, public TableViewDataSource {
public:
	TableView* m_pTableView;
	cocos2d::CCArray* m_pEntries;
	int m_eType; //? probably wrong type
	float m_fWidth;
	float m_fHeight;
	PAD(8);
};

#endif
