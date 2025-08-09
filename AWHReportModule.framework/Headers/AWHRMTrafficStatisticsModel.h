//
//  AWHRMTrafficStatisticsModel.h
//  AWHReportModule
//
//  Created by 王恒 on 2023/3/9.
//

#import <Foundation/Foundation.h>
#import "AWHRMTrafficStatisticsDetailsModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface AWHRMTrafficStatisticsModel : NSObject

/**
 * 持续时间 该值没有用处，不展示在页面上
 */
@property (nonatomic, assign) NSInteger duration;
/**
 * 车辆id
 */
@property (nonatomic, strong) NSString *carId;
/**
 * 行驶里程 单位：米
 */
@property (nonatomic, assign) NSInteger mile;
/**
 * 开始位置
 */
@property (nonatomic, strong) NSString *saddr;
/**
 * 结束位置
 */
@property (nonatomic, strong) NSString *eaddr;
/**
 * 统计时间 开始时间 - 结束时间
 */
@property (nonatomic, strong) NSString *time;
/**
 * 最高速度
 */
@property (nonatomic, assign) NSInteger maxSpeed;
/**
 *
 */
@property (nonatomic, strong) NSString *teamName;
/**
 * 行驶总时长
 */
@property (nonatomic, assign) NSInteger moveSeconds;
/**
 * 超速次数
 */
@property (nonatomic, assign) NSInteger overSpeedCount;
/**
 * 停车总时长
 */
@property (nonatomic, assign) NSInteger stopSeconds;
/**
 * 列表详情数组
 */
@property (nonatomic, strong) NSArray<AWHRMTrafficStatisticsDetailsModel *> *details;

@end

NS_ASSUME_NONNULL_END
