//
//  AWHRMFuelCardSelectionView.h
//  AWHReportModule
//
//  Created by 王恒 on 2023/5/28.
//

#import <UIKit/UIKit.h>
#import <AWHReportModule/AWHRMGetOilCardModel.h>

NS_ASSUME_NONNULL_BEGIN
typedef void(^AWHRMFuelCardReturnSureBtnBlock)(AWHRMGetOilCardModel *model);
@interface AWHRMFuelCardSelectionView : UIView

@property(nonatomic,copy) void (^closeBlock)(void);

@property(nonatomic,copy) AWHRMFuelCardReturnSureBtnBlock ReturnSureBtnBlock;

@property(nonatomic,strong)AWHRMGetOilCardModel *selectModel;

-(void)setColorWithArray:(NSMutableArray *)dataArray;

@end

NS_ASSUME_NONNULL_END
