//
//  AWHRMSelectFeesView.h
//  AWHReportModule
//
//  Created by 王恒 on 2023/8/12.
//

#import <UIKit/UIKit.h>
#import <AWHReportModule/AWHRMSelectFeesModel.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^AWHRMSelectFeesViewBlock)(AWHRMSelectFeesModel *model);
@interface AWHRMSelectFeesView : UIView

@property(nonatomic,copy) void (^closeBlock)(void);

@property(nonatomic,copy) AWHRMSelectFeesViewBlock SelectFeesViewBlock;

@property(nonatomic,strong)AWHRMSelectFeesModel *selectModel;

@end

NS_ASSUME_NONNULL_END
