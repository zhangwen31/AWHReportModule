//
//  AWHRMShowSMSCommandsView.h
//  AWHReportModule
//
//  Created by 王恒 on 2023/5/27.
//

#import <UIKit/UIKit.h>
#import <AWHReportModule/AWHRMSMSCommandsModel.h>
#import <AWHReportModule/AWHRMSMSCommandsListModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHRMShowSMSCommandsView : UIView

@property(nonatomic,strong)NSMutableArray *dataArray;

@property (nonatomic, copy) void (^collectClick)(BOOL isCollect, AWHRMSMSCommandsModel *model);

@property (nonatomic, copy) void (^selectSMSCommandsBlock)(AWHRMSMSCommandsListModel *model);

@end

NS_ASSUME_NONNULL_END
