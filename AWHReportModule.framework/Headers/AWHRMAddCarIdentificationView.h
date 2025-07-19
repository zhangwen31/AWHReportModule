//
//  AWHRMAddCarIdentificationView.h
//  AWHReportModule
//
//  Created by 王恒 on 2022/10/8.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
typedef void(^AWHRMRetyrnIdentificationBlock)(NSString *str);
@interface AWHRMAddCarIdentificationView : UIView

/** */
@property(nonatomic,strong)UILabel *label;
@property(nonatomic,strong)NSArray *dataArray;
@property(nonatomic,copy)AWHRMRetyrnIdentificationBlock RetyrnIdentificationBlock;

@end

NS_ASSUME_NONNULL_END
