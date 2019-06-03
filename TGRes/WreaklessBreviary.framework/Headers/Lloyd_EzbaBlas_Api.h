//
//  CAMainApi.h
//  WanDeLiuSDK
//
//  Created by WanDeLiu on 2018/11/10.
//  Copyright © 2018年 WanDeLiu. All rights reserved.
//

#import <Foundation/Foundation.h>
typedef NS_ENUM(NSUInteger, BlueVextShape) {
    BlueVextShapeEInitiating,
    BlueVextShapeLoginOrRegister,
    BlueVextShapePayRequestDora,
    BlueVextShapeExistMiff,
    BlueVextShapeDataStatistics,
    BlueVextShapeInformationChanges,
    BlueVextShapeAuditLogRecords,
    BlueVextShapeSDKVersion,
};
@interface Lloyd_EzbaBlas_Api : NSObject
+ (void)ImamPott:(BlueVextShape)requestType  requestData:(NSDictionary *)requestData completed:(void(^)(NSDictionary *responseObject))completed;
@end

