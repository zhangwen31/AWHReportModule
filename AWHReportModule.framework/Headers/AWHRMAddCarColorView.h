//
//  AWHRMAddCarColorView.h
//  AWHReportModule
//
//  Created by 王恒 on 2022/10/9.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^AWHRMReturnSureBtnBlock)(NSString *str,NSString *str2);

@interface AWHRMAddCarColorView : UIView

@property(nonatomic,copy)AWHRMReturnSureBtnBlock ReturnSureBtnBlock;
@property(nonatomic,copy) void (^closeBlock)(void);
-(void)setColorWithArray:(NSMutableArray *)dataArray selectPlateColorId:(NSString *)plateColorId;

@end

NS_ASSUME_NONNULL_END
