//
//  AWHRMAlarmQueryModel.h
//  AWHReportModule
//
//  Created by 王恒 on 2022/10/8.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHRMAlarmQueryModel : NSObject
//报警次数
@property(nonatomic,copy)NSString *total;
//报警类型
@property(nonatomic,copy)NSString *name;
//报警明细
@property(nonatomic,strong)NSArray *list;
@end

NS_ASSUME_NONNULL_END
