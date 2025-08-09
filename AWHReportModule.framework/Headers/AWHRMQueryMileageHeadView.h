//
//  AWHRMQueryMileageHeadView.h
//  AWHReportModule
//
//  Created by 王恒 on 2022/10/9.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^AWHRMQueryMileageHeadCellBlock)(NSString *titleLabText);

@interface AWHRMQueryMileageHeadView : UIView

@property(nonatomic,strong)UITableView *tableView;
@property (nonatomic, copy) NSString *plateName;
@property (nonatomic, copy) NSString *timeString;
@property (nonatomic, copy) NSString *endTimeString;
@property (nonatomic, copy) NSString *monomerMonitoringStr;//从单体监控过来 不用车牌号
@property (nonatomic, copy) AWHRMQueryMileageHeadCellBlock QueryMileageHeadCellBlock;

@end

NS_ASSUME_NONNULL_END
