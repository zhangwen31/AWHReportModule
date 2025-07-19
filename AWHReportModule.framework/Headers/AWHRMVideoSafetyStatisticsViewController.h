//
//  AWHRMVideoSafetyStatisticsViewController.h
//  AWHReportModule
//
//  Created by 王恒 on 2022/10/8.
//

#import <AWHBBasicBusiness/AWHBBBaseViewController.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHRMVideoSafetyStatisticsViewController : AWHBBBaseViewController

@property(nonatomic,strong)NSMutableArray *videoArray;
@property(nonatomic,strong)NSMutableArray *photoArray;
//车队
@property(nonatomic,copy)NSString *teamName;

@end

NS_ASSUME_NONNULL_END
