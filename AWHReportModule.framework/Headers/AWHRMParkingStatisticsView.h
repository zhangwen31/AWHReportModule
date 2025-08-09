//
//  AWHRMParkingStatisticsView.h
//  AWHReportModule
//
//  Created by 王恒 on 2022/10/9.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^AWHRMReturnAccTypeBlock)(NSString *accType);
@interface AWHRMParkingStatisticsView : UIView

@property(nonatomic,strong)UITableView *tableView;
@property(nonatomic,copy)NSString *parkingTimeStr;
@property(nonatomic,copy)AWHRMReturnAccTypeBlock ReturnAccTypeBlock;

@end

NS_ASSUME_NONNULL_END
