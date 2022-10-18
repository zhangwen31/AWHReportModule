//
//  AWHRMAddCustomCarViewTableViewCell.h
//  AWHReportModule
//
//  Created by 王恒 on 2022/10/9.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^AWHRMReturnTextFieldTextBlock)(NSString *textFieldText);
@interface AWHRMAddCustomCarViewTableViewCell : UITableViewCell

@property(nonatomic,strong)UILabel *titleLab;
@property(nonatomic,strong)NSArray<NSString *> *selectArray;
@property(nonatomic,strong)NSArray<NSNumber *> *widthArray;
@property(nonatomic,strong)NSString *selectBtnColor;
@property (nonatomic, assign) BOOL isHiddenLine;
@property(nonatomic,copy)AWHRMReturnTextFieldTextBlock ReturnTextFieldTextBlock;

@end

NS_ASSUME_NONNULL_END
