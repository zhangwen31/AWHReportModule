//
//  AWHRMHistoricalAlarmQueryViewController.h
//  AWHReportModule
//
//  Created by 王恒 on 2022/10/8.
//

#import <AWHBBasicBusiness/AWHBBBaseViewController.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHRMHistoricalAlarmQueryViewController : AWHBBBaseViewController

@property(nonatomic,strong)NSMutableArray *dataArray;
@property(nonatomic,copy)NSString *timeLong;
@property(nonatomic,copy)NSString *mile;
@property(nonatomic,copy)NSString *carPlate;
@property(nonatomic,copy)NSString *carId;
@property(nonatomic,copy)NSString *startTime;
@property(nonatomic,copy)NSString *endTime;
@property(nonatomic,copy)NSString *titles;

@end

NS_ASSUME_NONNULL_END
