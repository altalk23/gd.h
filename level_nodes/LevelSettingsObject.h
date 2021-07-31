#ifndef __LEVELSETTINGSOBJECT_H__
#define __LEVELSETTINGSOBJECT_H__

#include <gd.h>

class GJEffectManager;
class GJGameLevel;

class LevelSettingsObject : public cocos2d::CCNode {
public:
    GJEffectManager* m_effectManager;
    int m_gamemode; // 0x128
    int m_speed; // 0x12c
    bool m_mini; // 0x130
    bool m_dual; // 0x131
    bool m_twoPlayer; // 0x132
    float m_songOffset; // 0x134
    bool m_fadeIn; // 0x138
    bool m_fadeOut; // 0x139
    int m_backgroundTextureID; // 0x13c
    int m_groundTextureID; // 0x140
    int m_fontID; // 0x144
    bool m_isStartPos; // 0x148
    bool m_flipGravity; // 0x149
    GJGameLevel* m_level;
    std::string m_colorString; //0x158
    PADX(4)
    int m_colorPage; // 0x164
    int m_groundLineID; // 0x168
};


#endif
