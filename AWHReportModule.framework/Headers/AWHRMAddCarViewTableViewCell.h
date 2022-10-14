//
//  AWHRMAddCarViewTableViewCell.h
//  AWHReportModule
//
//  Created by 王恒 on 2022/10/9.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^AWHRMReturnTextFieldTextBlock)(NSString *textFieldText);
@interface AWHRMAddCarViewTableViewCell : UITableViewCell

@property(nonatomic,strong)UILabel *titleLab;
@property(nonatomic,strong)UITextField *detaleTextField;
@property(nonatomic,strong)UIImageView *rightImageView;
@property (nonatomic, assign) BOOL isHiddenLine;
@property (nonatomic, assign) NSInteger maxNum;
@property(nonatomic,copy)AWHRMReturnTextFieldTextBlock ReturnTextFieldTextBlock;

@end

NS_ASSUME_NONNULL_END
