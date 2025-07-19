//
//  AWHRMHistoryAlarmQueryModel.h
//  AWHReportModule
//
//  Created by 王恒 on 2022/10/8.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHRMHistoryAlarmQueryModel : NSObject

//地址
@property(nonatomic,copy)NSString *addr;
//报警类型
@property(nonatomic,copy)NSString *alarmType;
//结束时间
@property(nonatomic,copy)NSString *etime;
//附件数
@property(nonatomic,copy)NSString *fjNum;
//报警时间
@property(nonatomic,copy)NSString *stop_long;
@property(nonatomic,copy)NSString *stime;
//速度
@property(nonatomic,copy)NSString *speed;

//处理状态
@property(nonatomic,copy)NSString *solveState;
//经度
@property(nonatomic,copy)NSString *lng;
//百度经度
@property(nonatomic,copy)NSString *blng;
//谷歌纬度
@property(nonatomic,copy)NSString *glat;
//百度纬度
@property(nonatomic,copy)NSString *blat;
//谷歌经度
@property(nonatomic,copy)NSString *glng;
//规则名称
@property(nonatomic,copy)NSString *ruleName;
//处理时间
@property(nonatomic,copy)NSString *solveTime;
//纬度
@property(nonatomic,copy)NSString *lat;
//超速限速值
@property(nonatomic,copy)NSString *speedSet;
//登签驾驶员
@property(nonatomic,copy)NSString *driverSign;
//超速百分比
@property(nonatomic,copy)NSString *speedRatio;
//处理人
@property(nonatomic,copy)NSString *solveUser;

-(id)initWithDictionary:(NSDictionary *)dic;

@end

NS_ASSUME_NONNULL_END
