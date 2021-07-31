#ifndef __GJACCOUNTMANAGER_H__
#define __GJACCOUNTMANAGER_H__

#include <gd.h>

class GJAccountManager : public cocos2d::CCNode {
public:
    PAD(0x4)
    std::string m_sPassword;
    std::string m_sUsername;
};


#endif
