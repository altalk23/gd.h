#ifndef __OBJECTTOOLBOX_H__
#define __OBJECTTOOLBOX_H__

#include <gd.h>

class ObjectToolbox : public cocos2d::CCNode {
public:
    cocos2d::CCDictionary* m_frameToKey;
    cocos2d::CCDictionary* m_keyToFrame;
    PAD(4);
};


#endif
