//
//  AWHRMSMSCommandEditorViewController.h
//  AWHReportModule
//
//  Created by 王恒 on 2023/5/27.
//

#import <AWHBBasicBusiness/AWHBBBaseViewController.h>
#import <AWHReportModule/AWHRMSMSCommandsDetailsModel.h>
NS_ASSUME_NONNULL_BEGIN

@interface AWHRMSMSCommandEditorViewController : AWHBBBaseViewController

@property(nonatomic,strong)AWHRMSMSCommandsDetailsModel *model;
@property(nonatomic,copy)NSString *manufacturerStr;
@property(nonatomic,copy)NSString *str;

@end

NS_ASSUME_NONNULL_END
