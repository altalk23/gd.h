#ifndef __CUSTOMSONGLAYER_H__
#define __CUSTOMSONGLAYER_H__

#include <gd.h>

class FLAlertLayer;
class FLAlertLayerProtocol;
class TextInputDelegate;
class GJDropDownLayerDelegate;
class LevelSettingsObject;
class CCTextInputNode;
class CustomSongWidget;
class LevelSettingsLayer;
class SongInfoObject;

class CustomSongLayer : public FLAlertLayer, FLAlertLayerProtocol, TextInputDelegate, GJDropDownLayerDelegate {
public:
    LevelSettingsObject* m_levelSettings;
    CCTextInputNode* m_songIDInput;
    CustomSongWidget* m_songWidget;
    LevelSettingsLayer* m_levelSettingsLayer;
};


#endif
