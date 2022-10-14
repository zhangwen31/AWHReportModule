//
//  AWHRMAlarmQueryConditionsView.h
//  AWHReportModule
//
//  Created by 王恒 on 2022/10/8.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
typedef void(^AWHRMAlarmTypeBlock)(void);
@interface AWHRMAlarmQueryConditionsView : UIView

@property(nonatomic,strong)UITableView *tableView;
@property(nonatomic,copy)NSString *speedStr;//速度
@property(nonatomic,copy)NSString *timeStr;//时间
@property(nonatomic,copy)NSString *speedThreshold;//速度阈值
@property(nonatomic,copy)NSString *parkingThreshold;//停车阈值
@property (nonatomic, copy) NSString *filter;//静止点
@property (nonatomic, copy) NSString *filterInvalid;//过滤无效定位
@property (nonatomic, copy) NSString *filterAppend;//过滤补报
@property(nonatomic,assign)NSInteger selectAlarm;
@property(nonatomic,assign)NSInteger allAlarm;
@property(nonatomic,copy)AWHRMAlarmTypeBlock AlarmTypeBlock;

@end

NS_ASSUME_NONNULL_END
