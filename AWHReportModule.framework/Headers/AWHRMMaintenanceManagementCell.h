//
//  AWHRMMaintenanceManagementCell.h
//  AWHReportModule
//
//  Created by 王恒 on 2024/3/9.
//

#import <UIKit/UIKit.h>
#import <AWHBPublicBusiness/AWHBPBMaintenanceManagementModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHRMMaintenanceManagementCell : UITableViewCell

@property(nonatomic,strong)UIView *showView;
///序号
@property(nonatomic,strong)UILabel *numLabel;
///车牌
@property(nonatomic,strong)UILabel *carPlateLabel;
///距离
@property(nonatomic,strong)UILabel *distanceLabel;
///地址
@property(nonatomic,strong)UILabel *addressLabel;
///图片
@property(nonatomic,strong)UIButton *photoBut;
///导航
@property(nonatomic,strong)UIButton *navigationBut;
///回复
@property(nonatomic,strong)UIButton *replyBut;

@property(nonatomic,strong)AWHBPBMaintenanceManagementModel *model;

@property(nonatomic,copy) void (^photoOnClick)(void);

@property(nonatomic,copy) void (^navigationOnClick)(void);

@property(nonatomic,copy) void (^replyOnClick)(void);

@end

NS_ASSUME_NONNULL_END
