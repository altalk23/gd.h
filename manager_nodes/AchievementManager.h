#ifndef __ACHIEVEMENTMANAGER_H__
#define __ACHIEVEMENTMANAGER_H__

#include <gd.h>

class AchievementManager : public cocos2d::CCNode {
public:
	PAD(16);
	cocos2d::CCDictionary* m_pAchievements;
	PAD(4);
};


#endif
