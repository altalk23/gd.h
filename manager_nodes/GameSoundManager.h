#ifndef __GAMESOUNDMANAGER_H__
#define __GAMESOUNDMANAGER_H__

#include <gd.h>
#include <filesystem>

class GameSoundManager : public cocos2d::CCNode {
public:
	cocos2d::CCDictionary* m_pDictionary1;
	cocos2d::CCDictionary* m_pDictionary2;
	PAD(12);
	bool m_bPreloaded;
	PAD(4);
	std::string m_sFilePath;
};


#endif
