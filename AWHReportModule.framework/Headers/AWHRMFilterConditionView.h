//
//  AWHRMFilterConditionView.h
//  AWHReportModule
//
//  Created by 王恒 on 2022/10/8.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
typedef void(^AWHRMShowAlarmTypeBlock)(void);

@interface AWHRMFilterConditionView : UIView<UITableViewDelegate,UITableViewDataSource>
@property(nonatomic,strong)UITableView *tableView;
@property(nonatomic,assign)NSUInteger detailLength;
@property(nonatomic,strong)NSArray *titleArr;
@property(nonatomic,strong)NSArray *detailArr;
@property(nonatomic,strong)NSArray *detailLabArr;
@property(nonatomic,copy)NSString *speedStr;
@property(nonatomic,copy)NSString *timeStr;
@property(nonatomic,copy)AWHRMShowAlarmTypeBlock ShowAlarmTypeBlock;

@end

NS_ASSUME_NONNULL_END
