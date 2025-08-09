//
//  AWHRMAddCarTableFooterView.h
//  AWHReportModule
//
//  Created by 王恒 on 2022/10/9.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
typedef void(^AWHRMRetyrnImageBlock)(NSString *str);
@interface AWHRMAddCarTableFooterView : UIView

@property(nonatomic,strong)UIImageView *carImageView;
@property(nonatomic,strong)UIImageView *terminalImageView;
@property(nonatomic,copy)AWHRMRetyrnImageBlock RetyrnImageBlock;

@end

NS_ASSUME_NONNULL_END
