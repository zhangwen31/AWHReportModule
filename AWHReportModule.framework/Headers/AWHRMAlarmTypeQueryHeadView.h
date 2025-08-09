//
//  AWHRMAlarmTypeQueryHeadView.h
//  AWHReportModule
//
//  Created by 王恒 on 2022/10/8.
//

#import <UIKit/UIKit.h>
#import "AWHRMAlarmTypeModel.h"
#import <AWHBoneRuntime/AWHBRExpandButton.h>

NS_ASSUME_NONNULL_BEGIN
typedef void(^AWHRMSelectBtn)(NSString *string);
@interface AWHRMAlarmTypeQueryHeadView : UITableViewHeaderFooterView
@property(nonatomic,strong)AWHRMAlarmTypeModel *model;
@property(nonatomic,strong)UILabel *nameLab;
@property(nonatomic, copy)AWHRMSelectBtn SelectBtn;
@property(nonatomic, strong)AWHBRExpandButton*selectButton;
@property(nonatomic, strong)UIColor *contentBackgroundColor;

@end

NS_ASSUME_NONNULL_END
