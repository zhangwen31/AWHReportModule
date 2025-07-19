//
//  AWHRMAlarmQueryViewConreoller.h
//  AWHReportModule
//
//  Created by 王恒 on 2022/10/8.
//

#import <AWHBBasicBusiness/AWHBBBaseViewController.h>
#import <AWHBBasicBusiness/AWHBBCarModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHRMAlarmQueryViewConreoller : AWHBBBaseViewController

@property(nonatomic,strong)NSString *fromVC;//安全查询和报警查询页面一样
-(void)getCarModel:(AWHBBCarModel *)model;

@end

NS_ASSUME_NONNULL_END
