#ifndef __SONGINFOLAYER_H__
#define __SONGINFOLAYER_H__

#include <gd.h>

class FLAlertLayer;

class SongInfoLayer : public FLAlertLayer {
public:
    std::string m_downloadLink;
    std::string m_artistNewgrounds;
    std::string m_artistYoutube;
    std::string m_artistFacebook;
};


#endif

