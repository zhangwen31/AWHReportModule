//
//  AWHRMSafetyMonitoringViewController.h
//  AWHReportModule
//
//  Created by 王恒 on 2022/10/8.
//

#import <AWHBBasicBusiness/AWHBBBaseViewController.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHRMSafetyMonitoringViewController : AWHBBBaseViewController
@property(nonatomic,strong)NSMutableArray *dataArray;
@property(nonatomic,strong)NSMutableArray *nameTotalArray;
@property(nonatomic,strong)NSMutableArray *numTotalArray;
@property(nonatomic,copy)NSString *titleStr;
@property(nonatomic,copy)NSString *carId;
@property(nonatomic,copy)NSString *carPlate;

@end

NS_ASSUME_NONNULL_END
