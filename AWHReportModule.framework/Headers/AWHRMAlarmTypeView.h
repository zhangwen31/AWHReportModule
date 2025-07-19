//
//  AWHRMAlarmTypeView.h
//  AWHReportModule
//
//  Created by 王恒 on 2022/10/8.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
typedef void(^AWHRMReturnSelectAlarmTypeBlock)(NSSet *selectSet,NSArray *allAlarmArray);
@interface AWHRMAlarmTypeView : UIView
@property (nonatomic,strong)NSMutableSet *selectSet;
@property(nonatomic,copy)AWHRMReturnSelectAlarmTypeBlock ReturnSelectAlarmTypeBlock;
@end

NS_ASSUME_NONNULL_END
