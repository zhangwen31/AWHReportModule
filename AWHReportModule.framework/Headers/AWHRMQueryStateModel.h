//
//  AWHRMQueryStateModel.h
//  AWHReportModule
//
//  Created by 王恒 on 2023/3/6.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHRMQueryStateModel : NSObject

/**
 * 持续时间
 */
@property (nonatomic, assign) NSInteger duration;
/**
 * 车辆id
 */
@property (nonatomic, strong) NSString *carId;
/**
 * 经度
 */
@property (nonatomic, strong) NSString *lng;
/**
 * 纬度
 */
@property (nonatomic, strong) NSString *lat;
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
 * 开始时间
 */
@property (nonatomic, strong) NSString *etime;
/**
 * 结束时间
 */
@property (nonatomic, strong) NSString *stime;
/**
 * 状态  1:行驶 2:怠速 3:熄火 4:报警
 */
@property (nonatomic, strong) NSString *type;
/**
 * 报警状态
 */
@property (nonatomic, strong) NSString *alarmName;
/**
 * 地标
 * 根据经纬度计算出来的，如果用户创建的区域中包含了该定位点，就返回该区域的名称
 */
@property (nonatomic, strong) NSString *region;

@end

NS_ASSUME_NONNULL_END
