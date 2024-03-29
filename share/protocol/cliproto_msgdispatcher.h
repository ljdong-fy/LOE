/********************************************************************
**       This head file is generated by program,                   **
**            Please do not change it directly.                    **
**                   Auther: Qiang Xin Bo                          **
********************************************************************/

/*       Version Number: 1          */

#ifndef CLIPROTO_MSGDISPATCHER_H_INCLUDE_VERSION_1
#define CLIPROTO_MSGDISPATCHER_H_INCLUDE_VERSION_1

#include "msgdispatcher.h"

#include "cliproto.h"

#ifndef NSCLIPROTO_BEGIN
#define NSCLIPROTO_BEGIN
#endif 

#ifndef NSCLIPROTO_END
#define NSCLIPROTO_END
#endif 

NSCLIPROTO_BEGIN

class CCliProtoMsgDispatcher : public TMsgDispatcher<CCliProtoMsgDispatcher>
{
public:
    CCliProtoMsgDispatcher(){}
    virtual ~CCliProtoMsgDispatcher(){}

    bool Init();

public:
    virtual bool OnCG_LOGIN(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnGC_LOGIN(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCG_LOGOUT(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnGC_LOGOUT(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnGC_ROLELIST(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCG_CREATEROLE(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnGC_CREATEROLE(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCG_DELROLE(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnGC_DELROLE(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCG_SELECTROLE(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnGC_SELECTROLE(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnGC_QUEUE_INFO(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnGC_GPK_CLT_DYN_CODE(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCG_GPK_CLT_NEGLECT(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnGC_GPK_CAL_ORIGIN(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCG_GPK_CAL_RESULT(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnGC_ERROR(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnGC_ERRORSTRING(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCG_HEART_BEAT(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnGC_HEART_BEAT(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnGC_PUBLIC_STRING(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnLGPKG_LOGIN_REQ(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnLGPKG_LOGIN_ACK(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnLGPKG_GAMESERVER_LIST_REQ(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnLGPKG_GAMESERVER_LIST_ACK(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnGSPKG_SERVERINFO_RPT(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnGSPKG_SERVER_GROUP_DESC_RPT(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnGSPKG_ENTERGAME_REQ(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnGSPKG_ENTERGAME_ACK(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnGSPKG_LEAVEGAME_REQ(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnGSPKG_LEAVEGAME_ACK(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnGSPKG_KICKOUT_NTF(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnGSPKG_MSG_BROADCAST(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnGSPKG_LOAD_GSDATA_NTF(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnGSPKG_UPDATEGMLEVEL_NTF(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnGSPKG_SWITCHSCENE_REQ(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnGSPKG_SWITCHSCENE_ACK(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_SELF_LOADSCENE(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_ENTERSCENE(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_SELF_ENTERSCENE(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_SELF_DATA_END(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_SELF_APPEAR(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_SELF_BASE_PRO(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_LEVEL_REQ(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_LEVEL_ACK(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_LEVEL_RESULT_NTF(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_TREASURE_CHEST_NTF(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_OPEN_TREASURE_CHEST_REQ(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_OPEN_TREASURE_CHEST_ACK(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_LEVEL_INFO(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_GET_BATTLE_BOX_REQ(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_GET_BATTLE_BOX_ACK(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_BATTLE_GOT_STAR_NTF(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_SELF_VOLATILE_PRO(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_CLIENT_CONFIG_NTF(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_CLIENT_CONFIG_UPDATE(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_ERROR_NTF(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_SELF_ITEM_NTF(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_MOVE_ITEM_REQ(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_MOVE_ITEM_ACK(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_ROLE_BAG_NTF(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_ROLE_EQUIP_NTF(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_ROLE_EQUIP_REQ(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_ROLE_EVENT_REQ(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_ROLE_BAG_SINGLE_LEAVE_NTF(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_ROLE_BAG_SINGLE_ENTER_NTF(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_ROLE_EQUIP_SINGLE_LEAVE_NTF(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_ROLE_EQUIP_SINGLE_ENTER_NTF(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_ROLE_ITEMUP_RPT(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_ROLE_ITEMUP_NTF(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_ROLE_ITEMUP_ACK(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_ROLE_SUIT_NTF(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_ROLE_HOLE_ON_REQ(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_ROLE_HOLE_ON_ACK(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_ROLE_HOLE_OFF_REQ(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_ROLE_HOLE_OFF_ACK(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_ROLE_HOLE_REFRESH_REQ(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_ROLE_HOLE_REFRESH_ACK(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_ROLE_HOLE_MERGE_REQ(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_ROLE_HOLE_MERGE_ACK(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_ROLE_HOLE_MERGE2_REQ(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_ROLE_HOLE_MERGE2_ACK(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_LOCK_RPT(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_ROLE_USEITEM_REQ(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_PET_USEITEM_REQ(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_PET_USEITEM_ACK(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_ROLE_LIMIT_NTF(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_GATHER_ITEM_MERGE_REQ(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_GATHER_ITEM_MERGE_ACK(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_GATHER_INFO_NTF(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_GATHER_SINGLE_ENTER_NTF(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_GATHER_SINGLE_LEAVE_NTF(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_ROLE_PROD_REQ(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_ROLE_PROD_ACK(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_ROLE_USEITEM_START_ACK(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_ROLE_USEITEM_END_ACK(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_USER_SKILLS_NTF(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_LEARN_SKILL(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_SKILL_INFO_NTF(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_REMOVE_SKILL_NTF(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_SKILL_POINT_NTF(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_SKILL_RESET_ALL_REQ(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_USER_PETS_NTF(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_PET_INFO_NTF(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_SET_BATTLE_PET_REQ(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_SET_BATTLE_PET_NTF(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_PET_GET_EXP_RPT(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_PET_LEVEL_NTF(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_PET_UP_REQ(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_PET_UP_ACK(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_PET_MERGE_REQ(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_PET_ADD_NTF(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_PETS_RECORD_NTF(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_PET_BAG_NTF(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_PET_EQUIP_REQ(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_PET_EVENT_REQ(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_PET_BAG_SINGLE_LEAVE_NTF(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_PET_BAG_SINGLE_ENTER_NTF(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_PET_TEAM_RPT(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_PET_TEAM_NTF(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_PET_GET_EXP_ACK(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_PET_SINGLE_ENTER_NTF(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_PET_SINGLE_LEAVE_NTF(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_PET_EVENT_ACK(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_MOVE_SYNC_MODE(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_MOVE_BEGIN(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_MOVE_STOP(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_MOVE_BEGIN(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_MOVE_STOP(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_OTHER_APPEAR(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_OTHER_UPDATE(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_OTHER_DISAPPEAR(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_CHAT(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_CHAT(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_CHAT_ACK(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_FRIENDS_LIST_NTF(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_QUERY_ROLE_REQ(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_QUERY_ROLE_ACK(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_ADD_FRIEND_REQ(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_ADD_FRIEND_ACK(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_REMOVE_FRIEND_REQ(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_REMOVE_FRIEND_ACK(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_DONATE_ACTION_POINT_REQ(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_DONATE_ACTION_POINT_ACK(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_DONATE_ACTION_POINT_OTHER_NTF(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_RECEIVE_ACTION_POINT_REQ(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_RECEIVE_ACTION_POINT_ACK(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_RESPONSE_ADD_FRIEND_REQ(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_REQUEST_ADD_FRIEND_NTF(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_FRIEND_INFO_CHANGE_NTF(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_FRIEND_REMOVE_INVITE_NTF(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_FRIEND_ASSIST_LIST_REQ(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_FRIEND_ASSIST_LIST_ACK(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_SELECT_FRIEND_ASSIST_REQ(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_SELECT_FRIEND_ASSIST_ACK(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_FRIEND_EPINFO_NTF(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_FRIENDS_LIST_REQ(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_ABYSS_TRIGGER_ACK(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_ABYSS_OPEN_REQ(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_ABYSS_OPEN_ACK(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_ABYSS_OPEN_NTF(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_GET_ABYSS_TRIGGER_LIST_REQ(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_GET_ABYSS_TRIGGER_LIST_ACK(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_GET_ABYSS_OPEN_LIST_REQ(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_GET_ABYSS_OPEN_LIST_ACK(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_GET_ABYSS_OPEN_REC_REQ(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_GET_ABYSS_OPEN_REC_ACK(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_ENTER_ABYSS_ACK(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_ABYSS_RUN_NTF(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_MAIL_LIST_NTF(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_SEND_MAIL_REQ(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_SEND_MAIL_ACK(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_GET_ITEM_FROM_MAIL_REQ(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_GET_MONEY_FROM_MAIL_REQ(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_READ_MAIL_REQ(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_READ_MAIL_ACK(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_DELETE_MAIL_REQ(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_DELETE_MAIL_ACK(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_UPDATE_MAIL_NTF(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_SHOP_ACTION_POINT_BOUGHT_NTF(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_SHOP_BUY_ACTION_POINT_REQ(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_SHOP_BUY_ACTION_POINT_ACK(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_SHOP_BUY_PET_INFO_CHEAP_NTF(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_SHOP_BUY_PET_INFO_EXPENSIVE_NTF(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_SHOP_BUY_PET_REQ(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_SHOP_BUY_PET_ACK(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_SHOP_GET_GOODSLIST_REQ(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_SHOP_GET_GOODSLIST_ACK(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_SHOP_BUY_GOODS_REQ(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_SHOP_BUY_GOODS_ACK(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_SHOP_SECRET_GOODS_REQ(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_SHOP_SECRET_GOODS_ACK(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_SHOP_SECRET_BUY_REQ(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_SHOP_SECRET_BUY_ACK(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_SHOP_SECRET_REFRESH_REQ(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_SELF_PVP_PRO_REQ(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_SELF_PVP_PRO_ACK(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_GET_PVP_MATCH_REQ(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_GET_PVP_MATCH_ACK(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_ENTER_PVP_REQ(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_ENTER_PVP_ACK(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_PVP_RETULT_REQ(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_PVP_RETULT_ACK(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_GET_RANK_LIST_REQ(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_GET_RANK_LIST_ACK(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_GET_PVP_MILITARY_REWARD_REQ(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_GET_PVP_MILITARY_REWARD_ACK(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_GET_PVP_REPUTE_REWARD_REQ(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_GET_PVP_REPUTE_REWARD_ACK(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_PVP_BUY_CHALLENGE_TIMES_REQ(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_PVP_BUY_CHALLENGE_TIMES_ACK(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_PVP_TIME_NTF(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_GET_PVP_ROLE_INFO_REQ(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_GET_PVP_ROLE_INFO_ACK(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_VIP_INFO_NTF(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_VIP_RMBINFO_NTF(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_VIP_MONTHCARD_NTF(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_VIP_MONTHCARD_GETITEM_REQ(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_VIP_MONTHCARD_GETITEM_ACK(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_GIFT_SIGN_NTF(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_GIFT_SIGN_VIP_NTF(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_GIFT_SIGN(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_GIFT_SIGN_VIP(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_GIFT_LEVEL_NTF(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_GIFT_LEVEL(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_GIFT_DAY_NTF(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_GIFT_DAY_UPD(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_GIFT_DAY_SCORE_REQ(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_GIFT_DAY_BOX_REQ(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_GIFT_DAY_BOX_NTF(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_GIFT_JIHUOMA_REQ(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_GIFT_JIHUOMA_ACK(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_GIFT_EP_INFO_REQ(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_GIFT_EP_INFO_ACK(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_GIFT_RECEIVE_EP_REQ(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_GIFT_RECEIVE_EP_ACK(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_WB_INFO_REFRESH_REQ(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_WB_INFO_REFRESH_ACK(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_WB_ADD_BUF_REQ(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_WB_ADD_BUF_ACK(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_WB_RELIVE_REQ(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_WB_RELIVE_ACK(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_WB_KILLED_NTF(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_WB_RUN_NTF(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_WB_ENTER_REQ(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_WB_ENTER_ACK(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_WB_RESULT_REQ(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_WB_RESULT_ACK(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_ROLE_RANK_REQ(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_ROLE_RANK_ACK(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_GET_PT_BASEINFO_REQ(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_GET_PT_BASEINFO_ACK(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_BUY_PT_TIMES_REQ(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_BUY_PT_TIMES_ACK(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_GET_MD_BASEINFO_REQ(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_GET_MD_BASEINFO_ACK(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_BUY_MD_TIMES_REQ(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_BUY_MD_TIMES_ACK(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_GET_FD_BASEINFO_REQ(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_GET_FD_BASEINFO_ACK(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_BUY_FD_TIMES_REQ(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_BUY_FD_TIMES_ACK(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_GUILD_INFO_REQ(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_GUILD_LIST_REQ(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_GUILD_LIST_ACK(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_GUILD_ENTER_REQ(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_GUILD_ENTER_ACK(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_GUILD_CREATE_REQ(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_GUILD_CREATE_ACK(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_GUILD_LEAVE_REQ(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_GUILD_LEAVE_ACK(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_GUILD_BASEINFO_ACK(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_GUILD_LOG_REQ(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_GUILD_LOG_ACK(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_GUILD_CHANGE_NOTICE_REQ(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_GUILD_DETAIL_REQ(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_GUILD_DETAIL_ACK(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_GUILD_ENTERLIST_REQ(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_GUILD_ENTERLIST_ACK(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_GUILD_ENTER_ACCEPT_REQ(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_GUILD_ENTER_ACCEPT_ACK(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnCS_GUILD_ENTER_CLEAR_REQ(const void* pBuf, int nLen, const void* pObject);
    virtual bool OnSC_GUILD_ENTER_CLEAR_ACK(const void* pBuf, int nLen, const void* pObject);
};

NSCLIPROTO_END
#endif
