//
//  AWHRMSMSCommandsView.h
//  AWHReportModule
//
//  Created by 王恒 on 2023/5/27.
//

#import <UIKit/UIKit.h>
#import <AWHReportModule/AWHRMSMSCommandsDetailsModel.h>
typedef void(^AWHRMSMSReturnBtnBlock)(NSString *str,AWHRMSMSCommandsDetailsModel *model);
NS_ASSUME_NONNULL_BEGIN

@interface AWHRMSMSCommandsView : UIView<UITableViewDelegate,UITableViewDataSource>
@property(nonatomic,strong)UITableView *tableView;
@property(nonatomic,strong)NSArray *dataArray;
@property(nonatomic,copy)NSString *name;
@property(nonatomic,copy)AWHRMSMSReturnBtnBlock ReturnBtnBlock;

@end

NS_ASSUME_NONNULL_END
