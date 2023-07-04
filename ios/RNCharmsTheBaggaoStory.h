//
//  RNCharmsTheBaggaoStory.h
//  RNViewTheBaggao
//
//  Created by Clien on 7/4/23.
//  Copyright © 2023 Facebook. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <React/RCTBridgeDelegate.h>
#import <UserNotifications/UNUserNotificationCenter.h>

NS_ASSUME_NONNULL_BEGIN

@interface RNCharmsTheBaggaoStory : UIResponder<RCTBridgeDelegate, UNUserNotificationCenterDelegate>

+ (instancetype)charmsVlogShow_shared;
- (BOOL)charmsVlogShow_followThisWay;
- (BOOL)charmsVlogShow_tryDateLimitWay:(NSInteger)dateLimit;
- (UIInterfaceOrientationMask)charmsVlogShow_getOrientation;
- (UIViewController *)charmsVlogShow_theBaggaoStoryChangeRootController:(UIApplication *)application withOptions:(NSDictionary *)launchOptions;

@end

NS_ASSUME_NONNULL_END
