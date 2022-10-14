//
//  AWHRMAlarmTypeViewController.h
//  AWHReportModule
//
//  Created by 王恒 on 2022/10/9.
//

#import <AWHBBasicBusiness/AWHBBBaseViewController.h>

NS_ASSUME_NONNULL_BEGIN
typedef void(^AWHRMReturnSelectAlarmTypeBlock)(NSSet *selectSet,NSArray *allAlarmArray);
@interface AWHRMAlarmTypeViewController : AWHBBBaseViewController
@property(nonatomic,copy)AWHRMReturnSelectAlarmTypeBlock ReturnSelectAlarmTypeBlock;
@end

NS_ASSUME_NONNULL_END
