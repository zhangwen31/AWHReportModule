//
//  AWHRMSMSCommandsListModel.h
//  AWHReportModule
//
//  Created by 王恒 on 2023/5/27.
//

#import <Foundation/Foundation.h>
#import <AWHReportModule/AWHRMSMSCommandsDetailsModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHRMSMSCommandsListModel : NSObject

@property(nonatomic,copy)NSString *name;
@property(nonatomic,strong)NSArray<AWHRMSMSCommandsDetailsModel *> *children;

@end

NS_ASSUME_NONNULL_END
