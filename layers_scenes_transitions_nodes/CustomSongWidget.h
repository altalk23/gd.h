#ifndef __CUSTOMSONGWIDGET_H__
#define __CUSTOMSONGWIDGET_H__

#include <gd.h>

class FLAlertLayer;
class FLAlertLayerProtocol;
class SongInfoObject;

class CustomSongWidget : public cocos2d::CCNode, MusicDownloadDelegate, FLAlertLayerProtocol {
public:
    SongInfoObject* m_songInfo;
};


#endif

