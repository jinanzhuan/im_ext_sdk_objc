//
//  ExtSdkPushManagerWrapper.h
//  im_flutter_sdk
//
//  Created by 东海 on 2020/5/7.
//

#import "ExtSdkWrapper.h"

NS_ASSUME_NONNULL_BEGIN

@interface ExtSdkPushManagerWrapper : ExtSdkWrapper

+ (nonnull instancetype)getInstance;

- (void)getImPushConfig:(NSDictionary *)param
         withMethodType:(NSString *)aChannelName
                 result:(nonnull id<ExtSdkCallbackObjc>)result;

- (void)getImPushConfigFromServer:(NSDictionary *)param
                   withMethodType:(NSString *)aChannelName
                           result:(nonnull id<ExtSdkCallbackObjc>)result;

- (void)updatePushNickname:(NSDictionary *)param
            withMethodType:(NSString *)aChannelName
                    result:(nonnull id<ExtSdkCallbackObjc>)result;

- (void)updateImPushStyle:(NSDictionary *)param
           withMethodType:(NSString *)aChannelName
                   result:(nonnull id<ExtSdkCallbackObjc>)result;

- (void)updateGroupPushService:(NSDictionary *)param
                withMethodType:(NSString *)aChannelName
                        result:(nonnull id<ExtSdkCallbackObjc>)result;

- (void)bindDeviceToken:(NSDictionary *)param
         withMethodType:(NSString *)aChannelName
                 result:(nonnull id<ExtSdkCallbackObjc>)result;

- (void)enablePush:(NSDictionary *)param
       withMethodType:(NSString *)aChannelName
            result:(nonnull id<ExtSdkCallbackObjc>)result;

- (void)disablePush:(NSDictionary *)param
        withMethodType:(NSString *)aChannelName
             result:(nonnull id<ExtSdkCallbackObjc>)result;

- (void)getNoPushGroups:(NSDictionary *)param
            withMethodType:(NSString *)aChannelName
                 result:(nonnull id<ExtSdkCallbackObjc>)result;

- (void)updateUserPushService:(NSDictionary *)param
                  withMethodType:(NSString *)aChannelName
                       result:(nonnull id<ExtSdkCallbackObjc>)result;

- (void)getNoPushUsers:(NSDictionary *)param
           withMethodType:(NSString *)aChannelName
                result:(nonnull id<ExtSdkCallbackObjc>)result;

@end

NS_ASSUME_NONNULL_END
