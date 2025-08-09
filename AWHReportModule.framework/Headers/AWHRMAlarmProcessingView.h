//
//  AWHRMAlarmProcessingView.h
//  AWHReportModule
//
//  Created by 王恒 on 2023/9/10.
//

#import <UIKit/UIKit.h>
#import <AWHReportModule/AWHRMAlarmProcessingDetailsModel.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^AWHRMAlarmProcessingViewBlock)(AWHRMAlarmProcessingDetailsModel *model, NSString *content);

@interface AWHRMAlarmProcessingView : UIView

@property(nonatomic,copy) void (^closeBlock)(void);

@property(nonatomic,copy) void (^selectPresetCommonOpinionsBlock)(void);

@property(nonatomic,copy) AWHRMAlarmProcessingViewBlock AlarmProcessingViewBlock;

@property(nonatomic,strong)AWHRMAlarmProcessingDetailsModel *model;

- (void)setPresetCommonOpinions:(NSString *)text;

@end

NS_ASSUME_NONNULL_END
