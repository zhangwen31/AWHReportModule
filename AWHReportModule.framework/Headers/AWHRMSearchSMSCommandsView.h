//
//  AWHRMSearchSMSCommandsView.h
//  AWHReportModule
//
//  Created by 王恒 on 2023/5/27.
//

#import <UIKit/UIKit.h>
#import <AWHReportModule/AWHRMSMSCommandsModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHRMSearchSMSCommandsView : UIView

@property(nonatomic,strong)NSMutableArray *dataArray;

@property (nonatomic, copy) void (^collectClick)(BOOL isCollect, AWHRMSMSCommandsModel *model);

@end

NS_ASSUME_NONNULL_END
