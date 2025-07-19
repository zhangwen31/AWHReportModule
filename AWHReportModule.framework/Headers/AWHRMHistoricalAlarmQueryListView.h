//
//  AWHRMHistoricalAlarmQueryListView.h
//  AWHReportModule
//
//  Created by 王恒 on 2022/10/8.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
typedef void(^AWHRMReturnAlarmListBlock)(NSMutableArray *muArray,NSString *total,NSString *name);
@interface AWHRMHistoricalAlarmQueryListView : UIView

@property(nonatomic,strong)NSMutableArray *dataArray;
@property(nonatomic,copy)NSString *title;
@property(nonatomic,copy)NSArray<NSString *> *titleArray;
@property(nonatomic,copy)AWHRMReturnAlarmListBlock ReturnAlarmListBlock;
@property(nonatomic,copy)void(^showTopBut)(BOOL isShow);
- (void)scrollToTop;

@end

NS_ASSUME_NONNULL_END
