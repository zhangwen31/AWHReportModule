//
//  AWHRMAlarmTypeModel.h
//  AWHReportModule
//
//  Created by 王恒 on 2022/10/8.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHRMAlarmTypeModel : NSObject

@property(nonatomic,copy)NSString *id;
@property(nonatomic,copy)NSString *name;
@property(nonatomic,strong)NSArray *children;
@property (nonatomic,assign) BOOL isSelected;

@end

NS_ASSUME_NONNULL_END
