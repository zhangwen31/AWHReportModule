//
//  AWHRMVideoCollectionViewCell.h
//  AWHReportModule
//
//  Created by 王恒 on 2022/10/9.
//

#import <UIKit/UIKit.h>
#import <AWHBPublicBusiness/AWHRMDaySafetyStatisticsModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHRMVideoCollectionViewCell : UICollectionViewCell

@property(strong,nonatomic)UIImageView *imageView1;
@property(strong,nonatomic)UIImageView *imageView2;
@property(strong,nonatomic)UIButton *shareBut;
@property(nonatomic,strong)AWHRMDaySafetyStatisticsModel *model;
@property(copy,nonatomic) void (^shareClickBlock)(AWHRMDaySafetyStatisticsModel *model);

@end

NS_ASSUME_NONNULL_END
