//
//  AWHRMVideoSafetyStatisticsFootView.h
//  AWHReportModule
//
//  Created by 王恒 on 2022/10/9.
//

#import <UIKit/UIKit.h>
#import <AWHBPublicBusiness/AWHRMDaySafetyStatisticsModel.h>
NS_ASSUME_NONNULL_BEGIN

typedef void(^AWHRMMapBtnBlock)(void);
@interface AWHRMVideoSafetyStatisticsFootView : UIView
@property(nonatomic,strong)UITableView *tableView;
@property(nonatomic,strong)AWHRMDaySafetyStatisticsModel *model;
@property(nonatomic,copy)AWHRMMapBtnBlock MapBtnBlock;
//车队
@property(nonatomic,copy)NSString *teamName;
- (CGFloat)getViewHeight;

@end

NS_ASSUME_NONNULL_END
