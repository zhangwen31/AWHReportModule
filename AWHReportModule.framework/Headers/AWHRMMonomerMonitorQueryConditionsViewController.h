//
//  AWHRMMonomerMonitorQueryConditionsViewController.h
//  AWHReportModule
//
//  Created by 王恒 on 2022/10/8.
//

#import <AWHBBasicBusiness/AWHBBBaseViewController.h>

NS_ASSUME_NONNULL_BEGIN

/** */
@protocol AWHRMMonomerMonitorQueryConditionsDelegate <NSObject>
-(void)returnSpeed:(NSString *)speed time:(NSString *)time tabOpinion:(NSString *)tabOpinion;
@end

@interface AWHRMMonomerMonitorQueryConditionsViewController : AWHBBBaseViewController
@property(nonatomic,weak)id<AWHRMMonomerMonitorQueryConditionsDelegate>delegate;
@end

NS_ASSUME_NONNULL_END
