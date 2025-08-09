//
//  AWHBPBChangeTerminalIViewController.h
//  AWHReportModule
//
//  Created by 王恒 on 2024/8/18.
//

#import <AWHBBasicBusiness/AWHBBBaseViewController.h>
#import <AWHBPublicBusiness/AWHBPBSelectTerminalModel.h>

@protocol AWHBPBChangeTerminalDelegate <NSObject>

- (void)changeTerminalWithModel:(AWHBPBSelectTerminalModel *)model;

@end

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBChangeTerminalIViewController : AWHBBBaseViewController

/// 车队ID
@property (nonatomic,copy)NSString *teamId;
/// 车队名称
@property (nonatomic,copy)NSString *teamName;
/// 是否不能选择车队
@property (nonatomic,assign)BOOL isNoSelectTeam;

@property (nonatomic,strong)AWHBPBSelectTerminalModel *model;

@property (nonatomic,weak) id<AWHBPBChangeTerminalDelegate>delegate;

@end

NS_ASSUME_NONNULL_END
