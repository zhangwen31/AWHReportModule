//
//  AWHRMVideoSafetyStatisticsFootView.h
//  AWHReportModule
//
//  Created by 王恒 on 2022/10/9.
//

#import <UIKit/UIKit.h>
#import "AWHRMDaySafetyStatisticsModel.h"
NS_ASSUME_NONNULL_BEGIN

typedef void(^AWHRMMapBtnBlock)(void);
@interface AWHRMVideoSafetyStatisticsFootView : UIView

@property(nonatomic,strong)AWHRMDaySafetyStatisticsModel *model;
@property(nonatomic,copy)AWHRMMapBtnBlock MapBtnBlock;

@end

NS_ASSUME_NONNULL_END
