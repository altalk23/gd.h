#ifndef __GAMEMANAGER_H__
#define __GAMEMANAGER_H__

#include <gd.h>

#define PLAYER_ICON_FUNC(x) void setPlayer##x(int v) { m_nPlayer##x = v; __STR_CAT__(m_nPlayer##x,Rand1) = v + __STR_CAT__(m_nPlayer##x,Rand2); }

enum IconType {
	kIconTypeCube           = 0,
	kIconTypeShip           = 1,
	kIconTypeBall           = 2,
	kIconTypeUfo            = 3,
	kIconTypeWave           = 4,
	kIconTypeRobot          = 5,
	kIconTypeSpider         = 6,
	kIconTypeDeathEffect    = 98,
	kIconTypeSpecial        = 99,
};

enum UnlockType {
	kUnlockTypeUnknown = 0,
	kUnlockTypeCube = 1,
	kUnlockTypeColor1 = 2,
	kUnlockTypeColor2 = 3,
	kUnlockTypeShip = 4,
	kUnlockTypeBall = 5,
	kUnlockTypeUfo = 6,
	kUnlockTypeWave = 7,
	kUnlockTypeRobot = 8,
	kUnlockTypeSpider = 9,
	kUnlockTypeSpecial = 10,
	kUnlockTypeDeathEffect = 11,
	kUnlockTypeGlow = 12,
};

class PlayLayer;
class LevelEditorLayer;

class GameManager : public GManager {
public:
	bool m_bSwitchModes;
	bool m_bToFullscreen;
	bool m_bReloading;
	bool m_bUnknown;
	PAD(4);
	cocos2d::CCDictionary* m_pValueKeeper;
	cocos2d::CCDictionary* m_pUnlockValueKeeper;
	cocos2d::CCDictionary* m_pCustomObjectDict;
	PAD(4);
	double m_dUnknown;
	PAD(16);
	double m_dUnknown2;
	PAD(8);
	bool m_bLoaded; //?
	std::string m_sUnknown;
	PlayLayer* m_pPlayLayer;
	LevelEditorLayer* m_pLevelEditorLayer;
	PAD(20);
	std::string m_sPlayerUDID;
	std::string m_sPlayerName;
	bool m_bCommentsEnabled;
	int m_nPlayerUserIDRand1;
	int m_nPlayerUserIDRand2;
	int m_nPlayerUserID;
	float m_fBackgroundMusicVolume;
	float m_fEffectsVolume;
	int m_nTimeOffset;
	PAD(28);
	int m_nPlayerFrameRand1;
	int m_nPlayerFrameRand2;
	int m_nPlayerFrame;
	int m_nPlayerShipRand1;
	int m_nPlayerShipRand2;
	int m_nPlayerShip;
	int m_nPlayerBallRand1;
	int m_nPlayerBallRand2;
	int m_nPlayerBall;
	int m_nPlayerBirdRand1;
	int m_nPlayerBirdRand2;
	int m_nPlayerBird;
	int m_nPlayerDartRand1;
	int m_nPlayerDartRand2;
	int m_nPlayerDart;
	int m_nPlayerRobotRand1;
	int m_nPlayerRobotRand2;
	int m_nPlayerRobot;
	int m_nPlayerSpiderRand1;
	int m_nPlayerSpiderRand2;
	int m_nPlayerSpider;
	int m_nPlayerColorRand1;
	int m_nPlayerColorRand2;
	int m_nPlayerColor;
	int m_nPlayerColor2Rand1;
	int m_nPlayerColor2Rand2;
	int m_nPlayerColor2;
	int m_nPlayerStreakRand1;
	int m_nPlayerStreakRand2;
	int m_nPlayerStreak;
	int m_nPlayerDeathEffectRand1;
	int m_nPlayerDeathEffectRand2;
	int m_nPlayerDeathEffect;
	PAD(8);
	int m_nSecretNumberRand1; //? may be named differently
	int m_nSecretNumberRand2;
	bool m_bPlayerGlow;
	IconType m_nPlayerIconType;
	bool m_bUnknown2;
	bool m_bShowSongMarkers;
	bool m_bShowBPMMarkers;
	bool m_bRecordGameplay;
	bool m_bShowProgressBar;
	bool m_bPerformanceMode;
	bool m_bClickedGarage;
	bool m_bClickedEditor;
	bool m_bClickedName;
	bool m_bClickedPractice;
	bool m_bShowedEditorGuide;
	bool m_bShowedRateDiffDialog;
	bool m_bShowedRateStarDialog;
	bool m_bShowedLowDetailDialog;
	PAD(48);
	int m_nBootups;
	bool m_bHasRatedGame;
	PAD(3);
	bool m_bGameCenterEnabled;
	bool m_bSmoothFix;
	PAD(16);
	int m_nResolution;
	cocos2d::TextureQuality m_eQuality; //more after that i havent re'd
};


#endif
