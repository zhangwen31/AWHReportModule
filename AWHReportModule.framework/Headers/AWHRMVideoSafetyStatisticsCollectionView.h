//
//  AWHRMVideoSafetyStatisticsCollectionView.h
//  AWHReportModule
//
//  Created by 王恒 on 2022/10/9.
//

#import <UIKit/UIKit.h>
#import "AWHRMDaySafetyStatisticsModel.h"

NS_ASSUME_NONNULL_BEGIN

typedef void(^AWHRMReturnModelBlock)(AWHRMDaySafetyStatisticsModel *model);
@interface AWHRMVideoSafetyStatisticsCollectionView : UIView

@property(nonatomic,strong)NSMutableArray *dataArray;
@property(nonatomic,assign)BOOL isVideo;
@property(nonatomic,copy)AWHRMReturnModelBlock ReturnModelBlock;

@end

NS_ASSUME_NONNULL_END
