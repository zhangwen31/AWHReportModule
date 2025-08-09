//
//  AWHRMAddCarTerminalCell.h
//  AWHReportModule
//
//  Created by 王恒 on 2024/8/3.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, AWHRMAddCarTerminalType) {
    AWHRMAddCarTerminalTypeNone         = 0,    // 没有任何选择
    AWHRMAddCarTerminalTypeInput        = 1,    // 录入终端
    AWHRMAddCarTerminalTypeSelectNo     = 2,    // 选择终端未选中
    AWHRMAddCarTerminalTypeSelect       = 3,    // 选择终端已选中
};

typedef void(^AWHRMAddCarTerminalSelectBlock)(AWHRMAddCarTerminalType terminalType);

@interface AWHRMAddCarTerminalCell : UITableViewCell

@property(nonatomic,strong)UILabel *titleLab;

@property (nonatomic, assign) BOOL isHiddenLine;

@property(nonatomic,assign)AWHRMAddCarTerminalType terminalType;

@property(nonatomic,copy)AWHRMAddCarTerminalSelectBlock SelectBlock;

@end

NS_ASSUME_NONNULL_END
