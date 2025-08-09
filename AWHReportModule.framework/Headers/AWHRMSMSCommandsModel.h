//
//  AWHRMSMSCommandsModel.h
//  AWHReportModule
//
//  Created by 王恒 on 2023/5/27.
//

#import <Foundation/Foundation.h>
#import <AWHReportModule/AWHRMSMSCommandsListModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHRMSMSCommandsModel : NSObject

@property(nonatomic,copy)NSString *name;
@property(nonatomic,strong)NSArray<AWHRMSMSCommandsListModel *> *children;
//是否收藏
@property(nonatomic, assign) BOOL isCollect;

@end

NS_ASSUME_NONNULL_END
