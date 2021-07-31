#ifndef __CREATEGUIDELINESLAYER_H__
#define __CREATEGUIDELINESLAYER_H__

#include <gd.h>

class CreateGuidelinesLayer : public FLAlertLayer, FLAlertLayerProtocol {
public:
    PAD(36)
    std::string m_sGuidelineString;
};


#endif
