//
//  AWHRMAlarmTypeTableViewCell.h
//  AWHReportModule
//
//  Created by 王恒 on 2022/10/8.
//

#import <UIKit/UIKit.h>
#import "AWHRMAlarmTypeModel.h"
#import <AWHBoneRuntime/AWHBRExpandButton.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHRMAlarmTypeTableViewCell : UITableViewCell

@property (nonatomic,copy) void(^ChoseBtnBlock)(id,BOOL);
@property(nonatomic,strong)AWHRMAlarmTypeModel *model;
@property (nonatomic,strong)UILabel *titleLab;
@property (nonatomic,assign) BOOL selectedStutas;
@property (nonatomic,strong)AWHBRExpandButton*alarmTypeButton;

@end

NS_ASSUME_NONNULL_END
