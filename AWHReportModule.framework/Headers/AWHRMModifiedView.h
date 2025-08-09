//
//  AWHRMModifiedView.h
//  AWHReportModule
//
//  Created by 王恒 on 2024/8/10.
//

#import <UIKit/UIKit.h>
#import "AWHRMCarModifiedComparison.h"
#import "AWHRMCarModifiedComparison2.h"

NS_ASSUME_NONNULL_BEGIN

typedef void(^AWHRMReturnBtnClick)(NSString *str);
@interface AWHRMModifiedView : UIView

@property(nonatomic,strong)AWHRMCarModifiedComparison *beforeCarModifiedComparison;
@property(nonatomic,strong)AWHRMCarModifiedComparison2 *afterCarModifiedComparison;
@property(nonatomic,copy)AWHRMReturnBtnClick ReturnBtnClick;
//是否不显示车主
@property(nonatomic, assign) BOOL isNoShowCarOwner;

- (void)setupCarModifiedComparisonHeight:(CGFloat)heigth;

@end

NS_ASSUME_NONNULL_END
