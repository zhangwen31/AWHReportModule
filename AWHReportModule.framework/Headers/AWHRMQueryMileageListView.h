//
//  AWHRMQueryMileageListView.h
//  AWHReportModule
//
//  Created by 王恒 on 2022/10/8.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHRMQueryMileageListView : UIView

@property(nonatomic,strong)NSMutableArray *dataArray;
@property(nonatomic,copy)void(^showTopBut)(BOOL isShow);
- (void)scrollToTop;

@end

NS_ASSUME_NONNULL_END
