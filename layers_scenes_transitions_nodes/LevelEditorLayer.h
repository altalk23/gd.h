#ifndef __LEVELEDITORLAYER_H__
#define __LEVELEDITORLAYER_H__

#include <gd.h>


class GJBaseGameLayer;
class EditorUI;
class GameObject;
class GJGroundLayer;

class LevelEditorLayer : public GJBaseGameLayer {
public:
    PAD(4)
    bool m_unk2d0;   // 0x2d0
    bool m_unk2d1;   // 0x2d1
    bool m_unk2d2;   // 0x2d2
    bool m_unk2d3;   // 0x2d3
    bool m_bGridEnabled;   // 0x2d4
    bool m_unk2d5;   // 0x2d5
    bool m_unk2d6;   // 0x2d6
    bool m_unk2d7;   // 0x2d7
    bool m_unk2d8;   // 0x2d8
    bool m_bMoreUndo;   // 0x2d9
    bool m_unk2da;   // 0x2da
    PAD(0x35)
    GameObject* m_pCopyStateObject; // 0x310
    PAD(0x40)
    int m_nCurrentLayer;    // 0x354
    PAD(0x28)
    EditorUI* m_pEditorUI;  // 0x380
    PAD(0x28)
    bool m_bIsPlaybackMode;
    PAD(0x17)
    GJGroundLayer* m_pGroundLayer;  // 0x3c4
};



#endif
