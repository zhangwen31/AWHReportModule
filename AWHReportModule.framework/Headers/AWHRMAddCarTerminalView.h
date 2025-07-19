//
//  AWHRMAddCarTerminalView.h
//  AWHReportModule
//
//  Created by 王恒 on 2024/8/3.
//

#import <UIKit/UIKit.h>
#import <AWHReportModule/AWHRMAddCarTerminalCell.h>
#import <AWHBPublicBusiness/AWHBPBSelectTerminalModel.h>

NS_ASSUME_NONNULL_BEGIN
typedef void(^AWHRMConfirmCBtnBlock)(void);

@interface AWHRMAddCarTerminalView : UIView

@property (nonatomic, strong) NSMutableArray *selectImages;
@property (nonatomic, copy) AWHRMConfirmCBtnBlock ConfirmCBtnBlock;
@property(nonatomic,copy) void (^delectPhotoClick)(UIImage *image,NSString *imageUrl);
@property(nonatomic,copy) void (^addPhotosClick)(NSMutableArray *images);
@property (nonatomic, assign) BOOL isChange;
///终端号码
@property (nonatomic,copy)NSString *string4;
///SIM卡号
@property (nonatomic,copy)NSString *string5;
///自定义
@property (nonatomic,copy)NSString *string7;
// 车队ID
@property (nonatomic, strong) NSString *teamId;
@property(nonatomic,assign)AWHRMAddCarTerminalType terminalType;

@property(nonatomic,copy)AWHRMAddCarTerminalSelectBlock SelectBlock;

@property(nonatomic,strong)AWHBPBSelectTerminalModel *selectModel;

@property (nonatomic,strong, readonly)NSString *IdentifyStr;

/**
 * 展示添加图片
 * @param number 添加图片数量
 * @param eachRowNumber  每行展示数量
 */
- (void)showAddPhoto:(NSInteger)number eachRowNumber:(NSInteger)eachRowNumber;

- (void)refreshData;

@end

NS_ASSUME_NONNULL_END
