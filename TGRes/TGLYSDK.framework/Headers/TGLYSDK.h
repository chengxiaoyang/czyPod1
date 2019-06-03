//
//  TGLYSDK.h
//  DKMDemo
//
//  Created by zero on 2017/2/11.
//  Copyright © 2017年 dkm. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#pragma mark - 回调代理
@protocol TGLYDelegate <NSObject>

/**
 *  初始化回调
 *  code “1”成功 “0”失败
 *  desc  初始化描述
 */

-(void)initResult:(NSDictionary *)payResultDic;


/**
 *  登录注册回调

 */
- (void)loginResult:(NSString *)uid andToken:(NSString *)token;


/**
 *  支付回调
 *  code “1”成功 “0”失败
 *  desc  支付描述
 */
- (void)payResult:(NSDictionary *)payResultDic;

/**
 * 切换账号回调
 */

- (void)changeAccount;

@end


@interface TGLYSDK : NSObject

@property (nonatomic ,assign) NSString * appId;
@property (nonatomic ,retain) NSString * appKey;
@property (nonatomic ,retain) NSString * pId;
@property (nonatomic ,retain) NSString * gameId;
@property (nonatomic ,retain) NSString * areaId;
@property (nonatomic ,retain) NSString * appVer;
@property (nonatomic ,strong) NSString * pkid;

@property (nonatomic ,retain) NSString * ourToken;
@property (nonatomic ,retain) NSString * ourUid;
@property (nonatomic ,retain) NSString * ourPuid;
@property (nonatomic ,retain) NSString * pToken;

@property (nonatomic ,strong) NSString * gameOrder;
@property (nonatomic ,strong) NSString * server;
@property (nonatomic ,strong) NSString * money;
@property (nonatomic ,strong) NSString * role;
@property (nonatomic ,strong) NSString * roleLevel;
@property (nonatomic ,strong) NSString * goodsId;
@property (nonatomic ,strong) NSString * goodsNum;

@property (nonatomic, retain) NSDictionary * tgSDKDict;
@property(nonatomic, unsafe_unretained) id<TGLYDelegate>TGdelegate;

@property (nonatomic, strong) NSString * cid;
@property (nonatomic, strong) NSString * aid;

@property (nonatomic, strong) NSString * buglyAppid;

+(TGLYSDK *)sharedManager;

- (void)sendCrash;

/**
 *  dataDic为字典，对应键如下，保证键的输入正确
 
 */
-(void)initializeSDKWithDataDic:(NSMutableDictionary *)dataDic;


/**
 
 登录注册接口
 
 */
-(void)showLoginAndRegisterView;


/**
 
 充值接口
 
 */
-(void)showPayViewWithDataDic:(NSDictionary *)dataDic withPayDic:(NSMutableDictionary *)payDic;

/**
 
 登出or切换账号接口
 
 */
-(void)loginOut;

#pragma mark - 打点接口

/*
 
 使用场景：用户调用登录后，进入游戏指定服务器后调用（点击开始游戏）
 
 */
- (void)choseSever:(NSString *)severId andRoleLevel:(NSString *)level andRoleId:(NSString *)roleId andRoleName:(NSString *)roleName serverName:(NSString *)serverName vip:(NSString *)vip;

/*
 
 使用场景：用户调用登录接口后，完成角色创建后调用（显示游戏界面之前）
 
 */
- (void)createRole:(NSString *)severId andRoleId:(NSString *)roleId;

/*
 
 使用场景：用户在游戏中等级发生变化时调用
 
 */
- (void)levelUp:(NSString *)severId andRoleLevel:(NSString *)level andRoleId:(NSString *)roleId andRoleName:(NSString *)roleName;


@end
