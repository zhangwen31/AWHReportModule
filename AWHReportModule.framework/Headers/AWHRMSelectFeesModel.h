//
//  AWHRMSelectFeesModel.h
//  AWHReportModule
//
//  Created by 王恒 on 2023/8/12.
//

#import <Foundation/Foundation.h>
typedef NS_ENUM(NSInteger, AWHRMSelectFeesType) {
    AWHRMSelectFeesTypeMaintenance          = 0,    // 维修费用
    AWHRMSelectFeesTypeTransportation       = 1,    // 交通费用
    AWHRMSelectFeesTypeAddOil               = 2,    // 加油费用
    AWHRMSelectFeesTypeInsurance            = 3,    // 保险费用
    AWHRMSelectFeesTypeAnnual               = 4,    // 年审费用
    AWHRMSelectFeesTypeOther                = 5,    // 其他费用
};

NS_ASSUME_NONNULL_BEGIN

@interface AWHRMSelectFeesModel : NSObject

@property (nonatomic,assign) AWHRMSelectFeesType feesType;

@property (nonatomic,strong)NSString *name;

@end

NS_ASSUME_NONNULL_END
