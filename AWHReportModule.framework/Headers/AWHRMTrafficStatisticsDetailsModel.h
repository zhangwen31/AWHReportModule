//
//  AWHRMTrafficStatisticsDetailsModel.h
//  AWHReportModule
//
//  Created by 王恒 on 2023/3/9.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHRMTrafficStatisticsDetailsModel : NSObject

/**
 * 持续时间 该值没有用处，不展示在页面上
 */
@property (nonatomic, assign) NSInteger duration;
/**
 * 车辆id
 */
@property (nonatomic, strong) NSString *carId;
/**
 * 开始经度
 */
@property (nonatomic, strong) NSString *lng;
/**
 * 开始纬度
 */
@property (nonatomic, strong) NSString *lat;
/**
 * 结束经度
 */
@property (nonatomic, strong) NSString *elng;
/**
 * 结束纬度
 */
@property (nonatomic, strong) NSString *elat;
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
 * 结束时间
 */
@property (nonatomic, strong) NSString *etime;
/**
 * 开始时间
 */
@property (nonatomic, strong) NSString *stime;
/**
 * 时间段 开始时间 - 结束时间
 */
@property (nonatomic, strong) NSString *time;
/**
 * 行驶时长
 */
@property (nonatomic, assign) NSInteger moveSeconds;
/**
 * 停车时长
 */
@property (nonatomic, assign) NSInteger stopSeconds;
/**
 * 最高速度
 */
@property (nonatomic, assign) NSInteger maxSpeed;
/**
 * 开始里程
 */
@property (nonatomic, assign) NSInteger smile;
/**
 * 结束里程
 */
@property (nonatomic, assign) NSInteger emile;


@end

NS_ASSUME_NONNULL_END
