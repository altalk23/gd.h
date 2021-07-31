#ifndef __ACHIEVEMENTNOTIFIER_H__
#define __ACHIEVEMENTNOTIFIER_H__

#include <gd.h>


class AchievementBar;

class AchievementNotifier : public cocos2d::CCNode {
public:
	cocos2d::CCScene* m_pCurrentScene;
	cocos2d::CCArray* m_pQueue;
	AchievementBar* m_pCurrentAchievement;
};


#endif
