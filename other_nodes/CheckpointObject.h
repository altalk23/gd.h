#ifndef __CHECKPOINTOBJECT_H__
#define __CHECKPOINTOBJECT_H__

#include <gd.h>

    class GameObject;
    class PlayerCheckpoint;
    
    class CheckpointObject : public cocos2d::CCNode {
    public:
        GameObject* m_gameObject;           // 0x120
        PlayerCheckpoint* m_player1;        // 0x128 
        PlayerCheckpoint* m_player2;        // 0x130
        bool m_isDual;                      // 0x138 
        bool m_isFlipped;                   // 0x139
        cocos2d::CCPoint m_cameraPos;       // 0x13c
        int unk104; // comes from playlayer + 2ac 0x144
        GameObject* m_lastPortal;           // 0x148
        double unk110;                      // 0x150
        std::string m_currentStateString;   // 0x158
        std::string m_objectsStateString;   // 0x160
    };


#endif
