#ifndef __GMANAGER_H__
#define __GMANAGER_H__

#include <gd.h>

class DS_Dictionary;


class GManager : public cocos2d::CCNode {
public:
	std::string m_sFileName;
	bool m_bSetup;
	bool m_bSaved;
};


#endif
