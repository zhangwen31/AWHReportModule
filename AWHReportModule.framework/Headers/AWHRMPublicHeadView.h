//
//  AWHRMPublicHeadView.h
//  AWHReportModule
//
//  Created by 王恒 on 2023/5/28.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
typedef void(^AWHRMPublicHeadReturnClickTitle)(NSString *title);
@interface AWHRMPublicHeadView : UIView

@property(nonatomic,strong)UITableView *tableView;
/** */
@property(nonatomic,strong)NSMutableArray *titleArr;
@property(nonatomic,strong)NSMutableArray *detailArr;
@property(nonatomic,strong)NSMutableArray *rightImageHiddenArr;
/** */
@property(nonatomic,copy)AWHRMPublicHeadReturnClickTitle ReturnClickTitle;
/** */
@property(nonatomic,copy)NSString *userOperationStr;
@property(nonatomic,copy)NSString *userOperationStr2;
@property(nonatomic,copy)NSString *userOperationStr3;
@property(nonatomic,copy)NSString *userOperationStr4;
@property(nonatomic,copy)NSString *userOperationStr5;
@property(nonatomic,copy)NSString *userOperationStr6;
@property(nonatomic,copy)NSString *fromVC;
-(void)creatTableView:(NSMutableArray *)arrData;

@end

NS_ASSUME_NONNULL_END
