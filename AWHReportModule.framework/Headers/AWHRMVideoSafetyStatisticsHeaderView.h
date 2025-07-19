//
//  AWHRMVideoSafetyStatisticsHeaderView.h
//  AWHReportModule
//
//  Created by 王恒 on 2022/10/8.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
typedef void(^AWHRMReturnBtnTitleBlock)(NSString *btnTitle);
@interface AWHRMVideoSafetyStatisticsHeaderView : UIView
@property(nonatomic,copy)AWHRMReturnBtnTitleBlock ReturnBtnTitleBlock;
@end

NS_ASSUME_NONNULL_END
