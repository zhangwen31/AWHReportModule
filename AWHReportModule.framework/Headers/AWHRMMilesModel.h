//
//  AWHRMMilesModel.h
//  AWHReportModule
//
//  Created by 王恒 on 2022/10/8.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHRMMilesModel : NSObject

//日期
@property(nonatomic,copy)NSString *name;
//当天行驶里程
@property(nonatomic,copy)NSString *mile;

@end

NS_ASSUME_NONNULL_END
