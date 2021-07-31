#ifndef __PROFILEPAGE_H__
#define __PROFILEPAGE_H__

#include <gd.h>

class FLAlertLayer;

class ProfilePage : public FLAlertLayer,
    FLAlertLayerProtocol,
    LevelCommentDelegate,
    CommentUploadDelegate,
    UserInfoDelegate,
    UploadActionDelegate,
    UploadPopupDelegate,
    LeaderboardManagerDelegate
{
    public:
        PAD(4);
        int m_nAccountID;
};



#endif
