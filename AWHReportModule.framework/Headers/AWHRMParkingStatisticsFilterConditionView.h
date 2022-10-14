//
//  AWHRMParkingStatisticsFilterConditionView.h
//  AWHReportModule
//
//  Created by 王恒 on 2022/10/9.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^AWHRMReturnAccTypeBlock)(NSString *accType);
@interface AWHRMParkingStatisticsFilterConditionView : UIView<UITableViewDelegate,UITableViewDataSource>
@property(nonatomic,strong)UITableView *tableView;
@property(nonatomic,strong)NSArray *titleArr;
@property(nonatomic,strong)NSArray *detailArr;
@property(nonatomic,strong)NSArray *detailLabArr;
@property(nonatomic,copy)NSString *accTypeStr;
@property(nonatomic,copy)NSString *timeStr;
@property(nonatomic,copy)AWHRMReturnAccTypeBlock ReturnAccTypeBlock;

@end

NS_ASSUME_NONNULL_END
